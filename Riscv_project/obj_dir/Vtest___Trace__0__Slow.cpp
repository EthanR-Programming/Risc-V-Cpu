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
    tracep->declBit(c+55,0,"clk",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("wrapper", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+56,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+1,0,"program_counter",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2,0,"instruction",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declArray(c+3,0,"decoded_instr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 197,0);
    tracep->declBus(c+57,0,"ram_load_address",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+10,0,"ram_load_value",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+58,0,"ram_store_address",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+59,0,"ram_store_enabled",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+60,0,"ram_store_value",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+11,0,"rs1_address",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+12,0,"rs2_address",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+13,0,"rs1_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+14,0,"rs2_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+15,0,"reg_save_enable",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+16,0,"reg_save_address",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+17,0,"reg_save_value",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+18,0,"alu_output",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+61,0,"stall",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+62,0,"ram_trap",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+63,0,"reset",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+64,0,"reset_address",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("alu", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+55,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+13,0,"rs1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+14,0,"rs2",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declArray(c+3,0,"instr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 197,0);
    tracep->declBus(c+18,0,"result",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("unnamedblk1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+19,0,"rs1_x",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+20,0,"rs2_x",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("instruction_decoder", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+2,0,"instruction",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declArray(c+3,0,"mask",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 197,0);
    tracep->declBus(c+21,0,"trap_instr",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->popPrefix();
    tracep->pushPrefix("pc", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+55,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+63,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+64,0,"reset_address",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+61,0,"stall",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+1,0,"program_counter",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("ram_controller", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+55,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+1,0,"pc",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2,0,"instruction",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+57,0,"load_address",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+10,0,"load_value",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+58,0,"store_address",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+59,0,"store_enabled",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+60,0,"store_value",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+61,0,"stall",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+62,0,"trap_ram",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+22,0,"pc_idx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBus(c+65,0,"store_idx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBus(c+66,0,"load_idx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->popPrefix();
    tracep->pushPrefix("reg_file", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+55,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+11,0,"rs1_address",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+12,0,"rs2_address",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+13,0,"rs1_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+14,0,"rs2_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+15,0,"save_enable",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+16,0,"save_address",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+17,0,"save_value",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("block", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+23+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 31,0);
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
    bufp->fullIData(oldp+57,(vlSelf->test___DOT__wrapper__DOT__ram_load_address),32);
    bufp->fullIData(oldp+58,(vlSelf->test___DOT__wrapper__DOT__ram_store_address),32);
    bufp->fullBit(oldp+59,(vlSelf->test___DOT__wrapper__DOT__ram_store_enabled));
    bufp->fullIData(oldp+60,(vlSelf->test___DOT__wrapper__DOT__ram_store_value),32);
    bufp->fullBit(oldp+61,(vlSelf->test___DOT__wrapper__DOT__stall));
    bufp->fullBit(oldp+62,(vlSelf->test___DOT__wrapper__DOT__ram_trap));
    bufp->fullBit(oldp+63,(vlSelf->test___DOT__wrapper__DOT__reset));
    bufp->fullIData(oldp+64,(vlSelf->test___DOT__wrapper__DOT__reset_address),32);
    bufp->fullSData(oldp+65,((0x3ffU & (vlSelf->test___DOT__wrapper__DOT__ram_load_address 
                                        >> 2U))),10);
    bufp->fullSData(oldp+66,((0x3ffU & (vlSelf->test___DOT__wrapper__DOT__ram_store_address 
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
    bufp->fullIData(oldp+1,(vlSelf->test___DOT__wrapper__DOT__program_counter),32);
    bufp->fullIData(oldp+2,(vlSelf->test___DOT__wrapper__DOT__instruction),32);
    bufp->fullWData(oldp+3,(vlSelf->test___DOT__wrapper__DOT__decoded_instr),198);
    bufp->fullIData(oldp+10,(vlSelf->test___DOT__wrapper__DOT__ram_load_value),32);
    bufp->fullCData(oldp+11,((0x1fU & (vlSelf->test___DOT__wrapper__DOT__decoded_instr[5U] 
                                       >> 0x12U))),5);
    bufp->fullCData(oldp+12,((0x1fU & (vlSelf->test___DOT__wrapper__DOT__decoded_instr[5U] 
                                       >> 0xdU))),5);
    bufp->fullIData(oldp+13,(vlSelf->test___DOT__wrapper__DOT__reg_file__DOT__block
                             [(0x1fU & (vlSelf->test___DOT__wrapper__DOT__decoded_instr[5U] 
                                        >> 0x12U))]),32);
    bufp->fullIData(oldp+14,(vlSelf->test___DOT__wrapper__DOT__reg_file__DOT__block
                             [(0x1fU & (vlSelf->test___DOT__wrapper__DOT__decoded_instr[5U] 
                                        >> 0xdU))]),32);
    bufp->fullBit(oldp+15,((1U & (~ (IData)((0U != 
                                             (0xcU 
                                              & vlSelf->test___DOT__wrapper__DOT__decoded_instr[0U])))))));
    bufp->fullCData(oldp+16,((0x1fU & (vlSelf->test___DOT__wrapper__DOT__decoded_instr[5U] 
                                       >> 0x1aU))),5);
    bufp->fullIData(oldp+17,(((0x20U & vlSelf->test___DOT__wrapper__DOT__decoded_instr[0U])
                               ? vlSelf->test___DOT__wrapper__DOT__alu_output
                               : 0U)),32);
    bufp->fullIData(oldp+18,(vlSelf->test___DOT__wrapper__DOT__alu_output),32);
    bufp->fullIData(oldp+19,(vlSelf->test___DOT__wrapper__DOT__alu__DOT__unnamedblk1__DOT__rs1_x),32);
    bufp->fullIData(oldp+20,(vlSelf->test___DOT__wrapper__DOT__alu__DOT__unnamedblk1__DOT__rs2_x),32);
    bufp->fullBit(oldp+21,(vlSelf->test___DOT__wrapper__DOT__instruction_decoder__DOT__trap_instr));
    bufp->fullSData(oldp+22,((0x3ffU & (vlSelf->test___DOT__wrapper__DOT__program_counter 
                                        >> 2U))),10);
    bufp->fullIData(oldp+23,(vlSelf->test___DOT__wrapper__DOT__reg_file__DOT__block[0]),32);
    bufp->fullIData(oldp+24,(vlSelf->test___DOT__wrapper__DOT__reg_file__DOT__block[1]),32);
    bufp->fullIData(oldp+25,(vlSelf->test___DOT__wrapper__DOT__reg_file__DOT__block[2]),32);
    bufp->fullIData(oldp+26,(vlSelf->test___DOT__wrapper__DOT__reg_file__DOT__block[3]),32);
    bufp->fullIData(oldp+27,(vlSelf->test___DOT__wrapper__DOT__reg_file__DOT__block[4]),32);
    bufp->fullIData(oldp+28,(vlSelf->test___DOT__wrapper__DOT__reg_file__DOT__block[5]),32);
    bufp->fullIData(oldp+29,(vlSelf->test___DOT__wrapper__DOT__reg_file__DOT__block[6]),32);
    bufp->fullIData(oldp+30,(vlSelf->test___DOT__wrapper__DOT__reg_file__DOT__block[7]),32);
    bufp->fullIData(oldp+31,(vlSelf->test___DOT__wrapper__DOT__reg_file__DOT__block[8]),32);
    bufp->fullIData(oldp+32,(vlSelf->test___DOT__wrapper__DOT__reg_file__DOT__block[9]),32);
    bufp->fullIData(oldp+33,(vlSelf->test___DOT__wrapper__DOT__reg_file__DOT__block[10]),32);
    bufp->fullIData(oldp+34,(vlSelf->test___DOT__wrapper__DOT__reg_file__DOT__block[11]),32);
    bufp->fullIData(oldp+35,(vlSelf->test___DOT__wrapper__DOT__reg_file__DOT__block[12]),32);
    bufp->fullIData(oldp+36,(vlSelf->test___DOT__wrapper__DOT__reg_file__DOT__block[13]),32);
    bufp->fullIData(oldp+37,(vlSelf->test___DOT__wrapper__DOT__reg_file__DOT__block[14]),32);
    bufp->fullIData(oldp+38,(vlSelf->test___DOT__wrapper__DOT__reg_file__DOT__block[15]),32);
    bufp->fullIData(oldp+39,(vlSelf->test___DOT__wrapper__DOT__reg_file__DOT__block[16]),32);
    bufp->fullIData(oldp+40,(vlSelf->test___DOT__wrapper__DOT__reg_file__DOT__block[17]),32);
    bufp->fullIData(oldp+41,(vlSelf->test___DOT__wrapper__DOT__reg_file__DOT__block[18]),32);
    bufp->fullIData(oldp+42,(vlSelf->test___DOT__wrapper__DOT__reg_file__DOT__block[19]),32);
    bufp->fullIData(oldp+43,(vlSelf->test___DOT__wrapper__DOT__reg_file__DOT__block[20]),32);
    bufp->fullIData(oldp+44,(vlSelf->test___DOT__wrapper__DOT__reg_file__DOT__block[21]),32);
    bufp->fullIData(oldp+45,(vlSelf->test___DOT__wrapper__DOT__reg_file__DOT__block[22]),32);
    bufp->fullIData(oldp+46,(vlSelf->test___DOT__wrapper__DOT__reg_file__DOT__block[23]),32);
    bufp->fullIData(oldp+47,(vlSelf->test___DOT__wrapper__DOT__reg_file__DOT__block[24]),32);
    bufp->fullIData(oldp+48,(vlSelf->test___DOT__wrapper__DOT__reg_file__DOT__block[25]),32);
    bufp->fullIData(oldp+49,(vlSelf->test___DOT__wrapper__DOT__reg_file__DOT__block[26]),32);
    bufp->fullIData(oldp+50,(vlSelf->test___DOT__wrapper__DOT__reg_file__DOT__block[27]),32);
    bufp->fullIData(oldp+51,(vlSelf->test___DOT__wrapper__DOT__reg_file__DOT__block[28]),32);
    bufp->fullIData(oldp+52,(vlSelf->test___DOT__wrapper__DOT__reg_file__DOT__block[29]),32);
    bufp->fullIData(oldp+53,(vlSelf->test___DOT__wrapper__DOT__reg_file__DOT__block[30]),32);
    bufp->fullIData(oldp+54,(vlSelf->test___DOT__wrapper__DOT__reg_file__DOT__block[31]),32);
    bufp->fullBit(oldp+55,(vlSelf->test___DOT__clk));
    bufp->fullCData(oldp+56,(vlSelf->test___DOT__clk),2);
}
