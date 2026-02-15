`include "decoded_instr.svh"

module jump(
    input decoded_instr_t instr,
    input logic [31:0] rs1_data,
    input logic [31:0] program_counter,
    output logic [31:0] reg_save_value,
    output logic [31:0] pc_save_value,
    output logic [0:0] pc_reset_jump
);

    always_comb begin

        reg_save_value = (instr.is_j == 1'b1 || instr.is_jalr == 1'b1 ? program_counter + 3'b100 : 32'h00000000);
        
        pc_save_value = (instr.is_j == 1'b1 ? program_counter + instr.imm_j 
        : (instr.is_jalr == 1'b1 ? instr.imm_i + rs1_data : 32'h00000000));
        
        pc_reset_jump = (instr.is_j || instr.is_jalr);

    end

endmodule
