// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Varchitecture_components.h for the primary calling header

#include "Varchitecture_components__pch.h"

void Varchitecture_components___024root___timing_ready(Varchitecture_components___024root* vlSelf);

VL_ATTR_COLD void Varchitecture_components___024root___eval_static(Varchitecture_components___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Varchitecture_components___024root___eval_static\n"); );
    Varchitecture_components__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    {
        // Inlined CFunc: _eval_static__TOP
        vlSelfRef.hardware_memory_tb__DOT__global_clock = 0U;
        vlSelfRef.hardware_memory_tb__DOT__errors = 0U;
    }
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
    vlSelfRef.__Vtrigprevexpr___TOP__hardware_memory_tb__DOT__global_clock__0 = 0U;
    vlSelfRef.__Vtrigprevexpr___TOP__alu__02Eglobal_clock__1 
        = vlSelfRef.alu__02Eglobal_clock;
    vlSelfRef.__Vtrigprevexpr___TOP__program_counter__02Eglobal_clock__1 
        = vlSelfRef.program_counter__02Eglobal_clock;
    vlSelfRef.__Vtrigprevexpr___TOP__register_file__02Eglobal_clock__1 
        = vlSelfRef.register_file__02Eglobal_clock;
    Varchitecture_components___024root___timing_ready(vlSelf);
    do {
        vlSelfRef.__VactTriggeredAcc[vlSelfRef.__Vi] 
            = vlSelfRef.__VactTriggered[vlSelfRef.__Vi];
        vlSelfRef.__Vi = ((IData)(1U) + vlSelfRef.__Vi);
    } while ((0U >= vlSelfRef.__Vi));
}

