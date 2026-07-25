

// Finite-State Machine
// Description: Decodes the instruction and calls upon modules accordingly. Uses five stage pipeline. 
//              NOT the top module.
// May 28, 2026
module fsm ( 
    input logic global_clock,
    input logic global_interrupt,
    input logic [31:0] address_start, // Where instruction lies in memory, start of program
    output logic done
);

    logic [31:0] AddrSelOUT, out_address;
    logic AddrSel, PC_write;

    // AddrSel MUX
    assign AddrSelOUT = AddrSel ? out_address : b_load;

    // RF to ALU MUX's
    logic [31:0] data_A, data_B, a_load, b_load, ALU_b, ALU_a, ALU_out, ALU_output_load, data_out_mem, data_out_to_write;
    // a_load and b_load is what comes out of the latches between RF and muxes
    logic AB_load, ALU_a_load, ALU_out_load;

    logic ALU_a_en;
    logic [2:0] ALU_b_en;

    assign ALU_a = ALU_a_en ? a_load : out_address;

    // INBETWEEN MEMORY AND REGISTER FILE
    logic IR_load, MDR_load;
    logic [31:0] IR_out;


    // Latch for a memory units
    always_latch begin
        if (AB_load) begin
            a_load = data_A;
            b_load = data_B;
        end
        if (ALU_out_load) begin
            ALU_output_load = ALU_out;
        end
        if (MDR_load) begin
            data_out_to_write = data_out_mem;
        end
        if (IR_load) begin
            IR_out <= data_out_mem;
        end
    end

    // Comb. Logic for a more complicated ALU_b input
    always_comb
        case (ALU_b_en) 
            3'b000 : ALU_b = b_load;
            3'b001 : ALU_b = 32'b1;

            // NOUR: Do others later
        endcase

    // MUX for the data write RF input
    logic [31:0] data_to_write;
    logic Reg_in;

    assign data_to_write = Reg_in ? data_out_to_write : ALU_output_load;


    logic reset_pc, mem_read, mem_write;
    logic ALU_enable, flag_write;
    logic [6:0] ALU_op;

    // Connect all components to respective wires
    program_counter pc (
        .global_clock(global_clock),
        .reset(reset_pc), // For start of program/default running of program
        .PC_write(PC_write), // For when we change PC: Incrementation or branch related things
        .PC_data(ALU_out), // The value we write into the PC
        .PC_address(out_address) // The address in memory where our instruction lies
    );

    hardware_memory memory(
        .global_clock(global_clock),
        .mem_read(mem_read), // Enablers
        .mem_write(mem_write),
        .address(PC_address), // Address in memory to 'access'
        .data_in(a_load), // Data to be written based on address
        .data_out(instruction) // Data to be read based on address
    );

    alu alu(
        .global_clock(global_clock),
        .ALU_enable(ALU_enable), // Ready to calculate
        .flag_write(flag_write),
        .ALU_op(ALU_op), 
        .ALU_A(ALU_a),
        .ALU_B(ALU_b), // Next address in memory
        .ALU_out(ALU_out),
        .neg(neg), // flag write outputs
        .zero(zero)
    );

    typedef enum logic [2:0] {IF, ID, EX, MEM, WB} stages;
    stages current_state;
    // Global interrupt occurs in instances such as: CPU overheating, stopped execution
    // Move to the next stage if ready
    logic [31:0] PC_address = address_start;
    logic [31:0] instruction, new_address;
    logic neg, zero;

    always_ff @ (posedge global_clock, posedge global_interrupt)
        if (global_interrupt)
            done <= 1'b1;
        else begin
            case (current_state)
                // Begin the instruction fetch
                IF: begin current_state <= ID;
                    // Retreive instruction
                    AddrSel <= 1'b1;
                    mem_read <= 1'b1;
                    IR_load <= 1'b1;
                    // Increment PC
                    ALU_a_en <= 1'b0;
                    ALU_b_en <= 3'b1;
                    op_code <= 7'b0;
                    end
                ID: begin current_state <= EX;
                    // Decode Instruction


                    end
                
                
                default: current_state <= IF;

            endcase
        end

endmodule

