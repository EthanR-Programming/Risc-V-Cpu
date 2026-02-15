`include "decoded_instr.svh"

module instruction_decoder(
    input logic [31:0] instruction,
    output decoded_instr_t mask,
    output logic [0:0] trap_instr,
    input logic [0:0] clk,
    input logic [31:0] pc, // ONLY FOR DEBUGGING
    input logic [31:0] global_counter // ONLY FOR DEBUGGING
);

    always_comb begin                       

        logic[6:0] opcode = mask.opcode;
        logic[11:7] rd = mask.rd;
        logic[14:12] func3 = mask.func3;
        logic[19:15] rs1 = mask.rs1;
        logic[24:20] rs2 = mask.rs2;
        logic[31:25] func7 = mask.func7;

        logic[0:0] is_r = mask.is_r;
        logic[0:0] is_i = mask.is_i;
        logic[0:0] is_s = mask.is_s;
        logic[0:0] is_b = mask.is_b;
        logic[0:0] is_u = mask.is_u;
        logic[0:0] is_j = mask.is_j;

        // Breaking the instruction into its masks
        mask.opcode = instruction[6:0];
        mask.rd = instruction[11:7];
        mask.func3 = instruction[14:12];
        mask.rs1 = instruction[19:15];
        mask.rs2 = instruction[24:20];
        mask.func7 = instruction[31:25];

        // instruction type
        mask.is_r = (mask.opcode == 7'b0110011);
        mask.is_i = (mask.opcode == 7'b0010011) || (mask.opcode == 7'b0000011);
        mask.is_s = (mask.opcode == 7'b0100011);
        mask.is_b = (mask.opcode == 7'b1100011);
        mask.is_u = (mask.opcode == 7'b0110111) || (mask.opcode == 7'b0010111);
        mask.is_j = (mask.opcode == 7'b1101111);
        mask.is_jalr = (mask.opcode == 7'b1100111);

        trap_instr = !(mask.is_r || mask.is_i || mask.is_s || mask.is_b || mask.is_u || mask.is_j || mask.is_jalr);

        // Immediates (ALREADY SIGNED)
        mask.imm_i= {{20{instruction[31]}} , instruction [31:20]};

        mask.imm_s = {{20{instruction[31]}}, instruction[31:25], instruction[11:7]};

        mask.imm_b = {{19{instruction[31]}}, instruction[31], instruction[7],
                   instruction[30:25], instruction[11:8], 1'b0};

        mask.imm_u = {instruction[31:12], 12'b0};

        mask.imm_j = {{11{instruction[31]}}, instruction[31],
                   instruction[19:12], instruction[20],
                   instruction[30:21], 1'b0};

    end                     

    always @(posedge clk ) begin
        if (trap_instr)
            $display("Illegal opcode: %d , address: %d , global counter: %d \n" , mask.opcode , pc , global_counter);

    end

endmodule
