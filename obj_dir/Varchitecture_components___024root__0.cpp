// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Varchitecture_components.h for the primary calling header

#include "Varchitecture_components__pch.h"

VlCoroutine Varchitecture_components___024root___eval_initial__TOP__Vtiming__0(Varchitecture_components___024root* vlSelf);
VlCoroutine Varchitecture_components___024root___eval_initial__TOP__Vtiming__1(Varchitecture_components___024root* vlSelf);
VlCoroutine Varchitecture_components___024root___eval_initial__TOP__Vtiming__2(Varchitecture_components___024root* vlSelf);

void Varchitecture_components___024root___eval_initial(Varchitecture_components___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Varchitecture_components___024root___eval_initial\n"); );
    Varchitecture_components__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    {
        // Inlined CFunc: _eval_initial__TOP
        IData/*31:0*/ __Vinline_0__eval_initial__TOP_hardware_memory_tb__DOT__dut__DOT__unnamedblk1__DOT__i;
        __Vinline_0__eval_initial__TOP_hardware_memory_tb__DOT__dut__DOT__unnamedblk1__DOT__i = 0;
        __Vinline_0__eval_initial__TOP_hardware_memory_tb__DOT__dut__DOT__unnamedblk1__DOT__i = 0x000003ffU;
        while (VL_LTES_III(32, 0U, __Vinline_0__eval_initial__TOP_hardware_memory_tb__DOT__dut__DOT__unnamedblk1__DOT__i)) {
            vlSelfRef.hardware_memory_tb__DOT__dut__DOT__memory[(0x000003ffU 
                                                                 & __Vinline_0__eval_initial__TOP_hardware_memory_tb__DOT__dut__DOT__unnamedblk1__DOT__i)] = 0U;
            __Vinline_0__eval_initial__TOP_hardware_memory_tb__DOT__dut__DOT__unnamedblk1__DOT__i 
                = (__Vinline_0__eval_initial__TOP_hardware_memory_tb__DOT__dut__DOT__unnamedblk1__DOT__i 
                   - (IData)(1U));
        }
        vlSelfRef.hardware_memory_tb__DOT__dut__DOT__memory[0U] = 0x002201b3U;
        vlSelfRef.register_file__DOT__registers[4U] = 1U;
        vlSelfRef.register_file__DOT__registers[2U] = 2U;
    }
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    Varchitecture_components___024root___eval_initial__TOP__Vtiming__0(vlSelf);
    Varchitecture_components___024root___eval_initial__TOP__Vtiming__1(vlSelf);
    Varchitecture_components___024root___eval_initial__TOP__Vtiming__2(vlSelf);
}

void Varchitecture_components___024root____VbeforeTrig_h4b0390ea__0(Varchitecture_components___024root* vlSelf, const char* __VeventDescription);
void Varchitecture_components___024root____VbeforeTrig_h4b03902b__0(Varchitecture_components___024root* vlSelf, const char* __VeventDescription);

