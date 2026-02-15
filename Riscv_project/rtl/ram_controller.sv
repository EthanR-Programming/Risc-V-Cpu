module ram_controller(
    input logic [0:0] clk,

    input logic [31:0] pc,
    output logic [31:0] instruction,
    input logic [2:0] func3,

    input logic [31:0] load_address,
    output logic [31:0] load_value,

    input logic [31:0] store_address,
    input logic [0:0] store_enabled,
    input logic [31:0] store_value,

    output logic [0:0] stall,

    output logic [0:0] trap_ram

);
    // Bram Block
    logic[31:0] bram_block[0:1023];

    // load program into block
    initial begin

        $readmemh("program.hex" , bram_block);
        $display("initialised program");

    end

    // Masking inputs for working logic
    wire [9:0] pc_idx = pc[11:2];
    wire [9:0] store_idx = load_address[11:2];
    wire [9:0] load_idx = store_address[11:2];

    always_comb begin
        load_value <= bram_block[load_idx];

        instruction <= bram_block[pc_idx];
    end

    always @(posedge clk ) begin
        if (store_enabled && func3 == 3'b010)
            bram_block[store_idx] <= store_value;

        if (store_enabled && func3 == 3'b001)
            bram_block[store_idx][15:0] <= store_value[15:0];

        if (store_enabled && func3 == 3'b000)
            bram_block[store_idx][7:0] <= store_value[7:0];
    end


endmodule
