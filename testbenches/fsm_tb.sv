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
    endtask


    // Begin testing
    initial begin
        global_interrupt = 1'b0;
        address_start = 32'b0;
        reset = 1'b0;


        // TESTS

        // 1. Check if the preloaded instruction works
        reset_fsm();
        finish_instruction(1);
        check_reg(32'd3, 5'd3);

        // 2. Load several instructions, wait for instructions to finish, then check answers
        load_instructions ("program1.txt");
        wait_for_pause();
        // reg[10] = 20, reg[12] = 3, reg[11] = 23, reg[6] = 12
        check_reg (32'd20, 5'd10);
        check_reg (32'd3, 5'd12);
        check_reg (32'd23, 5'd11);
        check_reg (32'd12, 5'd6); 

        // End simulation and display errors

        $display("");
        if (errors == 0) begin
            $display("ALL TESTS PASSED");
        end
        else begin
            $display("%0d TEST(S) FAILED", errors);
        end

        $stop;  
    end

    initial begin
        #10000;
        $display("TIMEOUT: Testbench did not finish");
        $stop;
    end

endmodule