// Control Unit
// Description: Decodes the instruction specifically in the ID stage. Might take an extra cycle 
//              in here to do memory-related operations. Outputs registers we might use.
// https://docs.riscv.org/reference/isa/v20260120/unpriv/rv32.html
// https://medium.com/@s.ruban2000/decoding-the-decoder-f60ecb4248c0
// July 13, 2026
module control_unit (
    input logic [31:0] instruction,
    input logic enable_start,
    input logic memory_write, // For S type
    input logic memory_read, // For S type
    output logic [4:0] reg_A,
    output logic [4:0] reg_B,
    output logic [4:0] reg_dst,
    output logic [11:0] imm_12, // For I type
    output logic [6:0] imm_7, // For S type
    output logic [19:0] imm_20, // For U type
    output logic addr_sel,
    output logic mdr_load,
    output logic [6:0] alu_op,
    output logic done,
    // Which type of instruction is this
    output logic [1:0] instr_type
);

    // Encoding scheme
    // Op code: [6:0], funct3 [14:12], rd [11:7]
    logic [6:0] op_code;
    logic [2:0] funct3;
    logic [4:0] rd;
    assign op_code = instruction[6:0]; 
    assign funct3 = instruction[14:12];
    assign rd = instruction[11:7];

    logic [4:0] rs1, rs2;
    logic [11:0] immediate_12;
    logic [6:0] immediate_7;
    logic [19:0] immediate_20;

    // R(egister) Type: 
    //      rs1: 15-19
    //      rs2: 24-20
    //      funct7: 31:25
    //      OP CODE: 0110011
    // I(mmediate) Type:
    //      rs1: 15-19
    //      immediate: 31:20
    //      OP CODE: 0010011
    // S(tore) & Load Type
    //      rd is imm5 
    //      rs1: 15-19
    //      rs2: 24-20
    //      imm7: 25-31
    //      OP CODE: STORE 0100011
    //               LOAD 0000011

    // U (BRANCH) Type
    //      imm20: 31-12
    //      OP CODE: 1100011

    typedef enum logic [1:0] {R_type, I_type, S_type, U_type} inst_type;
    inst_type instruction_type;
    logic mem_read, mem_write;

    always_comb 
        if (enable_start) begin
            case (op_code)
            // R TYPE INSTRUCTION -----------------------------------
            7'b0110011 : begin
                instruction_type = R_type;
                rs1 = instruction[19:15];
                rs2 = instruction[24:20];
                immediate_7 = instruction[31:25]; // Instead of funct7 because lazy
                // Decode operation
                case (funct3)
                3'b000: op_code = immediate_7[5] ? 7'b1 : 7'b0; // If 5th bit is 1, subtract. Add if 0.
                3'b001: op_code = 7'b111;// sll
                3'b100: op_code = 7'b100; // XOR
                3'b101: op_code = immediate_7[5] ? 7'b101 : 7'b110; // If 5th bit is 1, SRA. SRL if 0.
                3'b110: op_code = 7'b11; // OR
                3'b111: op_code = 7'b10; // AND
                endcase

            end
            // I TYPE INSTRUCTION -----------------------------------
            7'b0010011 : begin
                instruction_type = I_type;
                rs1 = instruction[19:15];
                immediate_12 = instruction[31:20];
                // Check for which type of immediate based on funct3
                case (funct3)
                3'b000: // addi
                3'b001: // subi
                3'b100: // xori
                3'b110: // ori
                3'b111: //andi
                endcase
            end
            // S TYPE INSTRUCTION -----------------------------------
            7'b0x00011 : begin
                instruction_type = S_type;
                mem_read = ~op_code[5];
                mem_write = op_code[5];
                rs1 = instruction[19:15];
                rs2 = instruction[24:20];
                immediate_7 = instruction[31:25];
            end
            // U TYPE INSTRUCTION -----------------------------------
            7'b1100011 : begin
                instruction_type = U_type;
                immediate_20 = instruction[31:12];
            end
            endcase


    // Connect logic to output
    assign instr_type = instruction_type;
    assign reg_A = rs1;
    assign reg_B = rs2;
    assign reg_dst = rd;
    assign memory_r = mem_read;
    assign memory_w = mem_write;
    assign imm_12 = immediate_12;
    assign imm_7 = immediate_7;
    assign imm_20 = immediate_20;

    assign alu_op = op_code;
endmodule