VlCoroutine Varchitecture_components___024root___eval_initial__TOP__Vtiming__0(Varchitecture_components___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Varchitecture_components___024root___eval_initial__TOP__Vtiming__0\n"); );
    Varchitecture_components__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __Vtask_hardware_memory_tb__DOT__do_read__0__addr;
    __Vtask_hardware_memory_tb__DOT__do_read__0__addr = 0;
    IData/*31:0*/ __Vtask_hardware_memory_tb__DOT__check__1__expected;
    __Vtask_hardware_memory_tb__DOT__check__1__expected = 0;
    IData/*31:0*/ __Vtask_hardware_memory_tb__DOT__check__2__expected;
    __Vtask_hardware_memory_tb__DOT__check__2__expected = 0;
    IData/*31:0*/ __Vtask_hardware_memory_tb__DOT__do_read__3__addr;
    __Vtask_hardware_memory_tb__DOT__do_read__3__addr = 0;
    IData/*31:0*/ __Vtask_hardware_memory_tb__DOT__check__4__expected;
    __Vtask_hardware_memory_tb__DOT__check__4__expected = 0;
    IData/*31:0*/ __Vtask_hardware_memory_tb__DOT__do_write__5__addr;
    __Vtask_hardware_memory_tb__DOT__do_write__5__addr = 0;
    IData/*31:0*/ __Vtask_hardware_memory_tb__DOT__do_write__5__value;
    __Vtask_hardware_memory_tb__DOT__do_write__5__value = 0;
    CData/*0:0*/ __Vtask_hardware_memory_tb__DOT__do_write__5__enable;
    __Vtask_hardware_memory_tb__DOT__do_write__5__enable = 0;
    IData/*31:0*/ __Vtask_hardware_memory_tb__DOT__do_read__6__addr;
    __Vtask_hardware_memory_tb__DOT__do_read__6__addr = 0;
    IData/*31:0*/ __Vtask_hardware_memory_tb__DOT__check__7__expected;
    __Vtask_hardware_memory_tb__DOT__check__7__expected = 0;
    IData/*31:0*/ __Vtask_hardware_memory_tb__DOT__do_read__8__addr;
    __Vtask_hardware_memory_tb__DOT__do_read__8__addr = 0;
    IData/*31:0*/ __Vtask_hardware_memory_tb__DOT__check__9__expected;
    __Vtask_hardware_memory_tb__DOT__check__9__expected = 0;
    IData/*31:0*/ __Vtask_hardware_memory_tb__DOT__do_write__10__addr;
    __Vtask_hardware_memory_tb__DOT__do_write__10__addr = 0;
    IData/*31:0*/ __Vtask_hardware_memory_tb__DOT__do_write__10__value;
    __Vtask_hardware_memory_tb__DOT__do_write__10__value = 0;
    CData/*0:0*/ __Vtask_hardware_memory_tb__DOT__do_write__10__enable;
    __Vtask_hardware_memory_tb__DOT__do_write__10__enable = 0;
    IData/*31:0*/ __Vtask_hardware_memory_tb__DOT__do_read__11__addr;
    __Vtask_hardware_memory_tb__DOT__do_read__11__addr = 0;
    IData/*31:0*/ __Vtask_hardware_memory_tb__DOT__check__12__expected;
    __Vtask_hardware_memory_tb__DOT__check__12__expected = 0;
    IData/*31:0*/ __Vtask_hardware_memory_tb__DOT__do_write__13__addr;
    __Vtask_hardware_memory_tb__DOT__do_write__13__addr = 0;
    IData/*31:0*/ __Vtask_hardware_memory_tb__DOT__do_write__13__value;
    __Vtask_hardware_memory_tb__DOT__do_write__13__value = 0;
    CData/*0:0*/ __Vtask_hardware_memory_tb__DOT__do_write__13__enable;
    __Vtask_hardware_memory_tb__DOT__do_write__13__enable = 0;
    IData/*31:0*/ __Vtask_hardware_memory_tb__DOT__do_read__14__addr;
    __Vtask_hardware_memory_tb__DOT__do_read__14__addr = 0;
    IData/*31:0*/ __Vtask_hardware_memory_tb__DOT__check__15__expected;
    __Vtask_hardware_memory_tb__DOT__check__15__expected = 0;
    IData/*31:0*/ __Vtask_hardware_memory_tb__DOT__do_write__16__addr;
    __Vtask_hardware_memory_tb__DOT__do_write__16__addr = 0;
    IData/*31:0*/ __Vtask_hardware_memory_tb__DOT__do_write__16__value;
    __Vtask_hardware_memory_tb__DOT__do_write__16__value = 0;
    CData/*0:0*/ __Vtask_hardware_memory_tb__DOT__do_write__16__enable;
    __Vtask_hardware_memory_tb__DOT__do_write__16__enable = 0;
    // Body
    vlSelfRef.hardware_memory_tb__DOT__mem_read = 0U;
    vlSelfRef.hardware_memory_tb__DOT__mem_write = 0U;
    vlSelfRef.hardware_memory_tb__DOT__address = 0U;
    vlSelfRef.hardware_memory_tb__DOT__data_in = 0U;
    Varchitecture_components___024root____VbeforeTrig_h4b0390ea__0(vlSelf, 
                                                                   "@(negedge hardware_memory_tb.global_clock)");
    co_await vlSelfRef.__VtrigSched_h4b0390ea__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge hardware_memory_tb.global_clock)", 
                                                         "testbenches/memory_tb.sv", 
                                                         73);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    __Vtask_hardware_memory_tb__DOT__do_read__0__addr = 0U;
    vlSelfRef.hardware_memory_tb__DOT__do_read__Vstatic__addr 
        = __Vtask_hardware_memory_tb__DOT__do_read__0__addr;
    Varchitecture_components___024root____VbeforeTrig_h4b0390ea__0(vlSelf, 
                                                                   "@(negedge hardware_memory_tb.global_clock)");
    co_await vlSelfRef.__VtrigSched_h4b0390ea__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge hardware_memory_tb.global_clock)", 
                                                         "testbenches/memory_tb.sv", 
                                                         58);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.hardware_memory_tb__DOT__address = vlSelfRef.hardware_memory_tb__DOT__do_read__Vstatic__addr;
    vlSelfRef.hardware_memory_tb__DOT__mem_read = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "testbenches/memory_tb.sv", 
                                         61);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.__Vtask_hardware_memory_tb__DOT__check__1__label = "read preloaded instruction at addr 0"s;
    __Vtask_hardware_memory_tb__DOT__check__1__expected = 0x002201b3U;
    if ((vlSelfRef.hardware_memory_tb__DOT__dut__DOT__data_out 
         != __Vtask_hardware_memory_tb__DOT__check__1__expected)) {
        VL_WRITEF_NX("FAIL at time %0t: %s \n data_out = %h, expected %h\n",5, 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , 'S',&(vlSelfRef.__Vtask_hardware_memory_tb__DOT__check__1__label)
                     , '#',32,vlSelfRef.hardware_memory_tb__DOT__dut__DOT__data_out
                     , '#',32,__Vtask_hardware_memory_tb__DOT__check__1__expected);
        vlSelfRef.hardware_memory_tb__DOT__errors = 
            ((IData)(1U) + vlSelfRef.hardware_memory_tb__DOT__errors);
    } else {
        VL_WRITEF_NX("PASS: %s\n",1, 'S',&(vlSelfRef.__Vtask_hardware_memory_tb__DOT__check__1__label));
    }
    Varchitecture_components___024root____VbeforeTrig_h4b0390ea__0(vlSelf, 
                                                                   "@(negedge hardware_memory_tb.global_clock)");
    co_await vlSelfRef.__VtrigSched_h4b0390ea__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge hardware_memory_tb.global_clock)", 
                                                         "testbenches/memory_tb.sv", 
                                                         80);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.hardware_memory_tb__DOT__mem_read = 0U;
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "testbenches/memory_tb.sv", 
                                         82);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.__Vtask_hardware_memory_tb__DOT__check__2__label = "mem_read low forces data_out to 0"s;
    __Vtask_hardware_memory_tb__DOT__check__2__expected = 0U;
    if ((vlSelfRef.hardware_memory_tb__DOT__dut__DOT__data_out 
         != __Vtask_hardware_memory_tb__DOT__check__2__expected)) {
        VL_WRITEF_NX("FAIL at time %0t: %s \n data_out = %h, expected %h\n",5, 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , 'S',&(vlSelfRef.__Vtask_hardware_memory_tb__DOT__check__2__label)
                     , '#',32,vlSelfRef.hardware_memory_tb__DOT__dut__DOT__data_out
                     , '#',32,__Vtask_hardware_memory_tb__DOT__check__2__expected);
        vlSelfRef.hardware_memory_tb__DOT__errors = 
            ((IData)(1U) + vlSelfRef.hardware_memory_tb__DOT__errors);
    } else {
        VL_WRITEF_NX("PASS: %s\n",1, 'S',&(vlSelfRef.__Vtask_hardware_memory_tb__DOT__check__2__label));
    }
    __Vtask_hardware_memory_tb__DOT__do_read__3__addr = 0x00000064U;
    vlSelfRef.hardware_memory_tb__DOT__do_read__Vstatic__addr 
        = __Vtask_hardware_memory_tb__DOT__do_read__3__addr;
    Varchitecture_components___024root____VbeforeTrig_h4b0390ea__0(vlSelf, 
                                                                   "@(negedge hardware_memory_tb.global_clock)");
    co_await vlSelfRef.__VtrigSched_h4b0390ea__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge hardware_memory_tb.global_clock)", 
                                                         "testbenches/memory_tb.sv", 
                                                         58);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.hardware_memory_tb__DOT__address = vlSelfRef.hardware_memory_tb__DOT__do_read__Vstatic__addr;
    vlSelfRef.hardware_memory_tb__DOT__mem_read = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "testbenches/memory_tb.sv", 
                                         61);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.__Vtask_hardware_memory_tb__DOT__check__4__label = "uninitialised location reads 0"s;
    __Vtask_hardware_memory_tb__DOT__check__4__expected = 0U;
    if ((vlSelfRef.hardware_memory_tb__DOT__dut__DOT__data_out 
         != __Vtask_hardware_memory_tb__DOT__check__4__expected)) {
        VL_WRITEF_NX("FAIL at time %0t: %s \n data_out = %h, expected %h\n",5, 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , 'S',&(vlSelfRef.__Vtask_hardware_memory_tb__DOT__check__4__label)
                     , '#',32,vlSelfRef.hardware_memory_tb__DOT__dut__DOT__data_out
                     , '#',32,__Vtask_hardware_memory_tb__DOT__check__4__expected);
        vlSelfRef.hardware_memory_tb__DOT__errors = 
            ((IData)(1U) + vlSelfRef.hardware_memory_tb__DOT__errors);
    } else {
        VL_WRITEF_NX("PASS: %s\n",1, 'S',&(vlSelfRef.__Vtask_hardware_memory_tb__DOT__check__4__label));
    }
    __Vtask_hardware_memory_tb__DOT__do_write__5__enable = 1U;
    __Vtask_hardware_memory_tb__DOT__do_write__5__value = 0xdeadbeefU;
    __Vtask_hardware_memory_tb__DOT__do_write__5__addr = 5U;
    vlSelfRef.hardware_memory_tb__DOT__do_write__Vstatic__addr 
        = __Vtask_hardware_memory_tb__DOT__do_write__5__addr;
    vlSelfRef.hardware_memory_tb__DOT__do_write__Vstatic__value 
        = __Vtask_hardware_memory_tb__DOT__do_write__5__value;
    vlSelfRef.hardware_memory_tb__DOT__do_write__Vstatic__enable 
        = __Vtask_hardware_memory_tb__DOT__do_write__5__enable;
    Varchitecture_components___024root____VbeforeTrig_h4b0390ea__0(vlSelf, 
                                                                   "@(negedge hardware_memory_tb.global_clock)");
    co_await vlSelfRef.__VtrigSched_h4b0390ea__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge hardware_memory_tb.global_clock)", 
                                                         "testbenches/memory_tb.sv", 
                                                         45);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.hardware_memory_tb__DOT__address = vlSelfRef.hardware_memory_tb__DOT__do_write__Vstatic__addr;
    vlSelfRef.hardware_memory_tb__DOT__data_in = vlSelfRef.hardware_memory_tb__DOT__do_write__Vstatic__value;
    vlSelfRef.hardware_memory_tb__DOT__mem_write = vlSelfRef.hardware_memory_tb__DOT__do_write__Vstatic__enable;
    vlSelfRef.hardware_memory_tb__DOT__mem_read = 0U;
    Varchitecture_components___024root____VbeforeTrig_h4b03902b__0(vlSelf, 
                                                                   "@(posedge hardware_memory_tb.global_clock)");
    co_await vlSelfRef.__VtrigSched_h4b03902b__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge hardware_memory_tb.global_clock)", 
                                                         "testbenches/memory_tb.sv", 
                                                         51);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    Varchitecture_components___024root____VbeforeTrig_h4b0390ea__0(vlSelf, 
                                                                   "@(negedge hardware_memory_tb.global_clock)");
    co_await vlSelfRef.__VtrigSched_h4b0390ea__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge hardware_memory_tb.global_clock)", 
                                                         "testbenches/memory_tb.sv", 
                                                         52);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.hardware_memory_tb__DOT__mem_write = 0U;
    __Vtask_hardware_memory_tb__DOT__do_read__6__addr = 5U;
    vlSelfRef.hardware_memory_tb__DOT__do_read__Vstatic__addr 
        = __Vtask_hardware_memory_tb__DOT__do_read__6__addr;
    Varchitecture_components___024root____VbeforeTrig_h4b0390ea__0(vlSelf, 
                                                                   "@(negedge hardware_memory_tb.global_clock)");
    co_await vlSelfRef.__VtrigSched_h4b0390ea__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge hardware_memory_tb.global_clock)", 
                                                         "testbenches/memory_tb.sv", 
                                                         58);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.hardware_memory_tb__DOT__address = vlSelfRef.hardware_memory_tb__DOT__do_read__Vstatic__addr;
    vlSelfRef.hardware_memory_tb__DOT__mem_read = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "testbenches/memory_tb.sv", 
                                         61);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.__Vtask_hardware_memory_tb__DOT__check__7__label = "write then read addr 5"s;
    __Vtask_hardware_memory_tb__DOT__check__7__expected = 0xdeadbeefU;
    if ((vlSelfRef.hardware_memory_tb__DOT__dut__DOT__data_out 
         != __Vtask_hardware_memory_tb__DOT__check__7__expected)) {
        VL_WRITEF_NX("FAIL at time %0t: %s \n data_out = %h, expected %h\n",5, 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , 'S',&(vlSelfRef.__Vtask_hardware_memory_tb__DOT__check__7__label)
                     , '#',32,vlSelfRef.hardware_memory_tb__DOT__dut__DOT__data_out
                     , '#',32,__Vtask_hardware_memory_tb__DOT__check__7__expected);
        vlSelfRef.hardware_memory_tb__DOT__errors = 
            ((IData)(1U) + vlSelfRef.hardware_memory_tb__DOT__errors);
    } else {
        VL_WRITEF_NX("PASS: %s\n",1, 'S',&(vlSelfRef.__Vtask_hardware_memory_tb__DOT__check__7__label));
    }
    __Vtask_hardware_memory_tb__DOT__do_read__8__addr = 6U;
    vlSelfRef.hardware_memory_tb__DOT__do_read__Vstatic__addr 
        = __Vtask_hardware_memory_tb__DOT__do_read__8__addr;
    Varchitecture_components___024root____VbeforeTrig_h4b0390ea__0(vlSelf, 
                                                                   "@(negedge hardware_memory_tb.global_clock)");
    co_await vlSelfRef.__VtrigSched_h4b0390ea__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge hardware_memory_tb.global_clock)", 
                                                         "testbenches/memory_tb.sv", 
                                                         58);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.hardware_memory_tb__DOT__address = vlSelfRef.hardware_memory_tb__DOT__do_read__Vstatic__addr;
    vlSelfRef.hardware_memory_tb__DOT__mem_read = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "testbenches/memory_tb.sv", 
                                         61);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.__Vtask_hardware_memory_tb__DOT__check__9__label = "addr 6 untouched by write to addr 5"s;
    __Vtask_hardware_memory_tb__DOT__check__9__expected = 0U;
    if ((vlSelfRef.hardware_memory_tb__DOT__dut__DOT__data_out 
         != __Vtask_hardware_memory_tb__DOT__check__9__expected)) {
        VL_WRITEF_NX("FAIL at time %0t: %s \n data_out = %h, expected %h\n",5, 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , 'S',&(vlSelfRef.__Vtask_hardware_memory_tb__DOT__check__9__label)
                     , '#',32,vlSelfRef.hardware_memory_tb__DOT__dut__DOT__data_out
                     , '#',32,__Vtask_hardware_memory_tb__DOT__check__9__expected);
        vlSelfRef.hardware_memory_tb__DOT__errors = 
            ((IData)(1U) + vlSelfRef.hardware_memory_tb__DOT__errors);
    } else {
        VL_WRITEF_NX("PASS: %s\n",1, 'S',&(vlSelfRef.__Vtask_hardware_memory_tb__DOT__check__9__label));
    }
    __Vtask_hardware_memory_tb__DOT__do_write__10__enable = 0U;
    __Vtask_hardware_memory_tb__DOT__do_write__10__value = 0xcafebabeU;
    __Vtask_hardware_memory_tb__DOT__do_write__10__addr = 7U;
    vlSelfRef.hardware_memory_tb__DOT__do_write__Vstatic__addr 
        = __Vtask_hardware_memory_tb__DOT__do_write__10__addr;
    vlSelfRef.hardware_memory_tb__DOT__do_write__Vstatic__value 
        = __Vtask_hardware_memory_tb__DOT__do_write__10__value;
    vlSelfRef.hardware_memory_tb__DOT__do_write__Vstatic__enable 
        = __Vtask_hardware_memory_tb__DOT__do_write__10__enable;
    Varchitecture_components___024root____VbeforeTrig_h4b0390ea__0(vlSelf, 
                                                                   "@(negedge hardware_memory_tb.global_clock)");
    co_await vlSelfRef.__VtrigSched_h4b0390ea__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge hardware_memory_tb.global_clock)", 
                                                         "testbenches/memory_tb.sv", 
                                                         45);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.hardware_memory_tb__DOT__address = vlSelfRef.hardware_memory_tb__DOT__do_write__Vstatic__addr;
    vlSelfRef.hardware_memory_tb__DOT__data_in = vlSelfRef.hardware_memory_tb__DOT__do_write__Vstatic__value;
    vlSelfRef.hardware_memory_tb__DOT__mem_write = vlSelfRef.hardware_memory_tb__DOT__do_write__Vstatic__enable;
    vlSelfRef.hardware_memory_tb__DOT__mem_read = 0U;
    Varchitecture_components___024root____VbeforeTrig_h4b03902b__0(vlSelf, 
                                                                   "@(posedge hardware_memory_tb.global_clock)");
    co_await vlSelfRef.__VtrigSched_h4b03902b__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge hardware_memory_tb.global_clock)", 
                                                         "testbenches/memory_tb.sv", 
                                                         51);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    Varchitecture_components___024root____VbeforeTrig_h4b0390ea__0(vlSelf, 
                                                                   "@(negedge hardware_memory_tb.global_clock)");
    co_await vlSelfRef.__VtrigSched_h4b0390ea__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge hardware_memory_tb.global_clock)", 
                                                         "testbenches/memory_tb.sv", 
                                                         52);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.hardware_memory_tb__DOT__mem_write = 0U;
    __Vtask_hardware_memory_tb__DOT__do_read__11__addr = 7U;
    vlSelfRef.hardware_memory_tb__DOT__do_read__Vstatic__addr 
        = __Vtask_hardware_memory_tb__DOT__do_read__11__addr;
    Varchitecture_components___024root____VbeforeTrig_h4b0390ea__0(vlSelf, 
                                                                   "@(negedge hardware_memory_tb.global_clock)");
    co_await vlSelfRef.__VtrigSched_h4b0390ea__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge hardware_memory_tb.global_clock)", 
                                                         "testbenches/memory_tb.sv", 
                                                         58);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.hardware_memory_tb__DOT__address = vlSelfRef.hardware_memory_tb__DOT__do_read__Vstatic__addr;
    vlSelfRef.hardware_memory_tb__DOT__mem_read = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "testbenches/memory_tb.sv", 
                                         61);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.__Vtask_hardware_memory_tb__DOT__check__12__label = "no write when mem_write is low"s;
    __Vtask_hardware_memory_tb__DOT__check__12__expected = 0U;
    if ((vlSelfRef.hardware_memory_tb__DOT__dut__DOT__data_out 
         != __Vtask_hardware_memory_tb__DOT__check__12__expected)) {
        VL_WRITEF_NX("FAIL at time %0t: %s \n data_out = %h, expected %h\n",5, 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , 'S',&(vlSelfRef.__Vtask_hardware_memory_tb__DOT__check__12__label)
                     , '#',32,vlSelfRef.hardware_memory_tb__DOT__dut__DOT__data_out
                     , '#',32,__Vtask_hardware_memory_tb__DOT__check__12__expected);
        vlSelfRef.hardware_memory_tb__DOT__errors = 
            ((IData)(1U) + vlSelfRef.hardware_memory_tb__DOT__errors);
    } else {
        VL_WRITEF_NX("PASS: %s\n",1, 'S',&(vlSelfRef.__Vtask_hardware_memory_tb__DOT__check__12__label));
    }
    __Vtask_hardware_memory_tb__DOT__do_write__13__enable = 1U;
    __Vtask_hardware_memory_tb__DOT__do_write__13__value = 0x12345678U;
    __Vtask_hardware_memory_tb__DOT__do_write__13__addr = 5U;
    vlSelfRef.hardware_memory_tb__DOT__do_write__Vstatic__addr 
        = __Vtask_hardware_memory_tb__DOT__do_write__13__addr;
    vlSelfRef.hardware_memory_tb__DOT__do_write__Vstatic__value 
        = __Vtask_hardware_memory_tb__DOT__do_write__13__value;
    vlSelfRef.hardware_memory_tb__DOT__do_write__Vstatic__enable 
        = __Vtask_hardware_memory_tb__DOT__do_write__13__enable;
    Varchitecture_components___024root____VbeforeTrig_h4b0390ea__0(vlSelf, 
                                                                   "@(negedge hardware_memory_tb.global_clock)");
    co_await vlSelfRef.__VtrigSched_h4b0390ea__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge hardware_memory_tb.global_clock)", 
                                                         "testbenches/memory_tb.sv", 
                                                         45);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.hardware_memory_tb__DOT__address = vlSelfRef.hardware_memory_tb__DOT__do_write__Vstatic__addr;
    vlSelfRef.hardware_memory_tb__DOT__data_in = vlSelfRef.hardware_memory_tb__DOT__do_write__Vstatic__value;
    vlSelfRef.hardware_memory_tb__DOT__mem_write = vlSelfRef.hardware_memory_tb__DOT__do_write__Vstatic__enable;
    vlSelfRef.hardware_memory_tb__DOT__mem_read = 0U;
    Varchitecture_components___024root____VbeforeTrig_h4b03902b__0(vlSelf, 
                                                                   "@(posedge hardware_memory_tb.global_clock)");
    co_await vlSelfRef.__VtrigSched_h4b03902b__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge hardware_memory_tb.global_clock)", 
                                                         "testbenches/memory_tb.sv", 
                                                         51);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    Varchitecture_components___024root____VbeforeTrig_h4b0390ea__0(vlSelf, 
                                                                   "@(negedge hardware_memory_tb.global_clock)");
    co_await vlSelfRef.__VtrigSched_h4b0390ea__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge hardware_memory_tb.global_clock)", 
                                                         "testbenches/memory_tb.sv", 
                                                         52);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.hardware_memory_tb__DOT__mem_write = 0U;
    __Vtask_hardware_memory_tb__DOT__do_read__14__addr = 5U;
    vlSelfRef.hardware_memory_tb__DOT__do_read__Vstatic__addr 
        = __Vtask_hardware_memory_tb__DOT__do_read__14__addr;
    Varchitecture_components___024root____VbeforeTrig_h4b0390ea__0(vlSelf, 
                                                                   "@(negedge hardware_memory_tb.global_clock)");
    co_await vlSelfRef.__VtrigSched_h4b0390ea__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge hardware_memory_tb.global_clock)", 
                                                         "testbenches/memory_tb.sv", 
                                                         58);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.hardware_memory_tb__DOT__address = vlSelfRef.hardware_memory_tb__DOT__do_read__Vstatic__addr;
    vlSelfRef.hardware_memory_tb__DOT__mem_read = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "testbenches/memory_tb.sv", 
                                         61);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.__Vtask_hardware_memory_tb__DOT__check__15__label = "overwrite addr 5"s;
    __Vtask_hardware_memory_tb__DOT__check__15__expected = 0x12345678U;
    if ((vlSelfRef.hardware_memory_tb__DOT__dut__DOT__data_out 
         != __Vtask_hardware_memory_tb__DOT__check__15__expected)) {
        VL_WRITEF_NX("FAIL at time %0t: %s \n data_out = %h, expected %h\n",5, 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , 'S',&(vlSelfRef.__Vtask_hardware_memory_tb__DOT__check__15__label)
                     , '#',32,vlSelfRef.hardware_memory_tb__DOT__dut__DOT__data_out
                     , '#',32,__Vtask_hardware_memory_tb__DOT__check__15__expected);
        vlSelfRef.hardware_memory_tb__DOT__errors = 
            ((IData)(1U) + vlSelfRef.hardware_memory_tb__DOT__errors);
    } else {
        VL_WRITEF_NX("PASS: %s\n",1, 'S',&(vlSelfRef.__Vtask_hardware_memory_tb__DOT__check__15__label));
    }
    VL_WRITEF_NX("out of bounds, assertion message below \n",0);
    __Vtask_hardware_memory_tb__DOT__do_write__16__enable = 1U;
    __Vtask_hardware_memory_tb__DOT__do_write__16__value = 0xffffffffU;
    __Vtask_hardware_memory_tb__DOT__do_write__16__addr = 0x000007d0U;
    vlSelfRef.hardware_memory_tb__DOT__do_write__Vstatic__addr 
        = __Vtask_hardware_memory_tb__DOT__do_write__16__addr;
    vlSelfRef.hardware_memory_tb__DOT__do_write__Vstatic__value 
        = __Vtask_hardware_memory_tb__DOT__do_write__16__value;
    vlSelfRef.hardware_memory_tb__DOT__do_write__Vstatic__enable 
        = __Vtask_hardware_memory_tb__DOT__do_write__16__enable;
    Varchitecture_components___024root____VbeforeTrig_h4b0390ea__0(vlSelf, 
                                                                   "@(negedge hardware_memory_tb.global_clock)");
    co_await vlSelfRef.__VtrigSched_h4b0390ea__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge hardware_memory_tb.global_clock)", 
                                                         "testbenches/memory_tb.sv", 
                                                         45);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.hardware_memory_tb__DOT__address = vlSelfRef.hardware_memory_tb__DOT__do_write__Vstatic__addr;
    vlSelfRef.hardware_memory_tb__DOT__data_in = vlSelfRef.hardware_memory_tb__DOT__do_write__Vstatic__value;
    vlSelfRef.hardware_memory_tb__DOT__mem_write = vlSelfRef.hardware_memory_tb__DOT__do_write__Vstatic__enable;
    vlSelfRef.hardware_memory_tb__DOT__mem_read = 0U;
    Varchitecture_components___024root____VbeforeTrig_h4b03902b__0(vlSelf, 
                                                                   "@(posedge hardware_memory_tb.global_clock)");
    co_await vlSelfRef.__VtrigSched_h4b03902b__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge hardware_memory_tb.global_clock)", 
                                                         "testbenches/memory_tb.sv", 
                                                         51);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    Varchitecture_components___024root____VbeforeTrig_h4b0390ea__0(vlSelf, 
                                                                   "@(negedge hardware_memory_tb.global_clock)");
    co_await vlSelfRef.__VtrigSched_h4b0390ea__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge hardware_memory_tb.global_clock)", 
                                                         "testbenches/memory_tb.sv", 
                                                         52);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.hardware_memory_tb__DOT__mem_write = 0U;
    Varchitecture_components___024root____VbeforeTrig_h4b0390ea__0(vlSelf, 
                                                                   "@(negedge hardware_memory_tb.global_clock)");
    co_await vlSelfRef.__VtrigSched_h4b0390ea__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge hardware_memory_tb.global_clock)", 
                                                         "testbenches/memory_tb.sv", 
                                                         113);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.hardware_memory_tb__DOT__mem_read = 0U;
    VL_WRITEF_NX("\n",0);
    if ((0U == vlSelfRef.hardware_memory_tb__DOT__errors)) {
        VL_WRITEF_NX("ALL TESTS PASSED\n",0);
    } else {
        VL_WRITEF_NX("%0d TEST(S) FAILED\n",1, '~',32,vlSelfRef.hardware_memory_tb__DOT__errors);
    }
    VL_STOP_MT("testbenches/memory_tb.sv", 124, "");
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_return;
}

