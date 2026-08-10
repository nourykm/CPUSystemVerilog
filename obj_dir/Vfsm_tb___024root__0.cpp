// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vfsm_tb.h for the primary calling header

#include "Vfsm_tb__pch.h"

VlCoroutine Vfsm_tb___024root___eval_initial__TOP__Vtiming__0(Vfsm_tb___024root* vlSelf);
VlCoroutine Vfsm_tb___024root___eval_initial__TOP__Vtiming__1(Vfsm_tb___024root* vlSelf);
VlCoroutine Vfsm_tb___024root___eval_initial__TOP__Vtiming__2(Vfsm_tb___024root* vlSelf);

void Vfsm_tb___024root___eval_initial(Vfsm_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfsm_tb___024root___eval_initial\n"); );
    Vfsm_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    {
        // Inlined CFunc: _eval_initial__TOP
        IData/*31:0*/ __Vinline_0__eval_initial__TOP_fsm_tb__DOT__dut__DOT__memory__DOT__unnamedblk1__DOT__i;
        __Vinline_0__eval_initial__TOP_fsm_tb__DOT__dut__DOT__memory__DOT__unnamedblk1__DOT__i = 0;
        vlSymsp->_vm_contextp__->dumpfile("cpu.vcd"s);
        vlSymsp->_traceDumpOpen();
        vlSelfRef.fsm_tb__DOT__dut__DOT__rf__DOT__registers[4U] = 1U;
        vlSelfRef.fsm_tb__DOT__dut__DOT__rf__DOT__registers[2U] = 2U;
        __Vinline_0__eval_initial__TOP_fsm_tb__DOT__dut__DOT__memory__DOT__unnamedblk1__DOT__i = 0x00000fffU;
        while (VL_LTES_III(32, 0U, __Vinline_0__eval_initial__TOP_fsm_tb__DOT__dut__DOT__memory__DOT__unnamedblk1__DOT__i)) {
            vlSelfRef.fsm_tb__DOT__dut__DOT__memory__DOT__memory[(0x00000fffU 
                                                                  & __Vinline_0__eval_initial__TOP_fsm_tb__DOT__dut__DOT__memory__DOT__unnamedblk1__DOT__i)] = 0U;
            __Vinline_0__eval_initial__TOP_fsm_tb__DOT__dut__DOT__memory__DOT__unnamedblk1__DOT__i 
                = (__Vinline_0__eval_initial__TOP_fsm_tb__DOT__dut__DOT__memory__DOT__unnamedblk1__DOT__i 
                   - (IData)(1U));
        }
        vlSelfRef.fsm_tb__DOT__dut__DOT__memory__DOT__memory[0U] = 0x002201b3U;
    }
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    Vfsm_tb___024root___eval_initial__TOP__Vtiming__0(vlSelf);
    Vfsm_tb___024root___eval_initial__TOP__Vtiming__1(vlSelf);
    Vfsm_tb___024root___eval_initial__TOP__Vtiming__2(vlSelf);
}

void Vfsm_tb___024root____VbeforeTrig_h128ed905__0(Vfsm_tb___024root* vlSelf, const char* __VeventDescription);
void Vfsm_tb___024root____VbeforeTrig_h128ec9c4__0(Vfsm_tb___024root* vlSelf, const char* __VeventDescription);
void Vfsm_tb___024root____VbeforeTrig_hc4faf76f__0(Vfsm_tb___024root* vlSelf, const char* __VeventDescription);
void Vfsm_tb___024root____VbeforeTrig_h5255dc51__0(Vfsm_tb___024root* vlSelf, const char* __VeventDescription);

