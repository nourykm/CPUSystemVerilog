// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vhardware_memory_tb.h for the primary calling header

#include "Vhardware_memory_tb__pch.h"

void Vhardware_memory_tb___024root___timing_ready(Vhardware_memory_tb___024root* vlSelf);

VL_ATTR_COLD void Vhardware_memory_tb___024root___eval_static(Vhardware_memory_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vhardware_memory_tb___024root___eval_static\n"); );
    Vhardware_memory_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    {
        // Inlined CFunc: _eval_static__TOP
        vlSelfRef.hardware_memory_tb__DOT__global_clock = 0U;
        vlSelfRef.hardware_memory_tb__DOT__errors = 0U;
    }
    vlSelfRef.__Vtrigprevexpr___TOP__hardware_memory_tb__DOT__global_clock__0 = 0U;
    Vhardware_memory_tb___024root___timing_ready(vlSelf);
    do {
        vlSelfRef.__VactTriggeredAcc[vlSelfRef.__Vi] 
            = vlSelfRef.__VactTriggered[vlSelfRef.__Vi];
        vlSelfRef.__Vi = ((IData)(1U) + vlSelfRef.__Vi);
    } while ((0U >= vlSelfRef.__Vi));
}

VL_ATTR_COLD void Vhardware_memory_tb___024root___eval_final(Vhardware_memory_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vhardware_memory_tb___024root___eval_final\n"); );
    Vhardware_memory_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vhardware_memory_tb___024root___dump_triggers__stl(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vhardware_memory_tb___024root___eval_phase__stl(Vhardware_memory_tb___024root* vlSelf);

VL_ATTR_COLD void Vhardware_memory_tb___024root___eval_settle(Vhardware_memory_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vhardware_memory_tb___024root___eval_settle\n"); );
    Vhardware_memory_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __VstlIterCount;
    // Body
    __VstlIterCount = 0U;
    vlSelfRef.__VstlFirstIteration = 1U;
    do {
        if (VL_UNLIKELY(((0x00002710U < __VstlIterCount)))) {
#ifdef VL_DEBUG
            Vhardware_memory_tb___024root___dump_triggers__stl(vlSelfRef.__VstlTriggered, "stl"s);
#endif
            VL_FATAL_MT("testbenches/memory_tb.sv", 5, "", "DIDNOTCONVERGE: Settle region did not converge after '--converge-limit' of 10000 tries");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        vlSelfRef.__VstlPhaseResult = Vhardware_memory_tb___024root___eval_phase__stl(vlSelf);
        vlSelfRef.__VstlFirstIteration = 0U;
    } while (vlSelfRef.__VstlPhaseResult);
}

VL_ATTR_COLD bool Vhardware_memory_tb___024root___trigger_anySet__stl(const VlUnpacked<QData/*63:0*/, 1> &in);

#ifdef VL_DEBUG
VL_ATTR_COLD void Vhardware_memory_tb___024root___dump_triggers__stl(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vhardware_memory_tb___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ (IData)(Vhardware_memory_tb___024root___trigger_anySet__stl(triggers))))) {
        VL_DBG_MSGS("         No '" + tag + "' region triggers active\n");
    }
    if ((1U & (IData)(triggers[0U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD bool Vhardware_memory_tb___024root___trigger_anySet__stl(const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vhardware_memory_tb___024root___trigger_anySet__stl\n"); );
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

VL_ATTR_COLD bool Vhardware_memory_tb___024root___eval_phase__stl(Vhardware_memory_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vhardware_memory_tb___024root___eval_phase__stl\n"); );
    Vhardware_memory_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VstlExecute;
    // Body
    {
        // Inlined CFunc: _eval_triggers_vec__stl
        vlSelfRef.__VstlTriggered[0U] = ((0xfffffffffffffffeULL 
                                          & vlSelfRef.__VstlTriggered[0U]) 
                                         | (IData)((IData)(vlSelfRef.__VstlFirstIteration)));
    }
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vhardware_memory_tb___024root___dump_triggers__stl(vlSelfRef.__VstlTriggered, "stl"s);
    }
#endif
    __VstlExecute = Vhardware_memory_tb___024root___trigger_anySet__stl(vlSelfRef.__VstlTriggered);
    if (__VstlExecute) {
        {
            // Inlined CFunc: _eval_stl
            if ((1ULL & vlSelfRef.__VstlTriggered[0U])) {
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
    return (__VstlExecute);
}

bool Vhardware_memory_tb___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 1> &in);

#ifdef VL_DEBUG
VL_ATTR_COLD void Vhardware_memory_tb___024root___dump_triggers__act(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vhardware_memory_tb___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(Vhardware_memory_tb___024root___trigger_anySet__act(triggers))))) {
        VL_DBG_MSGS("         No '" + tag + "' region triggers active\n");
    }
    if ((1U & (IData)(triggers[0U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: @(posedge hardware_memory_tb.global_clock)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 1U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 1 is active: @(negedge hardware_memory_tb.global_clock)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 2U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 2 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vhardware_memory_tb___024root___ctor_var_reset(Vhardware_memory_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vhardware_memory_tb___024root___ctor_var_reset\n"); );
    Vhardware_memory_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->vlNamep);
    vlSelf->hardware_memory_tb__DOT__mem_read = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17968243578456906546ull);
    vlSelf->hardware_memory_tb__DOT__mem_write = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5786307920124159961ull);
    vlSelf->hardware_memory_tb__DOT__address = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 2716874508642064353ull);
    vlSelf->hardware_memory_tb__DOT__data_in = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 13629826005868959781ull);
    vlSelf->hardware_memory_tb__DOT__do_write__Vstatic__addr = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 1489036299582238095ull);
    vlSelf->hardware_memory_tb__DOT__do_write__Vstatic__value = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 9506474299733688434ull);
    vlSelf->hardware_memory_tb__DOT__do_write__Vstatic__enable = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2965666075038585862ull);
    vlSelf->hardware_memory_tb__DOT__do_read__Vstatic__addr = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 1413620065915463267ull);
    vlSelf->hardware_memory_tb__DOT__dut__DOT__data_out = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 1279072330496630494ull);
    for (int __Vi0 = 0; __Vi0 < 1024; ++__Vi0) {
        vlSelf->hardware_memory_tb__DOT__dut__DOT__memory[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 12038496382651240127ull);
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VstlTriggered[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VactTriggered[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VactTriggeredAcc[__Vi0] = 0;
    }
    vlSelf->__Vtrigprevexpr___TOP__hardware_memory_tb__DOT__global_clock__0 = 0;
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VnbaTriggered[__Vi0] = 0;
    }
    vlSelf->__Vi = 0;
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
