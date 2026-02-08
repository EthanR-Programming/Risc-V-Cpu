// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtest_.h for the primary calling header

#ifndef VERILATED_VTEST____024ROOT_H_
#define VERILATED_VTEST____024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vtest___Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtest____024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ test___DOT__clk;
    CData/*0:0*/ test___DOT__wrapper__DOT__ram_store_enabled;
    CData/*0:0*/ test___DOT__wrapper__DOT__stall;
    CData/*0:0*/ test___DOT__wrapper__DOT__ram_trap;
    CData/*0:0*/ test___DOT__wrapper__DOT__reset;
    CData/*0:0*/ test___DOT__wrapper__DOT__instruction_decoder__DOT__trap_instr;
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __Vtrigprevexpr___TOP__test___DOT__clk__0;
    CData/*0:0*/ __VactContinue;
    IData/*31:0*/ test___DOT__wrapper__DOT__program_counter;
    IData/*31:0*/ test___DOT__wrapper__DOT__instruction;
    IData/*31:0*/ test___DOT__wrapper__DOT__ram_load_address;
    IData/*31:0*/ test___DOT__wrapper__DOT__ram_load_value;
    IData/*31:0*/ test___DOT__wrapper__DOT__ram_store_address;
    IData/*31:0*/ test___DOT__wrapper__DOT__ram_store_value;
    IData/*31:0*/ test___DOT__wrapper__DOT__alu_output;
    IData/*31:0*/ test___DOT__wrapper__DOT__reset_address;
    IData/*31:0*/ test___DOT__wrapper__DOT__alu__DOT__unnamedblk1__DOT__rs1_x;
    IData/*31:0*/ test___DOT__wrapper__DOT__alu__DOT__unnamedblk1__DOT__rs2_x;
    IData/*31:0*/ __VactIterCount;
    VlWide<7>/*197:0*/ test___DOT__wrapper__DOT__decoded_instr;
    VlUnpacked<IData/*31:0*/, 1024> test___DOT__wrapper__DOT__ram_controller__DOT__bram_block;
    VlUnpacked<IData/*31:0*/, 32> test___DOT__wrapper__DOT__reg_file__DOT__block;
    VlUnpacked<CData/*0:0*/, 2> __Vm_traceActivity;
    VlDelayScheduler __VdlySched;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<2> __VactTriggered;
    VlTriggerVec<2> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vtest___Syms* const vlSymsp;

    // CONSTRUCTORS
    Vtest____024root(Vtest___Syms* symsp, const char* v__name);
    ~Vtest____024root();
    VL_UNCOPYABLE(Vtest____024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