VlCoroutine Vfsm_tb___024root___eval_initial__TOP__Vtiming__0(Vfsm_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfsm_tb___024root___eval_initial__TOP__Vtiming__0\n"); );
    Vfsm_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __Vtask_fsm_tb__DOT__reset_fsm__0__fsm_tb__DOT__unnamedblk1_1__DOT____Vrepeat0;
    __Vtask_fsm_tb__DOT__reset_fsm__0__fsm_tb__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
    IData/*31:0*/ __Vtask_fsm_tb__DOT__finish_instruction__1__instructions;
    __Vtask_fsm_tb__DOT__finish_instruction__1__instructions = 0;
    IData/*31:0*/ __Vtask_fsm_tb__DOT__finish_instruction__1__fsm_tb__DOT__unnamedblk1_2__DOT____Vrepeat1;
    __Vtask_fsm_tb__DOT__finish_instruction__1__fsm_tb__DOT__unnamedblk1_2__DOT____Vrepeat1 = 0;
    IData/*31:0*/ __Vtask_fsm_tb__DOT__check_reg__3__expected;
    __Vtask_fsm_tb__DOT__check_reg__3__expected = 0;
    CData/*4:0*/ __Vtask_fsm_tb__DOT__check_reg__3__reg_num;
    __Vtask_fsm_tb__DOT__check_reg__3__reg_num = 0;
    IData/*31:0*/ __Vtask_fsm_tb__DOT__reset_fsm__5__fsm_tb__DOT__unnamedblk1_1__DOT____Vrepeat0;
    __Vtask_fsm_tb__DOT__reset_fsm__5__fsm_tb__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
    IData/*31:0*/ __Vtask_fsm_tb__DOT__check_reg__7__expected;
    __Vtask_fsm_tb__DOT__check_reg__7__expected = 0;
    CData/*4:0*/ __Vtask_fsm_tb__DOT__check_reg__7__reg_num;
    __Vtask_fsm_tb__DOT__check_reg__7__reg_num = 0;
    IData/*31:0*/ __Vtask_fsm_tb__DOT__check_reg__8__expected;
    __Vtask_fsm_tb__DOT__check_reg__8__expected = 0;
    CData/*4:0*/ __Vtask_fsm_tb__DOT__check_reg__8__reg_num;
    __Vtask_fsm_tb__DOT__check_reg__8__reg_num = 0;
    IData/*31:0*/ __Vtask_fsm_tb__DOT__check_reg__9__expected;
    __Vtask_fsm_tb__DOT__check_reg__9__expected = 0;
    CData/*4:0*/ __Vtask_fsm_tb__DOT__check_reg__9__reg_num;
    __Vtask_fsm_tb__DOT__check_reg__9__reg_num = 0;
    IData/*31:0*/ __Vtask_fsm_tb__DOT__check_reg__10__expected;
    __Vtask_fsm_tb__DOT__check_reg__10__expected = 0;
    CData/*4:0*/ __Vtask_fsm_tb__DOT__check_reg__10__reg_num;
    __Vtask_fsm_tb__DOT__check_reg__10__reg_num = 0;
    IData/*31:0*/ __Vtask_fsm_tb__DOT__reset_fsm__12__fsm_tb__DOT__unnamedblk1_1__DOT____Vrepeat0;
    __Vtask_fsm_tb__DOT__reset_fsm__12__fsm_tb__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
    IData/*31:0*/ __Vtask_fsm_tb__DOT__check_reg__14__expected;
    __Vtask_fsm_tb__DOT__check_reg__14__expected = 0;
    CData/*4:0*/ __Vtask_fsm_tb__DOT__check_reg__14__reg_num;
    __Vtask_fsm_tb__DOT__check_reg__14__reg_num = 0;
    IData/*31:0*/ __Vtask_fsm_tb__DOT__check_reg__15__expected;
    __Vtask_fsm_tb__DOT__check_reg__15__expected = 0;
    CData/*4:0*/ __Vtask_fsm_tb__DOT__check_reg__15__reg_num;
    __Vtask_fsm_tb__DOT__check_reg__15__reg_num = 0;
    // Body
    vlSelfRef.fsm_tb__DOT__global_interrupt = 0U;
    vlSelfRef.fsm_tb__DOT__address_start = 0U;
    vlSelfRef.fsm_tb__DOT__reset = 1U;
    __Vtask_fsm_tb__DOT__reset_fsm__0__fsm_tb__DOT__unnamedblk1_1__DOT____Vrepeat0 = 2U;
    while (VL_LTS_III(32, 0U, __Vtask_fsm_tb__DOT__reset_fsm__0__fsm_tb__DOT__unnamedblk1_1__DOT____Vrepeat0)) {
        Vfsm_tb___024root____VbeforeTrig_h128ed905__0(vlSelf, 
                                                      "@(posedge fsm_tb.global_clock)");
        co_await vlSelfRef.__VtrigSched_h128ed905__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge fsm_tb.global_clock)", 
                                                             "testbenches/fsm_tb.sv", 
                                                             59);
        __Vtask_fsm_tb__DOT__reset_fsm__0__fsm_tb__DOT__unnamedblk1_1__DOT____Vrepeat0 
            = (__Vtask_fsm_tb__DOT__reset_fsm__0__fsm_tb__DOT__unnamedblk1_1__DOT____Vrepeat0 
               - (IData)(1U));
    }
    Vfsm_tb___024root____VbeforeTrig_h128ec9c4__0(vlSelf, 
                                                  "@(negedge fsm_tb.global_clock)");
    co_await vlSelfRef.__VtrigSched_h128ec9c4__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge fsm_tb.global_clock)", 
                                                         "testbenches/fsm_tb.sv", 
                                                         60);
    vlSelfRef.fsm_tb__DOT__reset = 0U;
    __Vtask_fsm_tb__DOT__finish_instruction__1__instructions = 1U;
    __Vtask_fsm_tb__DOT__finish_instruction__1__fsm_tb__DOT__unnamedblk1_2__DOT____Vrepeat1 = 0U;
    vlSelfRef.fsm_tb__DOT__finish_instruction__Vstatic__instructions 
        = __Vtask_fsm_tb__DOT__finish_instruction__1__instructions;
    __Vtask_fsm_tb__DOT__finish_instruction__1__fsm_tb__DOT__unnamedblk1_2__DOT____Vrepeat1 
        = vlSelfRef.fsm_tb__DOT__finish_instruction__Vstatic__instructions;
    while (VL_LTS_III(32, 0U, __Vtask_fsm_tb__DOT__finish_instruction__1__fsm_tb__DOT__unnamedblk1_2__DOT____Vrepeat1)) {
        Vfsm_tb___024root____VbeforeTrig_hc4faf76f__0(vlSelf, 
                                                      "@(posedge fsm_tb.dut.instr_done)");
        co_await vlSelfRef.__VtrigSched_hc4faf76f__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge fsm_tb.dut.instr_done)", 
                                                             "testbenches/fsm_tb.sv", 
                                                             65);
        __Vtask_fsm_tb__DOT__finish_instruction__1__fsm_tb__DOT__unnamedblk1_2__DOT____Vrepeat1 
            = (__Vtask_fsm_tb__DOT__finish_instruction__1__fsm_tb__DOT__unnamedblk1_2__DOT____Vrepeat1 
               - (IData)(1U));
    }
    Vfsm_tb___024root____VbeforeTrig_h128ec9c4__0(vlSelf, 
                                                  "@(negedge fsm_tb.global_clock)");
    co_await vlSelfRef.__VtrigSched_h128ec9c4__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge fsm_tb.global_clock)", 
                                                         "testbenches/fsm_tb.sv", 
                                                         66);
    while ((5U != (IData)(vlSelfRef.fsm_tb__DOT__dut__DOT__current_state))) {
        Vfsm_tb___024root____VbeforeTrig_h5255dc51__0(vlSelf, 
                                                      "@( (3'h5 == fsm_tb.dut.current_state))");
        co_await vlSelfRef.__VtrigSched_h5255dc51__0.trigger(1U, 
                                                             nullptr, 
                                                             "@( (3'h5 == fsm_tb.dut.current_state))", 
                                                             "testbenches/fsm_tb.sv", 
                                                             53);
    }
    Vfsm_tb___024root____VbeforeTrig_h128ec9c4__0(vlSelf, 
                                                  "@(negedge fsm_tb.global_clock)");
    co_await vlSelfRef.__VtrigSched_h128ec9c4__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge fsm_tb.global_clock)", 
                                                         "testbenches/fsm_tb.sv", 
                                                         54);
    __Vtask_fsm_tb__DOT__check_reg__3__reg_num = 3U;
    __Vtask_fsm_tb__DOT__check_reg__3__expected = 3U;
    if ((vlSelfRef.fsm_tb__DOT__dut__DOT__rf__DOT__registers
         [__Vtask_fsm_tb__DOT__check_reg__3__reg_num] 
         != __Vtask_fsm_tb__DOT__check_reg__3__expected)) {
        VL_WRITEF_NX("FAIL @%0t: x%0d = %h, expected %h\n",5, 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '#',5,(IData)(__Vtask_fsm_tb__DOT__check_reg__3__reg_num)
                     , '#',32,vlSelfRef.fsm_tb__DOT__dut__DOT__rf__DOT__registers
                     [__Vtask_fsm_tb__DOT__check_reg__3__reg_num]
                     , '#',32,__Vtask_fsm_tb__DOT__check_reg__3__expected);
        vlSelfRef.fsm_tb__DOT__errors = ((IData)(1U) 
                                         + vlSelfRef.fsm_tb__DOT__errors);
    } else {
        VL_WRITEF_NX("PASS: x%0d = %0d\n",2, '#',5,__Vtask_fsm_tb__DOT__check_reg__3__reg_num
                     , '#',32,__Vtask_fsm_tb__DOT__check_reg__3__expected);
    }
    vlSelfRef.__Vtask_fsm_tb__DOT__load_instructions__4__file = "testbenches/program1.txt"s;
    vlSelfRef.fsm_tb__DOT__load_instructions__Vstatic__file 
        = vlSelfRef.__Vtask_fsm_tb__DOT__load_instructions__4__file;
    VL_READMEM_N(false, 32, 4096, 0, vlSelfRef.fsm_tb__DOT__load_instructions__Vstatic__file
                 ,  &(vlSelfRef.fsm_tb__DOT__dut__DOT__memory__DOT__memory)
                 , 0, ~0ULL);
    if (VL_UNLIKELY(((0U == vlSelfRef.fsm_tb__DOT__dut__DOT__memory__DOT__memory[0U])))) {
        VL_WRITEF_NX("[%0t] %%Warning: fsm_tb.sv:29: %m: memory[0] is zero, file %s is empty or did not load.\n",4, 'M',vlSymsp->name(),"fsm_tb.load_instructions", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , 'S',&(vlSelfRef.fsm_tb__DOT__load_instructions__Vstatic__file));
    }
    Vfsm_tb___024root____VbeforeTrig_h128ec9c4__0(vlSelf, 
                                                  "@(negedge fsm_tb.global_clock)");
    co_await vlSelfRef.__VtrigSched_h128ec9c4__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge fsm_tb.global_clock)", 
                                                         "testbenches/fsm_tb.sv", 
                                                         30);
    __Vtask_fsm_tb__DOT__reset_fsm__5__fsm_tb__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0U;
    vlSelfRef.fsm_tb__DOT__reset = 1U;
    __Vtask_fsm_tb__DOT__reset_fsm__5__fsm_tb__DOT__unnamedblk1_1__DOT____Vrepeat0 = 2U;
    while (VL_LTS_III(32, 0U, __Vtask_fsm_tb__DOT__reset_fsm__5__fsm_tb__DOT__unnamedblk1_1__DOT____Vrepeat0)) {
        Vfsm_tb___024root____VbeforeTrig_h128ed905__0(vlSelf, 
                                                      "@(posedge fsm_tb.global_clock)");
        co_await vlSelfRef.__VtrigSched_h128ed905__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge fsm_tb.global_clock)", 
                                                             "testbenches/fsm_tb.sv", 
                                                             59);
        __Vtask_fsm_tb__DOT__reset_fsm__5__fsm_tb__DOT__unnamedblk1_1__DOT____Vrepeat0 
            = (__Vtask_fsm_tb__DOT__reset_fsm__5__fsm_tb__DOT__unnamedblk1_1__DOT____Vrepeat0 
               - (IData)(1U));
    }
    Vfsm_tb___024root____VbeforeTrig_h128ec9c4__0(vlSelf, 
                                                  "@(negedge fsm_tb.global_clock)");
    co_await vlSelfRef.__VtrigSched_h128ec9c4__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge fsm_tb.global_clock)", 
                                                         "testbenches/fsm_tb.sv", 
                                                         60);
    vlSelfRef.fsm_tb__DOT__reset = 0U;
    while ((5U != (IData)(vlSelfRef.fsm_tb__DOT__dut__DOT__current_state))) {
        Vfsm_tb___024root____VbeforeTrig_h5255dc51__0(vlSelf, 
                                                      "@( (3'h5 == fsm_tb.dut.current_state))");
        co_await vlSelfRef.__VtrigSched_h5255dc51__0.trigger(1U, 
                                                             nullptr, 
                                                             "@( (3'h5 == fsm_tb.dut.current_state))", 
                                                             "testbenches/fsm_tb.sv", 
                                                             53);
    }
    Vfsm_tb___024root____VbeforeTrig_h128ec9c4__0(vlSelf, 
                                                  "@(negedge fsm_tb.global_clock)");
    co_await vlSelfRef.__VtrigSched_h128ec9c4__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge fsm_tb.global_clock)", 
                                                         "testbenches/fsm_tb.sv", 
                                                         54);
    __Vtask_fsm_tb__DOT__check_reg__7__reg_num = 0x0aU;
    __Vtask_fsm_tb__DOT__check_reg__7__expected = 0x00000014U;
    if ((vlSelfRef.fsm_tb__DOT__dut__DOT__rf__DOT__registers
         [__Vtask_fsm_tb__DOT__check_reg__7__reg_num] 
         != __Vtask_fsm_tb__DOT__check_reg__7__expected)) {
        VL_WRITEF_NX("FAIL @%0t: x%0d = %h, expected %h\n",5, 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '#',5,(IData)(__Vtask_fsm_tb__DOT__check_reg__7__reg_num)
                     , '#',32,vlSelfRef.fsm_tb__DOT__dut__DOT__rf__DOT__registers
                     [__Vtask_fsm_tb__DOT__check_reg__7__reg_num]
                     , '#',32,__Vtask_fsm_tb__DOT__check_reg__7__expected);
        vlSelfRef.fsm_tb__DOT__errors = ((IData)(1U) 
                                         + vlSelfRef.fsm_tb__DOT__errors);
    } else {
        VL_WRITEF_NX("PASS: x%0d = %0d\n",2, '#',5,__Vtask_fsm_tb__DOT__check_reg__7__reg_num
                     , '#',32,__Vtask_fsm_tb__DOT__check_reg__7__expected);
    }
    __Vtask_fsm_tb__DOT__check_reg__8__reg_num = 0x0cU;
    __Vtask_fsm_tb__DOT__check_reg__8__expected = 3U;
    if ((vlSelfRef.fsm_tb__DOT__dut__DOT__rf__DOT__registers
         [__Vtask_fsm_tb__DOT__check_reg__8__reg_num] 
         != __Vtask_fsm_tb__DOT__check_reg__8__expected)) {
        VL_WRITEF_NX("FAIL @%0t: x%0d = %h, expected %h\n",5, 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '#',5,(IData)(__Vtask_fsm_tb__DOT__check_reg__8__reg_num)
                     , '#',32,vlSelfRef.fsm_tb__DOT__dut__DOT__rf__DOT__registers
                     [__Vtask_fsm_tb__DOT__check_reg__8__reg_num]
                     , '#',32,__Vtask_fsm_tb__DOT__check_reg__8__expected);
        vlSelfRef.fsm_tb__DOT__errors = ((IData)(1U) 
                                         + vlSelfRef.fsm_tb__DOT__errors);
    } else {
        VL_WRITEF_NX("PASS: x%0d = %0d\n",2, '#',5,__Vtask_fsm_tb__DOT__check_reg__8__reg_num
                     , '#',32,__Vtask_fsm_tb__DOT__check_reg__8__expected);
    }
    __Vtask_fsm_tb__DOT__check_reg__9__reg_num = 0x0bU;
    __Vtask_fsm_tb__DOT__check_reg__9__expected = 0x00000017U;
    if ((vlSelfRef.fsm_tb__DOT__dut__DOT__rf__DOT__registers
         [__Vtask_fsm_tb__DOT__check_reg__9__reg_num] 
         != __Vtask_fsm_tb__DOT__check_reg__9__expected)) {
        VL_WRITEF_NX("FAIL @%0t: x%0d = %h, expected %h\n",5, 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '#',5,(IData)(__Vtask_fsm_tb__DOT__check_reg__9__reg_num)
                     , '#',32,vlSelfRef.fsm_tb__DOT__dut__DOT__rf__DOT__registers
                     [__Vtask_fsm_tb__DOT__check_reg__9__reg_num]
                     , '#',32,__Vtask_fsm_tb__DOT__check_reg__9__expected);
        vlSelfRef.fsm_tb__DOT__errors = ((IData)(1U) 
                                         + vlSelfRef.fsm_tb__DOT__errors);
    } else {
        VL_WRITEF_NX("PASS: x%0d = %0d\n",2, '#',5,__Vtask_fsm_tb__DOT__check_reg__9__reg_num
                     , '#',32,__Vtask_fsm_tb__DOT__check_reg__9__expected);
    }
    __Vtask_fsm_tb__DOT__check_reg__10__reg_num = 6U;
    __Vtask_fsm_tb__DOT__check_reg__10__expected = 0x0000000cU;
    if ((vlSelfRef.fsm_tb__DOT__dut__DOT__rf__DOT__registers
         [__Vtask_fsm_tb__DOT__check_reg__10__reg_num] 
         != __Vtask_fsm_tb__DOT__check_reg__10__expected)) {
        VL_WRITEF_NX("FAIL @%0t: x%0d = %h, expected %h\n",5, 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '#',5,(IData)(__Vtask_fsm_tb__DOT__check_reg__10__reg_num)
                     , '#',32,vlSelfRef.fsm_tb__DOT__dut__DOT__rf__DOT__registers
                     [__Vtask_fsm_tb__DOT__check_reg__10__reg_num]
                     , '#',32,__Vtask_fsm_tb__DOT__check_reg__10__expected);
        vlSelfRef.fsm_tb__DOT__errors = ((IData)(1U) 
                                         + vlSelfRef.fsm_tb__DOT__errors);
    } else {
        VL_WRITEF_NX("PASS: x%0d = %0d\n",2, '#',5,__Vtask_fsm_tb__DOT__check_reg__10__reg_num
                     , '#',32,__Vtask_fsm_tb__DOT__check_reg__10__expected);
    }
    vlSelfRef.__Vtask_fsm_tb__DOT__load_instructions__11__file = "testbenches/program2.txt"s;
    vlSelfRef.fsm_tb__DOT__load_instructions__Vstatic__file 
        = vlSelfRef.__Vtask_fsm_tb__DOT__load_instructions__11__file;
    VL_READMEM_N(false, 32, 4096, 0, vlSelfRef.fsm_tb__DOT__load_instructions__Vstatic__file
                 ,  &(vlSelfRef.fsm_tb__DOT__dut__DOT__memory__DOT__memory)
                 , 0, ~0ULL);
    if (VL_UNLIKELY(((0U == vlSelfRef.fsm_tb__DOT__dut__DOT__memory__DOT__memory[0U])))) {
        VL_WRITEF_NX("[%0t] %%Warning: fsm_tb.sv:29: %m: memory[0] is zero, file %s is empty or did not load.\n",4, 'M',vlSymsp->name(),"fsm_tb.load_instructions", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , 'S',&(vlSelfRef.fsm_tb__DOT__load_instructions__Vstatic__file));
    }
    Vfsm_tb___024root____VbeforeTrig_h128ec9c4__0(vlSelf, 
                                                  "@(negedge fsm_tb.global_clock)");
    co_await vlSelfRef.__VtrigSched_h128ec9c4__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge fsm_tb.global_clock)", 
                                                         "testbenches/fsm_tb.sv", 
                                                         30);
    __Vtask_fsm_tb__DOT__reset_fsm__12__fsm_tb__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0U;
    vlSelfRef.fsm_tb__DOT__reset = 1U;
    __Vtask_fsm_tb__DOT__reset_fsm__12__fsm_tb__DOT__unnamedblk1_1__DOT____Vrepeat0 = 2U;
    while (VL_LTS_III(32, 0U, __Vtask_fsm_tb__DOT__reset_fsm__12__fsm_tb__DOT__unnamedblk1_1__DOT____Vrepeat0)) {
        Vfsm_tb___024root____VbeforeTrig_h128ed905__0(vlSelf, 
                                                      "@(posedge fsm_tb.global_clock)");
        co_await vlSelfRef.__VtrigSched_h128ed905__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge fsm_tb.global_clock)", 
                                                             "testbenches/fsm_tb.sv", 
                                                             59);
        __Vtask_fsm_tb__DOT__reset_fsm__12__fsm_tb__DOT__unnamedblk1_1__DOT____Vrepeat0 
            = (__Vtask_fsm_tb__DOT__reset_fsm__12__fsm_tb__DOT__unnamedblk1_1__DOT____Vrepeat0 
               - (IData)(1U));
    }
    Vfsm_tb___024root____VbeforeTrig_h128ec9c4__0(vlSelf, 
                                                  "@(negedge fsm_tb.global_clock)");
    co_await vlSelfRef.__VtrigSched_h128ec9c4__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge fsm_tb.global_clock)", 
                                                         "testbenches/fsm_tb.sv", 
                                                         60);
    vlSelfRef.fsm_tb__DOT__reset = 0U;
    while ((5U != (IData)(vlSelfRef.fsm_tb__DOT__dut__DOT__current_state))) {
        Vfsm_tb___024root____VbeforeTrig_h5255dc51__0(vlSelf, 
                                                      "@( (3'h5 == fsm_tb.dut.current_state))");
        co_await vlSelfRef.__VtrigSched_h5255dc51__0.trigger(1U, 
                                                             nullptr, 
                                                             "@( (3'h5 == fsm_tb.dut.current_state))", 
                                                             "testbenches/fsm_tb.sv", 
                                                             53);
    }
    Vfsm_tb___024root____VbeforeTrig_h128ec9c4__0(vlSelf, 
                                                  "@(negedge fsm_tb.global_clock)");
    co_await vlSelfRef.__VtrigSched_h128ec9c4__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge fsm_tb.global_clock)", 
                                                         "testbenches/fsm_tb.sv", 
                                                         54);
    __Vtask_fsm_tb__DOT__check_reg__14__reg_num = 3U;
    __Vtask_fsm_tb__DOT__check_reg__14__expected = 1U;
    if ((vlSelfRef.fsm_tb__DOT__dut__DOT__rf__DOT__registers
         [__Vtask_fsm_tb__DOT__check_reg__14__reg_num] 
         != __Vtask_fsm_tb__DOT__check_reg__14__expected)) {
        VL_WRITEF_NX("FAIL @%0t: x%0d = %h, expected %h\n",5, 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '#',5,(IData)(__Vtask_fsm_tb__DOT__check_reg__14__reg_num)
                     , '#',32,vlSelfRef.fsm_tb__DOT__dut__DOT__rf__DOT__registers
                     [__Vtask_fsm_tb__DOT__check_reg__14__reg_num]
                     , '#',32,__Vtask_fsm_tb__DOT__check_reg__14__expected);
        vlSelfRef.fsm_tb__DOT__errors = ((IData)(1U) 
                                         + vlSelfRef.fsm_tb__DOT__errors);
    } else {
        VL_WRITEF_NX("PASS: x%0d = %0d\n",2, '#',5,__Vtask_fsm_tb__DOT__check_reg__14__reg_num
                     , '#',32,__Vtask_fsm_tb__DOT__check_reg__14__expected);
    }
    __Vtask_fsm_tb__DOT__check_reg__15__reg_num = 4U;
    __Vtask_fsm_tb__DOT__check_reg__15__expected = 0x0000000bU;
    if ((vlSelfRef.fsm_tb__DOT__dut__DOT__rf__DOT__registers
         [__Vtask_fsm_tb__DOT__check_reg__15__reg_num] 
         != __Vtask_fsm_tb__DOT__check_reg__15__expected)) {
        VL_WRITEF_NX("FAIL @%0t: x%0d = %h, expected %h\n",5, 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '#',5,(IData)(__Vtask_fsm_tb__DOT__check_reg__15__reg_num)
                     , '#',32,vlSelfRef.fsm_tb__DOT__dut__DOT__rf__DOT__registers
                     [__Vtask_fsm_tb__DOT__check_reg__15__reg_num]
                     , '#',32,__Vtask_fsm_tb__DOT__check_reg__15__expected);
        vlSelfRef.fsm_tb__DOT__errors = ((IData)(1U) 
                                         + vlSelfRef.fsm_tb__DOT__errors);
    } else {
        VL_WRITEF_NX("PASS: x%0d = %0d\n",2, '#',5,__Vtask_fsm_tb__DOT__check_reg__15__reg_num
                     , '#',32,__Vtask_fsm_tb__DOT__check_reg__15__expected);
    }
    VL_WRITEF_NX("\n",0);
    if ((0U == vlSelfRef.fsm_tb__DOT__errors)) {
        VL_WRITEF_NX("ALL TESTS PASSED\n",0);
    } else {
        VL_WRITEF_NX("%0d TEST(S) FAILED\n",1, '~',32,vlSelfRef.fsm_tb__DOT__errors);
    }
    VL_FINISH_MT("testbenches/fsm_tb.sv", 116, "");
    co_return;
}

