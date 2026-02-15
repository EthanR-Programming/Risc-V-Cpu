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
    CData/*1:0*/ test___DOT____Vcellinp__wrapper____pinNumber1;
    CData/*0:0*/ test___DOT__wrapper__DOT__stall;
    CData/*0:0*/ test___DOT__wrapper__DOT__ram_trap;
    CData/*0:0*/ test___DOT__wrapper__DOT__instruction_trap;
    CData/*0:0*/ test___DOT__wrapper__DOT__pc_reset_branch;
    CData/*0:0*/ test___DOT__wrapper__DOT__pc_reset_jump;
    CData/*6:0*/ test___DOT__wrapper__DOT__instruction_decoder__DOT__unnamedblk1__DOT__opcode;
    CData/*4:0*/ test___DOT__wrapper__DOT__instruction_decoder__DOT__unnamedblk1__DOT__rd;
    CData/*2:0*/ test___DOT__wrapper__DOT__instruction_decoder__DOT__unnamedblk1__DOT__func3;
    CData/*4:0*/ test___DOT__wrapper__DOT__instruction_decoder__DOT__unnamedblk1__DOT__rs1;
    CData/*4:0*/ test___DOT__wrapper__DOT__instruction_decoder__DOT__unnamedblk1__DOT__rs2;
    CData/*6:0*/ test___DOT__wrapper__DOT__instruction_decoder__DOT__unnamedblk1__DOT__func7;
    CData/*0:0*/ test___DOT__wrapper__DOT__instruction_decoder__DOT__unnamedblk1__DOT__is_r;
    CData/*0:0*/ test___DOT__wrapper__DOT__instruction_decoder__DOT__unnamedblk1__DOT__is_i;
    CData/*0:0*/ test___DOT__wrapper__DOT__instruction_decoder__DOT__unnamedblk1__DOT__is_s;
    CData/*0:0*/ test___DOT__wrapper__DOT__instruction_decoder__DOT__unnamedblk1__DOT__is_b;
    CData/*0:0*/ test___DOT__wrapper__DOT__instruction_decoder__DOT__unnamedblk1__DOT__is_u;
    CData/*0:0*/ test___DOT__wrapper__DOT__instruction_decoder__DOT__unnamedblk1__DOT__is_j;
    CData/*0:0*/ __VstlDidInit;
    CData/*0:0*/ __VstlFirstIteration;
    CData/*1:0*/ __Vtrigprevexpr___TOP__test___DOT____Vcellinp__wrapper____pinNumber1__0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__test___DOT__clk__0;
    CData/*0:0*/ __VactDidInit;
    CData/*0:0*/ __VactContinue;
    IData/*31:0*/ test___DOT__wrapper__DOT__global_counter;
    IData/*31:0*/ test___DOT__wrapper__DOT__program_counter;
    IData/*31:0*/ test___DOT__wrapper__DOT__instruction;
    IData/*31:0*/ test___DOT__wrapper__DOT__ram_load_address;
    IData/*31:0*/ test___DOT__wrapper__DOT__rs1_data;
    IData/*31:0*/ test___DOT__wrapper__DOT__rs2_data;
    IData/*31:0*/ test___DOT__wrapper__DOT__alu_output;
    IData/*31:0*/ test___DOT__wrapper__DOT__reset_address_branch;
    IData/*31:0*/ test___DOT__wrapper__DOT__pc__DOT__current_counter;
    IData/*31:0*/ test___DOT__wrapper__DOT__alu__DOT__unnamedblk1__DOT__rs1_x;
    IData/*31:0*/ test___DOT__wrapper__DOT__alu__DOT__unnamedblk1__DOT__rs2_x;
    IData/*31:0*/ test___DOT__wrapper__DOT__branch__DOT__unnamedblk1__DOT__rs1_data_unsigned;
    IData/*31:0*/ test___DOT__wrapper__DOT__branch__DOT__unnamedblk1__DOT__rs2_data_unsigned;
    IData/*31:0*/ __VactIterCount;
    VlWide<7>/*198:0*/ test___DOT__wrapper__DOT__decoded_instr;
    VlWide<7>/*198:0*/ __Vtrigprevexpr___TOP__test___DOT__wrapper__DOT__decoded_instr__0;
    VlWide<7>/*198:0*/ __Vtrigprevexpr___TOP__test___DOT__wrapper__DOT__decoded_instr__1;
    VlUnpacked<IData/*31:0*/, 1024> test___DOT__wrapper__DOT__ram_controller__DOT__bram_block;
    VlUnpacked<IData/*31:0*/, 32> test___DOT__wrapper__DOT__reg_file__DOT__block;
    VlUnpacked<CData/*0:0*/, 4> __Vm_traceActivity;
    VlDelayScheduler __VdlySched;
    VlTriggerVec<2> __VstlTriggered;
    VlTriggerVec<5> __VactTriggered;
    VlTriggerVec<5> __VnbaTriggered;

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
