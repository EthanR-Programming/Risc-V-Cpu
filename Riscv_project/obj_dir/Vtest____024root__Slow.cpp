// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtest_.h for the primary calling header

#include "Vtest___pch.h"
#include "Vtest___Syms.h"
#include "Vtest____024root.h"

void Vtest____024root___ctor_var_reset(Vtest____024root* vlSelf);

Vtest____024root::Vtest____024root(Vtest___Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , __VdlySched{*symsp->_vm_contextp__}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vtest____024root___ctor_var_reset(this);
}

void Vtest____024root::__Vconfigure(bool first) {
    if (false && first) {}  // Prevent unused
}

Vtest____024root::~Vtest____024root() {
}
