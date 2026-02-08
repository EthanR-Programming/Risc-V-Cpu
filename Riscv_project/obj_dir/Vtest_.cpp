// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vtest___pch.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

Vtest_::Vtest_(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vtest___Syms(contextp(), _vcname__, this)}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

Vtest_::Vtest_(const char* _vcname__)
    : Vtest_(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vtest_::~Vtest_() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vtest____024root___eval_debug_assertions(Vtest____024root* vlSelf);
#endif  // VL_DEBUG
void Vtest____024root___eval_static(Vtest____024root* vlSelf);
void Vtest____024root___eval_initial(Vtest____024root* vlSelf);
void Vtest____024root___eval_settle(Vtest____024root* vlSelf);
void Vtest____024root___eval(Vtest____024root* vlSelf);

void Vtest_::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vtest_::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vtest____024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_activity = true;
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        Vtest____024root___eval_static(&(vlSymsp->TOP));
        Vtest____024root___eval_initial(&(vlSymsp->TOP));
        Vtest____024root___eval_settle(&(vlSymsp->TOP));
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    Vtest____024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

void Vtest_::eval_end_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+eval_end_step Vtest_::eval_end_step\n"); );
#ifdef VM_TRACE
    // Tracing
    if (VL_UNLIKELY(vlSymsp->__Vm_dumping)) vlSymsp->_traceDump();
#endif  // VM_TRACE
}

//============================================================
// Events and timing
bool Vtest_::eventsPending() { return !vlSymsp->TOP.__VdlySched.empty(); }

uint64_t Vtest_::nextTimeSlot() { return vlSymsp->TOP.__VdlySched.nextTimeSlot(); }

//============================================================
// Utilities

const char* Vtest_::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void Vtest____024root___eval_final(Vtest____024root* vlSelf);

VL_ATTR_COLD void Vtest_::final() {
    Vtest____024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vtest_::hierName() const { return vlSymsp->name(); }
const char* Vtest_::modelName() const { return "Vtest_"; }
unsigned Vtest_::threads() const { return 1; }
void Vtest_::prepareClone() const { contextp()->prepareClone(); }
void Vtest_::atClone() const {
    contextp()->threadPoolpOnClone();
}
std::unique_ptr<VerilatedTraceConfig> Vtest_::traceConfig() const {
    return std::unique_ptr<VerilatedTraceConfig>{new VerilatedTraceConfig{false, false, false}};
};

//============================================================
// Trace configuration

void Vtest____024root__trace_decl_types(VerilatedVcd* tracep);

void Vtest____024root__trace_init_top(Vtest____024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    Vtest____024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtest____024root*>(voidSelf);
    Vtest___Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->pushPrefix(std::string{vlSymsp->name()}, VerilatedTracePrefixType::SCOPE_MODULE);
    Vtest____024root__trace_decl_types(tracep);
    Vtest____024root__trace_init_top(vlSelf, tracep);
    tracep->popPrefix();
}

VL_ATTR_COLD void Vtest____024root__trace_register(Vtest____024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void Vtest_::trace(VerilatedVcdC* tfp, int levels, int options) {
    if (tfp->isOpen()) {
        vl_fatal(__FILE__, __LINE__, __FILE__,"'Vtest_::trace()' shall not be called after 'VerilatedVcdC::open()'.");
    }
    if (false && levels && options) {}  // Prevent unused
    tfp->spTrace()->addModel(this);
    tfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    Vtest____024root__trace_register(&(vlSymsp->TOP), tfp->spTrace());
}
