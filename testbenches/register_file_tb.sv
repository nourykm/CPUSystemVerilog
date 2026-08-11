`timescale 1ns/1ps

// Testbench: Register file
// August 9, 2026
module register_file_tb;

    // Signals for ports
    logic global_clock = 1'b0;
    logic RF_write;
    logic [4:0] reg_A, reg_B, reg_W;
    logic [31:0] data_W, data_A, data_B;

    // Values prewritten in reg file
    localparam reg_4 = 32'd1;
    localparam reg_2 = 32'd2;

    int errors = 0;

    register_file dut(
        .global_clock(global_clock), 
        .RF_write(RF_write),
        .reg_A(reg_A), // One of 32 registers for reading
        .reg_B(reg_B),
        .reg_W(reg_W), // One of the 32 registers for writing in
        .data_w(data_W), // The data we want to write in (for stores and rewriting file)
        .data_A(data_A), // Register being read - output of register file
        .data_B(data_B)
    );

    // 0.1 Ghz clock
    always #5 global_clock = ~global_clock;

    // Tasks for the reg
    task check(
        input logic [31:0] expected_A,  
        input logic [31:0] expected_B,
        input string label
    );
        // Check if reg_A holds the data we expect
        if (expected_A !== data_A) begin
            $display("FAIL at time %0t: %s \n REG_A: %h, expected_A: %h", $time, label, data_A, expected_A);
            errors++;
        end
        // Check if reg_B holds the data we expect
        if (expected_B !== data_B) begin
            $display("FAIL at time %0t: %s \n REG_B: %h, expected_B: %h", $time, label, data_B, expected_B);
            errors++;
        end
        if (expected_B === data_B && expected_A === data_A) begin
            $display("PASS: %s", label);
        end
    endtask

    task do_write (input logic [4:0] reg_Write, input logic [31:0] data_Write, input logic enable);
        // Write signals in negedge to avoid race
        @(negedge global_clock);
        reg_W = reg_Write;
        data_W = data_Write;
        RF_write = enable;
        // Wait for clock-edged logic to settle
        @(posedge global_clock);
        @(negedge global_clock);
        RF_write = 1'b0;
    endtask

    // This can set up what data_A and data_B hold for checks
    task do_read (input logic [4:0] read_A, input logic [4:0] read_B);
        @(negedge global_clock);
        reg_A = read_A;
        reg_B = read_B;
        #1; // Wait for combinational logic to settle
    endtask

    // READY TO TEST AT INITIAL TIME 0
    initial begin
        
        // Put in initial values
        RF_write = 1'b0;
        reg_A = 5'd12;
        reg_B = 5'd10;
        reg_W = 5'd14;
        data_W = 32'b0;

        // Wait for signals to settle
        @(negedge global_clock);


        // 1. If the register values were written
        do_write(5'd20, 32'd8, 1'b1);
        do_write(5'd24, 32'd10, 1'b1);
        do_read(5'd20, 5'd24);
        check(32'd8, 32'd10, "Register values were written and read correctly");
        
        // // 2. Check prewritten values
        // do_read(5'd4, 5'd2);
        // check(reg_4, reg_2, "Prewritten registers have their values set.");

        // 3. If register 0 is the zero register
        do_read(5'b0, 5'b0);
        check(32'b0, 32'b0, "Register 0 is the zero register.");

        // 4. Overwritting the zero register
        do_write(5'd0,32'd10, 1'b1);
        do_read(5'b0, 5'b0);
        check(32'b0, 32'b0, "Overwritting the zero register.");

        // 5. Writing and reading edge of register 
        do_write(5'd31, 32'd8, 1'b1);
        do_read(5'd31, 5'd0);
        check(32'd8, 32'd0, "Edge register is written and read correctly.");

        // 6. Writing when enabler is low
        do_write(5'd31, 32'd10, 1'b0);
        do_read(5'd31, 5'd0);
        check(32'd8, 32'd0, "Writing when RF_write is low.");

        // End simulation and display errors
        @(negedge global_clock);

        $display("");
        if (errors == 0) begin
            $display("ALL TESTS PASSED");
        end
        else begin
            $display("%0d TEST(S) FAILED", errors);
        end


        $stop;
    end

    // Incase we timeout
    initial begin
        #10000;
        $display("TIMEOUT: Testbench did not finish");
        $stop;
    end

endmodule