VL_ATTR_COLD void Varchitecture_components___024root___eval_final(Varchitecture_components___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Varchitecture_components___024root___eval_final\n"); );
    Varchitecture_components__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Varchitecture_components___024root___dump_triggers__stl(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Varchitecture_components___024root___eval_phase__stl(Varchitecture_components___024root* vlSelf);

VL_ATTR_COLD void Varchitecture_components___024root___eval_settle(Varchitecture_components___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Varchitecture_components___024root___eval_settle\n"); );
    Varchitecture_components__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __VstlIterCount;
    // Body
    __VstlIterCount = 0U;
    vlSelfRef.__VstlFirstIteration = 1U;
    do {
        if (VL_UNLIKELY(((0x00002710U < __VstlIterCount)))) {
#ifdef VL_DEBUG
            Varchitecture_components___024root___dump_triggers__stl(vlSelfRef.__VstlTriggered, "stl"s);
#endif
            VL_FATAL_MT("architecture_components.sv", 40, "", "DIDNOTCONVERGE: Settle region did not converge after '--converge-limit' of 10000 tries");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        vlSelfRef.__VstlPhaseResult = Varchitecture_components___024root___eval_phase__stl(vlSelf);
        vlSelfRef.__VstlFirstIteration = 0U;
    } while (vlSelfRef.__VstlPhaseResult);
}

VL_ATTR_COLD bool Varchitecture_components___024root___trigger_anySet__stl(const VlUnpacked<QData/*63:0*/, 1> &in);

#ifdef VL_DEBUG
VL_ATTR_COLD void Varchitecture_components___024root___dump_triggers__stl(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Varchitecture_components___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ (IData)(Varchitecture_components___024root___trigger_anySet__stl(triggers))))) {
        VL_DBG_MSGS("         No '" + tag + "' region triggers active\n");
    }
    if ((1U & (IData)(triggers[0U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD bool Varchitecture_components___024root___trigger_anySet__stl(const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Varchitecture_components___024root___trigger_anySet__stl\n"); );
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

VL_ATTR_COLD bool Varchitecture_components___024root___eval_phase__stl(Varchitecture_components___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Varchitecture_components___024root___eval_phase__stl\n"); );
    Varchitecture_components__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
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
        Varchitecture_components___024root___dump_triggers__stl(vlSelfRef.__VstlTriggered, "stl"s);
    }
#endif
    __VstlExecute = Varchitecture_components___024root___trigger_anySet__stl(vlSelfRef.__VstlTriggered);
    if (__VstlExecute) {
        {
            // Inlined CFunc: _eval_stl
            if ((1ULL & vlSelfRef.__VstlTriggered[0U])) {
                {
                    // Inlined CFunc: _stl_sequent__TOP__0
                    vlSelfRef.ALU_out = vlSelfRef.alu__DOT__out;
                    vlSelfRef.PC_address = vlSelfRef.program_counter__DOT__address;
                    vlSelfRef.data_A = (vlSelfRef.register_file__DOT__registers
                                        [vlSelfRef.reg_A] 
                                        & (- (IData)(
                                                     (0U 
                                                      != (IData)(vlSelfRef.reg_A)))));
                    vlSelfRef.data_B = (vlSelfRef.register_file__DOT__registers
                                        [vlSelfRef.reg_B] 
                                        & (- (IData)(
                                                     (0U 
                                                      != (IData)(vlSelfRef.reg_B)))));
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

bool Varchitecture_components___024root___trigger_anySet__ico(const VlUnpacked<QData/*63:0*/, 2> &in);

#ifdef VL_DEBUG
VL_ATTR_COLD void Varchitecture_components___024root___dump_triggers__ico(const VlUnpacked<QData/*63:0*/, 2> &triggers, const std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Varchitecture_components___024root___dump_triggers__ico\n"); );
    // Body
    if ((1U & (~ (IData)(Varchitecture_components___024root___trigger_anySet__ico(triggers))))) {
        VL_DBG_MSGS("         No '" + tag + "' region triggers active\n");
    }
    if ((1U & (IData)(triggers[0U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: @( register_file.global_clock)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 1U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 1 is active: @( RF_write)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 2U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 2 is active: @( reg_A)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 3U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 3 is active: @( reg_B)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 4U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 4 is active: @( reg_W)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 5U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 5 is active: @( data_w)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 6U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 6 is active: @( program_counter.global_clock)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 7U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 7 is active: @( reset)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 8U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 8 is active: @( PC_write)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 9U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 9 is active: @( PC_data)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 0x0000000aU)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 10 is active: @( alu.global_clock)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 0x0000000bU)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 11 is active: @( flag_write)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 0x0000000cU)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 12 is active: @( ALU_op)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 0x0000000dU)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 13 is active: @( ALU_A)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 0x0000000eU)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 14 is active: @( ALU_B)\n");
    }
    if ((1U & (IData)(triggers[1U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 64 is active: Internal 'ico' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

bool Varchitecture_components___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 1> &in);

#ifdef VL_DEBUG
VL_ATTR_COLD void Varchitecture_components___024root___dump_triggers__act(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Varchitecture_components___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(Varchitecture_components___024root___trigger_anySet__act(triggers))))) {
        VL_DBG_MSGS("         No '" + tag + "' region triggers active\n");
    }
    if ((1U & (IData)(triggers[0U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: @(posedge hardware_memory_tb.global_clock)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 1U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 1 is active: @(posedge alu.global_clock)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 2U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 2 is active: @(posedge program_counter.global_clock)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 3U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 3 is active: @(posedge register_file.global_clock)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 4U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 4 is active: @(negedge hardware_memory_tb.global_clock)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 5U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 5 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Varchitecture_components___024root___ctor_var_reset(Varchitecture_components___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Varchitecture_components___024root___ctor_var_reset\n"); );
    Varchitecture_components__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->vlNamep);
    vlSelf->register_file__02Eglobal_clock = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17287377139138725599ull);
    vlSelf->RF_write = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2926298963783821141ull);
    vlSelf->reg_A = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 15528560345240442595ull);
    vlSelf->reg_B = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 18031698494807825380ull);
    vlSelf->reg_W = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 1973869303919980455ull);
    vlSelf->data_w = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 347866130398317128ull);
    vlSelf->data_A = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 13518433620809163422ull);
    vlSelf->data_B = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 14656033786743242551ull);
    vlSelf->program_counter__02Eglobal_clock = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2566705702246255343ull);
    vlSelf->reset = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9928399931838511862ull);
    vlSelf->PC_write = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6481488651675994809ull);
    vlSelf->PC_data = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 10285323652777942305ull);
    vlSelf->PC_address = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 2221802238723251282ull);
    vlSelf->alu__02Eglobal_clock = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17095427236094746809ull);
    vlSelf->flag_write = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16618731995729152219ull);
    vlSelf->ALU_op = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 6668319976152363782ull);
    vlSelf->ALU_A = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 4964846434321910710ull);
    vlSelf->ALU_B = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 11727671098886967069ull);
    vlSelf->ALU_out = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 5275466786326773202ull);
    vlSelf->neg = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6701680127430408256ull);
    vlSelf->zero = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10977623970759875275ull);
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
    vlSelf->alu__DOT__out = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 8350080700543556788ull);
    vlSelf->program_counter__DOT__address = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 10587315522093627798ull);
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->register_file__DOT__registers[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 15183135843716734023ull);
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VstlTriggered[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__VicoTriggered[__Vi0] = 0;
    }
    vlSelf->__Vtrigprevexpr___TOP__register_file__02Eglobal_clock__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__RF_write__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__reg_A__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__reg_B__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__reg_W__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__data_w__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__program_counter__02Eglobal_clock__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__reset__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__PC_write__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__PC_data__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__alu__02Eglobal_clock__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__flag_write__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__ALU_op__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__ALU_A__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__ALU_B__0 = 0;
    vlSelf->__VicoDidInit = 0;
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VactTriggered[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VactTriggeredAcc[__Vi0] = 0;
    }
    vlSelf->__Vtrigprevexpr___TOP__hardware_memory_tb__DOT__global_clock__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__alu__02Eglobal_clock__1 = 0;
    vlSelf->__Vtrigprevexpr___TOP__program_counter__02Eglobal_clock__1 = 0;
    vlSelf->__Vtrigprevexpr___TOP__register_file__02Eglobal_clock__1 = 0;
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VnbaTriggered[__Vi0] = 0;
    }
    vlSelf->__Vi = 0;
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
