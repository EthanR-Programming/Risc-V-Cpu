module pc (
    input logic [0:0] clk,
    input logic [0:0] reset,
    input logic [31:0] reset_address,
    input logic [0:0] stall,
    output logic [31:0] program_counter
);

    always @(posedge clk ) begin

        if (reset)
            program_counter <= reset_address;
        else if(!stall)
            program_counter <= program_counter + 32'h4;

    end

endmodule
