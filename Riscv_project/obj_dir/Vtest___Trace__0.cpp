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
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[1U] 
                     | vlSelf->__Vm_traceActivity[3U]))) {
        bufp->chgWData(oldp+0,(vlSelf->test___DOT__wrapper__DOT__decoded_instr),199);
        bufp->chgIData(oldp+7,((vlSelf->test___DOT__wrapper__DOT__rs1_data 
                                + ((vlSelf->test___DOT__wrapper__DOT__decoded_instr[4U] 
                                    << 0x19U) | (vlSelf->test___DOT__wrapper__DOT__decoded_instr[3U] 
                                                 >> 7U)))),32);
        bufp->chgBit(oldp+8,((1U & (vlSelf->test___DOT__wrapper__DOT__decoded_instr[0U] 
                                    >> 4U))));
        bufp->chgIData(oldp+9,(vlSelf->test___DOT__wrapper__DOT__rs2_data),32);
        bufp->chgCData(oldp+10,((0x1fU & (vlSelf->test___DOT__wrapper__DOT__decoded_instr[5U] 
                                          >> 0x13U))),5);
        bufp->chgCData(oldp+11,((0x1fU & (vlSelf->test___DOT__wrapper__DOT__decoded_instr[5U] 
                                          >> 0xeU))),5);
        bufp->chgIData(oldp+12,(vlSelf->test___DOT__wrapper__DOT__rs1_data),32);
        bufp->chgBit(oldp+13,((1U & (~ (IData)((0U 
                                                != 
                                                (0x18U 
                                                 & vlSelf->test___DOT__wrapper__DOT__decoded_instr[0U])))))));
        bufp->chgCData(oldp+14,((vlSelf->test___DOT__wrapper__DOT__decoded_instr[5U] 
                                 >> 0x1bU)),5);
        bufp->chgIData(oldp+15,(vlSelf->test___DOT__wrapper__DOT__alu_output),32);
        bufp->chgBit(oldp+16,(vlSelf->test___DOT__wrapper__DOT__instruction_trap));
        bufp->chgBit(oldp+17,(((IData)(vlSelf->test___DOT__wrapper__DOT__pc_reset_branch) 
                               | (IData)(vlSelf->test___DOT__wrapper__DOT__pc_reset_jump))));
        bufp->chgBit(oldp+18,(vlSelf->test___DOT__wrapper__DOT__pc_reset_branch));
        bufp->chgIData(oldp+19,(vlSelf->test___DOT__wrapper__DOT__reset_address_branch),32);
        bufp->chgBit(oldp+20,(vlSelf->test___DOT__wrapper__DOT__pc_reset_jump));
        bufp->chgIData(oldp+21,(vlSelf->test___DOT__wrapper__DOT__alu__DOT__unnamedblk1__DOT__rs1_x),32);
        bufp->chgIData(oldp+22,(vlSelf->test___DOT__wrapper__DOT__alu__DOT__unnamedblk1__DOT__rs2_x),32);
        bufp->chgIData(oldp+23,(vlSelf->test___DOT__wrapper__DOT__branch__DOT__unnamedblk1__DOT__rs1_data_unsigned),32);
        bufp->chgIData(oldp+24,(vlSelf->test___DOT__wrapper__DOT__branch__DOT__unnamedblk1__DOT__rs2_data_unsigned),32);
        bufp->chgCData(oldp+25,(vlSelf->test___DOT__wrapper__DOT__instruction_decoder__DOT__unnamedblk1__DOT__opcode),7);
        bufp->chgCData(oldp+26,(vlSelf->test___DOT__wrapper__DOT__instruction_decoder__DOT__unnamedblk1__DOT__rd),5);
        bufp->chgCData(oldp+27,(vlSelf->test___DOT__wrapper__DOT__instruction_decoder__DOT__unnamedblk1__DOT__func3),3);
        bufp->chgCData(oldp+28,(vlSelf->test___DOT__wrapper__DOT__instruction_decoder__DOT__unnamedblk1__DOT__rs1),5);
        bufp->chgCData(oldp+29,(vlSelf->test___DOT__wrapper__DOT__instruction_decoder__DOT__unnamedblk1__DOT__rs2),5);
        bufp->chgCData(oldp+30,(vlSelf->test___DOT__wrapper__DOT__instruction_decoder__DOT__unnamedblk1__DOT__func7),7);
        bufp->chgBit(oldp+31,(vlSelf->test___DOT__wrapper__DOT__instruction_decoder__DOT__unnamedblk1__DOT__is_r));
        bufp->chgBit(oldp+32,(vlSelf->test___DOT__wrapper__DOT__instruction_decoder__DOT__unnamedblk1__DOT__is_i));
        bufp->chgBit(oldp+33,(vlSelf->test___DOT__wrapper__DOT__instruction_decoder__DOT__unnamedblk1__DOT__is_s));
        bufp->chgBit(oldp+34,(vlSelf->test___DOT__wrapper__DOT__instruction_decoder__DOT__unnamedblk1__DOT__is_b));
        bufp->chgBit(oldp+35,(vlSelf->test___DOT__wrapper__DOT__instruction_decoder__DOT__unnamedblk1__DOT__is_u));
        bufp->chgBit(oldp+36,(vlSelf->test___DOT__wrapper__DOT__instruction_decoder__DOT__unnamedblk1__DOT__is_j));
        bufp->chgCData(oldp+37,((7U & (vlSelf->test___DOT__wrapper__DOT__decoded_instr[5U] 
                                       >> 0x18U))),3);
        bufp->chgSData(oldp+38,((0x3ffU & ((vlSelf->test___DOT__wrapper__DOT__rs1_data 
                                            + ((vlSelf->test___DOT__wrapper__DOT__decoded_instr[4U] 
                                                << 0x19U) 
                                               | (vlSelf->test___DOT__wrapper__DOT__decoded_instr[3U] 
                                                  >> 7U))) 
                                           >> 2U))),10);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[2U])) {
        bufp->chgIData(oldp+39,(vlSelf->test___DOT__wrapper__DOT__program_counter),32);
        bufp->chgIData(oldp+40,(vlSelf->test___DOT__wrapper__DOT__instruction),32);
        bufp->chgSData(oldp+41,((0x3ffU & (vlSelf->test___DOT__wrapper__DOT__program_counter 
                                           >> 2U))),10);
        bufp->chgIData(oldp+42,(vlSelf->test___DOT__wrapper__DOT__reg_file__DOT__block[0]),32);
        bufp->chgIData(oldp+43,(vlSelf->test___DOT__wrapper__DOT__reg_file__DOT__block[1]),32);
        bufp->chgIData(oldp+44,(vlSelf->test___DOT__wrapper__DOT__reg_file__DOT__block[2]),32);
        bufp->chgIData(oldp+45,(vlSelf->test___DOT__wrapper__DOT__reg_file__DOT__block[3]),32);
        bufp->chgIData(oldp+46,(vlSelf->test___DOT__wrapper__DOT__reg_file__DOT__block[4]),32);
        bufp->chgIData(oldp+47,(vlSelf->test___DOT__wrapper__DOT__reg_file__DOT__block[5]),32);
        bufp->chgIData(oldp+48,(vlSelf->test___DOT__wrapper__DOT__reg_file__DOT__block[6]),32);
        bufp->chgIData(oldp+49,(vlSelf->test___DOT__wrapper__DOT__reg_file__DOT__block[7]),32);
        bufp->chgIData(oldp+50,(vlSelf->test___DOT__wrapper__DOT__reg_file__DOT__block[8]),32);
        bufp->chgIData(oldp+51,(vlSelf->test___DOT__wrapper__DOT__reg_file__DOT__block[9]),32);
        bufp->chgIData(oldp+52,(vlSelf->test___DOT__wrapper__DOT__reg_file__DOT__block[10]),32);
        bufp->chgIData(oldp+53,(vlSelf->test___DOT__wrapper__DOT__reg_file__DOT__block[11]),32);
        bufp->chgIData(oldp+54,(vlSelf->test___DOT__wrapper__DOT__reg_file__DOT__block[12]),32);
        bufp->chgIData(oldp+55,(vlSelf->test___DOT__wrapper__DOT__reg_file__DOT__block[13]),32);
        bufp->chgIData(oldp+56,(vlSelf->test___DOT__wrapper__DOT__reg_file__DOT__block[14]),32);
        bufp->chgIData(oldp+57,(vlSelf->test___DOT__wrapper__DOT__reg_file__DOT__block[15]),32);
        bufp->chgIData(oldp+58,(vlSelf->test___DOT__wrapper__DOT__reg_file__DOT__block[16]),32);
        bufp->chgIData(oldp+59,(vlSelf->test___DOT__wrapper__DOT__reg_file__DOT__block[17]),32);
        bufp->chgIData(oldp+60,(vlSelf->test___DOT__wrapper__DOT__reg_file__DOT__block[18]),32);
        bufp->chgIData(oldp+61,(vlSelf->test___DOT__wrapper__DOT__reg_file__DOT__block[19]),32);
        bufp->chgIData(oldp+62,(vlSelf->test___DOT__wrapper__DOT__reg_file__DOT__block[20]),32);
        bufp->chgIData(oldp+63,(vlSelf->test___DOT__wrapper__DOT__reg_file__DOT__block[21]),32);
        bufp->chgIData(oldp+64,(vlSelf->test___DOT__wrapper__DOT__reg_file__DOT__block[22]),32);
        bufp->chgIData(oldp+65,(vlSelf->test___DOT__wrapper__DOT__reg_file__DOT__block[23]),32);
        bufp->chgIData(oldp+66,(vlSelf->test___DOT__wrapper__DOT__reg_file__DOT__block[24]),32);
        bufp->chgIData(oldp+67,(vlSelf->test___DOT__wrapper__DOT__reg_file__DOT__block[25]),32);
        bufp->chgIData(oldp+68,(vlSelf->test___DOT__wrapper__DOT__reg_file__DOT__block[26]),32);
        bufp->chgIData(oldp+69,(vlSelf->test___DOT__wrapper__DOT__reg_file__DOT__block[27]),32);
        bufp->chgIData(oldp+70,(vlSelf->test___DOT__wrapper__DOT__reg_file__DOT__block[28]),32);
        bufp->chgIData(oldp+71,(vlSelf->test___DOT__wrapper__DOT__reg_file__DOT__block[29]),32);
        bufp->chgIData(oldp+72,(vlSelf->test___DOT__wrapper__DOT__reg_file__DOT__block[30]),32);
        bufp->chgIData(oldp+73,(vlSelf->test___DOT__wrapper__DOT__reg_file__DOT__block[31]),32);
    }
    bufp->chgBit(oldp+74,(vlSelf->test___DOT__clk));
    bufp->chgCData(oldp+75,(vlSelf->test___DOT____Vcellinp__wrapper____pinNumber1),2);
    bufp->chgIData(oldp+76,(vlSelf->test___DOT__wrapper__DOT__global_counter),32);
    bufp->chgIData(oldp+77,(vlSelf->test___DOT__wrapper__DOT__ram_controller__DOT__bram_block
                            [(0x3ffU & ((vlSelf->test___DOT__wrapper__DOT__rs1_data 
                                         + ((vlSelf->test___DOT__wrapper__DOT__decoded_instr[4U] 
                                             << 0x19U) 
                                            | (vlSelf->test___DOT__wrapper__DOT__decoded_instr[3U] 
                                               >> 7U))) 
                                        >> 2U))]),32);
    bufp->chgIData(oldp+78,(((IData)((0U != (0x60U 
                                             & vlSelf->test___DOT__wrapper__DOT__decoded_instr[0U])))
                              ? vlSelf->test___DOT__wrapper__DOT__alu_output
                              : ((IData)(vlSelf->test___DOT__wrapper__DOT__pc_reset_jump)
                                  ? ((IData)((0U != 
                                              (3U & 
                                               vlSelf->test___DOT__wrapper__DOT__decoded_instr[0U])))
                                      ? ((IData)(4U) 
                                         + vlSelf->test___DOT__wrapper__DOT__program_counter)
                                      : 0U) : ((4U 
                                                & vlSelf->test___DOT__wrapper__DOT__decoded_instr[0U])
                                                ? (
                                                   (0x37U 
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
    bufp->chgIData(oldp+79,(((IData)(vlSelf->test___DOT__wrapper__DOT__pc_reset_branch)
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
    bufp->chgIData(oldp+80,(((2U & vlSelf->test___DOT__wrapper__DOT__decoded_instr[0U])
                              ? (vlSelf->test___DOT__wrapper__DOT__program_counter 
                                 + ((vlSelf->test___DOT__wrapper__DOT__decoded_instr[1U] 
                                     << 0x19U) | (vlSelf->test___DOT__wrapper__DOT__decoded_instr[0U] 
                                                  >> 7U)))
                              : ((1U & vlSelf->test___DOT__wrapper__DOT__decoded_instr[0U])
                                  ? (((vlSelf->test___DOT__wrapper__DOT__decoded_instr[5U] 
                                       << 0x19U) | 
                                      (vlSelf->test___DOT__wrapper__DOT__decoded_instr[4U] 
                                       >> 7U)) + vlSelf->test___DOT__wrapper__DOT__rs1_data)
                                  : 0U))),32);
    bufp->chgIData(oldp+81,(((IData)((0U != (3U & vlSelf->test___DOT__wrapper__DOT__decoded_instr[0U])))
                              ? ((IData)(4U) + vlSelf->test___DOT__wrapper__DOT__program_counter)
                              : 0U)),32);
    bufp->chgIData(oldp+82,(vlSelf->test___DOT__wrapper__DOT__pc__DOT__current_counter),32);
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
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[3U] = 0U;
}
