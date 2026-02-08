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
    vlSelf->__Vtrigprevexpr___TOP__test___DOT__clk__0 
        = vlSelf->test___DOT__clk;
}

void Vtest____024root___eval_act(Vtest____024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtest___Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtest____024root___eval_act\n"); );
}

VL_INLINE_OPT void Vtest____024root___nba_sequent__TOP__0(Vtest____024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtest___Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtest____024root___nba_sequent__TOP__0\n"); );
    // Init
    SData/*9:0*/ __Vdlyvdim0__test___DOT__wrapper__DOT__ram_controller__DOT__bram_block__v0;
    __Vdlyvdim0__test___DOT__wrapper__DOT__ram_controller__DOT__bram_block__v0 = 0;
    IData/*31:0*/ __Vdlyvval__test___DOT__wrapper__DOT__ram_controller__DOT__bram_block__v0;
    __Vdlyvval__test___DOT__wrapper__DOT__ram_controller__DOT__bram_block__v0 = 0;
    CData/*0:0*/ __Vdlyvset__test___DOT__wrapper__DOT__ram_controller__DOT__bram_block__v0;
    __Vdlyvset__test___DOT__wrapper__DOT__ram_controller__DOT__bram_block__v0 = 0;
    IData/*31:0*/ __Vdly__test___DOT__wrapper__DOT__program_counter;
    __Vdly__test___DOT__wrapper__DOT__program_counter = 0;
    CData/*4:0*/ __Vdlyvdim0__test___DOT__wrapper__DOT__reg_file__DOT__block__v0;
    __Vdlyvdim0__test___DOT__wrapper__DOT__reg_file__DOT__block__v0 = 0;
    IData/*31:0*/ __Vdlyvval__test___DOT__wrapper__DOT__reg_file__DOT__block__v0;
    __Vdlyvval__test___DOT__wrapper__DOT__reg_file__DOT__block__v0 = 0;
    CData/*0:0*/ __Vdlyvset__test___DOT__wrapper__DOT__reg_file__DOT__block__v0;
    __Vdlyvset__test___DOT__wrapper__DOT__reg_file__DOT__block__v0 = 0;
    // Body
    __Vdly__test___DOT__wrapper__DOT__program_counter 
        = vlSelf->test___DOT__wrapper__DOT__program_counter;
    __Vdlyvset__test___DOT__wrapper__DOT__ram_controller__DOT__bram_block__v0 = 0U;
    __Vdlyvset__test___DOT__wrapper__DOT__reg_file__DOT__block__v0 = 0U;
    if (vlSelf->test___DOT__wrapper__DOT__reset) {
        __Vdly__test___DOT__wrapper__DOT__program_counter 
            = vlSelf->test___DOT__wrapper__DOT__reset_address;
    } else if ((1U & (~ (IData)(vlSelf->test___DOT__wrapper__DOT__stall)))) {
        __Vdly__test___DOT__wrapper__DOT__program_counter 
            = ((IData)(4U) + vlSelf->test___DOT__wrapper__DOT__program_counter);
    }
    if (vlSelf->test___DOT__wrapper__DOT__ram_store_enabled) {
        __Vdlyvval__test___DOT__wrapper__DOT__ram_controller__DOT__bram_block__v0 
            = vlSelf->test___DOT__wrapper__DOT__ram_store_value;
        __Vdlyvset__test___DOT__wrapper__DOT__ram_controller__DOT__bram_block__v0 = 1U;
        __Vdlyvdim0__test___DOT__wrapper__DOT__ram_controller__DOT__bram_block__v0 
            = (0x3ffU & (vlSelf->test___DOT__wrapper__DOT__ram_load_address 
                         >> 2U));
    }
    if (((~ (IData)((0U != (0xcU & vlSelf->test___DOT__wrapper__DOT__decoded_instr[0U])))) 
         & (0U != (0x1fU & (vlSelf->test___DOT__wrapper__DOT__decoded_instr[5U] 
                            >> 0x1aU))))) {
        __Vdlyvval__test___DOT__wrapper__DOT__reg_file__DOT__block__v0 
            = ((0x20U & vlSelf->test___DOT__wrapper__DOT__decoded_instr[0U])
                ? vlSelf->test___DOT__wrapper__DOT__alu_output
                : 0U);
        __Vdlyvset__test___DOT__wrapper__DOT__reg_file__DOT__block__v0 = 1U;
        __Vdlyvdim0__test___DOT__wrapper__DOT__reg_file__DOT__block__v0 
            = (0x1fU & (vlSelf->test___DOT__wrapper__DOT__decoded_instr[5U] 
                        >> 0x1aU));
    }
    vlSelf->test___DOT__wrapper__DOT__ram_load_value 
        = vlSelf->test___DOT__wrapper__DOT__ram_controller__DOT__bram_block
        [(0x3ffU & (vlSelf->test___DOT__wrapper__DOT__ram_store_address 
                    >> 2U))];
    vlSelf->test___DOT__wrapper__DOT__instruction = 
        vlSelf->test___DOT__wrapper__DOT__ram_controller__DOT__bram_block
        [(0x3ffU & (vlSelf->test___DOT__wrapper__DOT__program_counter 
                    >> 2U))];
    if (__Vdlyvset__test___DOT__wrapper__DOT__reg_file__DOT__block__v0) {
        vlSelf->test___DOT__wrapper__DOT__reg_file__DOT__block[__Vdlyvdim0__test___DOT__wrapper__DOT__reg_file__DOT__block__v0] 
            = __Vdlyvval__test___DOT__wrapper__DOT__reg_file__DOT__block__v0;
    }
    vlSelf->test___DOT__wrapper__DOT__program_counter 
        = __Vdly__test___DOT__wrapper__DOT__program_counter;
    if (__Vdlyvset__test___DOT__wrapper__DOT__ram_controller__DOT__bram_block__v0) {
        vlSelf->test___DOT__wrapper__DOT__ram_controller__DOT__bram_block[__Vdlyvdim0__test___DOT__wrapper__DOT__ram_controller__DOT__bram_block__v0] 
            = __Vdlyvval__test___DOT__wrapper__DOT__ram_controller__DOT__bram_block__v0;
    }
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

void Vtest____024root___eval_nba(Vtest____024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtest___Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtest____024root___eval_nba\n"); );
    // Body
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtest____024root___nba_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[1U] = 1U;
    }
}

void Vtest____024root___timing_resume(Vtest____024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtest___Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtest____024root___timing_resume\n"); );
    // Body
    if ((2ULL & vlSelf->__VactTriggered.word(0U))) {
        vlSelf->__VdlySched.resume();
    }
}

void Vtest____024root___eval_triggers__act(Vtest____024root* vlSelf);

bool Vtest____024root___eval_phase__act(Vtest____024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtest___Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtest____024root___eval_phase__act\n"); );
    // Init
    VlTriggerVec<2> __VpreTriggered;
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
