// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtest_.h for the primary calling header

#include "Vtest___pch.h"
#include "Vtest____024root.h"

VL_ATTR_COLD void Vtest____024root___eval_initial__TOP(Vtest____024root* vlSelf);
VlCoroutine Vtest____024root___eval_initial__TOP__Vtiming__0(Vtest____024root* vlSelf);

void Vtest____024root___eval_initial(Vtest____024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtest___Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtest____024root___eval_initial\n"); );
    // Body
    Vtest____024root___eval_initial__TOP(vlSelf);
    Vtest____024root___eval_initial__TOP__Vtiming__0(vlSelf);
    vlSelf->__Vtrigprevexpr___TOP__test___DOT__wrapper__DOT__decoded_instr__0[0U] 
        = vlSelf->test___DOT__wrapper__DOT__decoded_instr[0U];
    vlSelf->__Vtrigprevexpr___TOP__test___DOT__wrapper__DOT__decoded_instr__0[1U] 
        = vlSelf->test___DOT__wrapper__DOT__decoded_instr[1U];
    vlSelf->__Vtrigprevexpr___TOP__test___DOT__wrapper__DOT__decoded_instr__0[2U] 
        = vlSelf->test___DOT__wrapper__DOT__decoded_instr[2U];
    vlSelf->__Vtrigprevexpr___TOP__test___DOT__wrapper__DOT__decoded_instr__0[3U] 
        = vlSelf->test___DOT__wrapper__DOT__decoded_instr[3U];
    vlSelf->__Vtrigprevexpr___TOP__test___DOT__wrapper__DOT__decoded_instr__0[4U] 
        = vlSelf->test___DOT__wrapper__DOT__decoded_instr[4U];
    vlSelf->__Vtrigprevexpr___TOP__test___DOT__wrapper__DOT__decoded_instr__0[5U] 
        = vlSelf->test___DOT__wrapper__DOT__decoded_instr[5U];
    vlSelf->__Vtrigprevexpr___TOP__test___DOT__wrapper__DOT__decoded_instr__0[6U] 
        = vlSelf->test___DOT__wrapper__DOT__decoded_instr[6U];
    vlSelf->__Vtrigprevexpr___TOP__test___DOT__wrapper__DOT__decoded_instr__1[0U] 
        = vlSelf->test___DOT__wrapper__DOT__decoded_instr[0U];
    vlSelf->__Vtrigprevexpr___TOP__test___DOT__wrapper__DOT__decoded_instr__1[1U] 
        = vlSelf->test___DOT__wrapper__DOT__decoded_instr[1U];
    vlSelf->__Vtrigprevexpr___TOP__test___DOT__wrapper__DOT__decoded_instr__1[2U] 
        = vlSelf->test___DOT__wrapper__DOT__decoded_instr[2U];
    vlSelf->__Vtrigprevexpr___TOP__test___DOT__wrapper__DOT__decoded_instr__1[3U] 
        = vlSelf->test___DOT__wrapper__DOT__decoded_instr[3U];
    vlSelf->__Vtrigprevexpr___TOP__test___DOT__wrapper__DOT__decoded_instr__1[4U] 
        = vlSelf->test___DOT__wrapper__DOT__decoded_instr[4U];
    vlSelf->__Vtrigprevexpr___TOP__test___DOT__wrapper__DOT__decoded_instr__1[5U] 
        = vlSelf->test___DOT__wrapper__DOT__decoded_instr[5U];
    vlSelf->__Vtrigprevexpr___TOP__test___DOT__wrapper__DOT__decoded_instr__1[6U] 
        = vlSelf->test___DOT__wrapper__DOT__decoded_instr[6U];
    vlSelf->__Vtrigprevexpr___TOP__test___DOT____Vcellinp__wrapper____pinNumber1__0 
        = vlSelf->test___DOT____Vcellinp__wrapper____pinNumber1;
    vlSelf->__Vtrigprevexpr___TOP__test___DOT__clk__0 
        = vlSelf->test___DOT__clk;
}

VL_INLINE_OPT void Vtest____024root___act_sequent__TOP__0(Vtest____024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtest___Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtest____024root___act_sequent__TOP__0\n"); );
    // Body
    vlSelf->test___DOT____Vcellinp__wrapper____pinNumber1 
        = vlSelf->test___DOT__clk;
}