VlCoroutine Varchitecture_components___024root___eval_initial__TOP__Vtiming__1(Varchitecture_components___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Varchitecture_components___024root___eval_initial__TOP__Vtiming__1\n"); );
    Varchitecture_components__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    co_await vlSelfRef.__VdlySched.delay(0x0000000000989680ULL, 
                                         nullptr, "testbenches/memory_tb.sv", 
                                         129);
    VL_WRITEF_NX("TIMEOUT: Testbench did not finish\n",0);
    VL_STOP_MT("testbenches/memory_tb.sv", 131, "");
    co_return;
}

VlCoroutine Varchitecture_components___024root___eval_initial__TOP__Vtiming__2(Varchitecture_components___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Varchitecture_components___024root___eval_initial__TOP__Vtiming__2\n"); );
    Varchitecture_components__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    while (VL_LIKELY(!vlSymsp->_vm_contextp__->gotFinish())) {
        co_await vlSelfRef.__VdlySched.delay(0x0000000000001388ULL, 
                                             nullptr, 
                                             "testbenches/memory_tb.sv", 
                                             30);
        vlSelfRef.hardware_memory_tb__DOT__global_clock 
            = (1U & (~ (IData)(vlSelfRef.hardware_memory_tb__DOT__global_clock)));
    }
    co_return;
}