VlCoroutine Vfsm_tb___024root___eval_initial__TOP__Vtiming__1(Vfsm_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfsm_tb___024root___eval_initial__TOP__Vtiming__1\n"); );
    Vfsm_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    co_await vlSelfRef.__VdlySched.delay(0x0000000000989680ULL, 
                                         nullptr, "testbenches/fsm_tb.sv", 
                                         120);
    VL_WRITEF_NX("TIMEOUT: Testbench did not finish\n",0);
    VL_STOP_MT("testbenches/fsm_tb.sv", 122, "");
    co_return;
}

VlCoroutine Vfsm_tb___024root___eval_initial__TOP__Vtiming__2(Vfsm_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfsm_tb___024root___eval_initial__TOP__Vtiming__2\n"); );
    Vfsm_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    while (VL_LIKELY(!vlSymsp->_vm_contextp__->gotFinish())) {
        co_await vlSelfRef.__VdlySched.delay(0x0000000000001388ULL, 
                                             nullptr, 
                                             "testbenches/fsm_tb.sv", 
                                             22);
        vlSelfRef.fsm_tb__DOT__global_clock = (1U & 
                                               (~ (IData)(vlSelfRef.fsm_tb__DOT__global_clock)));
    }
    co_return;
}

bool Vfsm_tb___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfsm_tb___024root___trigger_anySet__act\n"); );
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