VL_INLINE_OPT void Vtest____024root___act_sequent__TOP__1(Vtest____024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtest___Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtest____024root___act_sequent__TOP__1\n"); );
    // Body
    vlSelf->test___DOT__wrapper__DOT__instruction_decoder__DOT__unnamedblk1__DOT__opcode 
        = (0x7fU & vlSelf->test___DOT__wrapper__DOT__decoded_instr[6U]);
    vlSelf->test___DOT__wrapper__DOT__instruction_decoder__DOT__unnamedblk1__DOT__rd 
        = (vlSelf->test___DOT__wrapper__DOT__decoded_instr[5U] 
           >> 0x1bU);
    vlSelf->test___DOT__wrapper__DOT__instruction_decoder__DOT__unnamedblk1__DOT__func3 
        = (7U & (vlSelf->test___DOT__wrapper__DOT__decoded_instr[5U] 
                 >> 0x18U));
    vlSelf->test___DOT__wrapper__DOT__instruction_decoder__DOT__unnamedblk1__DOT__rs1 
        = (0x1fU & (vlSelf->test___DOT__wrapper__DOT__decoded_instr[5U] 
                    >> 0x13U));
    vlSelf->test___DOT__wrapper__DOT__instruction_decoder__DOT__unnamedblk1__DOT__rs2 
        = (0x1fU & (vlSelf->test___DOT__wrapper__DOT__decoded_instr[5U] 
                    >> 0xeU));
    vlSelf->test___DOT__wrapper__DOT__instruction_decoder__DOT__unnamedblk1__DOT__func7 
        = (0x7fU & (vlSelf->test___DOT__wrapper__DOT__decoded_instr[5U] 
                    >> 7U));
    vlSelf->test___DOT__wrapper__DOT__instruction_decoder__DOT__unnamedblk1__DOT__is_r 
        = (1U & (vlSelf->test___DOT__wrapper__DOT__decoded_instr[0U] 
                 >> 6U));
    vlSelf->test___DOT__wrapper__DOT__instruction_decoder__DOT__unnamedblk1__DOT__is_i 
        = (1U & (vlSelf->test___DOT__wrapper__DOT__decoded_instr[0U] 
                 >> 5U));
    vlSelf->test___DOT__wrapper__DOT__instruction_decoder__DOT__unnamedblk1__DOT__is_s 
        = (1U & (vlSelf->test___DOT__wrapper__DOT__decoded_instr[0U] 
                 >> 4U));
    vlSelf->test___DOT__wrapper__DOT__instruction_decoder__DOT__unnamedblk1__DOT__is_b 
        = (1U & (vlSelf->test___DOT__wrapper__DOT__decoded_instr[0U] 
                 >> 3U));
    vlSelf->test___DOT__wrapper__DOT__instruction_decoder__DOT__unnamedblk1__DOT__is_u 
        = (1U & (vlSelf->test___DOT__wrapper__DOT__decoded_instr[0U] 
                 >> 2U));
    vlSelf->test___DOT__wrapper__DOT__instruction_decoder__DOT__unnamedblk1__DOT__is_j 
        = (1U & (vlSelf->test___DOT__wrapper__DOT__decoded_instr[0U] 
                 >> 1U));
    vlSelf->test___DOT__wrapper__DOT__decoded_instr[5U] 
        = ((0xffffffU & vlSelf->test___DOT__wrapper__DOT__decoded_instr[5U]) 
           | (0xff000000U & ((0xf8000000U & (vlSelf->test___DOT__wrapper__DOT__instruction 
                                             << 0x14U)) 
                             | (0x7000000U & (vlSelf->test___DOT__wrapper__DOT__instruction 
                                              << 0xcU)))));
    vlSelf->test___DOT__wrapper__DOT__decoded_instr[6U] 
        = (0x7fU & vlSelf->test___DOT__wrapper__DOT__instruction);
    vlSelf->test___DOT__wrapper__DOT__decoded_instr[5U] 
        = ((0xff00007fU & vlSelf->test___DOT__wrapper__DOT__decoded_instr[5U]) 
           | (0xffffff80U & ((0xf80000U & (vlSelf->test___DOT__wrapper__DOT__instruction 
                                           << 4U)) 
                             | ((0x7c000U & (vlSelf->test___DOT__wrapper__DOT__instruction 
                                             >> 6U)) 
                                | (0x3f80U & (vlSelf->test___DOT__wrapper__DOT__instruction 
                                              >> 0x12U))))));
    vlSelf->test___DOT__wrapper__DOT__decoded_instr[0U] 
        = ((0xffffffbfU & vlSelf->test___DOT__wrapper__DOT__decoded_instr[0U]) 
           | ((0x33U == (0x7fU & vlSelf->test___DOT__wrapper__DOT__decoded_instr[6U])) 
              << 6U));
    vlSelf->test___DOT__wrapper__DOT__decoded_instr[0U] 
        = ((0xffffffdfU & vlSelf->test___DOT__wrapper__DOT__decoded_instr[0U]) 
           | (((0x13U == (0x7fU & vlSelf->test___DOT__wrapper__DOT__decoded_instr[6U])) 
               | (3U == (0x7fU & vlSelf->test___DOT__wrapper__DOT__decoded_instr[6U]))) 
              << 5U));
    vlSelf->test___DOT__wrapper__DOT__decoded_instr[0U] 
        = ((0xffffffefU & vlSelf->test___DOT__wrapper__DOT__decoded_instr[0U]) 
           | ((0x23U == (0x7fU & vlSelf->test___DOT__wrapper__DOT__decoded_instr[6U])) 
              << 4U));
    vlSelf->test___DOT__wrapper__DOT__decoded_instr[0U] 
        = ((0xfffffff7U & vlSelf->test___DOT__wrapper__DOT__decoded_instr[0U]) 
           | ((0x63U == (0x7fU & vlSelf->test___DOT__wrapper__DOT__decoded_instr[6U])) 
              << 3U));
    vlSelf->test___DOT__wrapper__DOT__decoded_instr[0U] 
        = ((0xfffffffbU & vlSelf->test___DOT__wrapper__DOT__decoded_instr[0U]) 
           | (((0x37U == (0x7fU & vlSelf->test___DOT__wrapper__DOT__decoded_instr[6U])) 
               | (0x17U == (0x7fU & vlSelf->test___DOT__wrapper__DOT__decoded_instr[6U]))) 
              << 2U));
    vlSelf->test___DOT__wrapper__DOT__decoded_instr[0U] 
        = ((0xfffffffdU & vlSelf->test___DOT__wrapper__DOT__decoded_instr[0U]) 
           | ((0x6fU == (0x7fU & vlSelf->test___DOT__wrapper__DOT__decoded_instr[6U])) 
              << 1U));
    vlSelf->test___DOT__wrapper__DOT__decoded_instr[0U] 
        = ((0xfffffffeU & vlSelf->test___DOT__wrapper__DOT__decoded_instr[0U]) 
           | (0x67U == (0x7fU & vlSelf->test___DOT__wrapper__DOT__decoded_instr[6U])));
    vlSelf->test___DOT__wrapper__DOT__instruction_trap 
        = (1U & (~ (IData)((0U != (0x7fU & vlSelf->test___DOT__wrapper__DOT__decoded_instr[0U])))));
    vlSelf->test___DOT__wrapper__DOT__decoded_instr[4U] 
        = ((0x7fU & vlSelf->test___DOT__wrapper__DOT__decoded_instr[4U]) 
           | (0xffffff80U & (((- (IData)((vlSelf->test___DOT__wrapper__DOT__instruction 
                                          >> 0x1fU))) 
                              << 0x13U) | (0x7ff80U 
                                           & (vlSelf->test___DOT__wrapper__DOT__instruction 
                                              >> 0xdU)))));
    vlSelf->test___DOT__wrapper__DOT__decoded_instr[5U] 
        = ((0xffffff80U & vlSelf->test___DOT__wrapper__DOT__decoded_instr[5U]) 
           | (0x7fU & ((- (IData)((vlSelf->test___DOT__wrapper__DOT__instruction 
                                   >> 0x1fU))) >> 0xdU)));
    vlSelf->test___DOT__wrapper__DOT__decoded_instr[3U] 
        = ((0x7fU & vlSelf->test___DOT__wrapper__DOT__decoded_instr[3U]) 
           | (0xffffff80U & (((- (IData)((vlSelf->test___DOT__wrapper__DOT__instruction 
                                          >> 0x1fU))) 
                              << 0x13U) | ((0x7f000U 
                                            & (vlSelf->test___DOT__wrapper__DOT__instruction 
                                               >> 0xdU)) 
                                           | (0xf80U 
                                              & vlSelf->test___DOT__wrapper__DOT__instruction)))));
    vlSelf->test___DOT__wrapper__DOT__decoded_instr[4U] 
        = ((0xffffff80U & vlSelf->test___DOT__wrapper__DOT__decoded_instr[4U]) 
           | (0x7fU & ((- (IData)((vlSelf->test___DOT__wrapper__DOT__instruction 
                                   >> 0x1fU))) >> 0xdU)));
    vlSelf->test___DOT__wrapper__DOT__decoded_instr[2U] 
        = ((0x7fU & vlSelf->test___DOT__wrapper__DOT__decoded_instr[2U]) 
           | (0xffffff80U & (((- (IData)((vlSelf->test___DOT__wrapper__DOT__instruction 
                                          >> 0x1fU))) 
                              << 0x14U) | ((0x80000U 
                                            & (vlSelf->test___DOT__wrapper__DOT__instruction 
                                               >> 0xcU)) 
                                           | ((0x40000U 
                                               & (vlSelf->test___DOT__wrapper__DOT__instruction 
                                                  << 0xbU)) 
                                              | ((0x3f000U 
                                                  & (vlSelf->test___DOT__wrapper__DOT__instruction 
                                                     >> 0xdU)) 
                                                 | (0xf00U 
                                                    & vlSelf->test___DOT__wrapper__DOT__instruction)))))));
    vlSelf->test___DOT__wrapper__DOT__decoded_instr[3U] 
        = ((0xffffff80U & vlSelf->test___DOT__wrapper__DOT__decoded_instr[3U]) 
           | (0x7fU & ((- (IData)((vlSelf->test___DOT__wrapper__DOT__instruction 
                                   >> 0x1fU))) >> 0xcU)));
    vlSelf->test___DOT__wrapper__DOT__decoded_instr[1U] 
        = ((0x7fU & vlSelf->test___DOT__wrapper__DOT__decoded_instr[1U]) 
           | (0xfff80000U & (vlSelf->test___DOT__wrapper__DOT__instruction 
                             << 7U)));
    vlSelf->test___DOT__wrapper__DOT__decoded_instr[2U] 
        = ((0xffffff80U & vlSelf->test___DOT__wrapper__DOT__decoded_instr[2U]) 
           | (vlSelf->test___DOT__wrapper__DOT__instruction 
              >> 0x19U));
    vlSelf->test___DOT__wrapper__DOT__decoded_instr[0U] 
        = ((0x7fU & vlSelf->test___DOT__wrapper__DOT__decoded_instr[0U]) 
           | (0xffffff80U & (((- (IData)((vlSelf->test___DOT__wrapper__DOT__instruction 
                                          >> 0x1fU))) 
                              << 0x1cU) | ((0x8000000U 
                                            & (vlSelf->test___DOT__wrapper__DOT__instruction 
                                               >> 4U)) 
                                           | ((0x7f80000U 
                                               & (vlSelf->test___DOT__wrapper__DOT__instruction 
                                                  << 7U)) 
                                              | ((0x40000U 
                                                  & (vlSelf->test___DOT__wrapper__DOT__instruction 
                                                     >> 2U)) 
                                                 | (0x3ff00U 
                                                    & (vlSelf->test___DOT__wrapper__DOT__instruction 
                                                       >> 0xdU))))))));
    vlSelf->test___DOT__wrapper__DOT__decoded_instr[1U] 
        = ((0xffffff80U & vlSelf->test___DOT__wrapper__DOT__decoded_instr[1U]) 
           | (0x7fU & ((- (IData)((vlSelf->test___DOT__wrapper__DOT__instruction 
                                   >> 0x1fU))) >> 4U)));
    vlSelf->test___DOT__wrapper__DOT__pc_reset_jump 
        = (IData)((0U != (3U & vlSelf->test___DOT__wrapper__DOT__decoded_instr[0U])));
    vlSelf->test___DOT__wrapper__DOT__rs1_data = vlSelf->test___DOT__wrapper__DOT__reg_file__DOT__block
        [(0x1fU & (vlSelf->test___DOT__wrapper__DOT__decoded_instr[5U] 
                   >> 0x13U))];
    vlSelf->test___DOT__wrapper__DOT__rs2_data = vlSelf->test___DOT__wrapper__DOT__reg_file__DOT__block
        [(0x1fU & (vlSelf->test___DOT__wrapper__DOT__decoded_instr[5U] 
                   >> 0xeU))];
    vlSelf->test___DOT__wrapper__DOT__alu__DOT__unnamedblk1__DOT__rs1_x 
        = vlSelf->test___DOT__wrapper__DOT__rs1_data;
    vlSelf->test___DOT__wrapper__DOT__alu__DOT__unnamedblk1__DOT__rs2_x 
        = ((0x40U & vlSelf->test___DOT__wrapper__DOT__decoded_instr[0U])
            ? vlSelf->test___DOT__wrapper__DOT__rs2_data
            : (((5U == (7U & (vlSelf->test___DOT__wrapper__DOT__decoded_instr[5U] 
                              >> 0x18U))) | (1U == 
                                             (7U & 
                                              (vlSelf->test___DOT__wrapper__DOT__decoded_instr[5U] 
                                               >> 0x18U))))
                ? (0xfU & (vlSelf->test___DOT__wrapper__DOT__decoded_instr[4U] 
                           >> 7U)) : ((vlSelf->test___DOT__wrapper__DOT__decoded_instr[5U] 
                                       << 0x19U) | 
                                      (vlSelf->test___DOT__wrapper__DOT__decoded_instr[4U] 
                                       >> 7U))));
    vlSelf->test___DOT__wrapper__DOT__alu_output = 
        ((0x4000000U & vlSelf->test___DOT__wrapper__DOT__decoded_instr[5U])
          ? ((0x2000000U & vlSelf->test___DOT__wrapper__DOT__decoded_instr[5U])
              ? ((0x1000000U & vlSelf->test___DOT__wrapper__DOT__decoded_instr[5U])
                  ? (vlSelf->test___DOT__wrapper__DOT__alu__DOT__unnamedblk1__DOT__rs1_x 
                     & vlSelf->test___DOT__wrapper__DOT__alu__DOT__unnamedblk1__DOT__rs2_x)
                  : (vlSelf->test___DOT__wrapper__DOT__alu__DOT__unnamedblk1__DOT__rs1_x 
                     | vlSelf->test___DOT__wrapper__DOT__alu__DOT__unnamedblk1__DOT__rs2_x))
              : ((0x1000000U & vlSelf->test___DOT__wrapper__DOT__decoded_instr[5U])
                  ? ((0x20U == (0x7fU & (vlSelf->test___DOT__wrapper__DOT__decoded_instr[5U] 
                                         >> 7U))) ? 
                     VL_SHIFTR_III(32,32,32, vlSelf->test___DOT__wrapper__DOT__alu__DOT__unnamedblk1__DOT__rs1_x, vlSelf->test___DOT__wrapper__DOT__alu__DOT__unnamedblk1__DOT__rs2_x)
                      : VL_SHIFTR_III(32,32,32, vlSelf->test___DOT__wrapper__DOT__alu__DOT__unnamedblk1__DOT__rs1_x, vlSelf->test___DOT__wrapper__DOT__alu__DOT__unnamedblk1__DOT__rs2_x))
                  : (vlSelf->test___DOT__wrapper__DOT__alu__DOT__unnamedblk1__DOT__rs1_x 
                     ^ vlSelf->test___DOT__wrapper__DOT__alu__DOT__unnamedblk1__DOT__rs2_x)))
          : ((0x2000000U & vlSelf->test___DOT__wrapper__DOT__decoded_instr[5U])
              ? ((0x1000000U & vlSelf->test___DOT__wrapper__DOT__decoded_instr[5U])
                  ? (((QData)((IData)(vlSelf->test___DOT__wrapper__DOT__alu__DOT__unnamedblk1__DOT__rs1_x)) 
                      < (QData)((IData)(vlSelf->test___DOT__wrapper__DOT__alu__DOT__unnamedblk1__DOT__rs2_x)))
                      ? 1U : 0U) : ((vlSelf->test___DOT__wrapper__DOT__alu__DOT__unnamedblk1__DOT__rs1_x 
                                     < vlSelf->test___DOT__wrapper__DOT__alu__DOT__unnamedblk1__DOT__rs2_x)
                                     ? 1U : 0U)) : 
             ((0x1000000U & vlSelf->test___DOT__wrapper__DOT__decoded_instr[5U])
               ? VL_SHIFTL_III(32,32,32, vlSelf->test___DOT__wrapper__DOT__alu__DOT__unnamedblk1__DOT__rs1_x, vlSelf->test___DOT__wrapper__DOT__alu__DOT__unnamedblk1__DOT__rs2_x)
               : ((0x20U == (0x7fU & (vlSelf->test___DOT__wrapper__DOT__decoded_instr[5U] 
                                      >> 7U))) ? (vlSelf->test___DOT__wrapper__DOT__alu__DOT__unnamedblk1__DOT__rs1_x 
                                                  - vlSelf->test___DOT__wrapper__DOT__alu__DOT__unnamedblk1__DOT__rs2_x)
                   : (vlSelf->test___DOT__wrapper__DOT__alu__DOT__unnamedblk1__DOT__rs1_x 
                      + vlSelf->test___DOT__wrapper__DOT__alu__DOT__unnamedblk1__DOT__rs2_x)))));
    vlSelf->test___DOT__wrapper__DOT__branch__DOT__unnamedblk1__DOT__rs1_data_unsigned 
        = vlSelf->test___DOT__wrapper__DOT__rs1_data;
    vlSelf->test___DOT__wrapper__DOT__branch__DOT__unnamedblk1__DOT__rs2_data_unsigned 
        = vlSelf->test___DOT__wrapper__DOT__rs2_data;
    vlSelf->test___DOT__wrapper__DOT__pc_reset_branch 
        = (((((((IData)(((0U == (0x7000000U & vlSelf->test___DOT__wrapper__DOT__decoded_instr[5U])) 
                         & (vlSelf->test___DOT__wrapper__DOT__rs1_data 
                            == vlSelf->test___DOT__wrapper__DOT__rs2_data))) 
                | (IData)(((0x1000000U == (0x7000000U 
                                           & vlSelf->test___DOT__wrapper__DOT__decoded_instr[5U])) 
                           & (vlSelf->test___DOT__wrapper__DOT__rs1_data 
                              != vlSelf->test___DOT__wrapper__DOT__rs2_data)))) 
               | (IData)(((0x4000000U == (0x7000000U 
                                          & vlSelf->test___DOT__wrapper__DOT__decoded_instr[5U])) 
                          & (vlSelf->test___DOT__wrapper__DOT__rs1_data 
                             < vlSelf->test___DOT__wrapper__DOT__rs2_data)))) 
              | (IData)(((0x5000000U == (0x7000000U 
                                         & vlSelf->test___DOT__wrapper__DOT__decoded_instr[5U])) 
                         & (vlSelf->test___DOT__wrapper__DOT__rs1_data 
                            >= vlSelf->test___DOT__wrapper__DOT__rs2_data)))) 
             | (IData)(((0x6000000U == (0x7000000U 
                                        & vlSelf->test___DOT__wrapper__DOT__decoded_instr[5U])) 
                        & (vlSelf->test___DOT__wrapper__DOT__branch__DOT__unnamedblk1__DOT__rs1_data_unsigned 
                           < vlSelf->test___DOT__wrapper__DOT__branch__DOT__unnamedblk1__DOT__rs2_data_unsigned)))) 
            | (IData)(((0x7000000U == (0x7000000U & 
                                       vlSelf->test___DOT__wrapper__DOT__decoded_instr[5U])) 
                       & (vlSelf->test___DOT__wrapper__DOT__branch__DOT__unnamedblk1__DOT__rs1_data_unsigned 
                          >= vlSelf->test___DOT__wrapper__DOT__branch__DOT__unnamedblk1__DOT__rs2_data_unsigned)))) 
           & (vlSelf->test___DOT__wrapper__DOT__decoded_instr[0U] 
              >> 3U));
    vlSelf->test___DOT__wrapper__DOT__reset_address_branch 
        = ((IData)(vlSelf->test___DOT__wrapper__DOT__pc_reset_branch)
            ? (vlSelf->test___DOT__wrapper__DOT__program_counter 
               + ((vlSelf->test___DOT__wrapper__DOT__decoded_instr[3U] 
                   << 0x19U) | (vlSelf->test___DOT__wrapper__DOT__decoded_instr[2U] 
                                >> 7U))) : 0U);
}

