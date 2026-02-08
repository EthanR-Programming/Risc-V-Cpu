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
    vlSelf->__VactTriggered.set(0U, ((IData)(vlSelf->test___DOT__clk) 
                                     & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__test___DOT__clk__0))));
    vlSelf->__VactTriggered.set(1U, vlSelf->__VdlySched.awaitingCurrentTime());
    vlSelf->__Vtrigprevexpr___TOP__test___DOT__clk__0 
        = vlSelf->test___DOT__clk;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtest____024root___dump_triggers__act(vlSelf);
    }
#endif
}