void Varchitecture_components___024root___eval_triggers_vec__ico(Varchitecture_components___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Varchitecture_components___024root___eval_triggers_vec__ico\n"); );
    Varchitecture_components__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VicoTriggered[0U] = (QData)((IData)(
                                                    ((((((vlSelfRef.ALU_B 
                                                          != vlSelfRef.__Vtrigprevexpr___TOP__ALU_B__0) 
                                                         << 6U) 
                                                        | (((vlSelfRef.ALU_A 
                                                             != vlSelfRef.__Vtrigprevexpr___TOP__ALU_A__0) 
                                                            << 5U) 
                                                           | (((IData)(vlSelfRef.ALU_op) 
                                                               != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__ALU_op__0)) 
                                                              << 4U))) 
                                                       | (((((IData)(vlSelfRef.flag_write) 
                                                             != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__flag_write__0)) 
                                                            << 3U) 
                                                           | (((IData)(vlSelfRef.alu__02Eglobal_clock) 
                                                               != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__alu__02Eglobal_clock__0)) 
                                                              << 2U)) 
                                                          | (((vlSelfRef.PC_data 
                                                               != vlSelfRef.__Vtrigprevexpr___TOP__PC_data__0) 
                                                              << 1U) 
                                                             | ((IData)(vlSelfRef.PC_write) 
                                                                != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__PC_write__0))))) 
                                                      << 8U) 
                                                     | (((((((IData)(vlSelfRef.reset) 
                                                             != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__reset__0)) 
                                                            << 3U) 
                                                           | (((IData)(vlSelfRef.program_counter__02Eglobal_clock) 
                                                               != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__program_counter__02Eglobal_clock__0)) 
                                                              << 2U)) 
                                                          | (((vlSelfRef.data_w 
                                                               != vlSelfRef.__Vtrigprevexpr___TOP__data_w__0) 
                                                              << 1U) 
                                                             | ((IData)(vlSelfRef.reg_W) 
                                                                != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__reg_W__0)))) 
                                                         << 4U) 
                                                        | (((((IData)(vlSelfRef.reg_B) 
                                                              != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__reg_B__0)) 
                                                             << 3U) 
                                                            | (((IData)(vlSelfRef.reg_A) 
                                                                != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__reg_A__0)) 
                                                               << 2U)) 
                                                           | ((((IData)(vlSelfRef.RF_write) 
                                                                != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__RF_write__0)) 
                                                               << 1U) 
                                                              | ((IData)(vlSelfRef.register_file__02Eglobal_clock) 
                                                                 != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__register_file__02Eglobal_clock__0))))))));
    vlSelfRef.__Vtrigprevexpr___TOP__register_file__02Eglobal_clock__0 
        = vlSelfRef.register_file__02Eglobal_clock;
    vlSelfRef.__Vtrigprevexpr___TOP__RF_write__0 = vlSelfRef.RF_write;
    vlSelfRef.__Vtrigprevexpr___TOP__reg_A__0 = vlSelfRef.reg_A;
    vlSelfRef.__Vtrigprevexpr___TOP__reg_B__0 = vlSelfRef.reg_B;
    vlSelfRef.__Vtrigprevexpr___TOP__reg_W__0 = vlSelfRef.reg_W;
    vlSelfRef.__Vtrigprevexpr___TOP__data_w__0 = vlSelfRef.data_w;
    vlSelfRef.__Vtrigprevexpr___TOP__program_counter__02Eglobal_clock__0 
        = vlSelfRef.program_counter__02Eglobal_clock;
    vlSelfRef.__Vtrigprevexpr___TOP__reset__0 = vlSelfRef.reset;
    vlSelfRef.__Vtrigprevexpr___TOP__PC_write__0 = vlSelfRef.PC_write;
    vlSelfRef.__Vtrigprevexpr___TOP__PC_data__0 = vlSelfRef.PC_data;
    vlSelfRef.__Vtrigprevexpr___TOP__alu__02Eglobal_clock__0 
        = vlSelfRef.alu__02Eglobal_clock;
    vlSelfRef.__Vtrigprevexpr___TOP__flag_write__0 
        = vlSelfRef.flag_write;
    vlSelfRef.__Vtrigprevexpr___TOP__ALU_op__0 = vlSelfRef.ALU_op;
    vlSelfRef.__Vtrigprevexpr___TOP__ALU_A__0 = vlSelfRef.ALU_A;
    vlSelfRef.__Vtrigprevexpr___TOP__ALU_B__0 = vlSelfRef.ALU_B;
    if (VL_UNLIKELY(((1U & (~ (IData)(vlSelfRef.__VicoDidInit)))))) {
        vlSelfRef.__VicoDidInit = 1U;
        vlSelfRef.__VicoTriggered[0U] = (1ULL | vlSelfRef.__VicoTriggered[0U]);
        vlSelfRef.__VicoTriggered[0U] = (2ULL | vlSelfRef.__VicoTriggered[0U]);
        vlSelfRef.__VicoTriggered[0U] = (4ULL | vlSelfRef.__VicoTriggered[0U]);
        vlSelfRef.__VicoTriggered[0U] = (8ULL | vlSelfRef.__VicoTriggered[0U]);
        vlSelfRef.__VicoTriggered[0U] = (0x0000000000000010ULL 
                                         | vlSelfRef.__VicoTriggered[0U]);
        vlSelfRef.__VicoTriggered[0U] = (0x0000000000000020ULL 
                                         | vlSelfRef.__VicoTriggered[0U]);
        vlSelfRef.__VicoTriggered[0U] = (0x0000000000000040ULL 
                                         | vlSelfRef.__VicoTriggered[0U]);
        vlSelfRef.__VicoTriggered[0U] = (0x0000000000000080ULL 
                                         | vlSelfRef.__VicoTriggered[0U]);
        vlSelfRef.__VicoTriggered[0U] = (0x0000000000000100ULL 
                                         | vlSelfRef.__VicoTriggered[0U]);
        vlSelfRef.__VicoTriggered[0U] = (0x0000000000000200ULL 
                                         | vlSelfRef.__VicoTriggered[0U]);
        vlSelfRef.__VicoTriggered[0U] = (0x0000000000000400ULL 
                                         | vlSelfRef.__VicoTriggered[0U]);
        vlSelfRef.__VicoTriggered[0U] = (0x0000000000000800ULL 
                                         | vlSelfRef.__VicoTriggered[0U]);
        vlSelfRef.__VicoTriggered[0U] = (0x0000000000001000ULL 
                                         | vlSelfRef.__VicoTriggered[0U]);
        vlSelfRef.__VicoTriggered[0U] = (0x0000000000002000ULL 
                                         | vlSelfRef.__VicoTriggered[0U]);
        vlSelfRef.__VicoTriggered[0U] = (0x0000000000004000ULL 
                                         | vlSelfRef.__VicoTriggered[0U]);
    }
}