void Vtest____024root___eval_act(Vtest____024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtest___Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtest____024root___eval_act\n"); );
    // Body
    if ((0x10ULL & vlSelf->__VactTriggered.word(0U))) {
        Vtest____024root___act_sequent__TOP__0(vlSelf);
    }
    if ((1ULL & vlSelf->__VactTriggered.word(0U))) {
        Vtest____024root___act_sequent__TOP__1(vlSelf);
        vlSelf->__Vm_traceActivity[1U] = 1U;
    }
}

VL_INLINE_OPT void Vtest____024root___nba_sequent__TOP__0(Vtest____024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtest___Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtest____024root___nba_sequent__TOP__0\n"); );
    // Init
    IData/*31:0*/ __Vdly__test___DOT__wrapper__DOT__pc__DOT__current_counter;
    __Vdly__test___DOT__wrapper__DOT__pc__DOT__current_counter = 0;
    // Body
    __Vdly__test___DOT__wrapper__DOT__pc__DOT__current_counter 
        = vlSelf->test___DOT__wrapper__DOT__pc__DOT__current_counter;
    if (((IData)(vlSelf->test___DOT__wrapper__DOT__pc_reset_branch) 
         | (IData)(vlSelf->test___DOT__wrapper__DOT__pc_reset_jump))) {
        __Vdly__test___DOT__wrapper__DOT__pc__DOT__current_counter 
            = ((IData)(vlSelf->test___DOT__wrapper__DOT__pc_reset_branch)
                ? vlSelf->test___DOT__wrapper__DOT__reset_address_branch
                : ((IData)(vlSelf->test___DOT__wrapper__DOT__pc_reset_jump)
                    ? ((2U & vlSelf->test___DOT__wrapper__DOT__decoded_instr[0U])
                        ? (vlSelf->test___DOT__wrapper__DOT__program_counter 
                           + ((vlSelf->test___DOT__wrapper__DOT__decoded_instr[1U] 
                               << 0x19U) | (vlSelf->test___DOT__wrapper__DOT__decoded_instr[0U] 
                                            >> 7U)))
                        : ((1U & vlSelf->test___DOT__wrapper__DOT__decoded_instr[0U])
                            ? (((vlSelf->test___DOT__wrapper__DOT__decoded_instr[5U] 
                                 << 0x19U) | (vlSelf->test___DOT__wrapper__DOT__decoded_instr[4U] 
                                              >> 7U)) 
                               + vlSelf->test___DOT__wrapper__DOT__rs1_data)
                            : 0U)) : 0U));
    } else if ((1U & (~ (IData)(vlSelf->test___DOT__wrapper__DOT__stall)))) {
        __Vdly__test___DOT__wrapper__DOT__pc__DOT__current_counter 
            = ((IData)(4U) + vlSelf->test___DOT__wrapper__DOT__pc__DOT__current_counter);
    }
    vlSelf->test___DOT__wrapper__DOT__pc__DOT__current_counter 
        = __Vdly__test___DOT__wrapper__DOT__pc__DOT__current_counter;
}

