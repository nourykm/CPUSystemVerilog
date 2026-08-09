`timescale 1ns/1ps

// Testbench: Hardware memory
// Aug 7, 2026
module hardware_memory_tb;

    // Signals for ports
    logic global_clock = 1'b0;
    logic mem_read;
    logic mem_write;
    logic [31:0] address;
    logic [31:0] data_in;
    logic [31:0] data_out;

    // The instruction preloaded at memory[0]: add x3, x4, x2
    localparam logic [31:0] ADD_INSTR = 32'b00000000001000100000000110110011;

    int errors = 0;

    hardware_memory dut (
        .global_clock(global_clock),
        .mem_read(mem_read),
        .mem_write(mem_write),
        .address(address),
        .data_in(data_in),
        .data_out(data_out)
    );

    // 0.1 Ghz clock
    always #5 global_clock = ~global_clock;

    // Compare data_out against value for our first instruction
    task check(input logic [31:0] expected, input string label);
        if (data_out !== expected) begin
            $display("FAIL at time %0t: %s \n data_out = %h, expected %h", $time, label, data_out, expected);
            errors++;
        end
        else begin
            $display("PASS: %s", label);
        end
    endtask

    // Test the write feature by writing a value into the address
    task do_write(input logic [31:0] addr, input logic [31:0] value, input logic enable);
        @(negedge global_clock);
        address = addr;
        data_in = value;
        mem_write = enable;
        mem_read = 1'b0;
        // Make sure the write lands
        @(posedge global_clock);
        @(negedge global_clock);
        mem_write = 1'b0;
    endtask

    // Test the read feature by reading the address
    task do_read(input logic [31:0] addr);
        @(negedge global_clock);
        address = addr;
        mem_read = 1'b1;
        #1 // This allows 1 unit in our timescale (ie 1ns) to allow the signal to settle                          
    endtask


    // START THE TEST AT TIME 0
    initial begin
        // Prevents X in our waveform (initial values)
        mem_read = 1'b0;
        mem_write = 1'b0;
        address = 32'b0;
        data_in = 32'b0;

        // Allow signals to settle (precaution)
        @(negedge global_clock);

        // 1. Read the address stored at 32'b0 as that is where we stored our instruction
        do_read(32'd0);
        check(ADD_INSTR, "read preloaded instruction at addr 0");

        // 2. Check if reading appropriately makes data_out 32'b0
        @(negedge global_clock);
        mem_read = 1'b0;
        #1;
        check(32'b0, "mem_read low forces data_out to 0");

        // 3. Check if reading a random location is 0
        do_read(32'd100);
        check(32'b0, "uninitialised location reads 0");

        // 4. Write a value then read it back
        do_write(32'd5, 32'hDEADBEEF, 1'b1);
        do_read(32'd5);
        check(32'hDEADBEEF, "write then read addr 5");

        // 5. Check address around the write: Should be 0
        do_read(32'd6);
        check(32'b0, "addr 6 untouched by write to addr 5");

        // 6. Check if the enabler works when writing
        do_write(32'd7, 32'hCAFEBABE, 1'b0);
        do_read(32'd7);
        check(32'b0, "no write when mem_write is low");

        // 7. Overwrite an existing location
        do_write(32'd5, 32'h12345678, 1'b1);
        do_read(32'd5);
        check(32'h12345678, "overwrite addr 5");

        // 10. Try writing in out of bounds: Assertion should trigger
        $display("out of bounds, assertion message below ");
        do_write(32'd2000, 32'hFFFFFFFF, 1'b1);

        // End simulation and display errors
        @(negedge global_clock);
        mem_read = 1'b0;

        $display("");
        if (errors == 0) begin
            $display("ALL TESTS PASSED");
        end
        else begin
            $display("%d TEST(S) FAILED", errors);
        end

        $stop;
    end

    // TIMEOUT FOR IF TEST ISNT FINISHED BY THEN (which means something is wrong)
    initial begin
        #10000;
        $display("TIMEOUT: Testbench did not finish");
        $stop;
    end

endmodule