bool Varchitecture_components___024root___trigger_anySet__ico(const VlUnpacked<QData/*63:0*/, 2> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Varchitecture_components___024root___trigger_anySet__ico\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        if (in[n]) {
            return (1U);
        }
        n = ((IData)(1U) + n);
    } while ((2U > n));
    return (0U);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Varchitecture_components___024root___dump_triggers__ico(const VlUnpacked<QData/*63:0*/, 2> &triggers, const std::string &tag);
#endif  // VL_DEBUG

bool Varchitecture_components___024root___eval_phase__ico(Varchitecture_components___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Varchitecture_components___024root___eval_phase__ico\n"); );
    Varchitecture_components__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VicoExecute;
    // Body
    Varchitecture_components___024root___eval_triggers_vec__ico(vlSelf);
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Varchitecture_components___024root___dump_triggers__ico(vlSelfRef.__VicoTriggered, "ico"s);
    }
#endif
    __VicoExecute = Varchitecture_components___024root___trigger_anySet__ico(vlSelfRef.__VicoTriggered);
    if (__VicoExecute) {
        {
            // Inlined CFunc: _eval_ico
            if ((4ULL & vlSelfRef.__VicoTriggered[0U])) {
                {
                    // Inlined CFunc: _ico_sequent__TOP__0
                    vlSelfRef.data_A = (vlSelfRef.register_file__DOT__registers
                                        [vlSelfRef.reg_A] 
                                        & (- (IData)(
                                                     (0U 
                                                      != (IData)(vlSelfRef.reg_A)))));
                }
            }
            if ((8ULL & vlSelfRef.__VicoTriggered[0U])) {
                {
                    // Inlined CFunc: _ico_sequent__TOP__1
                    vlSelfRef.data_B = (vlSelfRef.register_file__DOT__registers
                                        [vlSelfRef.reg_B] 
                                        & (- (IData)(
                                                     (0U 
                                                      != (IData)(vlSelfRef.reg_B)))));
                }
            }
        }
    }
    return (__VicoExecute);
}

