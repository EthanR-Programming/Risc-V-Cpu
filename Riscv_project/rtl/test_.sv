`timescale 1ns/1ns


module test_ ();

    logic clk = 0;

    wrapper wrapper(clk);

    initial begin

        $display("Begin");

        $dumpfile("wave.vcd");
        $dumpvars(0, test_);

        repeat (100) begin
            #1 clk = 1;
            #1 clk = 0;
        end

        $finish;

    end


endmodule
