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
    - Memory is word addressable and has 1024 slots

Decoding:
    - [6:0] op code
    - [11:7] destination register
    - [19:15] first source register
    - [24:20] second source register

*/


`define MEM_SIZE 1024
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

    // TEST let reg 4 have value 1 and reg 2 have value 2
    registers[4] = 32'd1;
    registers[2] = 32'd2;
        
    // Connect the output of the RF based on input values
    assign data_A = registers[reg_A];
    assign data_B = registers[reg_B];   
endmodule 

//Program Counter
// Description: Has the address in memory of the instruction that must be executed. Can be changed through an enable,
//              and is reset to address 0 in memory (which could hold a default program for testing purposes).
// May 26, 2026
module program_counter (
    input logic global_clock,
    input logic reset, // For start of program/default running of program
    input logic PC_write, // For when we change PC: Incrementation or branch related things
    input logic [31:0] PC_data, // The value we write into the PC
    output logic [31:0] PC_address // The address in memory where our instruction lies
);
    // The address stored
    logic [31:0] address;

    always_ff @(posedge global_clock)
        if (reset)
            address <= 32'b0; 
        // If the PC write is enabled, then change the PC address stored
        else if (PC_write)
            address <= PC_data;
    
    // Connect the address to the output
    assign PC_address = address;
endmodule

// Memory 
// Description: A piece of hardware that is primarily used for our purposes to store our program. It is word addressable 
//              and has a size of 1024 words. We have the ability to read or write into memory given an address. Values
//              are subject to change.
// May 27, 2026
module hardware_memory (
    input logic global_clock,
    input logic mem_read, // Enablers
    input logic mem_write,
    input logic [31:0] address, // Address in memory to 'access'
    input logic [31:0] data_in, // Data to be written based on address
    output logic [31:0] data_out // Data to be read based on address
);
    // Initialize memory: For simplicity, have 1024 slots and memory being word addressable
    logic [31:0] memory [MEM_SIZE - 1:0];
    initial begin
        foreach (memory[i])
            memory[i] = 32'b0;
    end

    memory[0] = 32'b00000000001000100000000110110011; // TESTING ADD INSTRUCTION: r3 <- r4 + r2

    // For memory writes which must be on clock edge
    always_ff @(posedge global_clock)
        if (mem_write)
            // Make sure that we are accessing within the allocated space
            assert(address < MEM_SIZE)
            memory[address] <= data_in;
    
    // For memory reads which could be connected using combinational logic
    assign data_out = mem_read ? memory[address] : 32'b0;
endmodule

// Arithmetic Logic Unit
// Description: Performs arithmetic operations of two inputs by doing bit manipulation and addition.
//              flag writes are based on the output of the ALU
/* Operations:
    - 000: Add
    - 001: Sub
    - 010: And
    - 011: Or
    - 100: Xor
    - 101: Shift Right Arithmetic (SRA)
    - 110: Shift Right Logic (SRL)
    - 111: Shift Left Logic (SLL) same as SLA
*/
// May 27, 2026
module alu (
    input logic global_clock,
    input logic flag_write,
    input logic [6:0] ALU_op, // Command code for type of operation
    input logic [31:0] ALU_A,
    input logic [31:0] ALU_B,
    output logic [31:0] ALU_out,
    output logic neg, // flag write outputs
    output logic zero
);
    logic [31:0] out;

    // Enumeration of op codes for readability
    typedef enum logic [6:0] {ADD, SUB, AND, OR, XOR, SRA, SRL, SLL} op_code;
    op_code code;
    assign code = ALU_op;

    always_ff @(posedge global_clock)
        // If we are ready to calculate 
        begin
        // Check for each output
        if (code == ADD)
            out <= ALU_A + ALU_B;
        else if (code == SUB)
            out <= ALU_A - ALU_B;
        else if (code == AND)
            out <= ALU_A & ALU_B;
        else if (code == OR)
            out <= ALU_A | ALU_B;
        else if (code == XOR)
            out <= ALU_A ^ ALU_B;
        else if (code == SRA)
            out <= ALU_A >>> ALU_B;
        else if (code == SRL)
            out <= ALU_A >> ALU_B;
        else if (code == SLL)
            out <= ALU_A << ALU_B;
        end

    // Connect the flag writes using combinational logic
    assign neg = flag_write ? out[31]: 1'b0;
    assign zero = flag_write ? (out == 32'b0 ? 1'b1 : 1'b0): 1'b0;

    assign ALU_out = out;
endmodule