bool Varchitecture_components___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Varchitecture_components___024root___trigger_anySet__act\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        if (in[n]) {
            return (1U);
        }
        n = ((IData)(1U) + n);
    } while ((1U > n));
    return (0U);
}

void Varchitecture_components___024root___nba_sequent__TOP__0(Varchitecture_components___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Varchitecture_components___024root___nba_sequent__TOP__0\n"); );
    Varchitecture_components__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __VdlyVal__hardware_memory_tb__DOT__dut__DOT__memory__v0;
    __VdlyVal__hardware_memory_tb__DOT__dut__DOT__memory__v0 = 0;
    SData/*9:0*/ __VdlyDim0__hardware_memory_tb__DOT__dut__DOT__memory__v0;
    __VdlyDim0__hardware_memory_tb__DOT__dut__DOT__memory__v0 = 0;
    CData/*0:0*/ __VdlySet__hardware_memory_tb__DOT__dut__DOT__memory__v0;
    __VdlySet__hardware_memory_tb__DOT__dut__DOT__memory__v0 = 0;
    // Body
    __VdlySet__hardware_memory_tb__DOT__dut__DOT__memory__v0 = 0U;
    if (vlSelfRef.hardware_memory_tb__DOT__mem_write) {
        if (vlSymsp->_vm_contextp__->assertCtlGet(VerilatedAssertCtlQuery::ASSERT_CTL_ON, 2, 1)) {
            if (vlSymsp->_vm_contextp__->assertCtlGet(VerilatedAssertCtlQuery::ASSERT_CTL_FAIL_ON, 2, 1)) {
                if (VL_UNLIKELY(((0x00000400U <= vlSelfRef.hardware_memory_tb__DOT__address)))) {
                    VL_WRITEF_NX("address is beyond MEM_SIZE\n",0);
                }
            }
        }
        if (VL_LIKELY(((0x00000400U > vlSelfRef.hardware_memory_tb__DOT__address)))) {
            __VdlyVal__hardware_memory_tb__DOT__dut__DOT__memory__v0 
                = vlSelfRef.hardware_memory_tb__DOT__data_in;
            __VdlyDim0__hardware_memory_tb__DOT__dut__DOT__memory__v0 
                = (0x000003ffU & vlSelfRef.hardware_memory_tb__DOT__address);
            __VdlySet__hardware_memory_tb__DOT__dut__DOT__memory__v0 = 1U;
        } else {
            VL_WRITEF_NX("Write to %0d is beyond MEM_SIZE, ignored\n",1
                         , '#',32,vlSelfRef.hardware_memory_tb__DOT__address);
        }
    }
    if (__VdlySet__hardware_memory_tb__DOT__dut__DOT__memory__v0) {
        vlSelfRef.hardware_memory_tb__DOT__dut__DOT__memory[__VdlyDim0__hardware_memory_tb__DOT__dut__DOT__memory__v0] 
            = __VdlyVal__hardware_memory_tb__DOT__dut__DOT__memory__v0;
    }
}

void Varchitecture_components___024root___eval_nba(Varchitecture_components___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Varchitecture_components___024root___eval_nba\n"); );
    Varchitecture_components__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Varchitecture_components___024root___nba_sequent__TOP__0(vlSelf);
    }
    if ((8ULL & vlSelfRef.__VnbaTriggered[0U])) {
        {
            // Inlined CFunc: _nba_sequent__TOP__1
            IData/*31:0*/ __Vinline_0__nba_sequent__TOP__1___VdlyVal__register_file__DOT__registers__v0;
            __Vinline_0__nba_sequent__TOP__1___VdlyVal__register_file__DOT__registers__v0 = 0;
            CData/*4:0*/ __Vinline_0__nba_sequent__TOP__1___VdlyDim0__register_file__DOT__registers__v0;
            __Vinline_0__nba_sequent__TOP__1___VdlyDim0__register_file__DOT__registers__v0 = 0;
            CData/*0:0*/ __Vinline_0__nba_sequent__TOP__1___VdlySet__register_file__DOT__registers__v0;
            __Vinline_0__nba_sequent__TOP__1___VdlySet__register_file__DOT__registers__v0 = 0;
            __Vinline_0__nba_sequent__TOP__1___VdlySet__register_file__DOT__registers__v0 = 0U;
            if (vlSelfRef.RF_write) {
                __Vinline_0__nba_sequent__TOP__1___VdlyVal__register_file__DOT__registers__v0 
                    = vlSelfRef.data_w;
                __Vinline_0__nba_sequent__TOP__1___VdlyDim0__register_file__DOT__registers__v0 
                    = vlSelfRef.reg_W;
                __Vinline_0__nba_sequent__TOP__1___VdlySet__register_file__DOT__registers__v0 = 1U;
            }
            if (__Vinline_0__nba_sequent__TOP__1___VdlySet__register_file__DOT__registers__v0) {
                vlSelfRef.register_file__DOT__registers[__Vinline_0__nba_sequent__TOP__1___VdlyDim0__register_file__DOT__registers__v0] 
                    = __Vinline_0__nba_sequent__TOP__1___VdlyVal__register_file__DOT__registers__v0;
            }
            vlSelfRef.data_A = (vlSelfRef.register_file__DOT__registers
                                [vlSelfRef.reg_A] & 
                                (- (IData)((0U != (IData)(vlSelfRef.reg_A)))));
            vlSelfRef.data_B = (vlSelfRef.register_file__DOT__registers
                                [vlSelfRef.reg_B] & 
                                (- (IData)((0U != (IData)(vlSelfRef.reg_B)))));
        }
        vlSelfRef.__Vm_traceActivity[3U] = 1U;
    }
    if ((4ULL & vlSelfRef.__VnbaTriggered[0U])) {
        {
            // Inlined CFunc: _nba_sequent__TOP__2
            if (vlSelfRef.reset) {
                vlSelfRef.program_counter__DOT__address = 0U;
            } else if (vlSelfRef.PC_write) {
                vlSelfRef.program_counter__DOT__address 
                    = vlSelfRef.PC_data;
            }
            vlSelfRef.PC_address = vlSelfRef.program_counter__DOT__address;
        }
    }
    if ((2ULL & vlSelfRef.__VnbaTriggered[0U])) {
        {
            // Inlined CFunc: _nba_sequent__TOP__3
            if (vlSelfRef.flag_write) {
                vlSelfRef.neg = (vlSelfRef.alu__DOT__out 
                                 >> 0x1fU);
                vlSelfRef.zero = (0U == vlSelfRef.alu__DOT__out);
            }
            if ((0U == (IData)(vlSelfRef.ALU_op))) {
                vlSelfRef.alu__DOT__out = (vlSelfRef.ALU_A 
                                           + vlSelfRef.ALU_B);
            } else if ((1U == (IData)(vlSelfRef.ALU_op))) {
                vlSelfRef.alu__DOT__out = (vlSelfRef.ALU_A 
                                           - vlSelfRef.ALU_B);
            } else if ((2U == (IData)(vlSelfRef.ALU_op))) {
                vlSelfRef.alu__DOT__out = (vlSelfRef.ALU_A 
                                           & vlSelfRef.ALU_B);
            } else if ((3U == (IData)(vlSelfRef.ALU_op))) {
                vlSelfRef.alu__DOT__out = (vlSelfRef.ALU_A 
                                           | vlSelfRef.ALU_B);
            } else if ((4U == (IData)(vlSelfRef.ALU_op))) {
                vlSelfRef.alu__DOT__out = (vlSelfRef.ALU_A 
                                           ^ vlSelfRef.ALU_B);
            } else if ((5U == (IData)(vlSelfRef.ALU_op))) {
                vlSelfRef.alu__DOT__out = VL_SHIFTRS_III(32,32,32, vlSelfRef.ALU_A, vlSelfRef.ALU_B);
            } else if ((6U == (IData)(vlSelfRef.ALU_op))) {
                vlSelfRef.alu__DOT__out = VL_SHIFTR_III(32,32,32, vlSelfRef.ALU_A, vlSelfRef.ALU_B);
            } else if ((7U == (IData)(vlSelfRef.ALU_op))) {
                vlSelfRef.alu__DOT__out = VL_SHIFTL_III(32,32,32, vlSelfRef.ALU_A, vlSelfRef.ALU_B);
            }
            vlSelfRef.ALU_out = vlSelfRef.alu__DOT__out;
        }
    }
    if ((0x0000000000000031ULL & vlSelfRef.__VnbaTriggered[0U])) {
        {
            // Inlined CFunc: _act_comb__TOP__0
            vlSelfRef.hardware_memory_tb__DOT__dut__DOT__data_out 
                = (vlSelfRef.hardware_memory_tb__DOT__dut__DOT__memory
                   [(0x000003ffU & vlSelfRef.hardware_memory_tb__DOT__address)] 
                   & (- (IData)((IData)(vlSelfRef.hardware_memory_tb__DOT__mem_read))));
        }
    }
}

