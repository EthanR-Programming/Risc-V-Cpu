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
    if ((2ULL & vlSelf->__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 1 is active: @([hybrid] test_.wrapper.decoded_instr)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtest____024root___stl_sequent__TOP__0(Vtest____024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtest___Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtest____024root___stl_sequent__TOP__0\n"); );
    // Body
    vlSelf->test___DOT____Vcellinp__wrapper____pinNumber1 
        = vlSelf->test___DOT__clk;
    vlSelf->test___DOT__wrapper__DOT__instruction = 
        vlSelf->test___DOT__wrapper__DOT__ram_controller__DOT__bram_block
        [(0x3ffU & (vlSelf->test___DOT__wrapper__DOT__program_counter 
                    >> 2U))];
}

void Vtest____024root___act_sequent__TOP__1(Vtest____024root* vlSelf);

VL_ATTR_COLD void Vtest____024root___eval_stl(Vtest____024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtest___Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtest____024root___eval_stl\n"); );
    // Body
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        Vtest____024root___stl_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[3U] = 1U;
        vlSelf->__Vm_traceActivity[2U] = 1U;
        vlSelf->__Vm_traceActivity[1U] = 1U;
        vlSelf->__Vm_traceActivity[0U] = 1U;
    }
    if ((3ULL & vlSelf->__VstlTriggered.word(0U))) {
        Vtest____024root___act_sequent__TOP__1(vlSelf);
        vlSelf->__Vm_traceActivity[3U] = 1U;
        vlSelf->__Vm_traceActivity[2U] = 1U;
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
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @([hybrid] test_.wrapper.decoded_instr)\n");
    }
    if ((2ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 1 is active: @(posedge test_.__Vcellinp__wrapper____pinNumber1)\n");
    }
    if ((4ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 2 is active: @(posedge test_.clk)\n");
    }
    if ((8ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 3 is active: @(negedge test_.clk)\n");
    }
    if ((0x10ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 4 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
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
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @([hybrid] test_.wrapper.decoded_instr)\n");
    }
    if ((2ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 1 is active: @(posedge test_.__Vcellinp__wrapper____pinNumber1)\n");
    }
    if ((4ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 2 is active: @(posedge test_.clk)\n");
    }
    if ((8ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 3 is active: @(negedge test_.clk)\n");
    }
    if ((0x10ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 4 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtest____024root___ctor_var_reset(Vtest____024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtest___Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtest____024root___ctor_var_reset\n"); );
    // Body
    vlSelf->test___DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->test___DOT____Vcellinp__wrapper____pinNumber1 = VL_RAND_RESET_I(2);
    vlSelf->test___DOT__wrapper__DOT__global_counter = VL_RAND_RESET_I(32);
    vlSelf->test___DOT__wrapper__DOT__program_counter = VL_RAND_RESET_I(32);
    vlSelf->test___DOT__wrapper__DOT__instruction = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(199, vlSelf->test___DOT__wrapper__DOT__decoded_instr);
    vlSelf->test___DOT__wrapper__DOT__ram_load_address = VL_RAND_RESET_I(32);
    vlSelf->test___DOT__wrapper__DOT__rs1_data = VL_RAND_RESET_I(32);
    vlSelf->test___DOT__wrapper__DOT__rs2_data = VL_RAND_RESET_I(32);
    vlSelf->test___DOT__wrapper__DOT__alu_output = VL_RAND_RESET_I(32);
    vlSelf->test___DOT__wrapper__DOT__stall = VL_RAND_RESET_I(1);
    vlSelf->test___DOT__wrapper__DOT__ram_trap = VL_RAND_RESET_I(1);
    vlSelf->test___DOT__wrapper__DOT__instruction_trap = VL_RAND_RESET_I(1);
    vlSelf->test___DOT__wrapper__DOT__pc_reset_branch = VL_RAND_RESET_I(1);
    vlSelf->test___DOT__wrapper__DOT__reset_address_branch = VL_RAND_RESET_I(32);
    vlSelf->test___DOT__wrapper__DOT__pc_reset_jump = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 1024; ++__Vi0) {
        vlSelf->test___DOT__wrapper__DOT__ram_controller__DOT__bram_block[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->test___DOT__wrapper__DOT__pc__DOT__current_counter = VL_RAND_RESET_I(32);
    vlSelf->test___DOT__wrapper__DOT__instruction_decoder__DOT__unnamedblk1__DOT__opcode = VL_RAND_RESET_I(7);
    vlSelf->test___DOT__wrapper__DOT__instruction_decoder__DOT__unnamedblk1__DOT__rd = VL_RAND_RESET_I(5);
    vlSelf->test___DOT__wrapper__DOT__instruction_decoder__DOT__unnamedblk1__DOT__func3 = VL_RAND_RESET_I(3);
    vlSelf->test___DOT__wrapper__DOT__instruction_decoder__DOT__unnamedblk1__DOT__rs1 = VL_RAND_RESET_I(5);
    vlSelf->test___DOT__wrapper__DOT__instruction_decoder__DOT__unnamedblk1__DOT__rs2 = VL_RAND_RESET_I(5);
    vlSelf->test___DOT__wrapper__DOT__instruction_decoder__DOT__unnamedblk1__DOT__func7 = VL_RAND_RESET_I(7);
    vlSelf->test___DOT__wrapper__DOT__instruction_decoder__DOT__unnamedblk1__DOT__is_r = VL_RAND_RESET_I(1);
    vlSelf->test___DOT__wrapper__DOT__instruction_decoder__DOT__unnamedblk1__DOT__is_i = VL_RAND_RESET_I(1);
    vlSelf->test___DOT__wrapper__DOT__instruction_decoder__DOT__unnamedblk1__DOT__is_s = VL_RAND_RESET_I(1);
    vlSelf->test___DOT__wrapper__DOT__instruction_decoder__DOT__unnamedblk1__DOT__is_b = VL_RAND_RESET_I(1);
    vlSelf->test___DOT__wrapper__DOT__instruction_decoder__DOT__unnamedblk1__DOT__is_u = VL_RAND_RESET_I(1);
    vlSelf->test___DOT__wrapper__DOT__instruction_decoder__DOT__unnamedblk1__DOT__is_j = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->test___DOT__wrapper__DOT__reg_file__DOT__block[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->test___DOT__wrapper__DOT__alu__DOT__unnamedblk1__DOT__rs1_x = VL_RAND_RESET_I(32);
    vlSelf->test___DOT__wrapper__DOT__alu__DOT__unnamedblk1__DOT__rs2_x = VL_RAND_RESET_I(32);
    vlSelf->test___DOT__wrapper__DOT__branch__DOT__unnamedblk1__DOT__rs1_data_unsigned = VL_RAND_RESET_I(32);
    vlSelf->test___DOT__wrapper__DOT__branch__DOT__unnamedblk1__DOT__rs2_data_unsigned = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(199, vlSelf->__Vtrigprevexpr___TOP__test___DOT__wrapper__DOT__decoded_instr__0);
    vlSelf->__VstlDidInit = 0;
    VL_RAND_RESET_W(199, vlSelf->__Vtrigprevexpr___TOP__test___DOT__wrapper__DOT__decoded_instr__1);
    vlSelf->__Vtrigprevexpr___TOP__test___DOT____Vcellinp__wrapper____pinNumber1__0 = VL_RAND_RESET_I(2);
    vlSelf->__Vtrigprevexpr___TOP__test___DOT__clk__0 = VL_RAND_RESET_I(1);
    vlSelf->__VactDidInit = 0;
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
