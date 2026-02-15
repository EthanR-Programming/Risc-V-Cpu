`include "decoded_instr.svh"

module branch(
    input logic [31:0] rs1_data,
    input logic [31:0] rs2_data,
    input decoded_instr_t instr,
    input logic [31:0] pc,

    output logic [0:0] pc_reset_branch,
    output logic [31:0] reset_address
);


    always_comb begin

        logic unsigned [31:0] rs1_data_unsigned = rs1_data;
        logic unsigned [31:0] rs2_data_unsigned = rs2_data;

        pc_reset_branch = (
        ((rs1_data == rs2_data) && instr.func3 == 3'b000) ||

        ((rs1_data != rs2_data) && instr.func3 == 3'b001) ||

        ((rs1_data < rs2_data) && instr.func3 == 3'b100) ||

        ((rs1_data >= rs2_data) && instr.func3 == 3'b101) ||

        ((rs1_data_unsigned < rs2_data_unsigned) && instr.func3 == 3'b110) ||

        ((rs1_data_unsigned >= rs2_data_unsigned) && instr.func3 == 3'b111) ) && instr.is_b;
        
        reset_address = (pc_reset_branch == 1'b1 ? pc + instr.imm_b : 0);
    end

endmodule