void Vfsm_tb___024root___nba_sequent__TOP__0(Vfsm_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfsm_tb___024root___nba_sequent__TOP__0\n"); );
    Vfsm_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __VdlyVal__fsm_tb__DOT__dut__DOT__rf__DOT__registers__v0;
    __VdlyVal__fsm_tb__DOT__dut__DOT__rf__DOT__registers__v0 = 0;
    CData/*4:0*/ __VdlyDim0__fsm_tb__DOT__dut__DOT__rf__DOT__registers__v0;
    __VdlyDim0__fsm_tb__DOT__dut__DOT__rf__DOT__registers__v0 = 0;
    CData/*0:0*/ __VdlySet__fsm_tb__DOT__dut__DOT__rf__DOT__registers__v0;
    __VdlySet__fsm_tb__DOT__dut__DOT__rf__DOT__registers__v0 = 0;
    IData/*31:0*/ __VdlyVal__fsm_tb__DOT__dut__DOT__memory__DOT__memory__v0;
    __VdlyVal__fsm_tb__DOT__dut__DOT__memory__DOT__memory__v0 = 0;
    SData/*11:0*/ __VdlyDim0__fsm_tb__DOT__dut__DOT__memory__DOT__memory__v0;
    __VdlyDim0__fsm_tb__DOT__dut__DOT__memory__DOT__memory__v0 = 0;
    CData/*0:0*/ __VdlySet__fsm_tb__DOT__dut__DOT__memory__DOT__memory__v0;
    __VdlySet__fsm_tb__DOT__dut__DOT__memory__DOT__memory__v0 = 0;
    // Body
    __VdlySet__fsm_tb__DOT__dut__DOT__memory__DOT__memory__v0 = 0U;
    __VdlySet__fsm_tb__DOT__dut__DOT__rf__DOT__registers__v0 = 0U;
    if (((IData)(vlSelfRef.fsm_tb__DOT__dut__DOT__cu__DOT__mem_write) 
         & (4U == (IData)(vlSelfRef.fsm_tb__DOT__dut__DOT__current_state)))) {
        if (vlSymsp->_vm_contextp__->assertCtlGet(VerilatedAssertCtlQuery::ASSERT_CTL_ON, 2, 1)) {
            if (vlSymsp->_vm_contextp__->assertCtlGet(VerilatedAssertCtlQuery::ASSERT_CTL_FAIL_ON, 2, 1)) {
                if (VL_UNLIKELY(((0x00001000U <= vlSelfRef.fsm_tb__DOT__dut__DOT__AddrSelOUT)))) {
                    VL_WRITEF_NX("address is beyond MEM_SIZE\n",0);
                }
            }
        }
        if (VL_LIKELY(((0x00001000U > vlSelfRef.fsm_tb__DOT__dut__DOT__AddrSelOUT)))) {
            __VdlyVal__fsm_tb__DOT__dut__DOT__memory__DOT__memory__v0 
                = vlSelfRef.fsm_tb__DOT__dut__DOT__b_load;
            __VdlyDim0__fsm_tb__DOT__dut__DOT__memory__DOT__memory__v0 
                = (0x00000fffU & (vlSelfRef.fsm_tb__DOT__dut__DOT__AddrSelOUT 
                                  >> 2U));
            __VdlySet__fsm_tb__DOT__dut__DOT__memory__DOT__memory__v0 = 1U;
        } else {
            VL_WRITEF_NX("Write to %0d is beyond MEM_SIZE, ignored\n",1
                         , '#',32,vlSelfRef.fsm_tb__DOT__dut__DOT__AddrSelOUT);
        }
    }
    if (vlSelfRef.fsm_tb__DOT__dut__DOT__RF_write) {
        __VdlyVal__fsm_tb__DOT__dut__DOT__rf__DOT__registers__v0 
            = ((IData)(vlSelfRef.fsm_tb__DOT__dut__DOT__reg_in)
                ? vlSelfRef.fsm_tb__DOT__dut__DOT__data_out_to_write
                : vlSelfRef.fsm_tb__DOT__dut__DOT__ALU_output_load);
        __VdlyDim0__fsm_tb__DOT__dut__DOT__rf__DOT__registers__v0 
            = (0x0000001fU & (vlSelfRef.fsm_tb__DOT__dut__DOT__IR_out 
                              >> 7U));
        __VdlySet__fsm_tb__DOT__dut__DOT__rf__DOT__registers__v0 = 1U;
    }
    if (vlSelfRef.fsm_tb__DOT__dut__DOT__AB_load) {
        vlSelfRef.fsm_tb__DOT__dut__DOT__a_load = (vlSelfRef.fsm_tb__DOT__dut__DOT__rf__DOT__registers
                                                   [vlSelfRef.fsm_tb__DOT__dut__DOT__cu__DOT__rs1] 
                                                   & (- (IData)(
                                                                (0U 
                                                                 != (IData)(vlSelfRef.fsm_tb__DOT__dut__DOT__cu__DOT__rs1)))));
        vlSelfRef.fsm_tb__DOT__dut__DOT__b_load = (vlSelfRef.fsm_tb__DOT__dut__DOT__rf__DOT__registers
                                                   [vlSelfRef.fsm_tb__DOT__dut__DOT__cu__DOT__rs2] 
                                                   & (- (IData)(
                                                                (0U 
                                                                 != (IData)(vlSelfRef.fsm_tb__DOT__dut__DOT__cu__DOT__rs2)))));
    }
    if (vlSelfRef.fsm_tb__DOT__dut__DOT__flag_write) {
        vlSelfRef.fsm_tb__DOT__dut__DOT__neg = (vlSelfRef.fsm_tb__DOT__dut__DOT__alu__DOT__out 
                                                >> 0x1fU);
        vlSelfRef.fsm_tb__DOT__dut__DOT__zero = (0U 
                                                 == vlSelfRef.fsm_tb__DOT__dut__DOT__alu__DOT__out);
    }
    if (vlSelfRef.fsm_tb__DOT__reset) {
        vlSelfRef.fsm_tb__DOT__dut__DOT__pc__DOT__address = 0U;
    } else if (vlSelfRef.fsm_tb__DOT__dut__DOT__PC_write) {
        vlSelfRef.fsm_tb__DOT__dut__DOT__pc__DOT__address 
            = vlSelfRef.fsm_tb__DOT__dut__DOT__alu__DOT__out;
    }
    if (__VdlySet__fsm_tb__DOT__dut__DOT__memory__DOT__memory__v0) {
        vlSelfRef.fsm_tb__DOT__dut__DOT__memory__DOT__memory[__VdlyDim0__fsm_tb__DOT__dut__DOT__memory__DOT__memory__v0] 
            = __VdlyVal__fsm_tb__DOT__dut__DOT__memory__DOT__memory__v0;
    }
    if (vlSelfRef.fsm_tb__DOT__dut__DOT__MDR_load) {
        vlSelfRef.fsm_tb__DOT__dut__DOT__data_out_to_write 
            = vlSelfRef.fsm_tb__DOT__dut__DOT__data_out_mem;
    }
    if (vlSelfRef.fsm_tb__DOT__dut__DOT__ALU_out_load) {
        vlSelfRef.fsm_tb__DOT__dut__DOT__ALU_output_load 
            = vlSelfRef.fsm_tb__DOT__dut__DOT__alu__DOT__out;
    }
    if (vlSelfRef.fsm_tb__DOT__dut__DOT__IR_load) {
        vlSelfRef.fsm_tb__DOT__dut__DOT__IR_out = vlSelfRef.fsm_tb__DOT__dut__DOT__data_out_mem;
    }
    if (__VdlySet__fsm_tb__DOT__dut__DOT__rf__DOT__registers__v0) {
        vlSelfRef.fsm_tb__DOT__dut__DOT__rf__DOT__registers[__VdlyDim0__fsm_tb__DOT__dut__DOT__rf__DOT__registers__v0] 
            = __VdlyVal__fsm_tb__DOT__dut__DOT__rf__DOT__registers__v0;
    }
    if ((0U == (IData)(vlSelfRef.fsm_tb__DOT__dut__DOT__ALU_op))) {
        vlSelfRef.fsm_tb__DOT__dut__DOT__alu__DOT__out 
            = (vlSelfRef.fsm_tb__DOT__dut__DOT__ALU_a 
               + vlSelfRef.fsm_tb__DOT__dut__DOT__ALU_b);
    } else if ((1U == (IData)(vlSelfRef.fsm_tb__DOT__dut__DOT__ALU_op))) {
        vlSelfRef.fsm_tb__DOT__dut__DOT__alu__DOT__out 
            = (vlSelfRef.fsm_tb__DOT__dut__DOT__ALU_a 
               - vlSelfRef.fsm_tb__DOT__dut__DOT__ALU_b);
    } else if ((2U == (IData)(vlSelfRef.fsm_tb__DOT__dut__DOT__ALU_op))) {
        vlSelfRef.fsm_tb__DOT__dut__DOT__alu__DOT__out 
            = (vlSelfRef.fsm_tb__DOT__dut__DOT__ALU_a 
               & vlSelfRef.fsm_tb__DOT__dut__DOT__ALU_b);
    } else if ((3U == (IData)(vlSelfRef.fsm_tb__DOT__dut__DOT__ALU_op))) {
        vlSelfRef.fsm_tb__DOT__dut__DOT__alu__DOT__out 
            = (vlSelfRef.fsm_tb__DOT__dut__DOT__ALU_a 
               | vlSelfRef.fsm_tb__DOT__dut__DOT__ALU_b);
    } else if ((4U == (IData)(vlSelfRef.fsm_tb__DOT__dut__DOT__ALU_op))) {
        vlSelfRef.fsm_tb__DOT__dut__DOT__alu__DOT__out 
            = (vlSelfRef.fsm_tb__DOT__dut__DOT__ALU_a 
               ^ vlSelfRef.fsm_tb__DOT__dut__DOT__ALU_b);
    } else if ((5U == (IData)(vlSelfRef.fsm_tb__DOT__dut__DOT__ALU_op))) {
        vlSelfRef.fsm_tb__DOT__dut__DOT__alu__DOT__out 
            = VL_SHIFTRS_III(32,32,32, vlSelfRef.fsm_tb__DOT__dut__DOT__ALU_a, vlSelfRef.fsm_tb__DOT__dut__DOT__ALU_b);
    } else if ((6U == (IData)(vlSelfRef.fsm_tb__DOT__dut__DOT__ALU_op))) {
        vlSelfRef.fsm_tb__DOT__dut__DOT__alu__DOT__out 
            = VL_SHIFTR_III(32,32,32, vlSelfRef.fsm_tb__DOT__dut__DOT__ALU_a, vlSelfRef.fsm_tb__DOT__dut__DOT__ALU_b);
    } else if ((7U == (IData)(vlSelfRef.fsm_tb__DOT__dut__DOT__ALU_op))) {
        vlSelfRef.fsm_tb__DOT__dut__DOT__alu__DOT__out 
            = VL_SHIFTL_III(32,32,32, vlSelfRef.fsm_tb__DOT__dut__DOT__ALU_a, vlSelfRef.fsm_tb__DOT__dut__DOT__ALU_b);
    }
    vlSelfRef.fsm_tb__DOT__dut__DOT__cu__DOT__rs2 = 
        (0x0000001fU & (vlSelfRef.fsm_tb__DOT__dut__DOT__IR_out 
                        >> 0x14U));
    vlSelfRef.fsm_tb__DOT__dut__DOT__cu__DOT__rs1 = 
        (0x0000001fU & (vlSelfRef.fsm_tb__DOT__dut__DOT__IR_out 
                        >> 0x0fU));
    vlSelfRef.fsm_tb__DOT__dut__DOT__cu__DOT__mem_write = 0U;
    vlSelfRef.fsm_tb__DOT__dut__DOT__cu__DOT__immediate_12 
        = (vlSelfRef.fsm_tb__DOT__dut__DOT__IR_out 
           >> 0x14U);
    vlSelfRef.fsm_tb__DOT__dut__DOT__cu__DOT__mem_read = 0U;
    vlSelfRef.fsm_tb__DOT__dut__DOT__cu__DOT__immediate_7 
        = (vlSelfRef.fsm_tb__DOT__dut__DOT__IR_out 
           >> 0x19U);
    vlSelfRef.fsm_tb__DOT__dut__DOT__cu__DOT__alu_op_code = 0U;
    vlSelfRef.fsm_tb__DOT__dut__DOT__cu__DOT__alu_b_en = 0U;
    if ((1U & (~ (vlSelfRef.fsm_tb__DOT__dut__DOT__IR_out 
                  >> 6U)))) {
        if ((1U & (~ (vlSelfRef.fsm_tb__DOT__dut__DOT__IR_out 
                      >> 4U)))) {
            if ((1U & (~ (vlSelfRef.fsm_tb__DOT__dut__DOT__IR_out 
                          >> 3U)))) {
                if ((1U & (~ (vlSelfRef.fsm_tb__DOT__dut__DOT__IR_out 
                              >> 2U)))) {
                    if ((2U & vlSelfRef.fsm_tb__DOT__dut__DOT__IR_out)) {
                        if ((1U & vlSelfRef.fsm_tb__DOT__dut__DOT__IR_out)) {
                            vlSelfRef.fsm_tb__DOT__dut__DOT__cu__DOT__mem_write 
                                = (1U & (vlSelfRef.fsm_tb__DOT__dut__DOT__IR_out 
                                         >> 5U));
                            vlSelfRef.fsm_tb__DOT__dut__DOT__cu__DOT__mem_read 
                                = (1U & (~ (vlSelfRef.fsm_tb__DOT__dut__DOT__IR_out 
                                            >> 5U)));
                        }
                    }
                }
            }
        }
        if ((0x00000020U & vlSelfRef.fsm_tb__DOT__dut__DOT__IR_out)) {
            if ((1U & (~ (vlSelfRef.fsm_tb__DOT__dut__DOT__IR_out 
                          >> 4U)))) {
                if ((1U & (~ (vlSelfRef.fsm_tb__DOT__dut__DOT__IR_out 
                              >> 3U)))) {
                    if ((1U & (~ (vlSelfRef.fsm_tb__DOT__dut__DOT__IR_out 
                                  >> 2U)))) {
                        if ((2U & vlSelfRef.fsm_tb__DOT__dut__DOT__IR_out)) {
                            if ((1U & vlSelfRef.fsm_tb__DOT__dut__DOT__IR_out)) {
                                vlSelfRef.fsm_tb__DOT__dut__DOT__cu__DOT__immediate_12 
                                    = (0x00000fffU 
                                       & ((0x00000020U 
                                           & vlSelfRef.fsm_tb__DOT__dut__DOT__IR_out)
                                           ? ((0x00000fe0U 
                                               & (vlSelfRef.fsm_tb__DOT__dut__DOT__IR_out 
                                                  >> 0x00000014U)) 
                                              | (0x0000001fU 
                                                 & (vlSelfRef.fsm_tb__DOT__dut__DOT__IR_out 
                                                    >> 7U)))
                                           : (vlSelfRef.fsm_tb__DOT__dut__DOT__IR_out 
                                              >> 0x14U)));
                            }
                        }
                    }
                }
            }
            if ((0x00000010U & vlSelfRef.fsm_tb__DOT__dut__DOT__IR_out)) {
                if ((1U & (~ (vlSelfRef.fsm_tb__DOT__dut__DOT__IR_out 
                              >> 3U)))) {
                    if ((1U & (~ (vlSelfRef.fsm_tb__DOT__dut__DOT__IR_out 
                                  >> 2U)))) {
                        if ((2U & vlSelfRef.fsm_tb__DOT__dut__DOT__IR_out)) {
                            if ((1U & vlSelfRef.fsm_tb__DOT__dut__DOT__IR_out)) {
                                vlSelfRef.fsm_tb__DOT__dut__DOT__cu__DOT__alu_b_en = 0U;
                            }
                        }
                    }
                }
            } else if ((1U & (~ (vlSelfRef.fsm_tb__DOT__dut__DOT__IR_out 
                                 >> 3U)))) {
                if ((1U & (~ (vlSelfRef.fsm_tb__DOT__dut__DOT__IR_out 
                              >> 2U)))) {
                    if ((2U & vlSelfRef.fsm_tb__DOT__dut__DOT__IR_out)) {
                        if ((1U & vlSelfRef.fsm_tb__DOT__dut__DOT__IR_out)) {
                            vlSelfRef.fsm_tb__DOT__dut__DOT__cu__DOT__alu_b_en = 2U;
                        }
                    }
                }
            }
        } else {
            if ((0x00000010U & vlSelfRef.fsm_tb__DOT__dut__DOT__IR_out)) {
                if ((1U & (~ (vlSelfRef.fsm_tb__DOT__dut__DOT__IR_out 
                              >> 3U)))) {
                    if ((1U & (~ (vlSelfRef.fsm_tb__DOT__dut__DOT__IR_out 
                                  >> 2U)))) {
                        if ((2U & vlSelfRef.fsm_tb__DOT__dut__DOT__IR_out)) {
                            if ((1U & vlSelfRef.fsm_tb__DOT__dut__DOT__IR_out)) {
                                vlSelfRef.fsm_tb__DOT__dut__DOT__cu__DOT__immediate_12 
                                    = (vlSelfRef.fsm_tb__DOT__dut__DOT__IR_out 
                                       >> 0x14U);
                                if ((5U == (7U & (vlSelfRef.fsm_tb__DOT__dut__DOT__IR_out 
                                                  >> 0x0000000cU)))) {
                                    vlSelfRef.fsm_tb__DOT__dut__DOT__cu__DOT__immediate_12 
                                        = (0x0000001fU 
                                           & (vlSelfRef.fsm_tb__DOT__dut__DOT__IR_out 
                                              >> 0x14U));
                                }
                            }
                        }
                    }
                }
            } else if ((1U & (~ (vlSelfRef.fsm_tb__DOT__dut__DOT__IR_out 
                                 >> 3U)))) {
                if ((1U & (~ (vlSelfRef.fsm_tb__DOT__dut__DOT__IR_out 
                              >> 2U)))) {
                    if ((2U & vlSelfRef.fsm_tb__DOT__dut__DOT__IR_out)) {
                        if ((1U & vlSelfRef.fsm_tb__DOT__dut__DOT__IR_out)) {
                            vlSelfRef.fsm_tb__DOT__dut__DOT__cu__DOT__immediate_12 
                                = (0x00000fffU & ((0x00000020U 
                                                   & vlSelfRef.fsm_tb__DOT__dut__DOT__IR_out)
                                                   ? 
                                                  ((0x00000fe0U 
                                                    & (vlSelfRef.fsm_tb__DOT__dut__DOT__IR_out 
                                                       >> 0x00000014U)) 
                                                   | (0x0000001fU 
                                                      & (vlSelfRef.fsm_tb__DOT__dut__DOT__IR_out 
                                                         >> 7U)))
                                                   : 
                                                  (vlSelfRef.fsm_tb__DOT__dut__DOT__IR_out 
                                                   >> 0x14U)));
                        }
                    }
                }
            }
            if ((1U & (~ (vlSelfRef.fsm_tb__DOT__dut__DOT__IR_out 
                          >> 3U)))) {
                if ((1U & (~ (vlSelfRef.fsm_tb__DOT__dut__DOT__IR_out 
                              >> 2U)))) {
                    if ((2U & vlSelfRef.fsm_tb__DOT__dut__DOT__IR_out)) {
                        if ((1U & vlSelfRef.fsm_tb__DOT__dut__DOT__IR_out)) {
                            vlSelfRef.fsm_tb__DOT__dut__DOT__cu__DOT__alu_b_en = 2U;
                        }
                    }
                }
            }
        }
    }
    vlSelfRef.fsm_tb__DOT__dut__DOT__cu__DOT__instruction_type = 0U;
    if ((0x00000040U & vlSelfRef.fsm_tb__DOT__dut__DOT__IR_out)) {
        if ((0x00000020U & vlSelfRef.fsm_tb__DOT__dut__DOT__IR_out)) {
            if ((1U & (~ (vlSelfRef.fsm_tb__DOT__dut__DOT__IR_out 
                          >> 4U)))) {
                if ((1U & (~ (vlSelfRef.fsm_tb__DOT__dut__DOT__IR_out 
                              >> 3U)))) {
                    if ((1U & (~ (vlSelfRef.fsm_tb__DOT__dut__DOT__IR_out 
                                  >> 2U)))) {
                        if ((2U & vlSelfRef.fsm_tb__DOT__dut__DOT__IR_out)) {
                            if ((1U & vlSelfRef.fsm_tb__DOT__dut__DOT__IR_out)) {
                                vlSelfRef.fsm_tb__DOT__dut__DOT__cu__DOT__rs2 
                                    = (0x0000001fU 
                                       & (vlSelfRef.fsm_tb__DOT__dut__DOT__IR_out 
                                          >> 0x14U));
                                vlSelfRef.fsm_tb__DOT__dut__DOT__cu__DOT__rs1 
                                    = (0x0000001fU 
                                       & (vlSelfRef.fsm_tb__DOT__dut__DOT__IR_out 
                                          >> 0x0fU));
                                vlSelfRef.fsm_tb__DOT__dut__DOT__cu__DOT__alu_op_code = 1U;
                                vlSelfRef.fsm_tb__DOT__dut__DOT__cu__DOT__instruction_type = 3U;
                            }
                        }
                    }
                }
            }
        }
    } else {
        if ((0x00000020U & vlSelfRef.fsm_tb__DOT__dut__DOT__IR_out)) {
            if ((1U & (~ (vlSelfRef.fsm_tb__DOT__dut__DOT__IR_out 
                          >> 3U)))) {
                if ((1U & (~ (vlSelfRef.fsm_tb__DOT__dut__DOT__IR_out 
                              >> 2U)))) {
                    if ((2U & vlSelfRef.fsm_tb__DOT__dut__DOT__IR_out)) {
                        if ((1U & vlSelfRef.fsm_tb__DOT__dut__DOT__IR_out)) {
                            vlSelfRef.fsm_tb__DOT__dut__DOT__cu__DOT__rs2 
                                = (0x0000001fU & (vlSelfRef.fsm_tb__DOT__dut__DOT__IR_out 
                                                  >> 0x14U));
                        }
                    }
                }
            }
            if ((0x00000010U & vlSelfRef.fsm_tb__DOT__dut__DOT__IR_out)) {
                if ((1U & (~ (vlSelfRef.fsm_tb__DOT__dut__DOT__IR_out 
                              >> 3U)))) {
                    if ((1U & (~ (vlSelfRef.fsm_tb__DOT__dut__DOT__IR_out 
                                  >> 2U)))) {
                        if ((2U & vlSelfRef.fsm_tb__DOT__dut__DOT__IR_out)) {
                            if ((1U & vlSelfRef.fsm_tb__DOT__dut__DOT__IR_out)) {
                                vlSelfRef.fsm_tb__DOT__dut__DOT__cu__DOT__immediate_7 
                                    = (vlSelfRef.fsm_tb__DOT__dut__DOT__IR_out 
                                       >> 0x19U);
                                vlSelfRef.fsm_tb__DOT__dut__DOT__cu__DOT__alu_op_code 
                                    = ((0x00004000U 
                                        & vlSelfRef.fsm_tb__DOT__dut__DOT__IR_out)
                                        ? ((0x00002000U 
                                            & vlSelfRef.fsm_tb__DOT__dut__DOT__IR_out)
                                            ? ((0x00001000U 
                                                & vlSelfRef.fsm_tb__DOT__dut__DOT__IR_out)
                                                ? 2U
                                                : 3U)
                                            : ((0x00001000U 
                                                & vlSelfRef.fsm_tb__DOT__dut__DOT__IR_out)
                                                ? (
                                                   (0x00000020U 
                                                    & (IData)(vlSelfRef.fsm_tb__DOT__dut__DOT__cu__DOT__immediate_7))
                                                    ? 5U
                                                    : 6U)
                                                : 4U))
                                        : ((0x00002000U 
                                            & vlSelfRef.fsm_tb__DOT__dut__DOT__IR_out)
                                            ? 0U : 
                                           ((0x00001000U 
                                             & vlSelfRef.fsm_tb__DOT__dut__DOT__IR_out)
                                             ? 7U : 
                                            ((0x00000020U 
                                              & (IData)(vlSelfRef.fsm_tb__DOT__dut__DOT__cu__DOT__immediate_7))
                                              ? 1U : 0U))));
                                vlSelfRef.fsm_tb__DOT__dut__DOT__cu__DOT__instruction_type = 0U;
                            }
                        }
                    }
                }
            } else if ((1U & (~ (vlSelfRef.fsm_tb__DOT__dut__DOT__IR_out 
                                 >> 3U)))) {
                if ((1U & (~ (vlSelfRef.fsm_tb__DOT__dut__DOT__IR_out 
                              >> 2U)))) {
                    if ((2U & vlSelfRef.fsm_tb__DOT__dut__DOT__IR_out)) {
                        if ((1U & vlSelfRef.fsm_tb__DOT__dut__DOT__IR_out)) {
                            vlSelfRef.fsm_tb__DOT__dut__DOT__cu__DOT__instruction_type = 2U;
                        }
                    }
                }
            }
        } else {
            if ((1U & (~ (vlSelfRef.fsm_tb__DOT__dut__DOT__IR_out 
                          >> 4U)))) {
                if ((1U & (~ (vlSelfRef.fsm_tb__DOT__dut__DOT__IR_out 
                              >> 3U)))) {
                    if ((1U & (~ (vlSelfRef.fsm_tb__DOT__dut__DOT__IR_out 
                                  >> 2U)))) {
                        if ((2U & vlSelfRef.fsm_tb__DOT__dut__DOT__IR_out)) {
                            if ((1U & vlSelfRef.fsm_tb__DOT__dut__DOT__IR_out)) {
                                vlSelfRef.fsm_tb__DOT__dut__DOT__cu__DOT__rs2 
                                    = (0x0000001fU 
                                       & (vlSelfRef.fsm_tb__DOT__dut__DOT__IR_out 
                                          >> 0x14U));
                            }
                        }
                    }
                }
            }
            if ((0x00000010U & vlSelfRef.fsm_tb__DOT__dut__DOT__IR_out)) {
                if ((1U & (~ (vlSelfRef.fsm_tb__DOT__dut__DOT__IR_out 
                              >> 3U)))) {
                    if ((1U & (~ (vlSelfRef.fsm_tb__DOT__dut__DOT__IR_out 
                                  >> 2U)))) {
                        if ((2U & vlSelfRef.fsm_tb__DOT__dut__DOT__IR_out)) {
                            if ((1U & vlSelfRef.fsm_tb__DOT__dut__DOT__IR_out)) {
                                vlSelfRef.fsm_tb__DOT__dut__DOT__cu__DOT__immediate_7 
                                    = (vlSelfRef.fsm_tb__DOT__dut__DOT__IR_out 
                                       >> 0x19U);
                                vlSelfRef.fsm_tb__DOT__dut__DOT__cu__DOT__alu_op_code 
                                    = ((0x00004000U 
                                        & vlSelfRef.fsm_tb__DOT__dut__DOT__IR_out)
                                        ? ((0x00002000U 
                                            & vlSelfRef.fsm_tb__DOT__dut__DOT__IR_out)
                                            ? ((0x00001000U 
                                                & vlSelfRef.fsm_tb__DOT__dut__DOT__IR_out)
                                                ? 2U
                                                : 3U)
                                            : ((0x00001000U 
                                                & vlSelfRef.fsm_tb__DOT__dut__DOT__IR_out)
                                                ? (
                                                   (0x00000020U 
                                                    & (IData)(vlSelfRef.fsm_tb__DOT__dut__DOT__cu__DOT__immediate_7))
                                                    ? 5U
                                                    : 6U)
                                                : 4U))
                                        : ((0x00002000U 
                                            & vlSelfRef.fsm_tb__DOT__dut__DOT__IR_out)
                                            ? ((0x00001000U 
                                                & vlSelfRef.fsm_tb__DOT__dut__DOT__IR_out)
                                                ? 0U
                                                : 1U)
                                            : ((0x00001000U 
                                                & vlSelfRef.fsm_tb__DOT__dut__DOT__IR_out)
                                                ? 7U
                                                : 0U)));
                                vlSelfRef.fsm_tb__DOT__dut__DOT__cu__DOT__instruction_type = 1U;
                            }
                        }
                    }
                }
            } else if ((1U & (~ (vlSelfRef.fsm_tb__DOT__dut__DOT__IR_out 
                                 >> 3U)))) {
                if ((1U & (~ (vlSelfRef.fsm_tb__DOT__dut__DOT__IR_out 
                              >> 2U)))) {
                    if ((2U & vlSelfRef.fsm_tb__DOT__dut__DOT__IR_out)) {
                        if ((1U & vlSelfRef.fsm_tb__DOT__dut__DOT__IR_out)) {
                            vlSelfRef.fsm_tb__DOT__dut__DOT__cu__DOT__instruction_type = 2U;
                        }
                    }
                }
            }
        }
        if ((1U & (~ (vlSelfRef.fsm_tb__DOT__dut__DOT__IR_out 
                      >> 3U)))) {
            if ((1U & (~ (vlSelfRef.fsm_tb__DOT__dut__DOT__IR_out 
                          >> 2U)))) {
                if ((2U & vlSelfRef.fsm_tb__DOT__dut__DOT__IR_out)) {
                    if ((1U & vlSelfRef.fsm_tb__DOT__dut__DOT__IR_out)) {
                        vlSelfRef.fsm_tb__DOT__dut__DOT__cu__DOT__rs1 
                            = (0x0000001fU & (vlSelfRef.fsm_tb__DOT__dut__DOT__IR_out 
                                              >> 0x0fU));
                    }
                }
            }
        }
    }
}

