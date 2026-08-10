// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vfsm_tb__pch.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

Vfsm_tb::Vfsm_tb(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vfsm_tb__Syms(contextp(), _vcname__, this)}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
    contextp()->traceBaseModelCbAdd(
        [this](VerilatedTraceBaseC* tfp, int levels, int options) { traceBaseModel(tfp, levels, options); });
}

Vfsm_tb::Vfsm_tb(const char* _vcname__)
    : Vfsm_tb(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vfsm_tb::~Vfsm_tb() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vfsm_tb___024root___eval_debug_assertions(Vfsm_tb___024root* vlSelf);
#endif  // VL_DEBUG
void Vfsm_tb___024root___eval_static(Vfsm_tb___024root* vlSelf);
void Vfsm_tb___024root___eval_initial(Vfsm_tb___024root* vlSelf);
void Vfsm_tb___024root___eval_settle(Vfsm_tb___024root* vlSelf);
void Vfsm_tb___024root___eval(Vfsm_tb___024root* vlSelf);

void Vfsm_tb::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vfsm_tb::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vfsm_tb___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_activity = true;
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        Vfsm_tb___024root___eval_static(&(vlSymsp->TOP));
        Vfsm_tb___024root___eval_initial(&(vlSymsp->TOP));
        Vfsm_tb___024root___eval_settle(&(vlSymsp->TOP));
        vlSymsp->__Vm_didInit = true;
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    Vfsm_tb___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

void Vfsm_tb::eval_end_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+eval_end_step Vfsm_tb::eval_end_step\n"); );
#ifdef VM_TRACE
    // Tracing
    if (VL_UNLIKELY(vlSymsp->__Vm_dumping)) vlSymsp->_traceDump();
#endif  // VM_TRACE
}

//============================================================
// Events and timing
bool Vfsm_tb::eventsPending() { return !vlSymsp->TOP.__VdlySched.empty() && !contextp()->gotFinish(); }

uint64_t Vfsm_tb::nextTimeSlot() { return vlSymsp->TOP.__VdlySched.nextTimeSlot(); }

//============================================================
// Utilities

const char* Vfsm_tb::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void Vfsm_tb___024root___eval_final(Vfsm_tb___024root* vlSelf);

VL_ATTR_COLD void Vfsm_tb::final() {
    contextp()->executingFinal(true);
    Vfsm_tb___024root___eval_final(&(vlSymsp->TOP));
    contextp()->executingFinal(false);
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vfsm_tb::hierName() const { return vlSymsp->name(); }
const char* Vfsm_tb::modelName() const { return "Vfsm_tb"; }
unsigned Vfsm_tb::threads() const { return 1; }
void Vfsm_tb::prepareClone() const { contextp()->prepareClone(); }
void Vfsm_tb::atClone() const {
    contextp()->threadPoolpOnClone();
}
std::unique_ptr<VerilatedTraceConfig> Vfsm_tb::traceConfig() const {
    return std::unique_ptr<VerilatedTraceConfig>{new VerilatedTraceConfig{false}};
};

//============================================================
// Trace configuration

void Vfsm_tb___024root__trace_decl_types(VerilatedVcd* tracep);

void Vfsm_tb___024root__trace_init_top(Vfsm_tb___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    Vfsm_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vfsm_tb___024root*>(voidSelf);
    Vfsm_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->pushPrefix(vlSymsp->name(), VerilatedTracePrefixType::SCOPE_MODULE);
    Vfsm_tb___024root__trace_decl_types(tracep);
    Vfsm_tb___024root__trace_init_top(vlSelf, tracep);
    tracep->popPrefix();
}

VL_ATTR_COLD void Vfsm_tb___024root__trace_register(Vfsm_tb___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void Vfsm_tb::traceBaseModel(VerilatedTraceBaseC* tfp, int levels, int options) {
    (void)levels; (void)options;
    VerilatedVcdC* const stfp = dynamic_cast<VerilatedVcdC*>(tfp);
    if (VL_UNLIKELY(!stfp)) {
        vl_fatal(__FILE__, __LINE__, __FILE__,"'Vfsm_tb::trace()' called on non-VerilatedVcdC object;"
            " use --trace-fst with VerilatedFst object, and --trace-vcd with VerilatedVcd object");
    }
    stfp->spTrace()->addModel(this);
    stfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP), name(), false, 92);
    Vfsm_tb___024root__trace_register(&(vlSymsp->TOP), stfp->spTrace());
}
