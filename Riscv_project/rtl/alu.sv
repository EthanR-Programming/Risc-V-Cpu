`include "decoded_instr.svh"

module alu(
    input logic [0:0] clk,
    input logic [31:0] rs1,
    input logic [31:0] rs2,
    input decoded_instr_t instr,

    output logic [31:0] result
);

    always_comb begin

        logic [31:0] rs1_x = rs1;
        logic [31:0] rs2_x = (instr.is_r) ? rs2 : instr.imm_i;


        case (instr.func3)

            3'b000: result = (instr.func7 == 7'h20 ? rs1_x - rs2_x : rs1_x + rs2_x);
            3'b001: result = rs1_x << rs2_x;
            3'b010: result = (rs1_x < rs2_x) ? 1 : 0;
            3'b011: result = ({0,rs1_x} < {0,rs2_x} ? 1 : 0);
            3'b100: result = rs1_x ^ rs2_x;
            3'b101: result = (instr.func7 == 7'h20 ? rs1_x >> rs2_x : rs1_x >>> rs2_x);
            3'b110: result = rs1_x | rs2_x;
            3'b111: result = rs1_x & rs2_x;

        endcase
        
    end

endmodule