void Vfsm_tb___024root___nba_comb__TOP__0(Vfsm_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfsm_tb___024root___nba_comb__TOP__0\n"); );
    Vfsm_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VdfgRegularize_hebeb780c_0_0;
    __VdfgRegularize_hebeb780c_0_0 = 0;
    // Body
    vlSelfRef.fsm_tb__DOT__dut__DOT__next_state = vlSelfRef.fsm_tb__DOT__dut__DOT__current_state;
    vlSelfRef.fsm_tb__DOT__dut__DOT__reg_in = 0U;
    vlSelfRef.fsm_tb__DOT__dut__DOT__ALU_out_load = 0U;
    vlSelfRef.fsm_tb__DOT__dut__DOT__MDR_load = 0U;
    vlSelfRef.fsm_tb__DOT__dut__DOT__RF_write = 0U;
    vlSelfRef.fsm_tb__DOT__dut__DOT__flag_write = 0U;
    vlSelfRef.fsm_tb__DOT__dut__DOT__instr_done = 0U;
    vlSelfRef.fsm_tb__DOT__dut__DOT__PC_write = 0U;
    if ((4U & (IData)(vlSelfRef.fsm_tb__DOT__dut__DOT__current_state))) {
        vlSelfRef.fsm_tb__DOT__dut__DOT__next_state 
            = ((2U & (IData)(vlSelfRef.fsm_tb__DOT__dut__DOT__current_state))
                ? 0U : ((1U & (IData)(vlSelfRef.fsm_tb__DOT__dut__DOT__current_state))
                         ? 5U : 0U));
        if ((1U & (~ ((IData)(vlSelfRef.fsm_tb__DOT__dut__DOT__current_state) 
                      >> 1U)))) {
            if ((1U & (~ (IData)(vlSelfRef.fsm_tb__DOT__dut__DOT__current_state)))) {
                if (((0U == (IData)(vlSelfRef.fsm_tb__DOT__dut__DOT__cu__DOT__instruction_type)) 
                     | (1U == (IData)(vlSelfRef.fsm_tb__DOT__dut__DOT__cu__DOT__instruction_type)))) {
                    vlSelfRef.fsm_tb__DOT__dut__DOT__reg_in = 0U;
                    vlSelfRef.fsm_tb__DOT__dut__DOT__RF_write = 1U;
                    vlSelfRef.fsm_tb__DOT__dut__DOT__instr_done = 1U;
                }
                if ((3U == (IData)(vlSelfRef.fsm_tb__DOT__dut__DOT__cu__DOT__instruction_type))) {
                    vlSelfRef.fsm_tb__DOT__dut__DOT__instr_done = 1U;
                    vlSelfRef.fsm_tb__DOT__dut__DOT__PC_write 
                        = ((0x00004000U & vlSelfRef.fsm_tb__DOT__dut__DOT__IR_out)
                            ? ((1U & (~ (vlSelfRef.fsm_tb__DOT__dut__DOT__IR_out 
                                         >> 0x0000000dU))) 
                               && (1U & ((0x00001000U 
                                          & vlSelfRef.fsm_tb__DOT__dut__DOT__IR_out)
                                          ? ((~ (IData)(vlSelfRef.fsm_tb__DOT__dut__DOT__neg)) 
                                             | (IData)(vlSelfRef.fsm_tb__DOT__dut__DOT__zero))
                                          : (IData)(vlSelfRef.fsm_tb__DOT__dut__DOT__neg))))
                            : ((1U & (~ (vlSelfRef.fsm_tb__DOT__dut__DOT__IR_out 
                                         >> 0x0000000dU))) 
                               && (1U & ((0x00001000U 
                                          & vlSelfRef.fsm_tb__DOT__dut__DOT__IR_out)
                                          ? (~ (IData)(vlSelfRef.fsm_tb__DOT__dut__DOT__zero))
                                          : (IData)(vlSelfRef.fsm_tb__DOT__dut__DOT__zero)))));
                }
            }
        }
    } else {
        if ((2U & (IData)(vlSelfRef.fsm_tb__DOT__dut__DOT__current_state))) {
            if ((1U & (IData)(vlSelfRef.fsm_tb__DOT__dut__DOT__current_state))) {
                vlSelfRef.fsm_tb__DOT__dut__DOT__next_state = 4U;
                if ((2U == (IData)(vlSelfRef.fsm_tb__DOT__dut__DOT__cu__DOT__instruction_type))) {
                    if ((0x00000020U & vlSelfRef.fsm_tb__DOT__dut__DOT__IR_out)) {
                        vlSelfRef.fsm_tb__DOT__dut__DOT__instr_done = 1U;
                    }
                }
            } else {
                vlSelfRef.fsm_tb__DOT__dut__DOT__next_state = 3U;
            }
        } else if ((1U & (IData)(vlSelfRef.fsm_tb__DOT__dut__DOT__current_state))) {
            vlSelfRef.fsm_tb__DOT__dut__DOT__next_state = 2U;
            if ((0U == vlSelfRef.fsm_tb__DOT__dut__DOT__IR_out)) {
                vlSelfRef.fsm_tb__DOT__dut__DOT__next_state = 5U;
                vlSelfRef.fsm_tb__DOT__dut__DOT__instr_done = 1U;
            }
        } else {
            vlSelfRef.fsm_tb__DOT__dut__DOT__next_state = 1U;
            vlSelfRef.fsm_tb__DOT__dut__DOT__instr_done = 0U;
        }
        if ((1U & (~ ((IData)(vlSelfRef.fsm_tb__DOT__dut__DOT__current_state) 
                      >> 1U)))) {
            if ((1U & (IData)(vlSelfRef.fsm_tb__DOT__dut__DOT__current_state))) {
                vlSelfRef.fsm_tb__DOT__dut__DOT__PC_write = 1U;
            }
        }
    }
    vlSelfRef.fsm_tb__DOT__dut__DOT__FSM_alu_op = 0U;
    vlSelfRef.fsm_tb__DOT__dut__DOT__ALU_a_en = 1U;
    vlSelfRef.fsm_tb__DOT__dut__DOT__FSM_alu_b_en = 0U;
    vlSelfRef.fsm_tb__DOT__dut__DOT__AddrSel = 1U;
    if ((1U & (~ ((IData)(vlSelfRef.fsm_tb__DOT__dut__DOT__current_state) 
                  >> 2U)))) {
        if ((2U & (IData)(vlSelfRef.fsm_tb__DOT__dut__DOT__current_state))) {
            if ((1U & (IData)(vlSelfRef.fsm_tb__DOT__dut__DOT__current_state))) {
                if (((0U == (IData)(vlSelfRef.fsm_tb__DOT__dut__DOT__cu__DOT__instruction_type)) 
                     | (1U == (IData)(vlSelfRef.fsm_tb__DOT__dut__DOT__cu__DOT__instruction_type)))) {
                    vlSelfRef.fsm_tb__DOT__dut__DOT__ALU_out_load = 1U;
                    vlSelfRef.fsm_tb__DOT__dut__DOT__flag_write = 1U;
                }
                if ((2U == (IData)(vlSelfRef.fsm_tb__DOT__dut__DOT__cu__DOT__instruction_type))) {
                    vlSelfRef.fsm_tb__DOT__dut__DOT__MDR_load = 1U;
                    vlSelfRef.fsm_tb__DOT__dut__DOT__AddrSel = 0U;
                }
                if ((3U == (IData)(vlSelfRef.fsm_tb__DOT__dut__DOT__cu__DOT__instruction_type))) {
                    vlSelfRef.fsm_tb__DOT__dut__DOT__flag_write = 1U;
                    vlSelfRef.fsm_tb__DOT__dut__DOT__FSM_alu_op = 0U;
                    vlSelfRef.fsm_tb__DOT__dut__DOT__ALU_a_en = 0U;
                    vlSelfRef.fsm_tb__DOT__dut__DOT__FSM_alu_b_en = 3U;
                }
            }
        } else if ((1U & (~ (IData)(vlSelfRef.fsm_tb__DOT__dut__DOT__current_state)))) {
            vlSelfRef.fsm_tb__DOT__dut__DOT__FSM_alu_op = 0U;
            vlSelfRef.fsm_tb__DOT__dut__DOT__ALU_a_en = 0U;
            vlSelfRef.fsm_tb__DOT__dut__DOT__FSM_alu_b_en = 1U;
            vlSelfRef.fsm_tb__DOT__dut__DOT__AddrSel = 1U;
        }
    }
    __VdfgRegularize_hebeb780c_0_0 = ((0U == (IData)(vlSelfRef.fsm_tb__DOT__dut__DOT__current_state)) 
                                      | ((3U == (IData)(vlSelfRef.fsm_tb__DOT__dut__DOT__cu__DOT__instruction_type)) 
                                         & (3U == (IData)(vlSelfRef.fsm_tb__DOT__dut__DOT__current_state))));
    vlSelfRef.fsm_tb__DOT__dut__DOT__ALU_a = ((IData)(vlSelfRef.fsm_tb__DOT__dut__DOT__ALU_a_en)
                                               ? vlSelfRef.fsm_tb__DOT__dut__DOT__a_load
                                               : vlSelfRef.fsm_tb__DOT__dut__DOT__pc__DOT__address);
    vlSelfRef.fsm_tb__DOT__dut__DOT__AddrSelOUT = ((IData)(vlSelfRef.fsm_tb__DOT__dut__DOT__AddrSel)
                                                    ? vlSelfRef.fsm_tb__DOT__dut__DOT__pc__DOT__address
                                                    : vlSelfRef.fsm_tb__DOT__dut__DOT__ALU_output_load);
    if (__VdfgRegularize_hebeb780c_0_0) {
        vlSelfRef.fsm_tb__DOT__dut__DOT__ALU_op = vlSelfRef.fsm_tb__DOT__dut__DOT__FSM_alu_op;
        vlSelfRef.fsm_tb__DOT__dut__DOT__ALU_b_en = vlSelfRef.fsm_tb__DOT__dut__DOT__FSM_alu_b_en;
    } else {
        vlSelfRef.fsm_tb__DOT__dut__DOT__ALU_op = vlSelfRef.fsm_tb__DOT__dut__DOT__cu__DOT__alu_op_code;
        vlSelfRef.fsm_tb__DOT__dut__DOT__ALU_b_en = vlSelfRef.fsm_tb__DOT__dut__DOT__cu__DOT__alu_b_en;
    }
    vlSelfRef.fsm_tb__DOT__dut__DOT__ALU_b = ((4U & (IData)(vlSelfRef.fsm_tb__DOT__dut__DOT__ALU_b_en))
                                               ? vlSelfRef.fsm_tb__DOT__dut__DOT__b_load
                                               : ((2U 
                                                   & (IData)(vlSelfRef.fsm_tb__DOT__dut__DOT__ALU_b_en))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlSelfRef.fsm_tb__DOT__dut__DOT__ALU_b_en))
                                                    ? 
                                                   ((((- (IData)(
                                                                 (vlSelfRef.fsm_tb__DOT__dut__DOT__IR_out 
                                                                  >> 0x0000001fU))) 
                                                      << 0x0000000dU) 
                                                     | ((((2U 
                                                           & (vlSelfRef.fsm_tb__DOT__dut__DOT__IR_out 
                                                              >> 0x0000001eU)) 
                                                          | (1U 
                                                             & (vlSelfRef.fsm_tb__DOT__dut__DOT__IR_out 
                                                                >> 7U))) 
                                                         << 0x0000000bU) 
                                                        | ((0x000007e0U 
                                                            & (vlSelfRef.fsm_tb__DOT__dut__DOT__IR_out 
                                                               >> 0x00000014U)) 
                                                           | (0x0000001eU 
                                                              & (vlSelfRef.fsm_tb__DOT__dut__DOT__IR_out 
                                                                 >> 7U))))) 
                                                    - (IData)(4U))
                                                    : 
                                                   (((- (IData)(
                                                                (1U 
                                                                 & ((IData)(vlSelfRef.fsm_tb__DOT__dut__DOT__cu__DOT__immediate_12) 
                                                                    >> 0x0000000bU)))) 
                                                     << 0x0000000cU) 
                                                    | (IData)(vlSelfRef.fsm_tb__DOT__dut__DOT__cu__DOT__immediate_12)))
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlSelfRef.fsm_tb__DOT__dut__DOT__ALU_b_en))
                                                    ? 4U
                                                    : vlSelfRef.fsm_tb__DOT__dut__DOT__b_load)));
}

