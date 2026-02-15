// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtest_.h for the primary calling header

#include "Vtest___pch.h"
#include "Vtest___Syms.h"
#include "Vtest____024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtest____024root___dump_triggers__stl(Vtest____024root* vlSelf);
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtest____024root___eval_triggers__stl(Vtest____024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtest___Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtest____024root___eval_triggers__stl\n"); );
    // Body
    vlSelf->__VstlTriggered.set(0U, (IData)(vlSelf->__VstlFirstIteration));
    vlSelf->__VstlTriggered.set(1U, (0U != (((((((vlSelf->test___DOT__wrapper__DOT__decoded_instr[0U] 
                                                  ^ 
                                                  vlSelf->__Vtrigprevexpr___TOP__test___DOT__wrapper__DOT__decoded_instr__0[0U]) 
                                                 | (vlSelf->test___DOT__wrapper__DOT__decoded_instr[1U] 
                                                    ^ 
                                                    vlSelf->__Vtrigprevexpr___TOP__test___DOT__wrapper__DOT__decoded_instr__0[1U])) 
                                                | (vlSelf->test___DOT__wrapper__DOT__decoded_instr[2U] 
                                                   ^ 
                                                   vlSelf->__Vtrigprevexpr___TOP__test___DOT__wrapper__DOT__decoded_instr__0[2U])) 
                                               | (vlSelf->test___DOT__wrapper__DOT__decoded_instr[3U] 
                                                  ^ 
                                                  vlSelf->__Vtrigprevexpr___TOP__test___DOT__wrapper__DOT__decoded_instr__0[3U])) 
                                              | (vlSelf->test___DOT__wrapper__DOT__decoded_instr[4U] 
                                                 ^ 
                                                 vlSelf->__Vtrigprevexpr___TOP__test___DOT__wrapper__DOT__decoded_instr__0[4U])) 
                                             | (vlSelf->test___DOT__wrapper__DOT__decoded_instr[5U] 
                                                ^ vlSelf->__Vtrigprevexpr___TOP__test___DOT__wrapper__DOT__decoded_instr__0[5U])) 
                                            | (vlSelf->test___DOT__wrapper__DOT__decoded_instr[6U] 
                                               ^ vlSelf->__Vtrigprevexpr___TOP__test___DOT__wrapper__DOT__decoded_instr__0[6U]))));
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
    if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->__VstlDidInit))))) {
        vlSelf->__VstlDidInit = 1U;
        vlSelf->__VstlTriggered.set(1U, 1U);
    }
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtest____024root___dump_triggers__stl(vlSelf);
    }
#endif
}
