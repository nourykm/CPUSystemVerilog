// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vhardware_memory_tb.h for the primary calling header

#ifndef VERILATED_VHARDWARE_MEMORY_TB___024ROOT_H_
#define VERILATED_VHARDWARE_MEMORY_TB___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vhardware_memory_tb__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vhardware_memory_tb___024root final {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ hardware_memory_tb__DOT__global_clock;
    CData/*0:0*/ hardware_memory_tb__DOT__mem_read;
    CData/*0:0*/ hardware_memory_tb__DOT__mem_write;
    CData/*0:0*/ hardware_memory_tb__DOT__do_write__Vstatic__enable;
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __VstlPhaseResult;
    CData/*0:0*/ __Vtrigprevexpr___TOP__hardware_memory_tb__DOT__global_clock__0;
    CData/*0:0*/ __VactPhaseResult;
    CData/*0:0*/ __VinactPhaseResult;
    CData/*0:0*/ __VnbaPhaseResult;
    IData/*31:0*/ hardware_memory_tb__DOT__address;
    IData/*31:0*/ hardware_memory_tb__DOT__data_in;
    IData/*31:0*/ hardware_memory_tb__DOT__errors;
    IData/*31:0*/ hardware_memory_tb__DOT__do_write__Vstatic__addr;
    IData/*31:0*/ hardware_memory_tb__DOT__do_write__Vstatic__value;
    IData/*31:0*/ hardware_memory_tb__DOT__do_read__Vstatic__addr;
    IData/*31:0*/ hardware_memory_tb__DOT__dut__DOT__data_out;
    IData/*31:0*/ __VactIterCount;
    IData/*31:0*/ __VinactIterCount;
    IData/*31:0*/ __Vi;
    VlUnpacked<IData/*31:0*/, 1024> hardware_memory_tb__DOT__dut__DOT__memory;
    VlUnpacked<QData/*63:0*/, 1> __VstlTriggered;
    VlUnpacked<QData/*63:0*/, 1> __VactTriggered;
    VlUnpacked<QData/*63:0*/, 1> __VactTriggeredAcc;
    VlUnpacked<QData/*63:0*/, 1> __VnbaTriggered;
    VlUnpacked<CData/*0:0*/, 3> __Vm_traceActivity;
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
    Vhardware_memory_tb__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vhardware_memory_tb___024root(Vhardware_memory_tb__Syms* symsp, const char* namep);
    ~Vhardware_memory_tb___024root();
    VL_UNCOPYABLE(Vhardware_memory_tb___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