void Vfsm_tb___024root___timing_ready(Vfsm_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfsm_tb___024root___timing_ready\n"); );
    Vfsm_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VactTriggered[0U])) {
        vlSelfRef.__VtrigSched_h128ed905__0.ready("@(posedge fsm_tb.global_clock)");
    }
    if ((4ULL & vlSelfRef.__VactTriggered[0U])) {
        vlSelfRef.__VtrigSched_h128ec9c4__0.ready("@(negedge fsm_tb.global_clock)");
    }
    if ((8ULL & vlSelfRef.__VactTriggered[0U])) {
        vlSelfRef.__VtrigSched_hc4faf76f__0.ready("@(posedge fsm_tb.dut.instr_done)");
    }
    if ((0x0000000000000010ULL & vlSelfRef.__VactTriggered[0U])) {
        vlSelfRef.__VtrigSched_h5255dc51__0.ready("@( (3'h5 == fsm_tb.dut.current_state))");
    }
}

void Vfsm_tb___024root___timing_resume(Vfsm_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfsm_tb___024root___timing_resume\n"); );
    Vfsm_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VtrigSched_h128ed905__0.moveToResumeQueue(
                                                          "@(posedge fsm_tb.global_clock)");
    vlSelfRef.__VtrigSched_h128ec9c4__0.moveToResumeQueue(
                                                          "@(negedge fsm_tb.global_clock)");
    vlSelfRef.__VtrigSched_hc4faf76f__0.moveToResumeQueue(
                                                          "@(posedge fsm_tb.dut.instr_done)");
    vlSelfRef.__VtrigSched_h5255dc51__0.moveToResumeQueue(
                                                          "@( (3'h5 == fsm_tb.dut.current_state))");
    vlSelfRef.__VtrigSched_h128ed905__0.resume("@(posedge fsm_tb.global_clock)");
    vlSelfRef.__VtrigSched_h128ec9c4__0.resume("@(negedge fsm_tb.global_clock)");
    vlSelfRef.__VtrigSched_hc4faf76f__0.resume("@(posedge fsm_tb.dut.instr_done)");
    vlSelfRef.__VtrigSched_h5255dc51__0.resume("@( (3'h5 == fsm_tb.dut.current_state))");
    if ((0x0000000000000020ULL & vlSelfRef.__VactTriggered[0U])) {
        vlSelfRef.__VdlySched.resume();
    }
}

