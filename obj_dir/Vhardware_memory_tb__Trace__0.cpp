// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals

#include "verilated_vcd_c.h"
#include "Vhardware_memory_tb__Syms.h"


void Vhardware_memory_tb___024root__trace_chg_0_sub_0(Vhardware_memory_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vhardware_memory_tb___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vhardware_memory_tb___024root__trace_chg_0\n"); );
    // Body
    Vhardware_memory_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vhardware_memory_tb___024root*>(voidSelf);
    Vhardware_memory_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    Vhardware_memory_tb___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void Vhardware_memory_tb___024root__trace_chg_0_sub_0(Vhardware_memory_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vhardware_memory_tb___024root__trace_chg_0_sub_0\n"); );
    Vhardware_memory_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 0);
    if (VL_UNLIKELY(((vlSelfRef.__Vm_traceActivity[1U] 
                      | vlSelfRef.__Vm_traceActivity[2U])))) {
        bufp->chgBit(oldp+0,(vlSelfRef.hardware_memory_tb__DOT__mem_read));
        bufp->chgBit(oldp+1,(vlSelfRef.hardware_memory_tb__DOT__mem_write));
        bufp->chgIData(oldp+2,(vlSelfRef.hardware_memory_tb__DOT__address),32);
        bufp->chgIData(oldp+3,(vlSelfRef.hardware_memory_tb__DOT__data_in),32);
        bufp->chgIData(oldp+4,(vlSelfRef.hardware_memory_tb__DOT__do_write__Vstatic__addr),32);
        bufp->chgIData(oldp+5,(vlSelfRef.hardware_memory_tb__DOT__do_write__Vstatic__value),32);
        bufp->chgBit(oldp+6,(vlSelfRef.hardware_memory_tb__DOT__do_write__Vstatic__enable));
        bufp->chgIData(oldp+7,(vlSelfRef.hardware_memory_tb__DOT__do_read__Vstatic__addr),32);
    }
    bufp->chgBit(oldp+8,(vlSelfRef.hardware_memory_tb__DOT__global_clock));
    bufp->chgIData(oldp+9,((vlSelfRef.hardware_memory_tb__DOT__dut__DOT__memory
                            [(0x000003ffU & vlSelfRef.hardware_memory_tb__DOT__address)] 
                            & (- (IData)((IData)(vlSelfRef.hardware_memory_tb__DOT__mem_read))))),32);
    bufp->chgIData(oldp+10,(vlSelfRef.hardware_memory_tb__DOT__errors),32);
}

void Vhardware_memory_tb___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vhardware_memory_tb___024root__trace_cleanup\n"); );
    // Body
    Vhardware_memory_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vhardware_memory_tb___024root*>(voidSelf);
    Vhardware_memory_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
}