VL_INLINE_OPT void Vtest____024root___nba_sequent__TOP__1(Vtest____024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtest___Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtest____024root___nba_sequent__TOP__1\n"); );
    // Init
    SData/*9:0*/ __Vdlyvdim0__test___DOT__wrapper__DOT__ram_controller__DOT__bram_block__v0;
    __Vdlyvdim0__test___DOT__wrapper__DOT__ram_controller__DOT__bram_block__v0 = 0;
    IData/*31:0*/ __Vdlyvval__test___DOT__wrapper__DOT__ram_controller__DOT__bram_block__v0;
    __Vdlyvval__test___DOT__wrapper__DOT__ram_controller__DOT__bram_block__v0 = 0;
    CData/*0:0*/ __Vdlyvset__test___DOT__wrapper__DOT__ram_controller__DOT__bram_block__v0;
    __Vdlyvset__test___DOT__wrapper__DOT__ram_controller__DOT__bram_block__v0 = 0;
    SData/*9:0*/ __Vdlyvdim0__test___DOT__wrapper__DOT__ram_controller__DOT__bram_block__v1;
    __Vdlyvdim0__test___DOT__wrapper__DOT__ram_controller__DOT__bram_block__v1 = 0;
    CData/*4:0*/ __Vdlyvlsb__test___DOT__wrapper__DOT__ram_controller__DOT__bram_block__v1;
    __Vdlyvlsb__test___DOT__wrapper__DOT__ram_controller__DOT__bram_block__v1 = 0;
    SData/*15:0*/ __Vdlyvval__test___DOT__wrapper__DOT__ram_controller__DOT__bram_block__v1;
    __Vdlyvval__test___DOT__wrapper__DOT__ram_controller__DOT__bram_block__v1 = 0;
    CData/*0:0*/ __Vdlyvset__test___DOT__wrapper__DOT__ram_controller__DOT__bram_block__v1;
    __Vdlyvset__test___DOT__wrapper__DOT__ram_controller__DOT__bram_block__v1 = 0;
    SData/*9:0*/ __Vdlyvdim0__test___DOT__wrapper__DOT__ram_controller__DOT__bram_block__v2;
    __Vdlyvdim0__test___DOT__wrapper__DOT__ram_controller__DOT__bram_block__v2 = 0;
    CData/*4:0*/ __Vdlyvlsb__test___DOT__wrapper__DOT__ram_controller__DOT__bram_block__v2;
    __Vdlyvlsb__test___DOT__wrapper__DOT__ram_controller__DOT__bram_block__v2 = 0;
    CData/*7:0*/ __Vdlyvval__test___DOT__wrapper__DOT__ram_controller__DOT__bram_block__v2;
    __Vdlyvval__test___DOT__wrapper__DOT__ram_controller__DOT__bram_block__v2 = 0;
    CData/*0:0*/ __Vdlyvset__test___DOT__wrapper__DOT__ram_controller__DOT__bram_block__v2;
    __Vdlyvset__test___DOT__wrapper__DOT__ram_controller__DOT__bram_block__v2 = 0;
    CData/*4:0*/ __Vdlyvdim0__test___DOT__wrapper__DOT__reg_file__DOT__block__v0;
    __Vdlyvdim0__test___DOT__wrapper__DOT__reg_file__DOT__block__v0 = 0;
    IData/*31:0*/ __Vdlyvval__test___DOT__wrapper__DOT__reg_file__DOT__block__v0;
    __Vdlyvval__test___DOT__wrapper__DOT__reg_file__DOT__block__v0 = 0;
    CData/*0:0*/ __Vdlyvset__test___DOT__wrapper__DOT__reg_file__DOT__block__v0;
    __Vdlyvset__test___DOT__wrapper__DOT__reg_file__DOT__block__v0 = 0;
    // Body
    if (VL_UNLIKELY(vlSelf->test___DOT__wrapper__DOT__instruction_trap)) {
        VL_WRITEF("Illegal opcode: %3# , address: %10# , global counter: %10# \n\n",
                  7,(0x7fU & vlSelf->test___DOT__wrapper__DOT__decoded_instr[6U]),
                  32,vlSelf->test___DOT__wrapper__DOT__program_counter,
                  32,vlSelf->test___DOT__wrapper__DOT__global_counter);
    }
    __Vdlyvset__test___DOT__wrapper__DOT__reg_file__DOT__block__v0 = 0U;
    __Vdlyvset__test___DOT__wrapper__DOT__ram_controller__DOT__bram_block__v0 = 0U;
    __Vdlyvset__test___DOT__wrapper__DOT__ram_controller__DOT__bram_block__v1 = 0U;
    __Vdlyvset__test___DOT__wrapper__DOT__ram_controller__DOT__bram_block__v2 = 0U;
    if (((~ (IData)((0U != (0x18U & vlSelf->test___DOT__wrapper__DOT__decoded_instr[0U])))) 
         & (0U != (vlSelf->test___DOT__wrapper__DOT__decoded_instr[5U] 
                   >> 0x1bU)))) {
        __Vdlyvval__test___DOT__wrapper__DOT__reg_file__DOT__block__v0 
            = ((IData)((0U != (0x60U & vlSelf->test___DOT__wrapper__DOT__decoded_instr[0U])))
                ? vlSelf->test___DOT__wrapper__DOT__alu_output
                : ((IData)(vlSelf->test___DOT__wrapper__DOT__pc_reset_jump)
                    ? ((IData)((0U != (3U & vlSelf->test___DOT__wrapper__DOT__decoded_instr[0U])))
                        ? ((IData)(4U) + vlSelf->test___DOT__wrapper__DOT__program_counter)
                        : 0U) : ((4U & vlSelf->test___DOT__wrapper__DOT__decoded_instr[0U])
                                  ? ((0x37U == (0x7fU 
                                                & vlSelf->test___DOT__wrapper__DOT__decoded_instr[6U]))
                                      ? ((vlSelf->test___DOT__wrapper__DOT__decoded_instr[2U] 
                                          << 0x19U) 
                                         | (vlSelf->test___DOT__wrapper__DOT__decoded_instr[1U] 
                                            >> 7U))
                                      : (((vlSelf->test___DOT__wrapper__DOT__decoded_instr[2U] 
                                           << 0x19U) 
                                          | (vlSelf->test___DOT__wrapper__DOT__decoded_instr[1U] 
                                             >> 7U)) 
                                         + vlSelf->test___DOT__wrapper__DOT__program_counter))
                                  : 0U)));
        __Vdlyvset__test___DOT__wrapper__DOT__reg_file__DOT__block__v0 = 1U;
        __Vdlyvdim0__test___DOT__wrapper__DOT__reg_file__DOT__block__v0 
            = (vlSelf->test___DOT__wrapper__DOT__decoded_instr[5U] 
               >> 0x1bU);
    }
    if (((vlSelf->test___DOT__wrapper__DOT__decoded_instr[0U] 
          >> 4U) & (0x2000000U == (0x7000000U & vlSelf->test___DOT__wrapper__DOT__decoded_instr[5U])))) {
        __Vdlyvval__test___DOT__wrapper__DOT__ram_controller__DOT__bram_block__v0 
            = vlSelf->test___DOT__wrapper__DOT__rs2_data;
        __Vdlyvset__test___DOT__wrapper__DOT__ram_controller__DOT__bram_block__v0 = 1U;
        __Vdlyvdim0__test___DOT__wrapper__DOT__ram_controller__DOT__bram_block__v0 
            = (0x3ffU & (vlSelf->test___DOT__wrapper__DOT__ram_load_address 
                         >> 2U));
    }
    if (((vlSelf->test___DOT__wrapper__DOT__decoded_instr[0U] 
          >> 4U) & (0x1000000U == (0x7000000U & vlSelf->test___DOT__wrapper__DOT__decoded_instr[5U])))) {
        __Vdlyvval__test___DOT__wrapper__DOT__ram_controller__DOT__bram_block__v1 
            = (0xffffU & vlSelf->test___DOT__wrapper__DOT__rs2_data);
        __Vdlyvset__test___DOT__wrapper__DOT__ram_controller__DOT__bram_block__v1 = 1U;
        __Vdlyvlsb__test___DOT__wrapper__DOT__ram_controller__DOT__bram_block__v1 = 0U;
        __Vdlyvdim0__test___DOT__wrapper__DOT__ram_controller__DOT__bram_block__v1 
            = (0x3ffU & (vlSelf->test___DOT__wrapper__DOT__ram_load_address 
                         >> 2U));
    }
    if (((vlSelf->test___DOT__wrapper__DOT__decoded_instr[0U] 
          >> 4U) & (0U == (0x7000000U & vlSelf->test___DOT__wrapper__DOT__decoded_instr[5U])))) {
        __Vdlyvval__test___DOT__wrapper__DOT__ram_controller__DOT__bram_block__v2 
            = (0xffU & vlSelf->test___DOT__wrapper__DOT__rs2_data);
        __Vdlyvset__test___DOT__wrapper__DOT__ram_controller__DOT__bram_block__v2 = 1U;
        __Vdlyvlsb__test___DOT__wrapper__DOT__ram_controller__DOT__bram_block__v2 = 0U;
        __Vdlyvdim0__test___DOT__wrapper__DOT__ram_controller__DOT__bram_block__v2 
            = (0x3ffU & (vlSelf->test___DOT__wrapper__DOT__ram_load_address 
                         >> 2U));
    }
    if (__Vdlyvset__test___DOT__wrapper__DOT__reg_file__DOT__block__v0) {
        vlSelf->test___DOT__wrapper__DOT__reg_file__DOT__block[__Vdlyvdim0__test___DOT__wrapper__DOT__reg_file__DOT__block__v0] 
            = __Vdlyvval__test___DOT__wrapper__DOT__reg_file__DOT__block__v0;
    }
    if (__Vdlyvset__test___DOT__wrapper__DOT__ram_controller__DOT__bram_block__v0) {
        vlSelf->test___DOT__wrapper__DOT__ram_controller__DOT__bram_block[__Vdlyvdim0__test___DOT__wrapper__DOT__ram_controller__DOT__bram_block__v0] 
            = __Vdlyvval__test___DOT__wrapper__DOT__ram_controller__DOT__bram_block__v0;
    }
    if (__Vdlyvset__test___DOT__wrapper__DOT__ram_controller__DOT__bram_block__v1) {
        vlSelf->test___DOT__wrapper__DOT__ram_controller__DOT__bram_block[__Vdlyvdim0__test___DOT__wrapper__DOT__ram_controller__DOT__bram_block__v1] 
            = (((~ ((IData)(0xffffU) << (IData)(__Vdlyvlsb__test___DOT__wrapper__DOT__ram_controller__DOT__bram_block__v1))) 
                & vlSelf->test___DOT__wrapper__DOT__ram_controller__DOT__bram_block
                [__Vdlyvdim0__test___DOT__wrapper__DOT__ram_controller__DOT__bram_block__v1]) 
               | (0xffffffffULL & ((IData)(__Vdlyvval__test___DOT__wrapper__DOT__ram_controller__DOT__bram_block__v1) 
                                   << (IData)(__Vdlyvlsb__test___DOT__wrapper__DOT__ram_controller__DOT__bram_block__v1))));
    }
    if (__Vdlyvset__test___DOT__wrapper__DOT__ram_controller__DOT__bram_block__v2) {
        vlSelf->test___DOT__wrapper__DOT__ram_controller__DOT__bram_block[__Vdlyvdim0__test___DOT__wrapper__DOT__ram_controller__DOT__bram_block__v2] 
            = (((~ ((IData)(0xffU) << (IData)(__Vdlyvlsb__test___DOT__wrapper__DOT__ram_controller__DOT__bram_block__v2))) 
                & vlSelf->test___DOT__wrapper__DOT__ram_controller__DOT__bram_block
                [__Vdlyvdim0__test___DOT__wrapper__DOT__ram_controller__DOT__bram_block__v2]) 
               | (0xffffffffULL & ((IData)(__Vdlyvval__test___DOT__wrapper__DOT__ram_controller__DOT__bram_block__v2) 
                                   << (IData)(__Vdlyvlsb__test___DOT__wrapper__DOT__ram_controller__DOT__bram_block__v2))));
    }
    vlSelf->test___DOT__wrapper__DOT__program_counter 
        = vlSelf->test___DOT__wrapper__DOT__pc__DOT__current_counter;
    vlSelf->test___DOT__wrapper__DOT__instruction = 
        vlSelf->test___DOT__wrapper__DOT__ram_controller__DOT__bram_block
        [(0x3ffU & (vlSelf->test___DOT__wrapper__DOT__program_counter 
                    >> 2U))];
}

