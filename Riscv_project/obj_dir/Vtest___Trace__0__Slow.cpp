// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vtest___Syms.h"


VL_ATTR_COLD void Vtest____024root__trace_init_sub__TOP__0(Vtest____024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtest___Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtest____024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->pushPrefix("test_", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+75,0,"clk",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("wrapper", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+76,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+77,0,"global_counter",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+40,0,"program_counter",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+41,0,"instruction",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declArray(c+1,0,"decoded_instr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 198,0);
    tracep->declBus(c+84,0,"ram_load_address",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+78,0,"ram_load_value",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+8,0,"ram_store_address",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+9,0,"ram_store_enabled",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+10,0,"ram_store_value",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+11,0,"rs1_address",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+12,0,"rs2_address",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+13,0,"rs1_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+10,0,"rs2_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+14,0,"reg_save_enable",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+15,0,"reg_save_address",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+79,0,"reg_save_value",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+16,0,"alu_output",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+85,0,"stall",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+86,0,"ram_trap",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+17,0,"instruction_trap",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+18,0,"pc_reset",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+80,0,"reset_address",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+19,0,"pc_reset_branch",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+20,0,"reset_address_branch",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+21,0,"pc_reset_jump",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+81,0,"pc_reset_address_jump",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+82,0,"register_save_jump",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("alu", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+75,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+13,0,"rs1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+10,0,"rs2",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declArray(c+1,0,"instr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 198,0);
    tracep->declBus(c+16,0,"result",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("unnamedblk1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+22,0,"rs1_x",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+23,0,"rs2_x",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("branch", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+13,0,"rs1_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+10,0,"rs2_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declArray(c+1,0,"instr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 198,0);
    tracep->declBus(c+40,0,"pc",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+19,0,"pc_reset_branch",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+20,0,"reset_address",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("unnamedblk1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+24,0,"rs1_data_unsigned",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+25,0,"rs2_data_unsigned",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("instruction_decoder", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+41,0,"instruction",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declArray(c+1,0,"mask",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 198,0);
    tracep->declBus(c+17,0,"trap_instr",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+75,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+40,0,"pc",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+77,0,"global_counter",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("unnamedblk1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+26,0,"opcode",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+27,0,"rd",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 11,7);
    tracep->declBus(c+28,0,"func3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 14,12);
    tracep->declBus(c+29,0,"rs1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 19,15);
    tracep->declBus(c+30,0,"rs2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 24,20);
    tracep->declBus(c+31,0,"func7",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,25);
    tracep->declBus(c+32,0,"is_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+33,0,"is_i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+34,0,"is_s",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+35,0,"is_b",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+36,0,"is_u",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+37,0,"is_j",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("jump", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declArray(c+1,0,"instr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 198,0);
    tracep->declBus(c+13,0,"rs1_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+40,0,"program_counter",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+82,0,"reg_save_value",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+81,0,"pc_save_value",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+21,0,"pc_reset_jump",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->popPrefix();
    tracep->pushPrefix("pc", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+75,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+18,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+80,0,"reset_address",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+85,0,"stall",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+40,0,"program_counter",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+83,0,"current_counter",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("ram_controller", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+75,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+40,0,"pc",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+41,0,"instruction",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+38,0,"func3",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+84,0,"load_address",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+78,0,"load_value",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+8,0,"store_address",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+9,0,"store_enabled",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+10,0,"store_value",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+85,0,"stall",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+86,0,"trap_ram",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+42,0,"pc_idx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBus(c+87,0,"store_idx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBus(c+39,0,"load_idx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->popPrefix();
    tracep->pushPrefix("reg_file", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+75,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+11,0,"rs1_address",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+12,0,"rs2_address",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+13,0,"rs1_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+10,0,"rs2_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+14,0,"save_enable",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+15,0,"save_address",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+79,0,"save_value",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("block", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+43+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 31,0);
    }
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
}

VL_ATTR_COLD void Vtest____024root__trace_init_top(Vtest____024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtest___Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtest____024root__trace_init_top\n"); );
    // Body
    Vtest____024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vtest____024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
VL_ATTR_COLD void Vtest____024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vtest____024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vtest____024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vtest____024root__trace_register(Vtest____024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtest___Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtest____024root__trace_register\n"); );
    // Body
    tracep->addConstCb(&Vtest____024root__trace_const_0, 0U, vlSelf);
    tracep->addFullCb(&Vtest____024root__trace_full_0, 0U, vlSelf);
    tracep->addChgCb(&Vtest____024root__trace_chg_0, 0U, vlSelf);
    tracep->addCleanupCb(&Vtest____024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vtest____024root__trace_const_0_sub_0(Vtest____024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vtest____024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtest____024root__trace_const_0\n"); );
    // Init
    Vtest____024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtest____024root*>(voidSelf);
    Vtest___Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vtest____024root__trace_const_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vtest____024root__trace_const_0_sub_0(Vtest____024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vtest___Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtest____024root__trace_const_0_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullIData(oldp+84,(vlSelf->test___DOT__wrapper__DOT__ram_load_address),32);
    bufp->fullBit(oldp+85,(vlSelf->test___DOT__wrapper__DOT__stall));
    bufp->fullBit(oldp+86,(vlSelf->test___DOT__wrapper__DOT__ram_trap));
    bufp->fullSData(oldp+87,((0x3ffU & (vlSelf->test___DOT__wrapper__DOT__ram_load_address 
                                        >> 2U))),10);
}

VL_ATTR_COLD void Vtest____024root__trace_full_0_sub_0(Vtest____024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vtest____024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtest____024root__trace_full_0\n"); );
    // Init
    Vtest____024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtest____024root*>(voidSelf);
    Vtest___Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vtest____024root__trace_full_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vtest____024root__trace_full_0_sub_0(Vtest____024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vtest___Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtest____024root__trace_full_0_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullWData(oldp+1,(vlSelf->test___DOT__wrapper__DOT__decoded_instr),199);
    bufp->fullIData(oldp+8,((vlSelf->test___DOT__wrapper__DOT__rs1_data 
                             + ((vlSelf->test___DOT__wrapper__DOT__decoded_instr[4U] 
                                 << 0x19U) | (vlSelf->test___DOT__wrapper__DOT__decoded_instr[3U] 
                                              >> 7U)))),32);
    bufp->fullBit(oldp+9,((1U & (vlSelf->test___DOT__wrapper__DOT__decoded_instr[0U] 
                                 >> 4U))));
    bufp->fullIData(oldp+10,(vlSelf->test___DOT__wrapper__DOT__rs2_data),32);
    bufp->fullCData(oldp+11,((0x1fU & (vlSelf->test___DOT__wrapper__DOT__decoded_instr[5U] 
                                       >> 0x13U))),5);
    bufp->fullCData(oldp+12,((0x1fU & (vlSelf->test___DOT__wrapper__DOT__decoded_instr[5U] 
                                       >> 0xeU))),5);
    bufp->fullIData(oldp+13,(vlSelf->test___DOT__wrapper__DOT__rs1_data),32);
    bufp->fullBit(oldp+14,((1U & (~ (IData)((0U != 
                                             (0x18U 
                                              & vlSelf->test___DOT__wrapper__DOT__decoded_instr[0U])))))));
    bufp->fullCData(oldp+15,((vlSelf->test___DOT__wrapper__DOT__decoded_instr[5U] 
                              >> 0x1bU)),5);
    bufp->fullIData(oldp+16,(vlSelf->test___DOT__wrapper__DOT__alu_output),32);
    bufp->fullBit(oldp+17,(vlSelf->test___DOT__wrapper__DOT__instruction_trap));
    bufp->fullBit(oldp+18,(((IData)(vlSelf->test___DOT__wrapper__DOT__pc_reset_branch) 
                            | (IData)(vlSelf->test___DOT__wrapper__DOT__pc_reset_jump))));
    bufp->fullBit(oldp+19,(vlSelf->test___DOT__wrapper__DOT__pc_reset_branch));
    bufp->fullIData(oldp+20,(vlSelf->test___DOT__wrapper__DOT__reset_address_branch),32);
    bufp->fullBit(oldp+21,(vlSelf->test___DOT__wrapper__DOT__pc_reset_jump));
    bufp->fullIData(oldp+22,(vlSelf->test___DOT__wrapper__DOT__alu__DOT__unnamedblk1__DOT__rs1_x),32);
    bufp->fullIData(oldp+23,(vlSelf->test___DOT__wrapper__DOT__alu__DOT__unnamedblk1__DOT__rs2_x),32);
    bufp->fullIData(oldp+24,(vlSelf->test___DOT__wrapper__DOT__branch__DOT__unnamedblk1__DOT__rs1_data_unsigned),32);
    bufp->fullIData(oldp+25,(vlSelf->test___DOT__wrapper__DOT__branch__DOT__unnamedblk1__DOT__rs2_data_unsigned),32);
    bufp->fullCData(oldp+26,(vlSelf->test___DOT__wrapper__DOT__instruction_decoder__DOT__unnamedblk1__DOT__opcode),7);
    bufp->fullCData(oldp+27,(vlSelf->test___DOT__wrapper__DOT__instruction_decoder__DOT__unnamedblk1__DOT__rd),5);
    bufp->fullCData(oldp+28,(vlSelf->test___DOT__wrapper__DOT__instruction_decoder__DOT__unnamedblk1__DOT__func3),3);
    bufp->fullCData(oldp+29,(vlSelf->test___DOT__wrapper__DOT__instruction_decoder__DOT__unnamedblk1__DOT__rs1),5);
    bufp->fullCData(oldp+30,(vlSelf->test___DOT__wrapper__DOT__instruction_decoder__DOT__unnamedblk1__DOT__rs2),5);
    bufp->fullCData(oldp+31,(vlSelf->test___DOT__wrapper__DOT__instruction_decoder__DOT__unnamedblk1__DOT__func7),7);
    bufp->fullBit(oldp+32,(vlSelf->test___DOT__wrapper__DOT__instruction_decoder__DOT__unnamedblk1__DOT__is_r));
    bufp->fullBit(oldp+33,(vlSelf->test___DOT__wrapper__DOT__instruction_decoder__DOT__unnamedblk1__DOT__is_i));
    bufp->fullBit(oldp+34,(vlSelf->test___DOT__wrapper__DOT__instruction_decoder__DOT__unnamedblk1__DOT__is_s));
    bufp->fullBit(oldp+35,(vlSelf->test___DOT__wrapper__DOT__instruction_decoder__DOT__unnamedblk1__DOT__is_b));
    bufp->fullBit(oldp+36,(vlSelf->test___DOT__wrapper__DOT__instruction_decoder__DOT__unnamedblk1__DOT__is_u));
    bufp->fullBit(oldp+37,(vlSelf->test___DOT__wrapper__DOT__instruction_decoder__DOT__unnamedblk1__DOT__is_j));
    bufp->fullCData(oldp+38,((7U & (vlSelf->test___DOT__wrapper__DOT__decoded_instr[5U] 
                                    >> 0x18U))),3);
    bufp->fullSData(oldp+39,((0x3ffU & ((vlSelf->test___DOT__wrapper__DOT__rs1_data 
                                         + ((vlSelf->test___DOT__wrapper__DOT__decoded_instr[4U] 
                                             << 0x19U) 
                                            | (vlSelf->test___DOT__wrapper__DOT__decoded_instr[3U] 
                                               >> 7U))) 
                                        >> 2U))),10);
    bufp->fullIData(oldp+40,(vlSelf->test___DOT__wrapper__DOT__program_counter),32);
    bufp->fullIData(oldp+41,(vlSelf->test___DOT__wrapper__DOT__instruction),32);
    bufp->fullSData(oldp+42,((0x3ffU & (vlSelf->test___DOT__wrapper__DOT__program_counter 
                                        >> 2U))),10);
    bufp->fullIData(oldp+43,(vlSelf->test___DOT__wrapper__DOT__reg_file__DOT__block[0]),32);
    bufp->fullIData(oldp+44,(vlSelf->test___DOT__wrapper__DOT__reg_file__DOT__block[1]),32);
    bufp->fullIData(oldp+45,(vlSelf->test___DOT__wrapper__DOT__reg_file__DOT__block[2]),32);
    bufp->fullIData(oldp+46,(vlSelf->test___DOT__wrapper__DOT__reg_file__DOT__block[3]),32);
    bufp->fullIData(oldp+47,(vlSelf->test___DOT__wrapper__DOT__reg_file__DOT__block[4]),32);
    bufp->fullIData(oldp+48,(vlSelf->test___DOT__wrapper__DOT__reg_file__DOT__block[5]),32);
    bufp->fullIData(oldp+49,(vlSelf->test___DOT__wrapper__DOT__reg_file__DOT__block[6]),32);
    bufp->fullIData(oldp+50,(vlSelf->test___DOT__wrapper__DOT__reg_file__DOT__block[7]),32);
    bufp->fullIData(oldp+51,(vlSelf->test___DOT__wrapper__DOT__reg_file__DOT__block[8]),32);
    bufp->fullIData(oldp+52,(vlSelf->test___DOT__wrapper__DOT__reg_file__DOT__block[9]),32);
    bufp->fullIData(oldp+53,(vlSelf->test___DOT__wrapper__DOT__reg_file__DOT__block[10]),32);
    bufp->fullIData(oldp+54,(vlSelf->test___DOT__wrapper__DOT__reg_file__DOT__block[11]),32);
    bufp->fullIData(oldp+55,(vlSelf->test___DOT__wrapper__DOT__reg_file__DOT__block[12]),32);
    bufp->fullIData(oldp+56,(vlSelf->test___DOT__wrapper__DOT__reg_file__DOT__block[13]),32);
    bufp->fullIData(oldp+57,(vlSelf->test___DOT__wrapper__DOT__reg_file__DOT__block[14]),32);
    bufp->fullIData(oldp+58,(vlSelf->test___DOT__wrapper__DOT__reg_file__DOT__block[15]),32);
    bufp->fullIData(oldp+59,(vlSelf->test___DOT__wrapper__DOT__reg_file__DOT__block[16]),32);
    bufp->fullIData(oldp+60,(vlSelf->test___DOT__wrapper__DOT__reg_file__DOT__block[17]),32);
    bufp->fullIData(oldp+61,(vlSelf->test___DOT__wrapper__DOT__reg_file__DOT__block[18]),32);
    bufp->fullIData(oldp+62,(vlSelf->test___DOT__wrapper__DOT__reg_file__DOT__block[19]),32);
    bufp->fullIData(oldp+63,(vlSelf->test___DOT__wrapper__DOT__reg_file__DOT__block[20]),32);
    bufp->fullIData(oldp+64,(vlSelf->test___DOT__wrapper__DOT__reg_file__DOT__block[21]),32);
    bufp->fullIData(oldp+65,(vlSelf->test___DOT__wrapper__DOT__reg_file__DOT__block[22]),32);
    bufp->fullIData(oldp+66,(vlSelf->test___DOT__wrapper__DOT__reg_file__DOT__block[23]),32);
    bufp->fullIData(oldp+67,(vlSelf->test___DOT__wrapper__DOT__reg_file__DOT__block[24]),32);
    bufp->fullIData(oldp+68,(vlSelf->test___DOT__wrapper__DOT__reg_file__DOT__block[25]),32);
    bufp->fullIData(oldp+69,(vlSelf->test___DOT__wrapper__DOT__reg_file__DOT__block[26]),32);
    bufp->fullIData(oldp+70,(vlSelf->test___DOT__wrapper__DOT__reg_file__DOT__block[27]),32);
    bufp->fullIData(oldp+71,(vlSelf->test___DOT__wrapper__DOT__reg_file__DOT__block[28]),32);
    bufp->fullIData(oldp+72,(vlSelf->test___DOT__wrapper__DOT__reg_file__DOT__block[29]),32);
    bufp->fullIData(oldp+73,(vlSelf->test___DOT__wrapper__DOT__reg_file__DOT__block[30]),32);
    bufp->fullIData(oldp+74,(vlSelf->test___DOT__wrapper__DOT__reg_file__DOT__block[31]),32);
    bufp->fullBit(oldp+75,(vlSelf->test___DOT__clk));
    bufp->fullCData(oldp+76,(vlSelf->test___DOT____Vcellinp__wrapper____pinNumber1),2);
    bufp->fullIData(oldp+77,(vlSelf->test___DOT__wrapper__DOT__global_counter),32);
    bufp->fullIData(oldp+78,(vlSelf->test___DOT__wrapper__DOT__ram_controller__DOT__bram_block
                             [(0x3ffU & ((vlSelf->test___DOT__wrapper__DOT__rs1_data 
                                          + ((vlSelf->test___DOT__wrapper__DOT__decoded_instr[4U] 
                                              << 0x19U) 
                                             | (vlSelf->test___DOT__wrapper__DOT__decoded_instr[3U] 
                                                >> 7U))) 
                                         >> 2U))]),32);
    bufp->fullIData(oldp+79,(((IData)((0U != (0x60U 
                                              & vlSelf->test___DOT__wrapper__DOT__decoded_instr[0U])))
                               ? vlSelf->test___DOT__wrapper__DOT__alu_output
                               : ((IData)(vlSelf->test___DOT__wrapper__DOT__pc_reset_jump)
                                   ? ((IData)((0U != 
                                               (3U 
                                                & vlSelf->test___DOT__wrapper__DOT__decoded_instr[0U])))
                                       ? ((IData)(4U) 
                                          + vlSelf->test___DOT__wrapper__DOT__program_counter)
                                       : 0U) : ((4U 
                                                 & vlSelf->test___DOT__wrapper__DOT__decoded_instr[0U])
                                                 ? 
                                                ((0x37U 
                                                  == 
                                                  (0x7fU 
                                                   & vlSelf->test___DOT__wrapper__DOT__decoded_instr[6U]))
                                                  ? 
                                                 ((vlSelf->test___DOT__wrapper__DOT__decoded_instr[2U] 
                                                   << 0x19U) 
                                                  | (vlSelf->test___DOT__wrapper__DOT__decoded_instr[1U] 
                                                     >> 7U))
                                                  : 
                                                 (((vlSelf->test___DOT__wrapper__DOT__decoded_instr[2U] 
                                                    << 0x19U) 
                                                   | (vlSelf->test___DOT__wrapper__DOT__decoded_instr[1U] 
                                                      >> 7U)) 
                                                  + vlSelf->test___DOT__wrapper__DOT__program_counter))
                                                 : 0U)))),32);
    bufp->fullIData(oldp+80,(((IData)(vlSelf->test___DOT__wrapper__DOT__pc_reset_branch)
                               ? vlSelf->test___DOT__wrapper__DOT__reset_address_branch
                               : ((IData)(vlSelf->test___DOT__wrapper__DOT__pc_reset_jump)
                                   ? ((2U & vlSelf->test___DOT__wrapper__DOT__decoded_instr[0U])
                                       ? (vlSelf->test___DOT__wrapper__DOT__program_counter 
                                          + ((vlSelf->test___DOT__wrapper__DOT__decoded_instr[1U] 
                                              << 0x19U) 
                                             | (vlSelf->test___DOT__wrapper__DOT__decoded_instr[0U] 
                                                >> 7U)))
                                       : ((1U & vlSelf->test___DOT__wrapper__DOT__decoded_instr[0U])
                                           ? (((vlSelf->test___DOT__wrapper__DOT__decoded_instr[5U] 
                                                << 0x19U) 
                                               | (vlSelf->test___DOT__wrapper__DOT__decoded_instr[4U] 
                                                  >> 7U)) 
                                              + vlSelf->test___DOT__wrapper__DOT__rs1_data)
                                           : 0U)) : 0U))),32);
    bufp->fullIData(oldp+81,(((2U & vlSelf->test___DOT__wrapper__DOT__decoded_instr[0U])
                               ? (vlSelf->test___DOT__wrapper__DOT__program_counter 
                                  + ((vlSelf->test___DOT__wrapper__DOT__decoded_instr[1U] 
                                      << 0x19U) | (
                                                   vlSelf->test___DOT__wrapper__DOT__decoded_instr[0U] 
                                                   >> 7U)))
                               : ((1U & vlSelf->test___DOT__wrapper__DOT__decoded_instr[0U])
                                   ? (((vlSelf->test___DOT__wrapper__DOT__decoded_instr[5U] 
                                        << 0x19U) | 
                                       (vlSelf->test___DOT__wrapper__DOT__decoded_instr[4U] 
                                        >> 7U)) + vlSelf->test___DOT__wrapper__DOT__rs1_data)
                                   : 0U))),32);
    bufp->fullIData(oldp+82,(((IData)((0U != (3U & 
                                              vlSelf->test___DOT__wrapper__DOT__decoded_instr[0U])))
                               ? ((IData)(4U) + vlSelf->test___DOT__wrapper__DOT__program_counter)
                               : 0U)),32);
    bufp->fullIData(oldp+83,(vlSelf->test___DOT__wrapper__DOT__pc__DOT__current_counter),32);
}
