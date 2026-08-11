// This file holds the most important TB, as this is what tests our CPU
`timescale 1ns/1ps

// August 9, 2026
module fsm_tb;

    // Instantiate parameters
    logic global_clock = 1'b0;
    logic [31:0] address_start;
    logic reset, done, global_interrupt;

    int errors = 0;

    fsm dut( 
    .global_clock(global_clock),
    .global_interrupt(global_interrupt),
    .address_start(address_start), // Where instruction lies in memory, start of program
    .reset(reset), // Resets the pc to address 0
    .done(done)
    );

    always #5 global_clock = ~global_clock;


    // Tasks
    task load_instructions (input string file);
        $readmemb(file, dut.memory.memory);
        if (dut.memory.memory[0] === 32'b0)
            $warning("memory[0] is zero, file %s is empty or did not load.", file);
        @(negedge global_clock);
        reset_fsm();
    endtask 

    task check_reg (input logic [31:0] expected, input logic [4:0] reg_num);
        // Check inside the FSM's register file's registers and check if it matches the answer
        if (dut.rf.registers[reg_num] !== expected) begin
            $display("FAIL @%0t: x%0d = %h, expected %h", $time, reg_num, dut.rf.registers[reg_num], expected);
            errors++;
        end
        else begin
            $display("PASS: x%0d = %0d", reg_num, expected);
        end
    endtask

    task do_write_rf (input logic [31:0] amount, input logic [4:0] reg_num);
        // Manually write into RF for testing purposes
        @(negedge global_clock);
        dut.rf.registers[reg_num] = amount;
        #1;
    endtask

    task check_mem (input logic [31:0] address, input logic [31:0] expected);
        // Access memory and check if the value matches
        if (dut.memory.memory[address[31:2]] !== expected) begin // Divide the byte address by 4 to get its word address
            $display("FAIL @%0t: mem[0x%h] = 0x%h, expected 0x%h", $time, address, dut.memory.memory[address[31:2]], expected);
            errors++;
        end
        else begin
            $display("PASS: mem[0x%0h] = 0x%0h", address, expected);
        end
    endtask

    task wait_for_pause ();
        wait (dut.current_state == dut.PAUSE);
        @(negedge global_clock);
    endtask

    task reset_fsm ();
        reset = 1'b1;
        repeat (2) @(posedge global_clock);
        @(negedge global_clock);
        reset = 1'b0;
    endtask

    task finish_instruction (input int instructions);
        repeat (instructions) @(posedge done); 
        @(negedge global_clock);
    endtask

    // For waveform simulators for macbook
    initial begin
        $dumpfile("cpu.vcd");
        $dumpvars(0, hardware_memory_tb);
    end

    // Begin testing
    initial begin
        global_interrupt = 1'b0;
        address_start = 32'b0;
        reset = 1'b0;


        // TESTS

        // 1. Load several R & I type instructions, wait for instructions to finish, then check answers
        load_instructions ("testbenches/program1.txt");
        wait_for_pause();
        // reg[10] = 20, reg[12] = 3, reg[11] = 23, reg[6] = 12
        check_reg (32'd20, 5'd10);
        check_reg (32'd3, 5'd12);
        check_reg (32'd23, 5'd11);
        check_reg (32'd12, 5'd6); 

        // 2. Load program 2 to test the branch instructions
        load_instructions ("testbenches/program2.txt");
        wait_for_pause();
        // reg[3] = 1, reg[4] = 11
        check_reg (32'd1, 5'd3);
        check_reg (32'd11, 5'd4);

        // 3. Load program 3 to test the store and load instructions
        load_instructions ("testbenches/program3.txt");
        wait_for_pause();
        // Check for store/load word without offset:
        // mem[501] (nearest word to byte 2006) = 5, reg[3] = 5;
        check_mem(32'd2006, 32'd5);
        check_reg(32'd5, 5'd3);
        // Check for store/load word with offset:
        // mem[501] (nearest word to byte 2004) = 9, reg[3] = 9;
        check_mem(32'd1504, 32'd9);
        check_reg(32'd9, 5'd4);    

        // End simulation and display errors

        $display("");
        if (errors == 0) begin
            $display("ALL TESTS PASSED");
        end
        else begin
            $display("%0d TEST(S) FAILED", errors);
        end

        $finish;  
    end

    initial begin
        #10000;
        $display("TIMEOUT: Testbench did not finish");
        $stop;
    end

endmodule