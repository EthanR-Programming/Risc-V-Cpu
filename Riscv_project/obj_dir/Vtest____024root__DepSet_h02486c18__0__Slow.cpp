// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtest_.h for the primary calling header

#include "Vtest___pch.h"
#include "Vtest____024root.h"

VL_ATTR_COLD void Vtest____024root___eval_static__TOP(Vtest____024root* vlSelf);

VL_ATTR_COLD void Vtest____024root___eval_static(Vtest____024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtest___Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtest____024root___eval_static\n"); );
    // Body
    Vtest____024root___eval_static__TOP(vlSelf);
}

VL_ATTR_COLD void Vtest____024root___eval_static__TOP(Vtest____024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtest___Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtest____024root___eval_static__TOP\n"); );
    // Body
    vlSelf->test___DOT__clk = 0U;
}

VL_ATTR_COLD void Vtest____024root___eval_initial__TOP(Vtest____024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtest___Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtest____024root___eval_initial__TOP\n"); );
    // Init
    VlWide<3>/*95:0*/ __Vtemp_1;
    // Body
    __Vtemp_1[0U] = 0x2e686578U;
    __Vtemp_1[1U] = 0x6772616dU;
    __Vtemp_1[2U] = 0x70726fU;
    VL_READMEM_N(true, 32, 1024, 0, VL_CVT_PACK_STR_NW(3, __Vtemp_1)
                 ,  &(vlSelf->test___DOT__wrapper__DOT__ram_controller__DOT__bram_block)
                 , 0, ~0ULL);
    VL_WRITEF("initialised program\n");
}

