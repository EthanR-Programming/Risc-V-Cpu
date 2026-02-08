// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtest_.h for the primary calling header

#ifndef VERILATED_VTEST____024UNIT_H_
#define VERILATED_VTEST____024UNIT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vtest___Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtest____024unit final : public VerilatedModule {
  public:

    // INTERNAL VARIABLES
    Vtest___Syms* const vlSymsp;

    // CONSTRUCTORS
    Vtest____024unit(Vtest___Syms* symsp, const char* v__name);
    ~Vtest____024unit();
    VL_UNCOPYABLE(Vtest____024unit);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
