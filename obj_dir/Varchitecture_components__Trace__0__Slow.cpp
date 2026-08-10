// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals

#include "verilated_vcd_c.h"
#include "Varchitecture_components__Syms.h"


VL_ATTR_COLD void Varchitecture_components___024root__trace_init_sub__TOP__0(Varchitecture_components___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Varchitecture_components___024root__trace_init_sub__TOP__0\n"); );
    Varchitecture_components__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const int c = vlSymsp->__Vm_baseCode;
    VL_TRACE_PUSH_PREFIX(tracep, "$rootio", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BIT(tracep,c+40,0,"register_file.global_clock",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+41,0,"RF_write",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+42,0,"reg_A",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 4,0);
    VL_TRACE_DECL_BUS(tracep,c+43,0,"reg_B",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 4,0);
    VL_TRACE_DECL_BUS(tracep,c+44,0,"reg_W",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 4,0);
    VL_TRACE_DECL_BUS(tracep,c+45,0,"data_w",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+46,0,"data_A",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+47,0,"data_B",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+48,0,"program_counter.global_clock",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+49,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+50,0,"PC_write",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+51,0,"PC_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+52,0,"PC_address",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+53,0,"alu.global_clock",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+54,0,"flag_write",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+55,0,"ALU_op",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 6,0);
    VL_TRACE_DECL_BUS(tracep,c+56,0,"ALU_A",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+57,0,"ALU_B",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+58,0,"ALU_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+59,0,"neg",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+60,0,"zero",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "alu", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BIT(tracep,c+53,0,"global_clock",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+54,0,"flag_write",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+55,0,"ALU_op",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 6,0);
    VL_TRACE_DECL_BUS(tracep,c+56,0,"ALU_A",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+57,0,"ALU_B",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+58,0,"ALU_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+59,0,"neg",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+60,0,"zero",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+58,0,"out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+61,0,"code",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 6,0);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "hardware_memory_tb", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BIT(tracep,c+62,0,"global_clock",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+0,0,"mem_read",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+1,0,"mem_write",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+2,0,"address",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+3,0,"data_in",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+63,0,"data_out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+65,0,"ADD_INSTR",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+64,0,"errors",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+4,0,"do_write__Vstatic__addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+5,0,"do_write__Vstatic__value",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+6,0,"do_write__Vstatic__enable",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+7,0,"do_read__Vstatic__addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_PUSH_PREFIX(tracep, "dut", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BIT(tracep,c+62,0,"global_clock",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+0,0,"mem_read",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+1,0,"mem_write",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+2,0,"address",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+3,0,"data_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+63,0,"data_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "program_counter", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BIT(tracep,c+48,0,"global_clock",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+49,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+50,0,"PC_write",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+51,0,"PC_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+52,0,"PC_address",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+52,0,"address",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "register_file", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BIT(tracep,c+40,0,"global_clock",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+41,0,"RF_write",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+42,0,"reg_A",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 4,0);
    VL_TRACE_DECL_BUS(tracep,c+43,0,"reg_B",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 4,0);
    VL_TRACE_DECL_BUS(tracep,c+44,0,"reg_W",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 4,0);
    VL_TRACE_DECL_BUS(tracep,c+45,0,"data_w",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+46,0,"data_A",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+47,0,"data_B",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_PUSH_PREFIX(tracep, "registers", VerilatedTracePrefixType::ARRAY_UNPACKED, 31, 0);
    for (int i = 0; i < 32; ++i) {
        VL_TRACE_DECL_BUS_ARRAY(tracep,c+8+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, (31 - i), 31,0);
    }
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_POP_PREFIX(tracep);
}

VL_ATTR_COLD void Varchitecture_components___024root__trace_init_top(Varchitecture_components___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Varchitecture_components___024root__trace_init_top\n"); );
    Varchitecture_components__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Varchitecture_components___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Varchitecture_components___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
VL_ATTR_COLD void Varchitecture_components___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Varchitecture_components___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Varchitecture_components___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Varchitecture_components___024root__trace_register(Varchitecture_components___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Varchitecture_components___024root__trace_register\n"); );
    Varchitecture_components__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    tracep->addConstCb(&Varchitecture_components___024root__trace_const_0, 0, vlSelf);
    tracep->addFullCb(&Varchitecture_components___024root__trace_full_0, 0, vlSelf);
    tracep->addChgCb(&Varchitecture_components___024root__trace_chg_0, 0, vlSelf);
    tracep->addCleanupCb(&Varchitecture_components___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Varchitecture_components___024root__trace_const_0_sub_0(Varchitecture_components___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Varchitecture_components___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Varchitecture_components___024root__trace_const_0\n"); );
    // Body
    Varchitecture_components___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Varchitecture_components___024root*>(voidSelf);
    Varchitecture_components__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    Varchitecture_components___024root__trace_const_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Varchitecture_components___024root__trace_const_0_sub_0(Varchitecture_components___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Varchitecture_components___024root__trace_const_0_sub_0\n"); );
    Varchitecture_components__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    bufp->fullIData(oldp+65,(0x002201b3U),32);
}

VL_ATTR_COLD void Varchitecture_components___024root__trace_full_0_sub_0(Varchitecture_components___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Varchitecture_components___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Varchitecture_components___024root__trace_full_0\n"); );
    // Body
    Varchitecture_components___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Varchitecture_components___024root*>(voidSelf);
    Varchitecture_components__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    Varchitecture_components___024root__trace_full_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Varchitecture_components___024root__trace_full_0_sub_0(Varchitecture_components___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Varchitecture_components___024root__trace_full_0_sub_0\n"); );
    Varchitecture_components__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
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
    bufp->fullIData(oldp+8,(vlSelfRef.register_file__DOT__registers[31]),32);
    bufp->fullIData(oldp+9,(vlSelfRef.register_file__DOT__registers[30]),32);
    bufp->fullIData(oldp+10,(vlSelfRef.register_file__DOT__registers[29]),32);
    bufp->fullIData(oldp+11,(vlSelfRef.register_file__DOT__registers[28]),32);
    bufp->fullIData(oldp+12,(vlSelfRef.register_file__DOT__registers[27]),32);
    bufp->fullIData(oldp+13,(vlSelfRef.register_file__DOT__registers[26]),32);
    bufp->fullIData(oldp+14,(vlSelfRef.register_file__DOT__registers[25]),32);
    bufp->fullIData(oldp+15,(vlSelfRef.register_file__DOT__registers[24]),32);
    bufp->fullIData(oldp+16,(vlSelfRef.register_file__DOT__registers[23]),32);
    bufp->fullIData(oldp+17,(vlSelfRef.register_file__DOT__registers[22]),32);
    bufp->fullIData(oldp+18,(vlSelfRef.register_file__DOT__registers[21]),32);
    bufp->fullIData(oldp+19,(vlSelfRef.register_file__DOT__registers[20]),32);
    bufp->fullIData(oldp+20,(vlSelfRef.register_file__DOT__registers[19]),32);
    bufp->fullIData(oldp+21,(vlSelfRef.register_file__DOT__registers[18]),32);
    bufp->fullIData(oldp+22,(vlSelfRef.register_file__DOT__registers[17]),32);
    bufp->fullIData(oldp+23,(vlSelfRef.register_file__DOT__registers[16]),32);
    bufp->fullIData(oldp+24,(vlSelfRef.register_file__DOT__registers[15]),32);
    bufp->fullIData(oldp+25,(vlSelfRef.register_file__DOT__registers[14]),32);
    bufp->fullIData(oldp+26,(vlSelfRef.register_file__DOT__registers[13]),32);
    bufp->fullIData(oldp+27,(vlSelfRef.register_file__DOT__registers[12]),32);
    bufp->fullIData(oldp+28,(vlSelfRef.register_file__DOT__registers[11]),32);
    bufp->fullIData(oldp+29,(vlSelfRef.register_file__DOT__registers[10]),32);
    bufp->fullIData(oldp+30,(vlSelfRef.register_file__DOT__registers[9]),32);
    bufp->fullIData(oldp+31,(vlSelfRef.register_file__DOT__registers[8]),32);
    bufp->fullIData(oldp+32,(vlSelfRef.register_file__DOT__registers[7]),32);
    bufp->fullIData(oldp+33,(vlSelfRef.register_file__DOT__registers[6]),32);
    bufp->fullIData(oldp+34,(vlSelfRef.register_file__DOT__registers[5]),32);
    bufp->fullIData(oldp+35,(vlSelfRef.register_file__DOT__registers[4]),32);
    bufp->fullIData(oldp+36,(vlSelfRef.register_file__DOT__registers[3]),32);
    bufp->fullIData(oldp+37,(vlSelfRef.register_file__DOT__registers[2]),32);
    bufp->fullIData(oldp+38,(vlSelfRef.register_file__DOT__registers[1]),32);
    bufp->fullIData(oldp+39,(vlSelfRef.register_file__DOT__registers[0]),32);
    bufp->fullBit(oldp+40,(vlSelfRef.register_file__02Eglobal_clock));
    bufp->fullBit(oldp+41,(vlSelfRef.RF_write));
    bufp->fullCData(oldp+42,(vlSelfRef.reg_A),5);
    bufp->fullCData(oldp+43,(vlSelfRef.reg_B),5);
    bufp->fullCData(oldp+44,(vlSelfRef.reg_W),5);
    bufp->fullIData(oldp+45,(vlSelfRef.data_w),32);
    bufp->fullIData(oldp+46,(vlSelfRef.data_A),32);
    bufp->fullIData(oldp+47,(vlSelfRef.data_B),32);
    bufp->fullBit(oldp+48,(vlSelfRef.program_counter__02Eglobal_clock));
    bufp->fullBit(oldp+49,(vlSelfRef.reset));
    bufp->fullBit(oldp+50,(vlSelfRef.PC_write));
    bufp->fullIData(oldp+51,(vlSelfRef.PC_data),32);
    bufp->fullIData(oldp+52,(vlSelfRef.program_counter__DOT__address),32);
    bufp->fullBit(oldp+53,(vlSelfRef.alu__02Eglobal_clock));
    bufp->fullBit(oldp+54,(vlSelfRef.flag_write));
    bufp->fullCData(oldp+55,(vlSelfRef.ALU_op),7);
    bufp->fullIData(oldp+56,(vlSelfRef.ALU_A),32);
    bufp->fullIData(oldp+57,(vlSelfRef.ALU_B),32);
    bufp->fullIData(oldp+58,(vlSelfRef.alu__DOT__out),32);
    bufp->fullBit(oldp+59,(vlSelfRef.neg));
    bufp->fullBit(oldp+60,(vlSelfRef.zero));
    bufp->fullCData(oldp+61,(vlSelfRef.ALU_op),7);
    bufp->fullBit(oldp+62,(vlSelfRef.hardware_memory_tb__DOT__global_clock));
    bufp->fullIData(oldp+63,((vlSelfRef.hardware_memory_tb__DOT__dut__DOT__memory
                              [(0x000003ffU & vlSelfRef.hardware_memory_tb__DOT__address)] 
                              & (- (IData)((IData)(vlSelfRef.hardware_memory_tb__DOT__mem_read))))),32);
    bufp->fullIData(oldp+64,(vlSelfRef.hardware_memory_tb__DOT__errors),32);
}