VL_ATTR_COLD void Vtest____024root___eval_final(Vtest____024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtest___Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtest____024root___eval_final\n"); );
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtest____024root___dump_triggers__stl(Vtest____024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vtest____024root___eval_phase__stl(Vtest____024root* vlSelf);

VL_ATTR_COLD void Vtest____024root___eval_settle(Vtest____024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtest___Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtest____024root___eval_settle\n"); );
    // Init
    IData/*31:0*/ __VstlIterCount;
    CData/*0:0*/ __VstlContinue;
    // Body
    __VstlIterCount = 0U;
    vlSelf->__VstlFirstIteration = 1U;
    __VstlContinue = 1U;
    while (__VstlContinue) {
        if (VL_UNLIKELY((0x64U < __VstlIterCount))) {
#ifdef VL_DEBUG
            Vtest____024root___dump_triggers__stl(vlSelf);
#endif
            VL_FATAL_MT("rtl/test_.sv", 4, "", "Settle region did not converge.");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        __VstlContinue = 0U;
        if (Vtest____024root___eval_phase__stl(vlSelf)) {
            __VstlContinue = 1U;
        }
        vlSelf->__VstlFirstIteration = 0U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtest____024root___dump_triggers__stl(Vtest____024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtest___Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtest____024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VstlTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtest____024root___stl_sequent__TOP__0(Vtest____024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtest___Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtest____024root___stl_sequent__TOP__0\n"); );
    // Body
    vlSelf->test___DOT__wrapper__DOT__decoded_instr[5U] 
        = ((0x7fffffU & vlSelf->test___DOT__wrapper__DOT__decoded_instr[5U]) 
           | (0xff800000U & ((vlSelf->test___DOT__wrapper__DOT__instruction 
                              << 0x1fU) | ((0x7c000000U 
                                            & (vlSelf->test___DOT__wrapper__DOT__instruction 
                                               << 0x13U)) 
                                           | (0x3800000U 
                                              & (vlSelf->test___DOT__wrapper__DOT__instruction 
                                                 << 0xbU))))));
    vlSelf->test___DOT__wrapper__DOT__decoded_instr[6U] 
        = (0x3fU & (vlSelf->test___DOT__wrapper__DOT__instruction 
                    >> 1U));
    vlSelf->test___DOT__wrapper__DOT__decoded_instr[5U] 
        = ((0xff80003fU & vlSelf->test___DOT__wrapper__DOT__decoded_instr[5U]) 
           | (0xffffffc0U & ((0x7c0000U & (vlSelf->test___DOT__wrapper__DOT__instruction 
                                           << 3U)) 
                             | ((0x3e000U & (vlSelf->test___DOT__wrapper__DOT__instruction 
                                             >> 7U)) 
                                | (0x1fc0U & (vlSelf->test___DOT__wrapper__DOT__instruction 
                                              >> 0x13U))))));
    vlSelf->test___DOT__wrapper__DOT__decoded_instr[0U] 
        = ((0xffffffdfU & vlSelf->test___DOT__wrapper__DOT__decoded_instr[0U]) 
           | ((0x33U == (0x7fU & ((vlSelf->test___DOT__wrapper__DOT__decoded_instr[6U] 
                                   << 1U) | (vlSelf->test___DOT__wrapper__DOT__decoded_instr[5U] 
                                             >> 0x1fU)))) 
              << 5U));
    vlSelf->test___DOT__wrapper__DOT__decoded_instr[0U] 
        = ((0xffffffefU & vlSelf->test___DOT__wrapper__DOT__decoded_instr[0U]) 
           | (((0x13U == (0x7fU & ((vlSelf->test___DOT__wrapper__DOT__decoded_instr[6U] 
                                    << 1U) | (vlSelf->test___DOT__wrapper__DOT__decoded_instr[5U] 
                                              >> 0x1fU)))) 
               | (3U == (0x7fU & ((vlSelf->test___DOT__wrapper__DOT__decoded_instr[6U] 
                                   << 1U) | (vlSelf->test___DOT__wrapper__DOT__decoded_instr[5U] 
                                             >> 0x1fU))))) 
              << 4U));
    vlSelf->test___DOT__wrapper__DOT__decoded_instr[0U] 
        = ((0xfffffff7U & vlSelf->test___DOT__wrapper__DOT__decoded_instr[0U]) 
           | ((0x23U == (0x7fU & ((vlSelf->test___DOT__wrapper__DOT__decoded_instr[6U] 
                                   << 1U) | (vlSelf->test___DOT__wrapper__DOT__decoded_instr[5U] 
                                             >> 0x1fU)))) 
              << 3U));
    vlSelf->test___DOT__wrapper__DOT__decoded_instr[0U] 
        = ((0xfffffffbU & vlSelf->test___DOT__wrapper__DOT__decoded_instr[0U]) 
           | ((0x63U == (0x7fU & ((vlSelf->test___DOT__wrapper__DOT__decoded_instr[6U] 
                                   << 1U) | (vlSelf->test___DOT__wrapper__DOT__decoded_instr[5U] 
                                             >> 0x1fU)))) 
              << 2U));
    vlSelf->test___DOT__wrapper__DOT__decoded_instr[0U] 
        = ((0xfffffffdU & vlSelf->test___DOT__wrapper__DOT__decoded_instr[0U]) 
           | (((0x37U == (0x7fU & ((vlSelf->test___DOT__wrapper__DOT__decoded_instr[6U] 
                                    << 1U) | (vlSelf->test___DOT__wrapper__DOT__decoded_instr[5U] 
                                              >> 0x1fU)))) 
               | (0x17U == (0x7fU & ((vlSelf->test___DOT__wrapper__DOT__decoded_instr[6U] 
                                      << 1U) | (vlSelf->test___DOT__wrapper__DOT__decoded_instr[5U] 
                                                >> 0x1fU))))) 
              << 1U));
    vlSelf->test___DOT__wrapper__DOT__decoded_instr[0U] 
        = ((0xfffffffeU & vlSelf->test___DOT__wrapper__DOT__decoded_instr[0U]) 
           | (0x6fU == (0x7fU & ((vlSelf->test___DOT__wrapper__DOT__decoded_instr[6U] 
                                  << 1U) | (vlSelf->test___DOT__wrapper__DOT__decoded_instr[5U] 
                                            >> 0x1fU)))));
    vlSelf->test___DOT__wrapper__DOT__instruction_decoder__DOT__trap_instr 
        = (1U & (~ (IData)((0U != (0x3fU & vlSelf->test___DOT__wrapper__DOT__decoded_instr[0U])))));
    if (VL_UNLIKELY(vlSelf->test___DOT__wrapper__DOT__instruction_decoder__DOT__trap_instr)) {
        VL_WRITEF("Illegal opcode\n\n");
    }
    vlSelf->test___DOT__wrapper__DOT__decoded_instr[4U] 
        = ((0x3fU & vlSelf->test___DOT__wrapper__DOT__decoded_instr[4U]) 
           | (0xffffffc0U & (((- (IData)((vlSelf->test___DOT__wrapper__DOT__instruction 
                                          >> 0x1fU))) 
                              << 0x12U) | (0x3ffc0U 
                                           & (vlSelf->test___DOT__wrapper__DOT__instruction 
                                              >> 0xeU)))));
    vlSelf->test___DOT__wrapper__DOT__decoded_instr[5U] 
        = ((0xffffffc0U & vlSelf->test___DOT__wrapper__DOT__decoded_instr[5U]) 
           | (0x3fU & ((- (IData)((vlSelf->test___DOT__wrapper__DOT__instruction 
                                   >> 0x1fU))) >> 0xeU)));
    vlSelf->test___DOT__wrapper__DOT__decoded_instr[3U] 
        = ((0x3fU & vlSelf->test___DOT__wrapper__DOT__decoded_instr[3U]) 
           | (0xffffffc0U & (((- (IData)((vlSelf->test___DOT__wrapper__DOT__instruction 
                                          >> 0x1fU))) 
                              << 0x12U) | ((0x3f800U 
                                            & (vlSelf->test___DOT__wrapper__DOT__instruction 
                                               >> 0xeU)) 
                                           | (0x7c0U 
                                              & (vlSelf->test___DOT__wrapper__DOT__instruction 
                                                 >> 1U))))));
    vlSelf->test___DOT__wrapper__DOT__decoded_instr[4U] 
        = ((0xffffffc0U & vlSelf->test___DOT__wrapper__DOT__decoded_instr[4U]) 
           | (0x3fU & ((- (IData)((vlSelf->test___DOT__wrapper__DOT__instruction 
                                   >> 0x1fU))) >> 0xeU)));
    vlSelf->test___DOT__wrapper__DOT__decoded_instr[2U] 
        = ((0x3fU & vlSelf->test___DOT__wrapper__DOT__decoded_instr[2U]) 
           | (0xffffffc0U & (((- (IData)((vlSelf->test___DOT__wrapper__DOT__instruction 
                                          >> 0x1fU))) 
                              << 0x13U) | ((0x40000U 
                                            & (vlSelf->test___DOT__wrapper__DOT__instruction 
                                               >> 0xdU)) 
                                           | ((0x20000U 
                                               & (vlSelf->test___DOT__wrapper__DOT__instruction 
                                                  << 0xaU)) 
                                              | ((0x1f800U 
                                                  & (vlSelf->test___DOT__wrapper__DOT__instruction 
                                                     >> 0xeU)) 
                                                 | (0x780U 
                                                    & (vlSelf->test___DOT__wrapper__DOT__instruction 
                                                       >> 1U))))))));
    vlSelf->test___DOT__wrapper__DOT__decoded_instr[3U] 
        = ((0xffffffc0U & vlSelf->test___DOT__wrapper__DOT__decoded_instr[3U]) 
           | (0x3fU & ((- (IData)((vlSelf->test___DOT__wrapper__DOT__instruction 
                                   >> 0x1fU))) >> 0xdU)));
    vlSelf->test___DOT__wrapper__DOT__decoded_instr[1U] 
        = ((0x3fU & vlSelf->test___DOT__wrapper__DOT__decoded_instr[1U]) 
           | (0xfffc0000U & (vlSelf->test___DOT__wrapper__DOT__instruction 
                             << 6U)));
    vlSelf->test___DOT__wrapper__DOT__decoded_instr[2U] 
        = ((0xffffffc0U & vlSelf->test___DOT__wrapper__DOT__decoded_instr[2U]) 
           | (vlSelf->test___DOT__wrapper__DOT__instruction 
              >> 0x1aU));
    vlSelf->test___DOT__wrapper__DOT__decoded_instr[0U] 
        = ((0x3fU & vlSelf->test___DOT__wrapper__DOT__decoded_instr[0U]) 
           | (0xffffffc0U & (((- (IData)((vlSelf->test___DOT__wrapper__DOT__instruction 
                                          >> 0x1fU))) 
                              << 0x1bU) | ((0x4000000U 
                                            & (vlSelf->test___DOT__wrapper__DOT__instruction 
                                               >> 5U)) 
                                           | ((0x3fc0000U 
                                               & (vlSelf->test___DOT__wrapper__DOT__instruction 
                                                  << 6U)) 
                                              | ((0x20000U 
                                                  & (vlSelf->test___DOT__wrapper__DOT__instruction 
                                                     >> 3U)) 
                                                 | (0x1ff80U 
                                                    & (vlSelf->test___DOT__wrapper__DOT__instruction 
                                                       >> 0xeU))))))));
    vlSelf->test___DOT__wrapper__DOT__decoded_instr[1U] 
        = ((0xffffffc0U & vlSelf->test___DOT__wrapper__DOT__decoded_instr[1U]) 
           | (0x3fU & ((- (IData)((vlSelf->test___DOT__wrapper__DOT__instruction 
                                   >> 0x1fU))) >> 5U)));
    vlSelf->test___DOT__wrapper__DOT__alu__DOT__unnamedblk1__DOT__rs1_x 
        = vlSelf->test___DOT__wrapper__DOT__reg_file__DOT__block
        [(0x1fU & (vlSelf->test___DOT__wrapper__DOT__decoded_instr[5U] 
                   >> 0x12U))];
    vlSelf->test___DOT__wrapper__DOT__alu__DOT__unnamedblk1__DOT__rs2_x 
        = ((0x20U & vlSelf->test___DOT__wrapper__DOT__decoded_instr[0U])
            ? vlSelf->test___DOT__wrapper__DOT__reg_file__DOT__block
           [(0x1fU & (vlSelf->test___DOT__wrapper__DOT__decoded_instr[5U] 
                      >> 0xdU))] : ((vlSelf->test___DOT__wrapper__DOT__decoded_instr[5U] 
                                     << 0x1aU) | (vlSelf->test___DOT__wrapper__DOT__decoded_instr[4U] 
                                                  >> 6U)));
    vlSelf->test___DOT__wrapper__DOT__alu_output = 
        ((0x2000000U & vlSelf->test___DOT__wrapper__DOT__decoded_instr[5U])
          ? ((0x1000000U & vlSelf->test___DOT__wrapper__DOT__decoded_instr[5U])
              ? ((0x800000U & vlSelf->test___DOT__wrapper__DOT__decoded_instr[5U])
                  ? (vlSelf->test___DOT__wrapper__DOT__alu__DOT__unnamedblk1__DOT__rs1_x 
                     & vlSelf->test___DOT__wrapper__DOT__alu__DOT__unnamedblk1__DOT__rs2_x)
                  : (vlSelf->test___DOT__wrapper__DOT__alu__DOT__unnamedblk1__DOT__rs1_x 
                     | vlSelf->test___DOT__wrapper__DOT__alu__DOT__unnamedblk1__DOT__rs2_x))
              : ((0x800000U & vlSelf->test___DOT__wrapper__DOT__decoded_instr[5U])
                  ? ((0x20U == (0x7fU & (vlSelf->test___DOT__wrapper__DOT__decoded_instr[5U] 
                                         >> 6U))) ? 
                     VL_SHIFTR_III(32,32,32, vlSelf->test___DOT__wrapper__DOT__alu__DOT__unnamedblk1__DOT__rs1_x, vlSelf->test___DOT__wrapper__DOT__alu__DOT__unnamedblk1__DOT__rs2_x)
                      : VL_SHIFTR_III(32,32,32, vlSelf->test___DOT__wrapper__DOT__alu__DOT__unnamedblk1__DOT__rs1_x, vlSelf->test___DOT__wrapper__DOT__alu__DOT__unnamedblk1__DOT__rs2_x))
                  : (vlSelf->test___DOT__wrapper__DOT__alu__DOT__unnamedblk1__DOT__rs1_x 
                     ^ vlSelf->test___DOT__wrapper__DOT__alu__DOT__unnamedblk1__DOT__rs2_x)))
          : ((0x1000000U & vlSelf->test___DOT__wrapper__DOT__decoded_instr[5U])
              ? ((0x800000U & vlSelf->test___DOT__wrapper__DOT__decoded_instr[5U])
                  ? (((QData)((IData)(vlSelf->test___DOT__wrapper__DOT__alu__DOT__unnamedblk1__DOT__rs1_x)) 
                      < (QData)((IData)(vlSelf->test___DOT__wrapper__DOT__alu__DOT__unnamedblk1__DOT__rs2_x)))
                      ? 1U : 0U) : ((vlSelf->test___DOT__wrapper__DOT__alu__DOT__unnamedblk1__DOT__rs1_x 
                                     < vlSelf->test___DOT__wrapper__DOT__alu__DOT__unnamedblk1__DOT__rs2_x)
                                     ? 1U : 0U)) : 
             ((0x800000U & vlSelf->test___DOT__wrapper__DOT__decoded_instr[5U])
               ? VL_SHIFTL_III(32,32,32, vlSelf->test___DOT__wrapper__DOT__alu__DOT__unnamedblk1__DOT__rs1_x, vlSelf->test___DOT__wrapper__DOT__alu__DOT__unnamedblk1__DOT__rs2_x)
               : ((0x20U == (0x7fU & (vlSelf->test___DOT__wrapper__DOT__decoded_instr[5U] 
                                      >> 6U))) ? (vlSelf->test___DOT__wrapper__DOT__alu__DOT__unnamedblk1__DOT__rs1_x 
                                                  - vlSelf->test___DOT__wrapper__DOT__alu__DOT__unnamedblk1__DOT__rs2_x)
                   : (vlSelf->test___DOT__wrapper__DOT__alu__DOT__unnamedblk1__DOT__rs1_x 
                      + vlSelf->test___DOT__wrapper__DOT__alu__DOT__unnamedblk1__DOT__rs2_x)))));
}

VL_ATTR_COLD void Vtest____024root___eval_stl(Vtest____024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtest___Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtest____024root___eval_stl\n"); );
    // Body
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        Vtest____024root___stl_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[1U] = 1U;
        vlSelf->__Vm_traceActivity[0U] = 1U;
    }
}

VL_ATTR_COLD void Vtest____024root___eval_triggers__stl(Vtest____024root* vlSelf);

VL_ATTR_COLD bool Vtest____024root___eval_phase__stl(Vtest____024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtest___Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtest____024root___eval_phase__stl\n"); );
    // Init
    CData/*0:0*/ __VstlExecute;
    // Body
    Vtest____024root___eval_triggers__stl(vlSelf);
    __VstlExecute = vlSelf->__VstlTriggered.any();
    if (__VstlExecute) {
        Vtest____024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtest____024root___dump_triggers__act(Vtest____024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtest___Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtest____024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VactTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge test_.clk)\n");
    }
    if ((2ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 1 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtest____024root___dump_triggers__nba(Vtest____024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtest___Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtest____024root___dump_triggers__nba\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VnbaTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge test_.clk)\n");
    }
    if ((2ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 1 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtest____024root___ctor_var_reset(Vtest____024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtest___Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtest____024root___ctor_var_reset\n"); );
    // Body
    vlSelf->test___DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->test___DOT__wrapper__DOT__program_counter = VL_RAND_RESET_I(32);
    vlSelf->test___DOT__wrapper__DOT__instruction = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(198, vlSelf->test___DOT__wrapper__DOT__decoded_instr);
    vlSelf->test___DOT__wrapper__DOT__ram_load_address = VL_RAND_RESET_I(32);
    vlSelf->test___DOT__wrapper__DOT__ram_load_value = VL_RAND_RESET_I(32);
    vlSelf->test___DOT__wrapper__DOT__ram_store_address = VL_RAND_RESET_I(32);
    vlSelf->test___DOT__wrapper__DOT__ram_store_enabled = VL_RAND_RESET_I(1);
    vlSelf->test___DOT__wrapper__DOT__ram_store_value = VL_RAND_RESET_I(32);
    vlSelf->test___DOT__wrapper__DOT__alu_output = VL_RAND_RESET_I(32);
    vlSelf->test___DOT__wrapper__DOT__stall = VL_RAND_RESET_I(1);
    vlSelf->test___DOT__wrapper__DOT__ram_trap = VL_RAND_RESET_I(1);
    vlSelf->test___DOT__wrapper__DOT__reset = VL_RAND_RESET_I(1);
    vlSelf->test___DOT__wrapper__DOT__reset_address = VL_RAND_RESET_I(32);
    for (int __Vi0 = 0; __Vi0 < 1024; ++__Vi0) {
        vlSelf->test___DOT__wrapper__DOT__ram_controller__DOT__bram_block[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->test___DOT__wrapper__DOT__instruction_decoder__DOT__trap_instr = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->test___DOT__wrapper__DOT__reg_file__DOT__block[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->test___DOT__wrapper__DOT__alu__DOT__unnamedblk1__DOT__rs1_x = VL_RAND_RESET_I(32);
    vlSelf->test___DOT__wrapper__DOT__alu__DOT__unnamedblk1__DOT__rs2_x = VL_RAND_RESET_I(32);
    vlSelf->__Vtrigprevexpr___TOP__test___DOT__clk__0 = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
