`include "decoded_instr.svh"

module wrapper (
    input logic[1:0] clk
);

    // PC
    logic[31:0] program_counter;

    // INSTRUCION
    logic[31:0] instruction;

    // DECODED INSTRUCTION
    decoded_instr_t decoded_instr;

    // RAM LOAD ARGS
    logic [31:0] ram_load_address;
    logic [31:0] ram_load_value;

    // RAM STORE ARGS
    logic [31:0] ram_store_address;
    logic [0:0] ram_store_enabled;
    logic [31:0] ram_store_value;

    // REGISTER LOAD ARGS
    logic [4:0] rs1_address = decoded_instr.rs1;
    logic [4:0] rs2_address = decoded_instr.rs2;
    logic [31:0] rs1_data;
    logic [31:0] rs2_data;
    
    // REGISTER STORE ARGS
    logic [0:0] reg_save_enable = !(decoded_instr.is_s || decoded_instr.is_b);
    logic [4:0] reg_save_address = decoded_instr.rd;
    logic [31:0] reg_save_value = (decoded_instr.is_r == 1'b1) ? alu_output : 32'h00000000;

    // ALU OUTPUT
    logic [31:0] alu_output;

    // CPU STALL
    logic [0:0] stall;

    // TRAPS
    logic [0:0] ram_trap;

    // PC RESET
    logic [0:0] reset;
    logic [31:0] reset_address;

    ram_controller ram_controller(
        clk,
        program_counter,
        instruction,
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
        reset,
        reset_address,
        stall,
        program_counter
    );

    instruction_decoder instruction_decoder(
        instruction,
        decoded_instr
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

endmodule
