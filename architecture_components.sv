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
    logic [31:0] memory [1023:0];
    initial begin
        foreach (memory[i])
            memory[i] = 32'b0;
    end

    // For memory writes which must be on clock edge
    always_ff @(posedge global_clock)
        if (mem_write)
            memory[address] <= data_in;
    
    // For memory reads which could be connected using combinational logic
    assign data_out = mem_read ? memory[address] : 32'b0;
endmodule
            