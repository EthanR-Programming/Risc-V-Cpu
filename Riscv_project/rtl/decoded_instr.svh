`ifndef decoded_instr_t_d
`define decoded_instr_t_d
    
// DECODED INSTRUCTION STRUCT
typedef struct packed {
    // Basic fields
    logic [6:0] opcode;
    logic [4:0] rd;
    logic [2:0] func3;
    logic [4:0] rs1;
    logic [4:0] rs2;
    logic [6:0] func7;
    // Immediates (already sign-extended)
    logic signed [31:0] imm_i;
    logic signed [31:0] imm_s;
    logic signed [31:0] imm_b;
    logic signed [31:0] imm_u;
    logic signed [31:0] imm_j;
    // Type flags (boolean)
    logic [0:0] is_r;
    logic [0:0] is_i;
    logic [0:0] is_s;
    logic [0:0] is_b;
    logic [0:0] is_u;
    logic [0:0] is_j;

} decoded_instr_t;

`endif