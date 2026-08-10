// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vfsm_tb.h for the primary calling header

#include "Vfsm_tb__pch.h"

void Vfsm_tb___024root___timing_ready(Vfsm_tb___024root* vlSelf);

VL_ATTR_COLD void Vfsm_tb___024root___eval_static(Vfsm_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfsm_tb___024root___eval_static\n"); );
    Vfsm_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    {
        // Inlined CFunc: _eval_static__TOP
        vlSelfRef.fsm_tb__DOT__global_clock = 0U;
        vlSelfRef.fsm_tb__DOT__errors = 0U;
    }
    vlSelfRef.__VactTriggered[0U] = (0x0000000000000010ULL 
                                     | vlSelfRef.__VactTriggered[0U]);
    vlSelfRef.__Vtrigprevexpr___TOP__fsm_tb__DOT__global_clock__0 = 0U;
    vlSelfRef.__Vtrigprevexpr___TOP__fsm_tb__DOT__global_interrupt__0 
        = vlSelfRef.fsm_tb__DOT__global_interrupt;
    vlSelfRef.__Vtrigprevexpr___TOP__fsm_tb__DOT__dut__DOT__instr_done__0 
        = vlSelfRef.fsm_tb__DOT__dut__DOT__instr_done;
    vlSelfRef.__Vtrigprevexpr_hd6618f3c__1 = (5U == (IData)(vlSelfRef.fsm_tb__DOT__dut__DOT__current_state));
    Vfsm_tb___024root___timing_ready(vlSelf);
    do {
        vlSelfRef.__VactTriggeredAcc[vlSelfRef.__Vi] 
            = vlSelfRef.__VactTriggered[vlSelfRef.__Vi];
        vlSelfRef.__Vi = ((IData)(1U) + vlSelfRef.__Vi);
    } while ((0U >= vlSelfRef.__Vi));
}