void Varchitecture_components___024root___timing_ready(Varchitecture_components___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Varchitecture_components___024root___timing_ready\n"); );
    Varchitecture_components__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0x0000000000000010ULL & vlSelfRef.__VactTriggered[0U])) {
        vlSelfRef.__VtrigSched_h4b0390ea__0.ready("@(negedge hardware_memory_tb.global_clock)");
    }
    if ((1ULL & vlSelfRef.__VactTriggered[0U])) {
        vlSelfRef.__VtrigSched_h4b03902b__0.ready("@(posedge hardware_memory_tb.global_clock)");
    }
}

void Varchitecture_components___024root___timing_resume(Varchitecture_components___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Varchitecture_components___024root___timing_resume\n"); );
    Varchitecture_components__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VtrigSched_h4b0390ea__0.moveToResumeQueue(
                                                          "@(negedge hardware_memory_tb.global_clock)");
    vlSelfRef.__VtrigSched_h4b03902b__0.moveToResumeQueue(
                                                          "@(posedge hardware_memory_tb.global_clock)");
    vlSelfRef.__VtrigSched_h4b0390ea__0.resume("@(negedge hardware_memory_tb.global_clock)");
    vlSelfRef.__VtrigSched_h4b03902b__0.resume("@(posedge hardware_memory_tb.global_clock)");
    if ((0x0000000000000020ULL & vlSelfRef.__VactTriggered[0U])) {
        vlSelfRef.__VdlySched.resume();
    }
}

void Varchitecture_components___024root___trigger_orInto__act_vec_vec(VlUnpacked<QData/*63:0*/, 1> &out, const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Varchitecture_components___024root___trigger_orInto__act_vec_vec\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        out[n] = (out[n] | in[n]);
        n = ((IData)(1U) + n);
    } while ((0U >= n));
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Varchitecture_components___024root___dump_triggers__act(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG

bool Varchitecture_components___024root___eval_phase__act(Varchitecture_components___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Varchitecture_components___024root___eval_phase__act\n"); );
    Varchitecture_components__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VactExecute;
    // Body
    {
        // Inlined CFunc: _eval_triggers_vec__act
        vlSelfRef.__VactTriggered[0U] = (QData)((IData)(
                                                        (((vlSelfRef.__VdlySched.awaitingCurrentTime() 
                                                           << 5U) 
                                                          | (((~ (IData)(vlSelfRef.hardware_memory_tb__DOT__global_clock)) 
                                                              & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__hardware_memory_tb__DOT__global_clock__0)) 
                                                             << 4U)) 
                                                         | (((((IData)(vlSelfRef.register_file__02Eglobal_clock) 
                                                               & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__register_file__02Eglobal_clock__1))) 
                                                              << 3U) 
                                                             | (((IData)(vlSelfRef.program_counter__02Eglobal_clock) 
                                                                 & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__program_counter__02Eglobal_clock__1))) 
                                                                << 2U)) 
                                                            | ((((IData)(vlSelfRef.alu__02Eglobal_clock) 
                                                                 & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__alu__02Eglobal_clock__1))) 
                                                                << 1U) 
                                                               | ((IData)(vlSelfRef.hardware_memory_tb__DOT__global_clock) 
                                                                  & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__hardware_memory_tb__DOT__global_clock__0))))))));
        vlSelfRef.__Vtrigprevexpr___TOP__hardware_memory_tb__DOT__global_clock__0 
            = vlSelfRef.hardware_memory_tb__DOT__global_clock;
        vlSelfRef.__Vtrigprevexpr___TOP__alu__02Eglobal_clock__1 
            = vlSelfRef.alu__02Eglobal_clock;
        vlSelfRef.__Vtrigprevexpr___TOP__program_counter__02Eglobal_clock__1 
            = vlSelfRef.program_counter__02Eglobal_clock;
        vlSelfRef.__Vtrigprevexpr___TOP__register_file__02Eglobal_clock__1 
            = vlSelfRef.register_file__02Eglobal_clock;
    }
    Varchitecture_components___024root___timing_ready(vlSelf);
    Varchitecture_components___024root___trigger_orInto__act_vec_vec(vlSelfRef.__VactTriggered, vlSelfRef.__VactTriggeredAcc);
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Varchitecture_components___024root___dump_triggers__act(vlSelfRef.__VactTriggered, "act"s);
    }
#endif
    Varchitecture_components___024root___trigger_orInto__act_vec_vec(vlSelfRef.__VnbaTriggered, vlSelfRef.__VactTriggered);
    __VactExecute = Varchitecture_components___024root___trigger_anySet__act(vlSelfRef.__VactTriggered);
    if (__VactExecute) {
        vlSelfRef.__VactTriggeredAcc.fill(0ULL);
        Varchitecture_components___024root___timing_resume(vlSelf);
        {
            // Inlined CFunc: _eval_act
            if ((0x0000000000000031ULL & vlSelfRef.__VactTriggered[0U])) {
                {
                    // Inlined CFunc: _act_comb__TOP__0
                    vlSelfRef.hardware_memory_tb__DOT__dut__DOT__data_out 
                        = (vlSelfRef.hardware_memory_tb__DOT__dut__DOT__memory
                           [(0x000003ffU & vlSelfRef.hardware_memory_tb__DOT__address)] 
                           & (- (IData)((IData)(vlSelfRef.hardware_memory_tb__DOT__mem_read))));
                }
            }
        }
    }
    return (__VactExecute);
}

bool Varchitecture_components___024root___eval_phase__inact(Varchitecture_components___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Varchitecture_components___024root___eval_phase__inact\n"); );
    Varchitecture_components__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VinactExecute;
    // Body
    __VinactExecute = vlSelfRef.__VdlySched.awaitingZeroDelay();
    if (__VinactExecute) {
        VL_FATAL_MT("architecture_components.sv", 40, "", "ZERODLY: Design Verilated with '--no-sched-zero-delay', but #0 delay executed at runtime");
    }
    return (__VinactExecute);
}

void Varchitecture_components___024root___trigger_clear__act(VlUnpacked<QData/*63:0*/, 1> &out) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Varchitecture_components___024root___trigger_clear__act\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        out[n] = 0ULL;
        n = ((IData)(1U) + n);
    } while ((1U > n));
}

bool Varchitecture_components___024root___eval_phase__nba(Varchitecture_components___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Varchitecture_components___024root___eval_phase__nba\n"); );
    Varchitecture_components__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = Varchitecture_components___024root___trigger_anySet__act(vlSelfRef.__VnbaTriggered);
    if (__VnbaExecute) {
        Varchitecture_components___024root___eval_nba(vlSelf);
        Varchitecture_components___024root___trigger_clear__act(vlSelfRef.__VnbaTriggered);
    }
    return (__VnbaExecute);
}

