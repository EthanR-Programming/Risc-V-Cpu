// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtest_.h for the primary calling header

#include "Vtest___pch.h"
#include "Vtest___Syms.h"
#include "Vtest____024root.h"

VL_INLINE_OPT VlCoroutine Vtest____024root___eval_initial__TOP__Vtiming__0(Vtest____024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtest___Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtest____024root___eval_initial__TOP__Vtiming__0\n"); );
    // Init
    IData/*31:0*/ test___DOT____Vrepeat0;
    test___DOT____Vrepeat0 = 0;
    // Body
    VL_WRITEF("Begin\n");
    vlSymsp->_vm_contextp__->dumpfile(std::string{"wave.vcd"});
    vlSymsp->_traceDumpOpen();
    test___DOT____Vrepeat0 = 0x64U;
    while (VL_LTS_III(32, 0U, test___DOT____Vrepeat0)) {
        co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                           "rtl/test_.sv", 
                                           18);
        vlSelf->test___DOT__clk = 1U;
        co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                           "rtl/test_.sv", 
                                           19);
        vlSelf->test___DOT__clk = 0U;
        test___DOT____Vrepeat0 = (test___DOT____Vrepeat0 
                                  - (IData)(1U));
    }
    VL_FINISH_MT("rtl/test_.sv", 22, "");
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtest____024root___dump_triggers__act(Vtest____024root* vlSelf);
#endif  // VL_DEBUG

void Vtest____024root___eval_triggers__act(Vtest____024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtest___Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtest____024root___eval_triggers__act\n"); );
    // Body
    vlSelf->__VactTriggered.set(0U, (0U != (((((((vlSelf->test___DOT__wrapper__DOT__decoded_instr[0U] 
                                                  ^ 
                                                  vlSelf->__Vtrigprevexpr___TOP__test___DOT__wrapper__DOT__decoded_instr__1[0U]) 
                                                 | (vlSelf->test___DOT__wrapper__DOT__decoded_instr[1U] 
                                                    ^ 
                                                    vlSelf->__Vtrigprevexpr___TOP__test___DOT__wrapper__DOT__decoded_instr__1[1U])) 
                                                | (vlSelf->test___DOT__wrapper__DOT__decoded_instr[2U] 
                                                   ^ 
                                                   vlSelf->__Vtrigprevexpr___TOP__test___DOT__wrapper__DOT__decoded_instr__1[2U])) 
                                               | (vlSelf->test___DOT__wrapper__DOT__decoded_instr[3U] 
                                                  ^ 
                                                  vlSelf->__Vtrigprevexpr___TOP__test___DOT__wrapper__DOT__decoded_instr__1[3U])) 
                                              | (vlSelf->test___DOT__wrapper__DOT__decoded_instr[4U] 
                                                 ^ 
                                                 vlSelf->__Vtrigprevexpr___TOP__test___DOT__wrapper__DOT__decoded_instr__1[4U])) 
                                             | (vlSelf->test___DOT__wrapper__DOT__decoded_instr[5U] 
                                                ^ vlSelf->__Vtrigprevexpr___TOP__test___DOT__wrapper__DOT__decoded_instr__1[5U])) 
                                            | (vlSelf->test___DOT__wrapper__DOT__decoded_instr[6U] 
                                               ^ vlSelf->__Vtrigprevexpr___TOP__test___DOT__wrapper__DOT__decoded_instr__1[6U]))));
    vlSelf->__VactTriggered.set(1U, (1U & ((IData)(vlSelf->test___DOT____Vcellinp__wrapper____pinNumber1) 
                                           & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__test___DOT____Vcellinp__wrapper____pinNumber1__0)))));
    vlSelf->__VactTriggered.set(2U, ((IData)(vlSelf->test___DOT__clk) 
                                     & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__test___DOT__clk__0))));
    vlSelf->__VactTriggered.set(3U, ((~ (IData)(vlSelf->test___DOT__clk)) 
                                     & (IData)(vlSelf->__Vtrigprevexpr___TOP__test___DOT__clk__0)));
    vlSelf->__VactTriggered.set(4U, vlSelf->__VdlySched.awaitingCurrentTime());
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
    if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->__VactDidInit))))) {
        vlSelf->__VactDidInit = 1U;
        vlSelf->__VactTriggered.set(0U, 1U);
    }
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtest____024root___dump_triggers__act(vlSelf);
    }
#endif
}
