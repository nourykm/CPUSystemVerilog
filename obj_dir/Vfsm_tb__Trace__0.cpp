// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals

#include "verilated_vcd_c.h"
#include "Vfsm_tb__Syms.h"


void Vfsm_tb___024root__trace_chg_0_sub_0(Vfsm_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vfsm_tb___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfsm_tb___024root__trace_chg_0\n"); );
    // Body
    Vfsm_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vfsm_tb___024root*>(voidSelf);
    Vfsm_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    Vfsm_tb___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void Vfsm_tb___024root__trace_chg_0_sub_0(Vfsm_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfsm_tb___024root__trace_chg_0_sub_0\n"); );
    Vfsm_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 0);
    if (VL_UNLIKELY(((vlSelfRef.__Vm_traceActivity[1U] 
                      | vlSelfRef.__Vm_traceActivity[2U])))) {
        bufp->chgIData(oldp+0,((vlSelfRef.fsm_tb__DOT__dut__DOT__rf__DOT__registers
                                [vlSelfRef.fsm_tb__DOT__dut__DOT__cu__DOT__rs1] 
                                & (- (IData)((0U != (IData)(vlSelfRef.fsm_tb__DOT__dut__DOT__cu__DOT__rs1)))))),32);
        bufp->chgIData(oldp+1,((vlSelfRef.fsm_tb__DOT__dut__DOT__rf__DOT__registers
                                [vlSelfRef.fsm_tb__DOT__dut__DOT__cu__DOT__rs2] 
                                & (- (IData)((0U != (IData)(vlSelfRef.fsm_tb__DOT__dut__DOT__cu__DOT__rs2)))))),32);
        bufp->chgIData(oldp+2,(vlSelfRef.fsm_tb__DOT__dut__DOT__rf__DOT__registers[31]),32);
        bufp->chgIData(oldp+3,(vlSelfRef.fsm_tb__DOT__dut__DOT__rf__DOT__registers[30]),32);
        bufp->chgIData(oldp+4,(vlSelfRef.fsm_tb__DOT__dut__DOT__rf__DOT__registers[29]),32);
        bufp->chgIData(oldp+5,(vlSelfRef.fsm_tb__DOT__dut__DOT__rf__DOT__registers[28]),32);
        bufp->chgIData(oldp+6,(vlSelfRef.fsm_tb__DOT__dut__DOT__rf__DOT__registers[27]),32);
        bufp->chgIData(oldp+7,(vlSelfRef.fsm_tb__DOT__dut__DOT__rf__DOT__registers[26]),32);
        bufp->chgIData(oldp+8,(vlSelfRef.fsm_tb__DOT__dut__DOT__rf__DOT__registers[25]),32);
        bufp->chgIData(oldp+9,(vlSelfRef.fsm_tb__DOT__dut__DOT__rf__DOT__registers[24]),32);
        bufp->chgIData(oldp+10,(vlSelfRef.fsm_tb__DOT__dut__DOT__rf__DOT__registers[23]),32);
        bufp->chgIData(oldp+11,(vlSelfRef.fsm_tb__DOT__dut__DOT__rf__DOT__registers[22]),32);
        bufp->chgIData(oldp+12,(vlSelfRef.fsm_tb__DOT__dut__DOT__rf__DOT__registers[21]),32);
        bufp->chgIData(oldp+13,(vlSelfRef.fsm_tb__DOT__dut__DOT__rf__DOT__registers[20]),32);
        bufp->chgIData(oldp+14,(vlSelfRef.fsm_tb__DOT__dut__DOT__rf__DOT__registers[19]),32);
        bufp->chgIData(oldp+15,(vlSelfRef.fsm_tb__DOT__dut__DOT__rf__DOT__registers[18]),32);
        bufp->chgIData(oldp+16,(vlSelfRef.fsm_tb__DOT__dut__DOT__rf__DOT__registers[17]),32);
        bufp->chgIData(oldp+17,(vlSelfRef.fsm_tb__DOT__dut__DOT__rf__DOT__registers[16]),32);
        bufp->chgIData(oldp+18,(vlSelfRef.fsm_tb__DOT__dut__DOT__rf__DOT__registers[15]),32);
        bufp->chgIData(oldp+19,(vlSelfRef.fsm_tb__DOT__dut__DOT__rf__DOT__registers[14]),32);
        bufp->chgIData(oldp+20,(vlSelfRef.fsm_tb__DOT__dut__DOT__rf__DOT__registers[13]),32);
        bufp->chgIData(oldp+21,(vlSelfRef.fsm_tb__DOT__dut__DOT__rf__DOT__registers[12]),32);
        bufp->chgIData(oldp+22,(vlSelfRef.fsm_tb__DOT__dut__DOT__rf__DOT__registers[11]),32);
        bufp->chgIData(oldp+23,(vlSelfRef.fsm_tb__DOT__dut__DOT__rf__DOT__registers[10]),32);
        bufp->chgIData(oldp+24,(vlSelfRef.fsm_tb__DOT__dut__DOT__rf__DOT__registers[9]),32);
        bufp->chgIData(oldp+25,(vlSelfRef.fsm_tb__DOT__dut__DOT__rf__DOT__registers[8]),32);
        bufp->chgIData(oldp+26,(vlSelfRef.fsm_tb__DOT__dut__DOT__rf__DOT__registers[7]),32);
        bufp->chgIData(oldp+27,(vlSelfRef.fsm_tb__DOT__dut__DOT__rf__DOT__registers[6]),32);
        bufp->chgIData(oldp+28,(vlSelfRef.fsm_tb__DOT__dut__DOT__rf__DOT__registers[5]),32);
        bufp->chgIData(oldp+29,(vlSelfRef.fsm_tb__DOT__dut__DOT__rf__DOT__registers[4]),32);
        bufp->chgIData(oldp+30,(vlSelfRef.fsm_tb__DOT__dut__DOT__rf__DOT__registers[3]),32);
        bufp->chgIData(oldp+31,(vlSelfRef.fsm_tb__DOT__dut__DOT__rf__DOT__registers[2]),32);
        bufp->chgIData(oldp+32,(vlSelfRef.fsm_tb__DOT__dut__DOT__rf__DOT__registers[1]),32);
        bufp->chgIData(oldp+33,(vlSelfRef.fsm_tb__DOT__dut__DOT__rf__DOT__registers[0]),32);
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[2U]))) {
        bufp->chgIData(oldp+34,(vlSelfRef.fsm_tb__DOT__dut__DOT__pc__DOT__address),32);
        bufp->chgIData(oldp+35,(vlSelfRef.fsm_tb__DOT__dut__DOT__a_load),32);
        bufp->chgIData(oldp+36,(vlSelfRef.fsm_tb__DOT__dut__DOT__b_load),32);
        bufp->chgIData(oldp+37,(vlSelfRef.fsm_tb__DOT__dut__DOT__alu__DOT__out),32);
        bufp->chgIData(oldp+38,(vlSelfRef.fsm_tb__DOT__dut__DOT__ALU_output_load),32);
        bufp->chgIData(oldp+39,(vlSelfRef.fsm_tb__DOT__dut__DOT__data_out_to_write),32);
        bufp->chgIData(oldp+40,(vlSelfRef.fsm_tb__DOT__dut__DOT__IR_out),32);
        bufp->chgSData(oldp+41,(vlSelfRef.fsm_tb__DOT__dut__DOT__cu__DOT__immediate_12),12);
        bufp->chgCData(oldp+42,(vlSelfRef.fsm_tb__DOT__dut__DOT__cu__DOT__immediate_7),7);
        bufp->chgIData(oldp+43,((vlSelfRef.fsm_tb__DOT__dut__DOT__IR_out 
                                 >> 0x0000000cU)),20);
        bufp->chgSData(oldp+44,(((((2U & (vlSelfRef.fsm_tb__DOT__dut__DOT__IR_out 
                                          >> 0x0000001eU)) 
                                   | (1U & (vlSelfRef.fsm_tb__DOT__dut__DOT__IR_out 
                                            >> 7U))) 
                                  << 0x0000000bU) | 
                                 ((0x000007e0U & (vlSelfRef.fsm_tb__DOT__dut__DOT__IR_out 
                                                  >> 0x00000014U)) 
                                  | (0x0000001eU & 
                                     (vlSelfRef.fsm_tb__DOT__dut__DOT__IR_out 
                                      >> 7U))))),13);
        bufp->chgBit(oldp+45,(vlSelfRef.fsm_tb__DOT__dut__DOT__neg));
        bufp->chgBit(oldp+46,(vlSelfRef.fsm_tb__DOT__dut__DOT__zero));
        bufp->chgCData(oldp+47,(vlSelfRef.fsm_tb__DOT__dut__DOT__cu__DOT__rs1),5);
        bufp->chgCData(oldp+48,(vlSelfRef.fsm_tb__DOT__dut__DOT__cu__DOT__rs2),5);
        bufp->chgCData(oldp+49,((0x0000001fU & (vlSelfRef.fsm_tb__DOT__dut__DOT__IR_out 
                                                >> 7U))),5);
        bufp->chgCData(oldp+50,(vlSelfRef.fsm_tb__DOT__dut__DOT__cu__DOT__instruction_type),2);
        bufp->chgBit(oldp+51,(vlSelfRef.fsm_tb__DOT__dut__DOT__cu__DOT__mem_read));
        bufp->chgBit(oldp+52,(vlSelfRef.fsm_tb__DOT__dut__DOT__cu__DOT__mem_write));
        bufp->chgCData(oldp+53,(vlSelfRef.fsm_tb__DOT__dut__DOT__cu__DOT__alu_b_en),3);
        bufp->chgCData(oldp+54,((7U & (vlSelfRef.fsm_tb__DOT__dut__DOT__IR_out 
                                       >> 0x0000000cU))),3);
        bufp->chgCData(oldp+55,(vlSelfRef.fsm_tb__DOT__dut__DOT__cu__DOT__alu_op_code),7);
        bufp->chgCData(oldp+56,(vlSelfRef.fsm_tb__DOT__dut__DOT__cu__DOT__instruction_type),2);
        bufp->chgCData(oldp+57,((0x0000007fU & vlSelfRef.fsm_tb__DOT__dut__DOT__IR_out)),7);
        bufp->chgCData(oldp+58,(vlSelfRef.fsm_tb__DOT__dut__DOT__cu__DOT__instruction_type),2);
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[3U]))) {
        bufp->chgBit(oldp+59,(vlSelfRef.fsm_tb__DOT__dut__DOT__AB_load));
        bufp->chgBit(oldp+60,(vlSelfRef.fsm_tb__DOT__dut__DOT__IR_load));
        bufp->chgCData(oldp+61,(vlSelfRef.fsm_tb__DOT__dut__DOT__current_state),3);
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[4U]))) {
        bufp->chgBit(oldp+62,(vlSelfRef.fsm_tb__DOT__dut__DOT__instr_done));
        bufp->chgIData(oldp+63,(vlSelfRef.fsm_tb__DOT__dut__DOT__AddrSelOUT),32);
        bufp->chgBit(oldp+64,(vlSelfRef.fsm_tb__DOT__dut__DOT__AddrSel));
        bufp->chgBit(oldp+65,(vlSelfRef.fsm_tb__DOT__dut__DOT__PC_write));
        bufp->chgIData(oldp+66,(vlSelfRef.fsm_tb__DOT__dut__DOT__ALU_b),32);
        bufp->chgIData(oldp+67,(vlSelfRef.fsm_tb__DOT__dut__DOT__ALU_a),32);
        bufp->chgBit(oldp+68,(vlSelfRef.fsm_tb__DOT__dut__DOT__ALU_out_load));
        bufp->chgBit(oldp+69,(vlSelfRef.fsm_tb__DOT__dut__DOT__ALU_a_en));
        bufp->chgCData(oldp+70,(vlSelfRef.fsm_tb__DOT__dut__DOT__ALU_b_en),3);
        bufp->chgBit(oldp+71,(vlSelfRef.fsm_tb__DOT__dut__DOT__MDR_load));
        bufp->chgBit(oldp+72,(vlSelfRef.fsm_tb__DOT__dut__DOT__reg_in));
        bufp->chgBit(oldp+73,(vlSelfRef.fsm_tb__DOT__dut__DOT__flag_write));
        bufp->chgCData(oldp+74,(vlSelfRef.fsm_tb__DOT__dut__DOT__ALU_op),7);
        bufp->chgCData(oldp+75,(vlSelfRef.fsm_tb__DOT__dut__DOT__next_state),3);
        bufp->chgBit(oldp+76,(vlSelfRef.fsm_tb__DOT__dut__DOT__RF_write));
        bufp->chgCData(oldp+77,(vlSelfRef.fsm_tb__DOT__dut__DOT__FSM_alu_op),7);
        bufp->chgCData(oldp+78,(vlSelfRef.fsm_tb__DOT__dut__DOT__FSM_alu_b_en),3);
        bufp->chgCData(oldp+79,(vlSelfRef.fsm_tb__DOT__dut__DOT__ALU_op),7);
    }
    bufp->chgBit(oldp+80,(vlSelfRef.fsm_tb__DOT__global_clock));
    bufp->chgIData(oldp+81,(vlSelfRef.fsm_tb__DOT__address_start),32);
    bufp->chgBit(oldp+82,(vlSelfRef.fsm_tb__DOT__reset));
    bufp->chgBit(oldp+83,(vlSelfRef.fsm_tb__DOT__global_interrupt));
    bufp->chgIData(oldp+84,(vlSelfRef.fsm_tb__DOT__errors),32);
    bufp->chgIData(oldp+85,(vlSelfRef.fsm_tb__DOT__finish_instruction__Vstatic__instructions),32);
    bufp->chgIData(oldp+86,(vlSelfRef.fsm_tb__DOT__dut__DOT__data_out_mem),32);
    bufp->chgIData(oldp+87,(((IData)(vlSelfRef.fsm_tb__DOT__dut__DOT__reg_in)
                              ? vlSelfRef.fsm_tb__DOT__dut__DOT__data_out_to_write
                              : vlSelfRef.fsm_tb__DOT__dut__DOT__ALU_output_load)),32);
    bufp->chgBit(oldp+88,(((IData)(vlSelfRef.fsm_tb__DOT__dut__DOT__cu__DOT__mem_read) 
                           | (0U == (IData)(vlSelfRef.fsm_tb__DOT__dut__DOT__current_state)))));
    bufp->chgBit(oldp+89,(((IData)(vlSelfRef.fsm_tb__DOT__dut__DOT__cu__DOT__mem_write) 
                           & (4U == (IData)(vlSelfRef.fsm_tb__DOT__dut__DOT__current_state)))));
}

void Vfsm_tb___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfsm_tb___024root__trace_cleanup\n"); );
    // Body
    Vfsm_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vfsm_tb___024root*>(voidSelf);
    Vfsm_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[3U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[4U] = 0U;
}
