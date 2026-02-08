// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtest_.h for the primary calling header

#include "Vtest___pch.h"
#include "Vtest___Syms.h"
#include "Vtest____024unit.h"

void Vtest____024unit___ctor_var_reset(Vtest____024unit* vlSelf);

Vtest____024unit::Vtest____024unit(Vtest___Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vtest____024unit___ctor_var_reset(this);
}

void Vtest____024unit::__Vconfigure(bool first) {
    if (false && first) {}  // Prevent unused
}

Vtest____024unit::~Vtest____024unit() {
}
