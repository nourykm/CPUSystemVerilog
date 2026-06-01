

// Finite-State Machine
// Description: Decodes the instruction and calls upon modules accordingly. Uses five stage pipeline. 
//              NOT the top module.
// May 28, 2026
module fsm (
    input logic global_clock,
    input logic pc_write,
    input logic [31:0] address_start, // Where instruction lies in memory, start of program
    output logic done
);
    logic done = 1'b0;

    // 1. Instruction Fetch
    logic [31:0] pc = address_start;
    logic [31:0] instruction;

    // retrieve encoded instruction
    hardware_memory IF(
    .global_clock (global_clock),
    .mem_read (1'b1),
    .mem_write (1'b0),
    .address (pc), // Address in memory to 'access'
    .data_in (32'b0), // Data to be written based on address
    .data_out (instruction) // Data to be read based on address
    );

    // Increment pc 
    always @(posedge global_clock)
        pc = pc + 4;

    // 2. Instruction Decode
    // [11:7] destination register
    // [19:15] first source register
    // [24:20] second source register
    logic [6:0] op_code;
    assign  op_code = instruction[6:0];
    logic [4:0] destination_reg;
    assign destination_reg = instruction[11:7];
    logic [4:0] first_reg;
    assign first_reg  = instruction[19:15];
    logic [4:0] second_reg;
    assign second_reg = instruction[24:20];

    // Retrieve values of each reg
    logic [31:0] data_A, data_B;
    register_file retrieve(
    .global_clock (global_clock), 
    .RF_write (1'b0),
    .reg_A (first_reg),
    .reg_B (second_reg),
    .reg_W (destination_reg), 
    .data_w (32'b0),
    .data_A (data_A), 
    .data_B (data_B)
    );


    // 3. Execute Instruction
    logic [31:0] ALU_out;
    logic neg, zero;
    alu calculate(
    .global_clock (global_clock),
    .ALU_enable (1'b1), 
    .flag_write(1'b1), 
    .ALU_op (op_code),
    .ALU_A (data_A),
    .ALU_B (data_B),
    .ALU_out (ALU_out),
    .neg (neg), // flag write outputs
    .zero (zero)
    );

    // 4. Memory Access
    // Not needed for basic ALU operation ADD


    // 5. Write Back
    // Put the result back in the register file in destination register
    register_file put_back(
    .global_clock (global_clock), 
    .RF_write (1'b1),
    .reg_A (first_reg),
    .reg_B (second_reg),
    .reg_W (destination_reg), 
    .data_w (ALU_out),
    .data_A (data_A), 
    .data_B (data_B)
    );

    done = 1'b1;

endmodule