void Vfsm_tb___024root___trigger_orInto__act_vec_vec(VlUnpacked<QData/*63:0*/, 1> &out, const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfsm_tb___024root___trigger_orInto__act_vec_vec\n"); );
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
VL_ATTR_COLD void Vfsm_tb___024root___dump_triggers__act(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG

bool Vfsm_tb___024root___eval_phase__act(Vfsm_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfsm_tb___024root___eval_phase__act\n"); );
    Vfsm_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VactExecute;
    // Body
    {
        // Inlined CFunc: _eval_triggers_vec__act
        CData/*0:0*/ __Vinline_0__eval_triggers_vec__act___Vtrigprevexpr_hd6618f3c__0;
        __Vinline_0__eval_triggers_vec__act___Vtrigprevexpr_hd6618f3c__0 = 0;
        __Vinline_0__eval_triggers_vec__act___Vtrigprevexpr_hd6618f3c__0 
            = (5U == (IData)(vlSelfRef.fsm_tb__DOT__dut__DOT__current_state));
        vlSelfRef.__VactTriggered[0U] = (QData)((IData)(
                                                        (((vlSelfRef.__VdlySched.awaitingCurrentTime() 
                                                           << 5U) 
                                                          | ((__Vinline_0__eval_triggers_vec__act___Vtrigprevexpr_hd6618f3c__0 
                                                              != (IData)(vlSelfRef.__Vtrigprevexpr_hd6618f3c__1)) 
                                                             << 4U)) 
                                                         | (((((IData)(vlSelfRef.fsm_tb__DOT__dut__DOT__instr_done) 
                                                               & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__fsm_tb__DOT__dut__DOT__instr_done__0))) 
                                                              << 3U) 
                                                             | (((~ (IData)(vlSelfRef.fsm_tb__DOT__global_clock)) 
                                                                 & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__fsm_tb__DOT__global_clock__0)) 
                                                                << 2U)) 
                                                            | ((((IData)(vlSelfRef.fsm_tb__DOT__global_interrupt) 
                                                                 & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__fsm_tb__DOT__global_interrupt__0))) 
                                                                << 1U) 
                                                               | ((IData)(vlSelfRef.fsm_tb__DOT__global_clock) 
                                                                  & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__fsm_tb__DOT__global_clock__0))))))));
        vlSelfRef.__Vtrigprevexpr___TOP__fsm_tb__DOT__global_clock__0 
            = vlSelfRef.fsm_tb__DOT__global_clock;
        vlSelfRef.__Vtrigprevexpr___TOP__fsm_tb__DOT__global_interrupt__0 
            = vlSelfRef.fsm_tb__DOT__global_interrupt;
        vlSelfRef.__Vtrigprevexpr___TOP__fsm_tb__DOT__dut__DOT__instr_done__0 
            = vlSelfRef.fsm_tb__DOT__dut__DOT__instr_done;
        vlSelfRef.__Vtrigprevexpr_hd6618f3c__1 = __Vinline_0__eval_triggers_vec__act___Vtrigprevexpr_hd6618f3c__0;
    }
    Vfsm_tb___024root___timing_ready(vlSelf);
    Vfsm_tb___024root___trigger_orInto__act_vec_vec(vlSelfRef.__VactTriggered, vlSelfRef.__VactTriggeredAcc);
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vfsm_tb___024root___dump_triggers__act(vlSelfRef.__VactTriggered, "act"s);
    }
#endif
    Vfsm_tb___024root___trigger_orInto__act_vec_vec(vlSelfRef.__VnbaTriggered, vlSelfRef.__VactTriggered);
    __VactExecute = Vfsm_tb___024root___trigger_anySet__act(vlSelfRef.__VactTriggered);
    if (__VactExecute) {
        vlSelfRef.__VactTriggeredAcc.fill(0ULL);
        Vfsm_tb___024root___timing_resume(vlSelf);
        {
            // Inlined CFunc: _eval_act
            if ((0x000000000000001dULL & vlSelfRef.__VactTriggered[0U])) {
                {
                    // Inlined CFunc: _act_comb__TOP__0
                    vlSelfRef.fsm_tb__DOT__dut__DOT__data_out_mem 
                        = (vlSelfRef.fsm_tb__DOT__dut__DOT__memory__DOT__memory
                           [(0x00000fffU & (vlSelfRef.fsm_tb__DOT__dut__DOT__AddrSelOUT 
                                            >> 2U))] 
                           & (- (IData)(((IData)(vlSelfRef.fsm_tb__DOT__dut__DOT__cu__DOT__mem_read) 
                                         | (0U == (IData)(vlSelfRef.fsm_tb__DOT__dut__DOT__current_state))))));
                }
            }
        }
    }
    return (__VactExecute);
}

bool Vfsm_tb___024root___eval_phase__inact(Vfsm_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfsm_tb___024root___eval_phase__inact\n"); );
    Vfsm_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VinactExecute;
    // Body
    __VinactExecute = vlSelfRef.__VdlySched.awaitingZeroDelay();
    if (__VinactExecute) {
        VL_FATAL_MT("testbenches/fsm_tb.sv", 5, "", "ZERODLY: Design Verilated with '--no-sched-zero-delay', but #0 delay executed at runtime");
    }
    return (__VinactExecute);
}

void Vfsm_tb___024root___trigger_clear__act(VlUnpacked<QData/*63:0*/, 1> &out) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfsm_tb___024root___trigger_clear__act\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        out[n] = 0ULL;
        n = ((IData)(1U) + n);
    } while ((1U > n));
}

