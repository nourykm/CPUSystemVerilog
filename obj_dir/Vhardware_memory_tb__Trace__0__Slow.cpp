// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals

#include "verilated_vcd_c.h"
#include "Vhardware_memory_tb__Syms.h"


VL_ATTR_COLD void Vhardware_memory_tb___024root__trace_init_sub__TOP__0(Vhardware_memory_tb___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vhardware_memory_tb___024root__trace_init_sub__TOP__0\n"); );
    Vhardware_memory_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const int c = vlSymsp->__Vm_baseCode;
    VL_TRACE_PUSH_PREFIX(tracep, "hardware_memory_tb", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BIT(tracep,c+8,0,"global_clock",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+0,0,"mem_read",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+1,0,"mem_write",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+2,0,"address",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+3,0,"data_in",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+9,0,"data_out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+11,0,"ADD_INSTR",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+10,0,"errors",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+4,0,"do_write__Vstatic__addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+5,0,"do_write__Vstatic__value",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+6,0,"do_write__Vstatic__enable",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+7,0,"do_read__Vstatic__addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_PUSH_PREFIX(tracep, "dut", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BIT(tracep,c+8,0,"global_clock",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+0,0,"mem_read",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+1,0,"mem_write",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+2,0,"address",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+3,0,"data_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+9,0,"data_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_POP_PREFIX(tracep);
}

VL_ATTR_COLD void Vhardware_memory_tb___024root__trace_init_top(Vhardware_memory_tb___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vhardware_memory_tb___024root__trace_init_top\n"); );
    Vhardware_memory_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vhardware_memory_tb___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vhardware_memory_tb___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
VL_ATTR_COLD void Vhardware_memory_tb___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vhardware_memory_tb___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vhardware_memory_tb___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vhardware_memory_tb___024root__trace_register(Vhardware_memory_tb___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vhardware_memory_tb___024root__trace_register\n"); );
    Vhardware_memory_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    tracep->addConstCb(&Vhardware_memory_tb___024root__trace_const_0, 0, vlSelf);
    tracep->addFullCb(&Vhardware_memory_tb___024root__trace_full_0, 0, vlSelf);
    tracep->addChgCb(&Vhardware_memory_tb___024root__trace_chg_0, 0, vlSelf);
    tracep->addCleanupCb(&Vhardware_memory_tb___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vhardware_memory_tb___024root__trace_const_0_sub_0(Vhardware_memory_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vhardware_memory_tb___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vhardware_memory_tb___024root__trace_const_0\n"); );
    // Body
    Vhardware_memory_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vhardware_memory_tb___024root*>(voidSelf);
    Vhardware_memory_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    Vhardware_memory_tb___024root__trace_const_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vhardware_memory_tb___024root__trace_const_0_sub_0(Vhardware_memory_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vhardware_memory_tb___024root__trace_const_0_sub_0\n"); );
    Vhardware_memory_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    bufp->fullIData(oldp+11,(0x002201b3U),32);
}

VL_ATTR_COLD void Vhardware_memory_tb___024root__trace_full_0_sub_0(Vhardware_memory_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vhardware_memory_tb___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vhardware_memory_tb___024root__trace_full_0\n"); );
    // Body
    Vhardware_memory_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vhardware_memory_tb___024root*>(voidSelf);
    Vhardware_memory_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    Vhardware_memory_tb___024root__trace_full_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vhardware_memory_tb___024root__trace_full_0_sub_0(Vhardware_memory_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vhardware_memory_tb___024root__trace_full_0_sub_0\n"); );
    Vhardware_memory_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    bufp->fullBit(oldp+0,(vlSelfRef.hardware_memory_tb__DOT__mem_read));
    bufp->fullBit(oldp+1,(vlSelfRef.hardware_memory_tb__DOT__mem_write));
    bufp->fullIData(oldp+2,(vlSelfRef.hardware_memory_tb__DOT__address),32);
    bufp->fullIData(oldp+3,(vlSelfRef.hardware_memory_tb__DOT__data_in),32);
    bufp->fullIData(oldp+4,(vlSelfRef.hardware_memory_tb__DOT__do_write__Vstatic__addr),32);
    bufp->fullIData(oldp+5,(vlSelfRef.hardware_memory_tb__DOT__do_write__Vstatic__value),32);
    bufp->fullBit(oldp+6,(vlSelfRef.hardware_memory_tb__DOT__do_write__Vstatic__enable));
    bufp->fullIData(oldp+7,(vlSelfRef.hardware_memory_tb__DOT__do_read__Vstatic__addr),32);
    bufp->fullBit(oldp+8,(vlSelfRef.hardware_memory_tb__DOT__global_clock));
    bufp->fullIData(oldp+9,((vlSelfRef.hardware_memory_tb__DOT__dut__DOT__memory
                             [(0x000003ffU & vlSelfRef.hardware_memory_tb__DOT__address)] 
                             & (- (IData)((IData)(vlSelfRef.hardware_memory_tb__DOT__mem_read))))),32);
    bufp->fullIData(oldp+10,(vlSelfRef.hardware_memory_tb__DOT__errors),32);
}
