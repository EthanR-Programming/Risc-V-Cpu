module pc (
    input logic [0:0] clk,
    input logic [0:0] reset,
    input logic [31:0] reset_address,
    input logic [0:0] stall,
    output logic [31:0] program_counter
);

    logic [31:0] current_counter; 

    always @(negedge clk ) begin        
        if (reset)
            current_counter <= reset_address;
        else if(!stall)
            current_counter <= current_counter + 32'h4;
    end

    always @(posedge clk) begin

        program_counter <= current_counter;

    end

endmodule
