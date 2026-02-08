// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vtest___Syms.h"


void Vtest____024root__trace_chg_0_sub_0(Vtest____024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vtest____024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtest____024root__trace_chg_0\n"); );
    // Init
    Vtest____024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtest____024root*>(voidSelf);
    Vtest___Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vtest____024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void Vtest____024root__trace_chg_0_sub_0(Vtest____024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vtest___Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtest____024root__trace_chg_0_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
        bufp->chgIData(oldp+0,(vlSelf->test___DOT__wrapper__DOT__program_counter),32);
        bufp->chgIData(oldp+1,(vlSelf->test___DOT__wrapper__DOT__instruction),32);
        bufp->chgWData(oldp+2,(vlSelf->test___DOT__wrapper__DOT__decoded_instr),198);
        bufp->chgIData(oldp+9,(vlSelf->test___DOT__wrapper__DOT__ram_load_value),32);
        bufp->chgCData(oldp+10,((0x1fU & (vlSelf->test___DOT__wrapper__DOT__decoded_instr[5U] 
                                          >> 0x12U))),5);
        bufp->chgCData(oldp+11,((0x1fU & (vlSelf->test___DOT__wrapper__DOT__decoded_instr[5U] 
                                          >> 0xdU))),5);
        bufp->chgIData(oldp+12,(vlSelf->test___DOT__wrapper__DOT__reg_file__DOT__block
                                [(0x1fU & (vlSelf->test___DOT__wrapper__DOT__decoded_instr[5U] 
                                           >> 0x12U))]),32);
        bufp->chgIData(oldp+13,(vlSelf->test___DOT__wrapper__DOT__reg_file__DOT__block
                                [(0x1fU & (vlSelf->test___DOT__wrapper__DOT__decoded_instr[5U] 
                                           >> 0xdU))]),32);
        bufp->chgBit(oldp+14,((1U & (~ (IData)((0U 
                                                != 
                                                (0xcU 
                                                 & vlSelf->test___DOT__wrapper__DOT__decoded_instr[0U])))))));
        bufp->chgCData(oldp+15,((0x1fU & (vlSelf->test___DOT__wrapper__DOT__decoded_instr[5U] 
                                          >> 0x1aU))),5);
        bufp->chgIData(oldp+16,(((0x20U & vlSelf->test___DOT__wrapper__DOT__decoded_instr[0U])
                                  ? vlSelf->test___DOT__wrapper__DOT__alu_output
                                  : 0U)),32);
        bufp->chgIData(oldp+17,(vlSelf->test___DOT__wrapper__DOT__alu_output),32);
        bufp->chgIData(oldp+18,(vlSelf->test___DOT__wrapper__DOT__alu__DOT__unnamedblk1__DOT__rs1_x),32);
        bufp->chgIData(oldp+19,(vlSelf->test___DOT__wrapper__DOT__alu__DOT__unnamedblk1__DOT__rs2_x),32);
        bufp->chgBit(oldp+20,(vlSelf->test___DOT__wrapper__DOT__instruction_decoder__DOT__trap_instr));
        bufp->chgSData(oldp+21,((0x3ffU & (vlSelf->test___DOT__wrapper__DOT__program_counter 
                                           >> 2U))),10);
        bufp->chgIData(oldp+22,(vlSelf->test___DOT__wrapper__DOT__reg_file__DOT__block[0]),32);
        bufp->chgIData(oldp+23,(vlSelf->test___DOT__wrapper__DOT__reg_file__DOT__block[1]),32);
        bufp->chgIData(oldp+24,(vlSelf->test___DOT__wrapper__DOT__reg_file__DOT__block[2]),32);
        bufp->chgIData(oldp+25,(vlSelf->test___DOT__wrapper__DOT__reg_file__DOT__block[3]),32);
        bufp->chgIData(oldp+26,(vlSelf->test___DOT__wrapper__DOT__reg_file__DOT__block[4]),32);
        bufp->chgIData(oldp+27,(vlSelf->test___DOT__wrapper__DOT__reg_file__DOT__block[5]),32);
        bufp->chgIData(oldp+28,(vlSelf->test___DOT__wrapper__DOT__reg_file__DOT__block[6]),32);
        bufp->chgIData(oldp+29,(vlSelf->test___DOT__wrapper__DOT__reg_file__DOT__block[7]),32);
        bufp->chgIData(oldp+30,(vlSelf->test___DOT__wrapper__DOT__reg_file__DOT__block[8]),32);
        bufp->chgIData(oldp+31,(vlSelf->test___DOT__wrapper__DOT__reg_file__DOT__block[9]),32);
        bufp->chgIData(oldp+32,(vlSelf->test___DOT__wrapper__DOT__reg_file__DOT__block[10]),32);
        bufp->chgIData(oldp+33,(vlSelf->test___DOT__wrapper__DOT__reg_file__DOT__block[11]),32);
        bufp->chgIData(oldp+34,(vlSelf->test___DOT__wrapper__DOT__reg_file__DOT__block[12]),32);
        bufp->chgIData(oldp+35,(vlSelf->test___DOT__wrapper__DOT__reg_file__DOT__block[13]),32);
        bufp->chgIData(oldp+36,(vlSelf->test___DOT__wrapper__DOT__reg_file__DOT__block[14]),32);
        bufp->chgIData(oldp+37,(vlSelf->test___DOT__wrapper__DOT__reg_file__DOT__block[15]),32);
        bufp->chgIData(oldp+38,(vlSelf->test___DOT__wrapper__DOT__reg_file__DOT__block[16]),32);
        bufp->chgIData(oldp+39,(vlSelf->test___DOT__wrapper__DOT__reg_file__DOT__block[17]),32);
        bufp->chgIData(oldp+40,(vlSelf->test___DOT__wrapper__DOT__reg_file__DOT__block[18]),32);
        bufp->chgIData(oldp+41,(vlSelf->test___DOT__wrapper__DOT__reg_file__DOT__block[19]),32);
        bufp->chgIData(oldp+42,(vlSelf->test___DOT__wrapper__DOT__reg_file__DOT__block[20]),32);
        bufp->chgIData(oldp+43,(vlSelf->test___DOT__wrapper__DOT__reg_file__DOT__block[21]),32);
        bufp->chgIData(oldp+44,(vlSelf->test___DOT__wrapper__DOT__reg_file__DOT__block[22]),32);
        bufp->chgIData(oldp+45,(vlSelf->test___DOT__wrapper__DOT__reg_file__DOT__block[23]),32);
        bufp->chgIData(oldp+46,(vlSelf->test___DOT__wrapper__DOT__reg_file__DOT__block[24]),32);
        bufp->chgIData(oldp+47,(vlSelf->test___DOT__wrapper__DOT__reg_file__DOT__block[25]),32);
        bufp->chgIData(oldp+48,(vlSelf->test___DOT__wrapper__DOT__reg_file__DOT__block[26]),32);
        bufp->chgIData(oldp+49,(vlSelf->test___DOT__wrapper__DOT__reg_file__DOT__block[27]),32);
        bufp->chgIData(oldp+50,(vlSelf->test___DOT__wrapper__DOT__reg_file__DOT__block[28]),32);
        bufp->chgIData(oldp+51,(vlSelf->test___DOT__wrapper__DOT__reg_file__DOT__block[29]),32);
        bufp->chgIData(oldp+52,(vlSelf->test___DOT__wrapper__DOT__reg_file__DOT__block[30]),32);
        bufp->chgIData(oldp+53,(vlSelf->test___DOT__wrapper__DOT__reg_file__DOT__block[31]),32);
    }
    bufp->chgBit(oldp+54,(vlSelf->test___DOT__clk));
    bufp->chgCData(oldp+55,(vlSelf->test___DOT__clk),2);
}

void Vtest____024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtest____024root__trace_cleanup\n"); );
    // Init
    Vtest____024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtest____024root*>(voidSelf);
    Vtest___Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
}
