// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals

#include "verilated_vcd_c.h"
#include "Varchitecture_components__Syms.h"


void Varchitecture_components___024root__trace_chg_0_sub_0(Varchitecture_components___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Varchitecture_components___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Varchitecture_components___024root__trace_chg_0\n"); );
    // Body
    Varchitecture_components___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Varchitecture_components___024root*>(voidSelf);
    Varchitecture_components__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    Varchitecture_components___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void Varchitecture_components___024root__trace_chg_0_sub_0(Varchitecture_components___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Varchitecture_components___024root__trace_chg_0_sub_0\n"); );
    Varchitecture_components__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
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
    if (VL_UNLIKELY(((vlSelfRef.__Vm_traceActivity[1U] 
                      | vlSelfRef.__Vm_traceActivity[3U])))) {
        bufp->chgIData(oldp+8,(vlSelfRef.register_file__DOT__registers[31]),32);
        bufp->chgIData(oldp+9,(vlSelfRef.register_file__DOT__registers[30]),32);
        bufp->chgIData(oldp+10,(vlSelfRef.register_file__DOT__registers[29]),32);
        bufp->chgIData(oldp+11,(vlSelfRef.register_file__DOT__registers[28]),32);
        bufp->chgIData(oldp+12,(vlSelfRef.register_file__DOT__registers[27]),32);
        bufp->chgIData(oldp+13,(vlSelfRef.register_file__DOT__registers[26]),32);
        bufp->chgIData(oldp+14,(vlSelfRef.register_file__DOT__registers[25]),32);
        bufp->chgIData(oldp+15,(vlSelfRef.register_file__DOT__registers[24]),32);
        bufp->chgIData(oldp+16,(vlSelfRef.register_file__DOT__registers[23]),32);
        bufp->chgIData(oldp+17,(vlSelfRef.register_file__DOT__registers[22]),32);
        bufp->chgIData(oldp+18,(vlSelfRef.register_file__DOT__registers[21]),32);
        bufp->chgIData(oldp+19,(vlSelfRef.register_file__DOT__registers[20]),32);
        bufp->chgIData(oldp+20,(vlSelfRef.register_file__DOT__registers[19]),32);
        bufp->chgIData(oldp+21,(vlSelfRef.register_file__DOT__registers[18]),32);
        bufp->chgIData(oldp+22,(vlSelfRef.register_file__DOT__registers[17]),32);
        bufp->chgIData(oldp+23,(vlSelfRef.register_file__DOT__registers[16]),32);
        bufp->chgIData(oldp+24,(vlSelfRef.register_file__DOT__registers[15]),32);
        bufp->chgIData(oldp+25,(vlSelfRef.register_file__DOT__registers[14]),32);
        bufp->chgIData(oldp+26,(vlSelfRef.register_file__DOT__registers[13]),32);
        bufp->chgIData(oldp+27,(vlSelfRef.register_file__DOT__registers[12]),32);
        bufp->chgIData(oldp+28,(vlSelfRef.register_file__DOT__registers[11]),32);
        bufp->chgIData(oldp+29,(vlSelfRef.register_file__DOT__registers[10]),32);
        bufp->chgIData(oldp+30,(vlSelfRef.register_file__DOT__registers[9]),32);
        bufp->chgIData(oldp+31,(vlSelfRef.register_file__DOT__registers[8]),32);
        bufp->chgIData(oldp+32,(vlSelfRef.register_file__DOT__registers[7]),32);
        bufp->chgIData(oldp+33,(vlSelfRef.register_file__DOT__registers[6]),32);
        bufp->chgIData(oldp+34,(vlSelfRef.register_file__DOT__registers[5]),32);
        bufp->chgIData(oldp+35,(vlSelfRef.register_file__DOT__registers[4]),32);
        bufp->chgIData(oldp+36,(vlSelfRef.register_file__DOT__registers[3]),32);
        bufp->chgIData(oldp+37,(vlSelfRef.register_file__DOT__registers[2]),32);
        bufp->chgIData(oldp+38,(vlSelfRef.register_file__DOT__registers[1]),32);
        bufp->chgIData(oldp+39,(vlSelfRef.register_file__DOT__registers[0]),32);
    }
    bufp->chgBit(oldp+40,(vlSelfRef.register_file__02Eglobal_clock));
    bufp->chgBit(oldp+41,(vlSelfRef.RF_write));
    bufp->chgCData(oldp+42,(vlSelfRef.reg_A),5);
    bufp->chgCData(oldp+43,(vlSelfRef.reg_B),5);
    bufp->chgCData(oldp+44,(vlSelfRef.reg_W),5);
    bufp->chgIData(oldp+45,(vlSelfRef.data_w),32);
    bufp->chgIData(oldp+46,(vlSelfRef.data_A),32);
    bufp->chgIData(oldp+47,(vlSelfRef.data_B),32);
    bufp->chgBit(oldp+48,(vlSelfRef.program_counter__02Eglobal_clock));
    bufp->chgBit(oldp+49,(vlSelfRef.reset));
    bufp->chgBit(oldp+50,(vlSelfRef.PC_write));
    bufp->chgIData(oldp+51,(vlSelfRef.PC_data),32);
    bufp->chgIData(oldp+52,(vlSelfRef.program_counter__DOT__address),32);
    bufp->chgBit(oldp+53,(vlSelfRef.alu__02Eglobal_clock));
    bufp->chgBit(oldp+54,(vlSelfRef.flag_write));
    bufp->chgCData(oldp+55,(vlSelfRef.ALU_op),7);
    bufp->chgIData(oldp+56,(vlSelfRef.ALU_A),32);
    bufp->chgIData(oldp+57,(vlSelfRef.ALU_B),32);
    bufp->chgIData(oldp+58,(vlSelfRef.alu__DOT__out),32);
    bufp->chgBit(oldp+59,(vlSelfRef.neg));
    bufp->chgBit(oldp+60,(vlSelfRef.zero));
    bufp->chgCData(oldp+61,(vlSelfRef.ALU_op),7);
    bufp->chgBit(oldp+62,(vlSelfRef.hardware_memory_tb__DOT__global_clock));
    bufp->chgIData(oldp+63,((vlSelfRef.hardware_memory_tb__DOT__dut__DOT__memory
                             [(0x000003ffU & vlSelfRef.hardware_memory_tb__DOT__address)] 
                             & (- (IData)((IData)(vlSelfRef.hardware_memory_tb__DOT__mem_read))))),32);
    bufp->chgIData(oldp+64,(vlSelfRef.hardware_memory_tb__DOT__errors),32);
}

void Varchitecture_components___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Varchitecture_components___024root__trace_cleanup\n"); );
    // Body
    Varchitecture_components___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Varchitecture_components___024root*>(voidSelf);
    Varchitecture_components__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[3U] = 0U;
}