bool Vfsm_tb___024root___eval_phase__nba(Vfsm_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfsm_tb___024root___eval_phase__nba\n"); );
    Vfsm_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = Vfsm_tb___024root___trigger_anySet__act(vlSelfRef.__VnbaTriggered);
    if (__VnbaExecute) {
        {
            // Inlined CFunc: _eval_nba
            if ((1ULL & vlSelfRef.__VnbaTriggered[0U])) {
                Vfsm_tb___024root___nba_sequent__TOP__0(vlSelf);
                vlSelfRef.__Vm_traceActivity[2U] = 1U;
            }
            if ((3ULL & vlSelfRef.__VnbaTriggered[0U])) {
                {
                    // Inlined CFunc: _nba_sequent__TOP__1
                    vlSelfRef.fsm_tb__DOT__dut__DOT__current_state 
                        = ((IData)(vlSelfRef.fsm_tb__DOT__global_interrupt)
                            ? 5U : ((IData)(vlSelfRef.fsm_tb__DOT__reset)
                                     ? 0U : (IData)(vlSelfRef.fsm_tb__DOT__dut__DOT__next_state)));
                    vlSelfRef.fsm_tb__DOT__dut__DOT__AB_load = 0U;
                    vlSelfRef.fsm_tb__DOT__dut__DOT__IR_load = 0U;
                    if ((1U & (~ ((IData)(vlSelfRef.fsm_tb__DOT__dut__DOT__current_state) 
                                  >> 2U)))) {
                        if ((1U & (~ ((IData)(vlSelfRef.fsm_tb__DOT__dut__DOT__current_state) 
                                      >> 1U)))) {
                            if ((1U & (IData)(vlSelfRef.fsm_tb__DOT__dut__DOT__current_state))) {
                                vlSelfRef.fsm_tb__DOT__dut__DOT__AB_load = 1U;
                            }
                            if ((1U & (~ (IData)(vlSelfRef.fsm_tb__DOT__dut__DOT__current_state)))) {
                                vlSelfRef.fsm_tb__DOT__dut__DOT__IR_load = 1U;
                            }
                        }
                    }
                }
                vlSelfRef.__Vm_traceActivity[3U] = 1U;
            }
            if ((3ULL & vlSelfRef.__VnbaTriggered[0U])) {
                Vfsm_tb___024root___nba_comb__TOP__0(vlSelf);
                vlSelfRef.__Vm_traceActivity[4U] = 1U;
            }
            if ((0x000000000000001fULL & vlSelfRef.__VnbaTriggered[0U])) {
                {
                    // Inlined CFunc: _act_comb__TOP__0
                    vlSelfRef.fsm_tb__DOT__dut__DOT__data_out_mem 
                        = (vlSelfRef.fsm_tb__DOT__dut__DOT__memory__DOT__memory
                           [(0x00000fffU & (vlSelfRef.fsm_tb__DOT__dut__DOT__AddrSelOUT 
                                            >> 2U))] 
                           & (- (IData)(((IData)(vlSelfRef.fsm_tb__DOT__dut__DOT__cu__DOT__mem_read) 
                                         | (0U == (IData)(vlSelfRef.fsm_tb__DOT__dut__DOT__current_state))))));
                }
            }
        }
        Vfsm_tb___024root___trigger_clear__act(vlSelfRef.__VnbaTriggered);
    }
    return (__VnbaExecute);
}

void Vfsm_tb___024root___eval(Vfsm_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfsm_tb___024root___eval\n"); );
    Vfsm_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __VnbaIterCount;
    // Body
    __VnbaIterCount = 0U;
    do {
        if (VL_UNLIKELY(((0x00002710U < __VnbaIterCount)))) {
#ifdef VL_DEBUG
            Vfsm_tb___024root___dump_triggers__act(vlSelfRef.__VnbaTriggered, "nba"s);
#endif
            VL_FATAL_MT("testbenches/fsm_tb.sv", 5, "", "DIDNOTCONVERGE: NBA region did not converge after '--converge-limit' of 10000 tries");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        vlSelfRef.__VinactIterCount = 0U;
        do {
            if (VL_UNLIKELY(((0x00002710U < vlSelfRef.__VinactIterCount)))) {
                VL_FATAL_MT("testbenches/fsm_tb.sv", 5, "", "DIDNOTCONVERGE: Inactive region did not converge after '--converge-limit' of 10000 tries");
            }
            vlSelfRef.__VinactIterCount = ((IData)(1U) 
                                           + vlSelfRef.__VinactIterCount);
            vlSelfRef.__VactIterCount = 0U;
            do {
                if (VL_UNLIKELY(((0x00002710U < vlSelfRef.__VactIterCount)))) {
#ifdef VL_DEBUG
                    Vfsm_tb___024root___dump_triggers__act(vlSelfRef.__VactTriggered, "act"s);
#endif
                    VL_FATAL_MT("testbenches/fsm_tb.sv", 5, "", "DIDNOTCONVERGE: Active region did not converge after '--converge-limit' of 10000 tries");
                }
                vlSelfRef.__VactIterCount = ((IData)(1U) 
                                             + vlSelfRef.__VactIterCount);
                vlSelfRef.__VactPhaseResult = Vfsm_tb___024root___eval_phase__act(vlSelf);
            } while (vlSelfRef.__VactPhaseResult);
            vlSelfRef.__VinactPhaseResult = Vfsm_tb___024root___eval_phase__inact(vlSelf);
        } while (vlSelfRef.__VinactPhaseResult);
        vlSelfRef.__VnbaPhaseResult = Vfsm_tb___024root___eval_phase__nba(vlSelf);
    } while (vlSelfRef.__VnbaPhaseResult);
}

void Vfsm_tb___024root____VbeforeTrig_h128ed905__0(Vfsm_tb___024root* vlSelf, const char* __VeventDescription) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfsm_tb___024root____VbeforeTrig_h128ed905__0\n"); );
    Vfsm_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    VlUnpacked<QData/*63:0*/, 1> __VTmp;
    // Body
    __VTmp[0U] = (QData)((IData)(((((~ (IData)(vlSelfRef.fsm_tb__DOT__global_clock)) 
                                    & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__fsm_tb__DOT__global_clock__0)) 
                                   << 2U) | ((IData)(vlSelfRef.fsm_tb__DOT__global_clock) 
                                             & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__fsm_tb__DOT__global_clock__0))))));
    vlSelfRef.__Vtrigprevexpr___TOP__fsm_tb__DOT__global_clock__0 
        = vlSelfRef.fsm_tb__DOT__global_clock;
    if ((1ULL & __VTmp[0U])) {
        vlSelfRef.__VtrigSched_h128ed905__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h128ed905__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h128ed905__0.ready(__VeventDescription);
    }
    if ((4ULL & __VTmp[0U])) {
        vlSelfRef.__VtrigSched_h128ec9c4__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h128ec9c4__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h128ec9c4__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h128ec9c4__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h128ec9c4__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h128ec9c4__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h128ec9c4__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h128ec9c4__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h128ec9c4__0.ready(__VeventDescription);
    }
    vlSelfRef.__VactTriggeredAcc[0U] = (vlSelfRef.__VactTriggeredAcc[0U] 
                                        | __VTmp[0U]);
}

void Vfsm_tb___024root____VbeforeTrig_h128ec9c4__0(Vfsm_tb___024root* vlSelf, const char* __VeventDescription) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfsm_tb___024root____VbeforeTrig_h128ec9c4__0\n"); );
    Vfsm_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    VlUnpacked<QData/*63:0*/, 1> __VTmp;
    // Body
    __VTmp[0U] = (QData)((IData)(((((~ (IData)(vlSelfRef.fsm_tb__DOT__global_clock)) 
                                    & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__fsm_tb__DOT__global_clock__0)) 
                                   << 2U) | ((IData)(vlSelfRef.fsm_tb__DOT__global_clock) 
                                             & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__fsm_tb__DOT__global_clock__0))))));
    vlSelfRef.__Vtrigprevexpr___TOP__fsm_tb__DOT__global_clock__0 
        = vlSelfRef.fsm_tb__DOT__global_clock;
    if ((1ULL & __VTmp[0U])) {
        vlSelfRef.__VtrigSched_h128ed905__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h128ed905__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h128ed905__0.ready(__VeventDescription);
    }
    if ((4ULL & __VTmp[0U])) {
        vlSelfRef.__VtrigSched_h128ec9c4__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h128ec9c4__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h128ec9c4__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h128ec9c4__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h128ec9c4__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h128ec9c4__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h128ec9c4__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h128ec9c4__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h128ec9c4__0.ready(__VeventDescription);
    }
    vlSelfRef.__VactTriggeredAcc[0U] = (vlSelfRef.__VactTriggeredAcc[0U] 
                                        | __VTmp[0U]);
}

void Vfsm_tb___024root____VbeforeTrig_hc4faf76f__0(Vfsm_tb___024root* vlSelf, const char* __VeventDescription) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfsm_tb___024root____VbeforeTrig_hc4faf76f__0\n"); );
    Vfsm_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    VlUnpacked<QData/*63:0*/, 1> __VTmp;
    // Body
    __VTmp[0U] = (QData)((IData)((((IData)(vlSelfRef.fsm_tb__DOT__dut__DOT__instr_done) 
                                   & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__fsm_tb__DOT__dut__DOT__instr_done__0))) 
                                  << 3U)));
    vlSelfRef.__Vtrigprevexpr___TOP__fsm_tb__DOT__dut__DOT__instr_done__0 
        = vlSelfRef.fsm_tb__DOT__dut__DOT__instr_done;
    if ((8ULL & __VTmp[0U])) {
        vlSelfRef.__VtrigSched_hc4faf76f__0.ready(__VeventDescription);
    }
    vlSelfRef.__VactTriggeredAcc[0U] = (vlSelfRef.__VactTriggeredAcc[0U] 
                                        | __VTmp[0U]);
}

void Vfsm_tb___024root____VbeforeTrig_h5255dc51__0(Vfsm_tb___024root* vlSelf, const char* __VeventDescription) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfsm_tb___024root____VbeforeTrig_h5255dc51__0\n"); );
    Vfsm_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    VlUnpacked<QData/*63:0*/, 1> __VTmp;
    CData/*0:0*/ __Vtrigprevexpr_hd6618f3c__0;
    __Vtrigprevexpr_hd6618f3c__0 = 0;
    // Body
    __Vtrigprevexpr_hd6618f3c__0 = (5U == (IData)(vlSelfRef.fsm_tb__DOT__dut__DOT__current_state));
    __VTmp[0U] = (QData)((IData)((((IData)(__Vtrigprevexpr_hd6618f3c__0) 
                                   != (IData)(vlSelfRef.__Vtrigprevexpr_hd6618f3c__1)) 
                                  << 4U)));
    vlSelfRef.__Vtrigprevexpr_hd6618f3c__1 = __Vtrigprevexpr_hd6618f3c__0;
    if ((0x0000000000000010ULL & __VTmp[0U])) {
        vlSelfRef.__VtrigSched_h5255dc51__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h5255dc51__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h5255dc51__0.ready(__VeventDescription);
    }
    vlSelfRef.__VactTriggeredAcc[0U] = (vlSelfRef.__VactTriggeredAcc[0U] 
                                        | __VTmp[0U]);
}

#ifdef VL_DEBUG
void Vfsm_tb___024root___eval_debug_assertions(Vfsm_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfsm_tb___024root___eval_debug_assertions\n"); );
    Vfsm_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}
#endif  // VL_DEBUG
