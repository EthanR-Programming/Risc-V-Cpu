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
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtest____024root___dump_triggers__stl(vlSelf);
    }
#endif
}
