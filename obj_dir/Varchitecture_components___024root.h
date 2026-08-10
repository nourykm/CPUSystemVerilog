// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Varchitecture_components.h for the primary calling header

#ifndef VERILATED_VARCHITECTURE_COMPONENTS___024ROOT_H_
#define VERILATED_VARCHITECTURE_COMPONENTS___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Varchitecture_components__Syms;

class alignas(VL_CACHE_LINE_BYTES) Varchitecture_components___024root final {
  public:

    // DESIGN SPECIFIC STATE
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        VL_IN8(register_file__02Eglobal_clock,0,0);
        VL_IN8(program_counter__02Eglobal_clock,0,0);
        VL_IN8(alu__02Eglobal_clock,0,0);
        VL_IN8(RF_write,0,0);
        VL_IN8(reg_A,4,0);
        VL_IN8(reg_B,4,0);
        VL_IN8(reg_W,4,0);
        VL_IN8(reset,0,0);
        VL_IN8(PC_write,0,0);
        VL_IN8(flag_write,0,0);
        VL_IN8(ALU_op,6,0);
        VL_OUT8(neg,0,0);
        VL_OUT8(zero,0,0);
        CData/*0:0*/ hardware_memory_tb__DOT__global_clock;
        CData/*0:0*/ hardware_memory_tb__DOT__mem_read;
        CData/*0:0*/ hardware_memory_tb__DOT__mem_write;
        CData/*0:0*/ hardware_memory_tb__DOT__do_write__Vstatic__enable;
        CData/*0:0*/ __VstlFirstIteration;
        CData/*0:0*/ __VstlPhaseResult;
        CData/*0:0*/ __Vtrigprevexpr___TOP__register_file__02Eglobal_clock__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__RF_write__0;
        CData/*4:0*/ __Vtrigprevexpr___TOP__reg_A__0;
        CData/*4:0*/ __Vtrigprevexpr___TOP__reg_B__0;
        CData/*4:0*/ __Vtrigprevexpr___TOP__reg_W__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__program_counter__02Eglobal_clock__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__reset__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__PC_write__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__alu__02Eglobal_clock__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__flag_write__0;
        CData/*6:0*/ __Vtrigprevexpr___TOP__ALU_op__0;
        CData/*0:0*/ __VicoDidInit;
        CData/*0:0*/ __VicoPhaseResult;
        CData/*0:0*/ __Vtrigprevexpr___TOP__hardware_memory_tb__DOT__global_clock__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__alu__02Eglobal_clock__1;
        CData/*0:0*/ __Vtrigprevexpr___TOP__program_counter__02Eglobal_clock__1;
        CData/*0:0*/ __Vtrigprevexpr___TOP__register_file__02Eglobal_clock__1;
        CData/*0:0*/ __VactPhaseResult;
        CData/*0:0*/ __VinactPhaseResult;
        CData/*0:0*/ __VnbaPhaseResult;
        VL_IN(data_w,31,0);
        VL_OUT(data_A,31,0);
        VL_OUT(data_B,31,0);
        VL_IN(PC_data,31,0);
        VL_OUT(PC_address,31,0);
        VL_IN(ALU_A,31,0);
        VL_IN(ALU_B,31,0);
        VL_OUT(ALU_out,31,0);
        IData/*31:0*/ hardware_memory_tb__DOT__address;
        IData/*31:0*/ hardware_memory_tb__DOT__data_in;
        IData/*31:0*/ hardware_memory_tb__DOT__errors;
        IData/*31:0*/ hardware_memory_tb__DOT__do_write__Vstatic__addr;
        IData/*31:0*/ hardware_memory_tb__DOT__do_write__Vstatic__value;
        IData/*31:0*/ hardware_memory_tb__DOT__do_read__Vstatic__addr;
        IData/*31:0*/ hardware_memory_tb__DOT__dut__DOT__data_out;
        IData/*31:0*/ alu__DOT__out;
        IData/*31:0*/ program_counter__DOT__address;
        IData/*31:0*/ __Vtrigprevexpr___TOP__data_w__0;
        IData/*31:0*/ __Vtrigprevexpr___TOP__PC_data__0;
        IData/*31:0*/ __Vtrigprevexpr___TOP__ALU_A__0;
        IData/*31:0*/ __Vtrigprevexpr___TOP__ALU_B__0;
        IData/*31:0*/ __VactIterCount;
        IData/*31:0*/ __VinactIterCount;
        IData/*31:0*/ __Vi;
        VlUnpacked<IData/*31:0*/, 1024> hardware_memory_tb__DOT__dut__DOT__memory;
    };
    struct {
        VlUnpacked<IData/*31:0*/, 32> register_file__DOT__registers;
        VlUnpacked<QData/*63:0*/, 1> __VstlTriggered;
        VlUnpacked<QData/*63:0*/, 2> __VicoTriggered;
        VlUnpacked<QData/*63:0*/, 1> __VactTriggered;
        VlUnpacked<QData/*63:0*/, 1> __VactTriggeredAcc;
        VlUnpacked<QData/*63:0*/, 1> __VnbaTriggered;
        VlUnpacked<CData/*0:0*/, 4> __Vm_traceActivity;
    };
    std::string __Vtask_hardware_memory_tb__DOT__check__1__label;
    std::string __Vtask_hardware_memory_tb__DOT__check__2__label;
    std::string __Vtask_hardware_memory_tb__DOT__check__4__label;
    std::string __Vtask_hardware_memory_tb__DOT__check__7__label;
    std::string __Vtask_hardware_memory_tb__DOT__check__9__label;
    std::string __Vtask_hardware_memory_tb__DOT__check__12__label;
    std::string __Vtask_hardware_memory_tb__DOT__check__15__label;
    VlDelayScheduler __VdlySched;
    VlTriggerScheduler __VtrigSched_h4b0390ea__0;
    VlTriggerScheduler __VtrigSched_h4b03902b__0;

    // INTERNAL VARIABLES
    Varchitecture_components__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Varchitecture_components___024root(Varchitecture_components__Syms* symsp, const char* namep);
    ~Varchitecture_components___024root();
    VL_UNCOPYABLE(Varchitecture_components___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