VL_ATTR_COLD void Vfsm_tb___024root___eval_final(Vfsm_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfsm_tb___024root___eval_final\n"); );
    Vfsm_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vfsm_tb___024root___dump_triggers__stl(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vfsm_tb___024root___eval_phase__stl(Vfsm_tb___024root* vlSelf);

VL_ATTR_COLD void Vfsm_tb___024root___eval_settle(Vfsm_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfsm_tb___024root___eval_settle\n"); );
    Vfsm_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __VstlIterCount;
    // Body
    __VstlIterCount = 0U;
    vlSelfRef.__VstlFirstIteration = 1U;
    do {
        if (VL_UNLIKELY(((0x00002710U < __VstlIterCount)))) {
#ifdef VL_DEBUG
            Vfsm_tb___024root___dump_triggers__stl(vlSelfRef.__VstlTriggered, "stl"s);
#endif
            VL_FATAL_MT("testbenches/fsm_tb.sv", 5, "", "DIDNOTCONVERGE: Settle region did not converge after '--converge-limit' of 10000 tries");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        vlSelfRef.__VstlPhaseResult = Vfsm_tb___024root___eval_phase__stl(vlSelf);
        vlSelfRef.__VstlFirstIteration = 0U;
    } while (vlSelfRef.__VstlPhaseResult);
}

VL_ATTR_COLD bool Vfsm_tb___024root___trigger_anySet__stl(const VlUnpacked<QData/*63:0*/, 1> &in);

#ifdef VL_DEBUG
VL_ATTR_COLD void Vfsm_tb___024root___dump_triggers__stl(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfsm_tb___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ (IData)(Vfsm_tb___024root___trigger_anySet__stl(triggers))))) {
        VL_DBG_MSGS("         No '" + tag + "' region triggers active\n");
    }
    if ((1U & (IData)(triggers[0U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD bool Vfsm_tb___024root___trigger_anySet__stl(const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfsm_tb___024root___trigger_anySet__stl\n"); );
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

VL_ATTR_COLD void Vfsm_tb___024root___stl_sequent__TOP__0(Vfsm_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfsm_tb___024root___stl_sequent__TOP__0\n"); );
    Vfsm_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VdfgRegularize_hebeb780c_0_0;
    __VdfgRegularize_hebeb780c_0_0 = 0;
    // Body
    vlSelfRef.fsm_tb__DOT__dut__DOT__AB_load = 0U;
    vlSelfRef.fsm_tb__DOT__dut__DOT__IR_load = 0U;
    vlSelfRef.fsm_tb__DOT__dut__DOT__cu__DOT__rs2 = 
        (0x0000001fU & (vlSelfRef.fsm_tb__DOT__dut__DOT__IR_out 
                        >> 0x14U));
    vlSelfRef.fsm_tb__DOT__dut__DOT__cu__DOT__rs1 = 
        (0x0000001fU & (vlSelfRef.fsm_tb__DOT__dut__DOT__IR_out 
                        >> 0x0fU));
    vlSelfRef.fsm_tb__DOT__dut__DOT__cu__DOT__mem_write = 0U;
    vlSelfRef.fsm_tb__DOT__dut__DOT__next_state = vlSelfRef.fsm_tb__DOT__dut__DOT__current_state;
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
        if ((1U & (~ ((IData)(vlSelfRef.fsm_tb__DOT__dut__DOT__current_state) 
                      >> 1U)))) {
            if ((1U & (IData)(vlSelfRef.fsm_tb__DOT__dut__DOT__current_state))) {
                vlSelfRef.fsm_tb__DOT__dut__DOT__AB_load = 1U;
            }
            if ((1U & (~ (IData)(vlSelfRef.fsm_tb__DOT__dut__DOT__current_state)))) {
                vlSelfRef.fsm_tb__DOT__dut__DOT__IR_load = 1U;
            }
        }
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
    vlSelfRef.fsm_tb__DOT__dut__DOT__data_out_mem = 
        (vlSelfRef.fsm_tb__DOT__dut__DOT__memory__DOT__memory
         [(0x00000fffU & (vlSelfRef.fsm_tb__DOT__dut__DOT__AddrSelOUT 
                          >> 2U))] & (- (IData)(((IData)(vlSelfRef.fsm_tb__DOT__dut__DOT__cu__DOT__mem_read) 
                                                 | (0U 
                                                    == (IData)(vlSelfRef.fsm_tb__DOT__dut__DOT__current_state))))));
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

VL_ATTR_COLD bool Vfsm_tb___024root___eval_phase__stl(Vfsm_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfsm_tb___024root___eval_phase__stl\n"); );
    Vfsm_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
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
        Vfsm_tb___024root___dump_triggers__stl(vlSelfRef.__VstlTriggered, "stl"s);
    }
#endif
    __VstlExecute = Vfsm_tb___024root___trigger_anySet__stl(vlSelfRef.__VstlTriggered);
    if (__VstlExecute) {
        {
            // Inlined CFunc: _eval_stl
            if ((1ULL & vlSelfRef.__VstlTriggered[0U])) {
                Vfsm_tb___024root___stl_sequent__TOP__0(vlSelf);
                {
                    // Inlined CFunc: __Vm_traceActivitySetAll
                    vlSelfRef.__Vm_traceActivity[0U] = 1U;
                    vlSelfRef.__Vm_traceActivity[1U] = 1U;
                    vlSelfRef.__Vm_traceActivity[2U] = 1U;
                    vlSelfRef.__Vm_traceActivity[3U] = 1U;
                    vlSelfRef.__Vm_traceActivity[4U] = 1U;
                }
            }
        }
    }
    return (__VstlExecute);
}

bool Vfsm_tb___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 1> &in);

#ifdef VL_DEBUG
VL_ATTR_COLD void Vfsm_tb___024root___dump_triggers__act(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfsm_tb___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(Vfsm_tb___024root___trigger_anySet__act(triggers))))) {
        VL_DBG_MSGS("         No '" + tag + "' region triggers active\n");
    }
    if ((1U & (IData)(triggers[0U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: @(posedge fsm_tb.global_clock)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 1U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 1 is active: @(posedge fsm_tb.global_interrupt)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 2U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 2 is active: @(negedge fsm_tb.global_clock)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 3U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 3 is active: @(posedge fsm_tb.dut.instr_done)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 4U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 4 is active: @( (3'h5 == fsm_tb.dut.current_state))\n");
    }
    if ((1U & (IData)((triggers[0U] >> 5U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 5 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vfsm_tb___024root___ctor_var_reset(Vfsm_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfsm_tb___024root___ctor_var_reset\n"); );
    Vfsm_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->vlNamep);
    vlSelf->fsm_tb__DOT__address_start = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 5319874933978753212ull);
    vlSelf->fsm_tb__DOT__reset = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11716955047685602384ull);
    vlSelf->fsm_tb__DOT__global_interrupt = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14298654496380142173ull);
    vlSelf->fsm_tb__DOT__do_write_rf__Vstatic__amount = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 15330229885168354206ull);
    vlSelf->fsm_tb__DOT__do_write_rf__Vstatic__reg_num = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 9853489602205789579ull);
    vlSelf->fsm_tb__DOT__finish_instruction__Vstatic__instructions = 0;
    vlSelf->fsm_tb__DOT__dut__DOT__instr_done = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14321755026084459012ull);
    vlSelf->fsm_tb__DOT__dut__DOT__AddrSelOUT = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 3254378655128748635ull);
    vlSelf->fsm_tb__DOT__dut__DOT__AddrSel = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16984015613953160307ull);
    vlSelf->fsm_tb__DOT__dut__DOT__PC_write = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16757623383486995234ull);
    vlSelf->fsm_tb__DOT__dut__DOT__a_load = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 2085877316663689810ull);
    vlSelf->fsm_tb__DOT__dut__DOT__b_load = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 6243470703985438964ull);
    vlSelf->fsm_tb__DOT__dut__DOT__ALU_b = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 3935544344141265921ull);
    vlSelf->fsm_tb__DOT__dut__DOT__ALU_a = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 5796737059519223834ull);
    vlSelf->fsm_tb__DOT__dut__DOT__ALU_output_load = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 12093539483222848906ull);
    vlSelf->fsm_tb__DOT__dut__DOT__data_out_mem = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 9309136839164419847ull);
    vlSelf->fsm_tb__DOT__dut__DOT__data_out_to_write = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 8707772259585136728ull);
    vlSelf->fsm_tb__DOT__dut__DOT__AB_load = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5799450447897131950ull);
    vlSelf->fsm_tb__DOT__dut__DOT__ALU_out_load = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4062961653709425037ull);
    vlSelf->fsm_tb__DOT__dut__DOT__ALU_a_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9369515894474688405ull);
    vlSelf->fsm_tb__DOT__dut__DOT__ALU_b_en = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 831381075137930583ull);
    vlSelf->fsm_tb__DOT__dut__DOT__IR_load = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7950156105976866047ull);
    vlSelf->fsm_tb__DOT__dut__DOT__MDR_load = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3275614383913556081ull);
    vlSelf->fsm_tb__DOT__dut__DOT__IR_out = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 5449279192031263829ull);
    vlSelf->fsm_tb__DOT__dut__DOT__reg_in = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12439894401465730254ull);
    vlSelf->fsm_tb__DOT__dut__DOT__flag_write = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9868930157923069407ull);
    vlSelf->fsm_tb__DOT__dut__DOT__ALU_op = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 9099817322506500312ull);
    vlSelf->fsm_tb__DOT__dut__DOT__current_state = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 9442797504900597659ull);
    vlSelf->fsm_tb__DOT__dut__DOT__next_state = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 17883276467455572993ull);
    vlSelf->fsm_tb__DOT__dut__DOT__neg = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4899392010435803673ull);
    vlSelf->fsm_tb__DOT__dut__DOT__zero = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12489371729727910676ull);
    vlSelf->fsm_tb__DOT__dut__DOT__RF_write = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 851567776632991605ull);
    vlSelf->fsm_tb__DOT__dut__DOT__FSM_alu_op = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 3132497655486521866ull);
    vlSelf->fsm_tb__DOT__dut__DOT__FSM_alu_b_en = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 7659550404598889062ull);
    vlSelf->fsm_tb__DOT__dut__DOT__cu__DOT__alu_op_code = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 12990061020012869ull);
    vlSelf->fsm_tb__DOT__dut__DOT__cu__DOT__rs1 = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 12912189391400198674ull);
    vlSelf->fsm_tb__DOT__dut__DOT__cu__DOT__rs2 = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 16651498985845335832ull);
    vlSelf->fsm_tb__DOT__dut__DOT__cu__DOT__immediate_12 = VL_SCOPED_RAND_RESET_I(12, __VscopeHash, 15513953636735722997ull);
    vlSelf->fsm_tb__DOT__dut__DOT__cu__DOT__immediate_7 = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 15613192111245264078ull);
    vlSelf->fsm_tb__DOT__dut__DOT__cu__DOT__alu_b_en = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 10502755971535949552ull);
    vlSelf->fsm_tb__DOT__dut__DOT__cu__DOT__instruction_type = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 7668235371117708669ull);
    vlSelf->fsm_tb__DOT__dut__DOT__cu__DOT__mem_read = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6543198992719797462ull);
    vlSelf->fsm_tb__DOT__dut__DOT__cu__DOT__mem_write = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13354897692415111368ull);
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->fsm_tb__DOT__dut__DOT__rf__DOT__registers[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 10050771293339771123ull);
    }
    vlSelf->fsm_tb__DOT__dut__DOT__alu__DOT__out = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 7337650241927378829ull);
    for (int __Vi0 = 0; __Vi0 < 4096; ++__Vi0) {
        vlSelf->fsm_tb__DOT__dut__DOT__memory__DOT__memory[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 8557829142801805243ull);
    }
    vlSelf->fsm_tb__DOT__dut__DOT__pc__DOT__address = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 9618083229033325161ull);
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VstlTriggered[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VactTriggered[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VactTriggeredAcc[__Vi0] = 0;
    }
    vlSelf->__Vtrigprevexpr___TOP__fsm_tb__DOT__global_clock__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__fsm_tb__DOT__global_interrupt__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__fsm_tb__DOT__dut__DOT__instr_done__0 = 0;
    vlSelf->__Vtrigprevexpr_hd6618f3c__1 = 0;
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VnbaTriggered[__Vi0] = 0;
    }
    vlSelf->__Vi = 0;
    for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
