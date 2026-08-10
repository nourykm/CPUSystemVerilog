

// Finite-State Machine
// Description: Decodes the instruction and calls upon modules accordingly. Uses multiple cycles. 
//              NOT the top module.
// May 28, 2026
module fsm ( 
    input logic global_clock,
    input logic global_interrupt,
    input logic [31:0] address_start, // Where instruction lies in memory, start of program
    input logic reset, // Resets the pc to address 0
    output logic done
);
    // Made for when program is finished
    logic instr_done;
    assign done = instr_done; 

    logic [31:0] AddrSelOUT, out_address;
    logic AddrSel, PC_write;

    // RF to ALU MUX's
    logic [31:0] data_A, data_B, a_load, b_load, ALU_b, ALU_a, ALU_out, ALU_output_load, data_out_mem, data_out_to_write;
    // a_load and b_load is what comes out of the flipflops between RF and muxes
    logic AB_load, ALU_out_load;

    // AddrSel MUX
    // Either from the PC for IF, or out of the ALU to read/write into memory
    assign AddrSelOUT = AddrSel ? out_address : ALU_output_load;

    logic ALU_a_en;
    logic [2:0] ALU_b_en;

    // Connect ALU_a to be either coming from rs1 or the PC address (to increment for next instruction)
    assign ALU_a = ALU_a_en ? a_load : out_address;

    // INBETWEEN MEMORY AND REGISTER FILE
    logic IR_load, MDR_load;
    logic [31:0] IR_out;


    // For Control unit
    logic [11:0] imm_12;
    logic [6:0] imm_7;
    logic [19:0] imm_20;
    logic [12:0] imm_b;


    // Comb. Logic for a more complicated ALU_b input
    always_comb
        case (ALU_b_en) 
            3'b000 : ALU_b = b_load;
            3'b001 : ALU_b = 32'd1; // WORD ADDRESSABLE
            3'b010 : ALU_b = {{20{imm_12[11]}}, imm_12}; // Imm12 from bits [31:20] in instruction, sign extended
            3'b011 : ALU_b = ($signed({{19{imm_b[12]}}, imm_b}) - 32'sd4) >>> 2; // ImmB for the immediate branches, shifted arithmetic by 2 to make sure it is word
            default: ALU_b = b_load;
        endcase

    // MUX for the data write RF input
    logic [31:0] data_to_write;
    logic reg_in;

    assign data_to_write = reg_in ? data_out_to_write : ALU_output_load;


    logic mem_read, mem_write;
    logic flag_write;
    logic [6:0] ALU_op;

    typedef enum logic [2:0] {IF, ID, EX, MEM, WB, PAUSE} stages;
    stages current_state, next_state;
    logic neg, zero;

    // Control unit for decoding stage
    logic [4:0] reg_A, reg_B, reg_dst;

    typedef enum logic [1:0] {R_type, I_type, S_type, B_type} inst_type;
    inst_type instruction_type;

    // For RF
    logic RF_write;

    // Connect all components to respective wires
    program_counter pc (
        .global_clock(global_clock),
        .reset(reset), // For start of program/default running of program
        .PC_write(PC_write), // For when we change PC: Incrementation or branch related things
        .PC_data(ALU_out), // The value we write into the PC
        .PC_address(out_address) // The address in memory where our instruction lies
    );

    hardware_memory memory(
        .global_clock(global_clock),
        .mem_read(mem_read), // Enablers
        .mem_write(mem_write),
        .address(AddrSelOUT), // Address in memory to 'access'
        .data_in(b_load), // Data to be written based on address
        .data_out(data_out_mem) // Data to be read based on address
    );

    alu alu(
        .global_clock(global_clock),
        .flag_write(flag_write),
        .ALU_op(ALU_op), 
        .ALU_A(ALU_a),
        .ALU_B(ALU_b), // Next address in memory
        .ALU_out(ALU_out),
        .neg(neg), // flag write outputs
        .zero(zero)
    );

    register_file rf(
        .global_clock(global_clock), 
        .RF_write(RF_write),
        .reg_A(reg_A), // One of 32 registers for reading
        .reg_B(reg_B),
        .reg_W(reg_dst), // One of the 32 registers for writing in
        .data_w(data_to_write), // The data we want to write in (for stores and rewriting file)
        .data_A(data_A), // Register being read - output of register file
        .data_B(data_B)
    );

    logic cu_mem_read, cu_mem_write;
    logic [2:0] cu_ALU_b_en, cu_funct3;
    logic [6:0] cu_ALU_op;

    control_unit cu (
        .instruction(IR_out),
        .memory_write(cu_mem_write), // For S type
        .memory_read(cu_mem_read), // For S type
        .reg_A(reg_A),
        .reg_B(reg_B),
        .reg_dst(reg_dst),
        .imm_12(imm_12), // For I type
        .imm_7(imm_7), // For S type
        .imm_20(imm_20), // For U type
        .imm_b(imm_b), // For B type
        .alu_op(cu_ALU_op),
        .alu_b_enable(cu_ALU_b_en), // For I type
        // Which type of instruction is this
        .instr_type(instruction_type),
        .function_3(cu_funct3)
    );


    // Based on instruction, certain signals are turned on for the sake of instruction execution uncontrolled by the CU
    // NOUR: Should we add this in the CU instead?
    logic [6:0] FSM_alu_op;
    logic [2:0] FSM_alu_b_en;
    assign mem_read = (current_state == IF) ? 1'b1: cu_mem_read;
    assign ALU_b_en = (current_state == IF || (instruction_type == B_type && current_state == MEM)) ? FSM_alu_b_en : cu_ALU_b_en;
    assign ALU_op = (current_state == IF || (instruction_type == B_type && current_state == MEM)) ? FSM_alu_op : cu_ALU_op;
    assign mem_write = (current_state == WB) & cu_mem_write;
    
    // FLIPFLOPS
    always_ff @(posedge global_clock) begin
        if (AB_load) begin
            a_load <= data_A;
            b_load <= data_B;
        end
        if (ALU_out_load) ALU_output_load <= ALU_out;
        if (MDR_load) data_out_to_write <= data_out_mem;
        if (IR_load) IR_out <= data_out_mem;
    end

    // THE FSM
    always_ff @(posedge global_clock, posedge global_interrupt) begin
        if (global_interrupt) current_state <= PAUSE;
        else if (reset) current_state <= IF;
        else current_state <= next_state;
    end
    always_comb begin
        // Default conditions for all logic gates changed here
        next_state = current_state;
        PC_write = 1'b0;
        IR_load = 1'b0;
        MDR_load = 1'b0;
        AB_load = 1'b0;
        ALU_out_load = 1'b0;
        FSM_alu_op = 7'b0;
        FSM_alu_b_en = 3'b0;
        RF_write = 1'b0;
        flag_write = 1'b0;
        instr_done = 1'b0;
        reg_in = 1'b0;
        AddrSel = 1'b1;
        ALU_a_en = 1'b1;

        case (current_state)
            // Begin the instruction fetch
            IF: begin next_state = ID;
                instr_done = 1'b0;
                FSM_alu_op = 7'b0;
                // Retreive instruction
                AddrSel = 1'b1;
                IR_load = 1'b1;
                // Increment PC
                ALU_a_en = 1'b0;
                FSM_alu_b_en = 3'b1;
            end
            ID: begin next_state = EX;
            // NB: check for program end
                // Decode Instruction
                // Register fetch 
                AB_load = 1'b1;
                PC_write = 1'b1; // So it can capture the +1 computed during IF

                // Program end:
                if (IR_out == 32'b0) begin
                    next_state = PAUSE;
                    instr_done = 1'b1;
                end
            end
            EX: begin next_state = MEM;
                // Retrieve reg A and B (rs1, rs2)
            end  
            MEM: begin next_state = WB;
                if (instruction_type == R_type || instruction_type == I_type ) begin
                    flag_write = 1'b1; 
                    ALU_out_load = 1'b1;
                end
                if (instruction_type == S_type) begin
                    MDR_load = 1'b1;
                    AddrSel = 1'b0;
                    if (IR_out[5]) // if store, we are done
                        instr_done = 1'b1;
                end
                if (instruction_type == B_type) begin
                    // Prepare for if true: Do PC + Imm12 - 4 (to account for PC increment)
                    flag_write = 1'b1;
                    FSM_alu_b_en = 3'b011; // Choose immediate_b
                    FSM_alu_op = 7'b0; // To add immediate_12 with PC
                    ALU_a_en = 1'b0;
                end
            end                
            WB: begin next_state = IF;
                if (instruction_type == R_type || instruction_type == I_type) begin
                    reg_in = 1'b0;
                    RF_write = 1'b1;
                    instr_done = 1'b1;
                end
                if (instruction_type == B_type) begin
                    // Check Z and N flags based on funct3
                    case (cu_funct3)
                        3'b000: PC_write = zero; // bqe: if z is true
                        3'b001: PC_write = ~zero; // bne: if z is false
                        3'b100: PC_write = neg;// blt: if n is true
                        3'b101: PC_write = (~neg|zero);// bge: if z is true | n is false
                        default: PC_write = 1'b0;
                    endcase
                    instr_done = 1'b1;
                end
            end   

            PAUSE: next_state = PAUSE;
            
            default: next_state = IF;

        endcase
    end

endmodule








// Control Unit
// Description: Decodes the instruction specifically in the ID stage. Might take an extra cycle 
//              in here to do memory-related operations. Outputs registers we might use.
// https://msyksphinz-self.github.io/riscv-isadoc/html/rvi.html
// https://medium.com/@s.ruban2000/decoding-the-decoder-f60ecb4248c0
// July 13, 2026
module control_unit (
    input logic [31:0] instruction,
    output logic memory_write, // For S type
    output logic memory_read, // For S type
    output logic [4:0] reg_A,
    output logic [4:0] reg_B,
    output logic [4:0] reg_dst,
    output logic [11:0] imm_12, // For I type
    output logic [6:0] imm_7, // For S type
    output logic [19:0] imm_20, // For U type
    output logic [12:0] imm_b, // For branches
    output logic [6:0] alu_op,
    output logic [2:0] alu_b_enable, // For I type
    // Which type of instruction is this
    output logic [1:0] instr_type,
    output logic [2:0] function_3
);

    // Encoding scheme
    // Op code: [6:0], funct3 [14:12], rd [11:7]
    logic [6:0] op_code;
    logic [6:0] alu_op_code;
    logic [2:0] funct3;
    logic [4:0] rd;
    assign op_code = instruction[6:0]; 
    assign funct3 = instruction[14:12];
    assign rd = instruction[11:7];

    logic [4:0] rs1, rs2;
    logic [11:0] immediate_12;
    logic [6:0] immediate_7;
    logic [19:0] immediate_20;
    logic [12:0] immediate_b;
    assign immediate_b = {instruction[31], instruction[7], instruction[30:25], instruction[11:8], 1'b0};
    // For choosing immediates
    logic [2:0] alu_b_en;

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
    //      rs1: 19-15
    //      rs2: 24-20
    //      imm7: 31-25
    //      OP CODE: STORE 0100011
    //               LOAD 0000011

    // B(RANCH) Type
    //      imm12: instr[31], instr[7], instr[30:25], instr[11:8], 1'b0
    //      rs1: 19-15
    //      rs2: 24-20
    //      funct3: 0 (beq), 1 (bne), 100 (blt), 101 (bge) 
    //      OP CODE: 1100011


    // I-type funct3 010 is slti in the spec, used here as subi
    // slt/sltu/sltiu are not implemented

    typedef enum logic [1:0] {R_type, I_type, S_type, B_type} inst_type;
    inst_type instruction_type;
    logic mem_read, mem_write;

    always_comb 
        begin
        // Defaults to prevent latches
        instruction_type = R_type;
        rs1 = instruction[19:15];
        rs2 = instruction[24:20];
        immediate_7 = instruction[31:25]; 
        alu_op_code = 7'b0;
        immediate_12 = instruction[31:20];
        alu_b_en = 3'b0;
        immediate_20 = instruction[31:12];
        mem_read = 1'b0;
        mem_write = 1'b0;

        case (op_code)
        // R TYPE INSTRUCTION -----------------------------------
        7'b0110011 : begin
            instruction_type = R_type;
            rs1 = instruction[19:15];
            rs2 = instruction[24:20];
            immediate_7 = instruction[31:25]; // Instead of funct7 because lazy
            alu_b_en = 3'b0;
            // Decode operation
            case (funct3)
                3'b000: alu_op_code = immediate_7[5] ? 7'b1 : 7'b0; // If 5th bit is 1, subtract. Add if 0.
                3'b001: alu_op_code = 7'b111;// sll
                3'b100: alu_op_code = 7'b100; // XOR
                3'b101: alu_op_code = immediate_7[5] ? 7'b101 : 7'b110; // If 5th bit is 1, SRA. SRL if 0.
                3'b110: alu_op_code = 7'b11; // OR
                3'b111: alu_op_code = 7'b10; // AND
                default: alu_op_code = 7'b0;
            endcase

        end
        // I TYPE INSTRUCTION -----------------------------------
        7'b0010011 : begin
            instruction_type = I_type;
            rs1 = instruction[19:15];
            immediate_12 = instruction[31:20];
            // Pick ALU_B_en to choose that immediate
            alu_b_en = 3'b010;
            // Check for which type of immediate based on funct3
            immediate_7 = instruction[31:25]; // Instead of funct7 because lazy
            if (funct3 == 3'b101) immediate_12 = {7'b0, instruction[24:20]}; // Rest is funct7
            case (funct3)
                3'b000: alu_op_code = 7'b0; // addi
                3'b001: alu_op_code = 7'b111; // shift left immediate
                3'b010: alu_op_code = 7'b1; // subi SOMETHING UNIQUE I DID
                3'b100: alu_op_code = 7'b100; // xori
                3'b110: alu_op_code = 7'b011; // ori
                3'b111: alu_op_code = 7'b10;//andi
                3'b101: alu_op_code = immediate_7[5] ? 7'b101 : 7'b110; // If 5th bit is 1 srai : srli
                default: alu_op_code = 7'b0;
            endcase
        end
        // S TYPE INSTRUCTION -----------------------------------
        7'b0000011, 7'b0100011 : begin
            instruction_type = S_type;
            mem_read = ~op_code[5]; 
            mem_write = op_code[5];
            rs1 = instruction[19:15];
            rs2 = instruction[24:20];
            // NB: The offset in SW and LW is encoded differently
            // LW: inst[31:20], SW: inst[11:7] + inst[31:25]
            immediate_12 = op_code[5] ? {instruction[31:25], instruction[11:7]} : instruction[31:20];
            alu_b_en = 3'b010; // To select the imm12
        end
        // B TYPE INSTRUCTION -----------------------------------
        7'b1100011 : begin
            instruction_type = B_type;
            rs1 = instruction[19:15];
            rs2 = instruction[24:20];
            alu_op_code = 7'b1; // This will trigger the n and z flags
        end
        default: ;
        endcase
    end


    // Connect logic to output
    assign instr_type = instruction_type;
    assign reg_A = rs1;
    assign reg_B = rs2;
    assign reg_dst = rd;
    assign memory_read = mem_read;
    assign memory_write = mem_write;
    assign imm_12 = immediate_12;
    assign imm_7 = immediate_7;
    assign imm_20 = immediate_20;
    assign function_3 = funct3;
    assign imm_b = immediate_b;

    assign alu_op = alu_op_code;
    assign alu_b_enable = alu_b_en;
endmodule