VL_INLINE_OPT void Vtest____024root___nba_sequent__TOP__2(Vtest____024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtest___Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtest____024root___nba_sequent__TOP__2\n"); );
    // Body
    vlSelf->test___DOT__wrapper__DOT__global_counter 
        = ((IData)(4U) + vlSelf->test___DOT__wrapper__DOT__global_counter);
}

void Vtest____024root___eval_nba(Vtest____024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtest___Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtest____024root___eval_nba\n"); );
    // Body
    if ((8ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtest____024root___nba_sequent__TOP__0(vlSelf);
    }
    if ((4ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtest____024root___nba_sequent__TOP__1(vlSelf);
        vlSelf->__Vm_traceActivity[2U] = 1U;
    }
    if ((2ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtest____024root___nba_sequent__TOP__2(vlSelf);
    }
    if ((5ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtest____024root___act_sequent__TOP__1(vlSelf);
        vlSelf->__Vm_traceActivity[3U] = 1U;
    }
}

void Vtest____024root___timing_resume(Vtest____024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtest___Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtest____024root___timing_resume\n"); );
    // Body
    if ((0x10ULL & vlSelf->__VactTriggered.word(0U))) {
        vlSelf->__VdlySched.resume();
    }
}

void Vtest____024root___eval_triggers__act(Vtest____024root* vlSelf);

bool Vtest____024root___eval_phase__act(Vtest____024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtest___Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtest____024root___eval_phase__act\n"); );
    // Init
    VlTriggerVec<5> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vtest____024root___eval_triggers__act(vlSelf);
    __VactExecute = vlSelf->__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
        vlSelf->__VnbaTriggered.thisOr(vlSelf->__VactTriggered);
        Vtest____024root___timing_resume(vlSelf);
        Vtest____024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vtest____024root___eval_phase__nba(Vtest____024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtest___Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtest____024root___eval_phase__nba\n"); );
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelf->__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vtest____024root___eval_nba(vlSelf);
        vlSelf->__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtest____024root___dump_triggers__nba(Vtest____024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vtest____024root___dump_triggers__act(Vtest____024root* vlSelf);
#endif  // VL_DEBUG

void Vtest____024root___eval(Vtest____024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtest___Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtest____024root___eval\n"); );
    // Init
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
            Vtest____024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("rtl/test_.sv", 4, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelf->__VactIterCount = 0U;
        vlSelf->__VactContinue = 1U;
        while (vlSelf->__VactContinue) {
            if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                Vtest____024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("rtl/test_.sv", 4, "", "Active region did not converge.");
            }
            vlSelf->__VactIterCount = ((IData)(1U) 
                                       + vlSelf->__VactIterCount);
            vlSelf->__VactContinue = 0U;
            if (Vtest____024root___eval_phase__act(vlSelf)) {
                vlSelf->__VactContinue = 1U;
            }
        }
        if (Vtest____024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vtest____024root___eval_debug_assertions(Vtest____024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtest___Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtest____024root___eval_debug_assertions\n"); );
}
#endif  // VL_DEBUG
