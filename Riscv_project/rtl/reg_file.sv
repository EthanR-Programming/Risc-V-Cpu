module reg_file(
    input logic [0:0] clk,
    input logic [4:0] rs1_address,
    input logic [4:0] rs2_address,
    output logic [31:0] rs1_data,
    output logic [31:0] rs2_data,
    input logic [0:0] save_enable,
    input logic [4:0] save_address,
    input logic [31:0] save_value
);

    logic [31:0] block [31:0];


    always_comb begin
        
        rs1_data = block[rs1_address];
        rs2_data = block[rs2_address];

    end

    always @(posedge clk ) begin
        if (save_enable && save_address != 4'b0000)
            block[save_address] <= save_value;
    end


endmodule