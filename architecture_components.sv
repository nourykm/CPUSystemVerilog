// Inspired by the simple processor taken in ECE243 Computer Organization

/*
Components:
    - Memory (holds instructions)
    - Register File
    - Arithmetic Logic Unit
    - Program Counter
    - Finite-State Machine
    - Instruction Register
    - Memory Data Register

5 Stages:
    1. IF
    2. ID
    3. EX
    4. MEM
    5. WO


Architecture:
    - 32 bit word
    - 32 registers

*/



// Register file
// Description: Holds the 32-bit values of the 32-bit registers, and has two ports to read from two registers
//              and the ability to change the contents of a register.
// May 25, 2026
module register_file (
    input logic global_clock, 
    input logic RF_write,
    input logic [4:0] reg_A, // One of 32 registers for reading
    input logic [4:0] reg_B,
    input logic [4:0] reg_W, // One of the 32 registers for writing in
    input logic [31:0] data_w, // The data we want to write in (for stores and rewriting file)
    output logic [31:0] data_A, // Register being read - output of register file
    output logic [31:0] data_B
);
    logic [31:0] registers [31:0]; // 32 registers each with 32 bits

    always_ff @(posedge global_clock)
        // If write enable is on and we are not writing in the zero register
        if (RF_write && reg_W != 0)
            registers[reg_W] <= data_w;
        
    // Connect the output of the RF based on input values
    assign data_A = registers[reg_A];
    assign data_B = registers[reg_B];   
endmodule 
