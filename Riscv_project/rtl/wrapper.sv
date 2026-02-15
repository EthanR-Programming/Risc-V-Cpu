`include "decoded_instr.svh"

module wrapper (
    input logic [1:0] clk
);

    // GLOBAL_COUNTER
    logic [31:0] global_counter;
    always @(posedge clk ) begin
        global_counter = global_counter + 3'b100;
    end

    // PC
    logic [31:0] program_counter;

    // INSTRUCION
    logic [31:0] instruction;

    // DECODED INSTRUCTION
    decoded_instr_t decoded_instr;

    // RAM LOAD ARGS
    logic [31:0] ram_load_address;
    logic [31:0] ram_load_value;

    // RAM STORE ARGS
    logic [31:0] ram_store_address = rs1_data + decoded_instr.imm_s;
    logic [0:0] ram_store_enabled = decoded_instr.is_s;
    logic [31:0] ram_store_value = rs2_data;

    // REGISTER LOAD ARGS
    logic [4:0] rs1_address = decoded_instr.rs1;
    logic [4:0] rs2_address = decoded_instr.rs2;
    logic [31:0] rs1_data;
    logic [31:0] rs2_data;
    
    // REGISTER STORE ARGS
    logic [0:0] reg_save_enable = !(decoded_instr.is_s || decoded_instr.is_b);
    logic [4:0] reg_save_address = decoded_instr.rd;
    logic [31:0] reg_save_value = (decoded_instr.is_r == 1'b1 || decoded_instr.is_i == 1'b1) ? alu_output
    : (pc_reset_jump == 1'b1 ? register_save_jump 
    : (decoded_instr.is_u == 1'b1 ? (decoded_instr.opcode == 7'b0110111 ? decoded_instr.imm_u : decoded_instr.imm_u + program_counter) 
    : 32'h00000000));

    // ALU OUTPUT
    logic [31:0] alu_output;

    // CPU STALL
    logic [0:0] stall;

    // TRAPS
    logic [0:0] ram_trap;
    logic [0:0] instruction_trap;

    // PC RESET
    logic [0:0] pc_reset = (pc_reset_branch || pc_reset_jump);
    logic [31:0] reset_address = (pc_reset_branch == 1'b1 ? reset_address_branch : (pc_reset_jump == 1'b1 ? pc_reset_address_jump : 32'h00000000));

    // BRANCH
    logic [0:0] pc_reset_branch;
    logic [31:0] reset_address_branch;

    // JUMP
    logic [0:0] pc_reset_jump;
    logic [31:0] pc_reset_address_jump;
    logic [31:0] register_save_jump;

    ram_controller ram_controller(
        clk,
        program_counter,
        instruction,
        decoded_instr.func3,
        ram_load_address,
        ram_load_value,
        ram_store_address,
        ram_store_enabled,
        ram_store_value,
        stall,
        ram_trap
    );

    pc pc(
        clk,
        pc_reset,
        reset_address,
        stall,
        program_counter
    );

    instruction_decoder instruction_decoder(
        instruction,
        decoded_instr,
        instruction_trap,
        clk,
        program_counter,
        global_counter
    );

    reg_file reg_file(
        clk,
        rs1_address,
        rs2_address,
        rs1_data,
        rs2_data,
        reg_save_enable,
        reg_save_address,
        reg_save_value
    );

    alu alu(
        clk,
        rs1_data,
        rs2_data,
        decoded_instr,
        alu_output
    );

    branch branch(
        rs1_data,
        rs2_data,
        decoded_instr,
        program_counter,

        pc_reset_branch,
        reset_address_branch
    );

    jump jump(
        decoded_instr,
        rs1_data,
        program_counter,
        register_save_jump,
        pc_reset_address_jump,
        pc_reset_jump
    );

endmodule
