Designed and implemented a custom RV32I processor in SystemVerilog, building the datapath and architectural components with a control unit and FSM from scratch supporting R, I, B, and load/store type instructions consecutively in a fixed CPI of 5.
Built self-checking testbenches that directly tests components, loads assembled programs from file, and verifies register and memory state after execution, all passing. Waveform analysis using Surfer and Verilator helped with debugging the Branch instructions.

Some things I did differently:
- Made a subtract immediate "subi" command (though had to sacrifice the slti operation as we are limited to 2^3 immediate I-type instructions)
- EOP is based on whether the instruction has 32’b0
- A hardware memory size of 1024 addresses (which is unrealistic - real hardware memory in NIOS V in our DE1-SOC FPGAs have about 1 billion address slots)
- No pseudo instructions (e.g li or mv) as those can be done with addi 

Features I did/used:
- Assertions for illegal memory/register handling 
- Verilator for compile-time debugging (because I was on macOS)
- Used the architecture of a simple cpu (word size 2 bytes) and built off of it

Future Work:
- An L1 cache: This would have been an M-way Set Associative Cache 
- Jump instructions
- Earlier-stage component verification, closer to industry iteration practices

NOTE THAT NOT ALL INSTRUCTIONS ARE IMPLEMENTED: Only the most used ones or non-redundant instructions (for example, I did load word, but not load byte)
