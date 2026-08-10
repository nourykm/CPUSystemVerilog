// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Varchitecture_components__pch.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

Varchitecture_components::Varchitecture_components(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Varchitecture_components__Syms(contextp(), _vcname__, this)}
    , register_file__02Eglobal_clock{vlSymsp->TOP.register_file__02Eglobal_clock}
    , program_counter__02Eglobal_clock{vlSymsp->TOP.program_counter__02Eglobal_clock}
    , alu__02Eglobal_clock{vlSymsp->TOP.alu__02Eglobal_clock}
    , RF_write{vlSymsp->TOP.RF_write}
    , reg_A{vlSymsp->TOP.reg_A}
    , reg_B{vlSymsp->TOP.reg_B}
    , reg_W{vlSymsp->TOP.reg_W}
    , reset{vlSymsp->TOP.reset}
    , PC_write{vlSymsp->TOP.PC_write}
    , flag_write{vlSymsp->TOP.flag_write}
    , ALU_op{vlSymsp->TOP.ALU_op}
    , neg{vlSymsp->TOP.neg}
    , zero{vlSymsp->TOP.zero}
    , data_w{vlSymsp->TOP.data_w}
    , data_A{vlSymsp->TOP.data_A}
    , data_B{vlSymsp->TOP.data_B}
    , PC_data{vlSymsp->TOP.PC_data}
    , PC_address{vlSymsp->TOP.PC_address}
    , ALU_A{vlSymsp->TOP.ALU_A}
    , ALU_B{vlSymsp->TOP.ALU_B}
    , ALU_out{vlSymsp->TOP.ALU_out}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
    contextp()->traceBaseModelCbAdd(
        [this](VerilatedTraceBaseC* tfp, int levels, int options) { traceBaseModel(tfp, levels, options); });
}

Varchitecture_components::Varchitecture_components(const char* _vcname__)
    : Varchitecture_components(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Varchitecture_components::~Varchitecture_components() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Varchitecture_components___024root___eval_debug_assertions(Varchitecture_components___024root* vlSelf);
#endif  // VL_DEBUG
void Varchitecture_components___024root___eval_static(Varchitecture_components___024root* vlSelf);
void Varchitecture_components___024root___eval_initial(Varchitecture_components___024root* vlSelf);
void Varchitecture_components___024root___eval_settle(Varchitecture_components___024root* vlSelf);
void Varchitecture_components___024root___eval(Varchitecture_components___024root* vlSelf);

void Varchitecture_components::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Varchitecture_components::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Varchitecture_components___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_activity = true;
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        Varchitecture_components___024root___eval_static(&(vlSymsp->TOP));
        Varchitecture_components___024root___eval_initial(&(vlSymsp->TOP));
        Varchitecture_components___024root___eval_settle(&(vlSymsp->TOP));
        vlSymsp->__Vm_didInit = true;
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    Varchitecture_components___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool Varchitecture_components::eventsPending() { return !vlSymsp->TOP.__VdlySched.empty() && !contextp()->gotFinish(); }

uint64_t Varchitecture_components::nextTimeSlot() { return vlSymsp->TOP.__VdlySched.nextTimeSlot(); }

//============================================================
// Utilities

const char* Varchitecture_components::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void Varchitecture_components___024root___eval_final(Varchitecture_components___024root* vlSelf);

VL_ATTR_COLD void Varchitecture_components::final() {
    contextp()->executingFinal(true);
    Varchitecture_components___024root___eval_final(&(vlSymsp->TOP));
    contextp()->executingFinal(false);
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Varchitecture_components::hierName() const { return vlSymsp->name(); }
const char* Varchitecture_components::modelName() const { return "Varchitecture_components"; }
unsigned Varchitecture_components::threads() const { return 1; }
void Varchitecture_components::prepareClone() const { contextp()->prepareClone(); }
void Varchitecture_components::atClone() const {
    contextp()->threadPoolpOnClone();
}
std::unique_ptr<VerilatedTraceConfig> Varchitecture_components::traceConfig() const {
    return std::unique_ptr<VerilatedTraceConfig>{new VerilatedTraceConfig{false}};
};

//============================================================
// Trace configuration

void Varchitecture_components___024root__trace_decl_types(VerilatedVcd* tracep);

void Varchitecture_components___024root__trace_init_top(Varchitecture_components___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    Varchitecture_components___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Varchitecture_components___024root*>(voidSelf);
    Varchitecture_components__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->pushPrefix(vlSymsp->name(), VerilatedTracePrefixType::SCOPE_MODULE);
    Varchitecture_components___024root__trace_decl_types(tracep);
    Varchitecture_components___024root__trace_init_top(vlSelf, tracep);
    tracep->popPrefix();
}

VL_ATTR_COLD void Varchitecture_components___024root__trace_register(Varchitecture_components___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void Varchitecture_components::traceBaseModel(VerilatedTraceBaseC* tfp, int levels, int options) {
    (void)levels; (void)options;
    VerilatedVcdC* const stfp = dynamic_cast<VerilatedVcdC*>(tfp);
    if (VL_UNLIKELY(!stfp)) {
        vl_fatal(__FILE__, __LINE__, __FILE__,"'Varchitecture_components::trace()' called on non-VerilatedVcdC object;"
            " use --trace-fst with VerilatedFst object, and --trace-vcd with VerilatedVcd object");
    }
    stfp->spTrace()->addModel(this);
    stfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP), name(), false, 66);
    Varchitecture_components___024root__trace_register(&(vlSymsp->TOP), stfp->spTrace());
}