void Varchitecture_components___024root___eval(Varchitecture_components___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Varchitecture_components___024root___eval\n"); );
    Varchitecture_components__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __VicoIterCount;
    IData/*31:0*/ __VnbaIterCount;
    // Body
    __VicoIterCount = 0U;
    do {
        if (VL_UNLIKELY(((0x00002710U < __VicoIterCount)))) {
#ifdef VL_DEBUG
            Varchitecture_components___024root___dump_triggers__ico(vlSelfRef.__VicoTriggered, "ico"s);
#endif
            VL_FATAL_MT("architecture_components.sv", 40, "", "DIDNOTCONVERGE: Input combinational region did not converge after '--converge-limit' of 10000 tries");
        }
        __VicoIterCount = ((IData)(1U) + __VicoIterCount);
        vlSelfRef.__VicoPhaseResult = Varchitecture_components___024root___eval_phase__ico(vlSelf);
    } while (vlSelfRef.__VicoPhaseResult);
    __VnbaIterCount = 0U;
    do {
        if (VL_UNLIKELY(((0x00002710U < __VnbaIterCount)))) {
#ifdef VL_DEBUG
            Varchitecture_components___024root___dump_triggers__act(vlSelfRef.__VnbaTriggered, "nba"s);
#endif
            VL_FATAL_MT("architecture_components.sv", 40, "", "DIDNOTCONVERGE: NBA region did not converge after '--converge-limit' of 10000 tries");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        vlSelfRef.__VinactIterCount = 0U;
        do {
            if (VL_UNLIKELY(((0x00002710U < vlSelfRef.__VinactIterCount)))) {
                VL_FATAL_MT("architecture_components.sv", 40, "", "DIDNOTCONVERGE: Inactive region did not converge after '--converge-limit' of 10000 tries");
            }
            vlSelfRef.__VinactIterCount = ((IData)(1U) 
                                           + vlSelfRef.__VinactIterCount);
            vlSelfRef.__VactIterCount = 0U;
            do {
                if (VL_UNLIKELY(((0x00002710U < vlSelfRef.__VactIterCount)))) {
#ifdef VL_DEBUG
                    Varchitecture_components___024root___dump_triggers__act(vlSelfRef.__VactTriggered, "act"s);
#endif
                    VL_FATAL_MT("architecture_components.sv", 40, "", "DIDNOTCONVERGE: Active region did not converge after '--converge-limit' of 10000 tries");
                }
                vlSelfRef.__VactIterCount = ((IData)(1U) 
                                             + vlSelfRef.__VactIterCount);
                vlSelfRef.__VactPhaseResult = Varchitecture_components___024root___eval_phase__act(vlSelf);
            } while (vlSelfRef.__VactPhaseResult);
            vlSelfRef.__VinactPhaseResult = Varchitecture_components___024root___eval_phase__inact(vlSelf);
        } while (vlSelfRef.__VinactPhaseResult);
        vlSelfRef.__VnbaPhaseResult = Varchitecture_components___024root___eval_phase__nba(vlSelf);
    } while (vlSelfRef.__VnbaPhaseResult);
}

void Varchitecture_components___024root____VbeforeTrig_h4b0390ea__0(Varchitecture_components___024root* vlSelf, const char* __VeventDescription) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Varchitecture_components___024root____VbeforeTrig_h4b0390ea__0\n"); );
    Varchitecture_components__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    VlUnpacked<QData/*63:0*/, 1> __VTmp;
    // Body
    __VTmp[0U] = (QData)((IData)(((((~ (IData)(vlSelfRef.hardware_memory_tb__DOT__global_clock)) 
                                    & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__hardware_memory_tb__DOT__global_clock__0)) 
                                   << 4U) | ((IData)(vlSelfRef.hardware_memory_tb__DOT__global_clock) 
                                             & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__hardware_memory_tb__DOT__global_clock__0))))));
    vlSelfRef.__Vtrigprevexpr___TOP__hardware_memory_tb__DOT__global_clock__0 
        = vlSelfRef.hardware_memory_tb__DOT__global_clock;
    if ((1ULL & __VTmp[0U])) {
        vlSelfRef.__VtrigSched_h4b03902b__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h4b03902b__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h4b03902b__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h4b03902b__0.ready(__VeventDescription);
    }
    if ((0x0000000000000010ULL & __VTmp[0U])) {
        vlSelfRef.__VtrigSched_h4b0390ea__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h4b0390ea__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h4b0390ea__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h4b0390ea__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h4b0390ea__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h4b0390ea__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h4b0390ea__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h4b0390ea__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h4b0390ea__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h4b0390ea__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h4b0390ea__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h4b0390ea__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h4b0390ea__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h4b0390ea__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h4b0390ea__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h4b0390ea__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h4b0390ea__0.ready(__VeventDescription);
    }
    vlSelfRef.__VactTriggeredAcc[0U] = (vlSelfRef.__VactTriggeredAcc[0U] 
                                        | __VTmp[0U]);
}

void Varchitecture_components___024root____VbeforeTrig_h4b03902b__0(Varchitecture_components___024root* vlSelf, const char* __VeventDescription) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Varchitecture_components___024root____VbeforeTrig_h4b03902b__0\n"); );
    Varchitecture_components__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    VlUnpacked<QData/*63:0*/, 1> __VTmp;
    // Body
    __VTmp[0U] = (QData)((IData)(((((~ (IData)(vlSelfRef.hardware_memory_tb__DOT__global_clock)) 
                                    & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__hardware_memory_tb__DOT__global_clock__0)) 
                                   << 4U) | ((IData)(vlSelfRef.hardware_memory_tb__DOT__global_clock) 
                                             & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__hardware_memory_tb__DOT__global_clock__0))))));
    vlSelfRef.__Vtrigprevexpr___TOP__hardware_memory_tb__DOT__global_clock__0 
        = vlSelfRef.hardware_memory_tb__DOT__global_clock;
    if ((1ULL & __VTmp[0U])) {
        vlSelfRef.__VtrigSched_h4b03902b__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h4b03902b__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h4b03902b__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h4b03902b__0.ready(__VeventDescription);
    }
    if ((0x0000000000000010ULL & __VTmp[0U])) {
        vlSelfRef.__VtrigSched_h4b0390ea__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h4b0390ea__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h4b0390ea__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h4b0390ea__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h4b0390ea__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h4b0390ea__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h4b0390ea__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h4b0390ea__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h4b0390ea__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h4b0390ea__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h4b0390ea__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h4b0390ea__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h4b0390ea__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h4b0390ea__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h4b0390ea__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h4b0390ea__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h4b0390ea__0.ready(__VeventDescription);
    }
    vlSelfRef.__VactTriggeredAcc[0U] = (vlSelfRef.__VactTriggeredAcc[0U] 
                                        | __VTmp[0U]);
}

#ifdef VL_DEBUG
void Varchitecture_components___024root___eval_debug_assertions(Varchitecture_components___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Varchitecture_components___024root___eval_debug_assertions\n"); );
    Varchitecture_components__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (VL_UNLIKELY(((vlSelfRef.register_file__02Eglobal_clock 
                      & 0xfeU)))) {
        Verilated::overWidthError("register_file.global_clock");
    }
    if (VL_UNLIKELY(((vlSelfRef.RF_write & 0xfeU)))) {
        Verilated::overWidthError("RF_write");
    }
    if (VL_UNLIKELY(((vlSelfRef.reg_A & 0xe0U)))) {
        Verilated::overWidthError("reg_A");
    }
    if (VL_UNLIKELY(((vlSelfRef.reg_B & 0xe0U)))) {
        Verilated::overWidthError("reg_B");
    }
    if (VL_UNLIKELY(((vlSelfRef.reg_W & 0xe0U)))) {
        Verilated::overWidthError("reg_W");
    }
    if (VL_UNLIKELY(((vlSelfRef.program_counter__02Eglobal_clock 
                      & 0xfeU)))) {
        Verilated::overWidthError("program_counter.global_clock");
    }
    if (VL_UNLIKELY(((vlSelfRef.reset & 0xfeU)))) {
        Verilated::overWidthError("reset");
    }
    if (VL_UNLIKELY(((vlSelfRef.PC_write & 0xfeU)))) {
        Verilated::overWidthError("PC_write");
    }
    if (VL_UNLIKELY(((vlSelfRef.alu__02Eglobal_clock 
                      & 0xfeU)))) {
        Verilated::overWidthError("alu.global_clock");
    }
    if (VL_UNLIKELY(((vlSelfRef.flag_write & 0xfeU)))) {
        Verilated::overWidthError("flag_write");
    }
    if (VL_UNLIKELY(((vlSelfRef.ALU_op & 0x80U)))) {
        Verilated::overWidthError("ALU_op");
    }
}
#endif  // VL_DEBUG
