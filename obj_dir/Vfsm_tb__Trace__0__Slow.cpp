// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals

#include "verilated_vcd_c.h"
#include "Vfsm_tb__Syms.h"


VL_ATTR_COLD void Vfsm_tb___024root__trace_init_sub__TOP__0(Vfsm_tb___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfsm_tb___024root__trace_init_sub__TOP__0\n"); );
    Vfsm_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const int c = vlSymsp->__Vm_baseCode;
    VL_TRACE_PUSH_PREFIX(tracep, "fsm_tb", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BIT(tracep,c+80,0,"global_clock",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+81,0,"address_start",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+82,0,"reset",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+62,0,"done",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+83,0,"global_interrupt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+84,0,"errors",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+90,0,"do_write_rf__Vstatic__amount",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+91,0,"do_write_rf__Vstatic__reg_num",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 4,0);
    VL_TRACE_DECL_BUS(tracep,c+85,0,"finish_instruction__Vstatic__instructions",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::INT, 31,0);
    VL_TRACE_PUSH_PREFIX(tracep, "dut", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BIT(tracep,c+80,0,"global_clock",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+83,0,"global_interrupt",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+81,0,"address_start",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+82,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+62,0,"done",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+62,0,"instr_done",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+63,0,"AddrSelOUT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+34,0,"out_address",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+64,0,"AddrSel",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+65,0,"PC_write",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+0,0,"data_A",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+1,0,"data_B",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+35,0,"a_load",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+36,0,"b_load",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+66,0,"ALU_b",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+67,0,"ALU_a",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+37,0,"ALU_out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+38,0,"ALU_output_load",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+86,0,"data_out_mem",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+39,0,"data_out_to_write",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+59,0,"AB_load",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+68,0,"ALU_out_load",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+69,0,"ALU_a_en",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+70,0,"ALU_b_en",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 2,0);
    VL_TRACE_DECL_BIT(tracep,c+60,0,"IR_load",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+71,0,"MDR_load",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+40,0,"IR_out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+41,0,"imm_12",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 11,0);
    VL_TRACE_DECL_BUS(tracep,c+42,0,"imm_7",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 6,0);
    VL_TRACE_DECL_BUS(tracep,c+43,0,"imm_20",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 19,0);
    VL_TRACE_DECL_BUS(tracep,c+44,0,"imm_b",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 12,0);
    VL_TRACE_DECL_BUS(tracep,c+87,0,"data_to_write",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+72,0,"reg_in",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+88,0,"mem_read",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+89,0,"mem_write",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+73,0,"flag_write",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+74,0,"ALU_op",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 6,0);
    VL_TRACE_DECL_BUS(tracep,c+61,0,"current_state",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 2,0);
    VL_TRACE_DECL_BUS(tracep,c+75,0,"next_state",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 2,0);
    VL_TRACE_DECL_BIT(tracep,c+45,0,"neg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+46,0,"zero",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+47,0,"reg_A",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 4,0);
    VL_TRACE_DECL_BUS(tracep,c+48,0,"reg_B",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 4,0);
    VL_TRACE_DECL_BUS(tracep,c+49,0,"reg_dst",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 4,0);
    VL_TRACE_DECL_BUS(tracep,c+50,0,"instruction_type",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BIT(tracep,c+76,0,"RF_write",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+51,0,"cu_mem_read",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+52,0,"cu_mem_write",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+53,0,"cu_ALU_b_en",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 2,0);
    VL_TRACE_DECL_BUS(tracep,c+54,0,"cu_funct3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 2,0);
    VL_TRACE_DECL_BUS(tracep,c+55,0,"cu_ALU_op",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 6,0);
    VL_TRACE_DECL_BUS(tracep,c+77,0,"FSM_alu_op",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 6,0);
    VL_TRACE_DECL_BUS(tracep,c+78,0,"FSM_alu_b_en",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 2,0);
    VL_TRACE_PUSH_PREFIX(tracep, "alu", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BIT(tracep,c+80,0,"global_clock",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+73,0,"flag_write",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+74,0,"ALU_op",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 6,0);
    VL_TRACE_DECL_BUS(tracep,c+67,0,"ALU_A",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+66,0,"ALU_B",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+37,0,"ALU_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+45,0,"neg",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+46,0,"zero",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+37,0,"out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+79,0,"code",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 6,0);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "cu", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BUS(tracep,c+40,0,"instruction",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+52,0,"memory_write",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+51,0,"memory_read",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+47,0,"reg_A",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 4,0);
    VL_TRACE_DECL_BUS(tracep,c+48,0,"reg_B",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 4,0);
    VL_TRACE_DECL_BUS(tracep,c+49,0,"reg_dst",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 4,0);
    VL_TRACE_DECL_BUS(tracep,c+41,0,"imm_12",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 11,0);
    VL_TRACE_DECL_BUS(tracep,c+42,0,"imm_7",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 6,0);
    VL_TRACE_DECL_BUS(tracep,c+43,0,"imm_20",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 19,0);
    VL_TRACE_DECL_BUS(tracep,c+44,0,"imm_b",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 12,0);
    VL_TRACE_DECL_BUS(tracep,c+55,0,"alu_op",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 6,0);
    VL_TRACE_DECL_BUS(tracep,c+53,0,"alu_b_enable",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 2,0);
    VL_TRACE_DECL_BUS(tracep,c+56,0,"instr_type",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BUS(tracep,c+54,0,"function_3",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 2,0);
    VL_TRACE_DECL_BUS(tracep,c+57,0,"op_code",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 6,0);
    VL_TRACE_DECL_BUS(tracep,c+55,0,"alu_op_code",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 6,0);
    VL_TRACE_DECL_BUS(tracep,c+54,0,"funct3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 2,0);
    VL_TRACE_DECL_BUS(tracep,c+49,0,"rd",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 4,0);
    VL_TRACE_DECL_BUS(tracep,c+47,0,"rs1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 4,0);
    VL_TRACE_DECL_BUS(tracep,c+48,0,"rs2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 4,0);
    VL_TRACE_DECL_BUS(tracep,c+41,0,"immediate_12",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 11,0);
    VL_TRACE_DECL_BUS(tracep,c+42,0,"immediate_7",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 6,0);
    VL_TRACE_DECL_BUS(tracep,c+43,0,"immediate_20",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 19,0);
    VL_TRACE_DECL_BUS(tracep,c+44,0,"immediate_b",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 12,0);
    VL_TRACE_DECL_BUS(tracep,c+53,0,"alu_b_en",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 2,0);
    VL_TRACE_DECL_BUS(tracep,c+58,0,"instruction_type",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BIT(tracep,c+51,0,"mem_read",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+52,0,"mem_write",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "memory", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BIT(tracep,c+80,0,"global_clock",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+88,0,"mem_read",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+89,0,"mem_write",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+63,0,"address",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+36,0,"data_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+86,0,"data_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "pc", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BIT(tracep,c+80,0,"global_clock",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+82,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+65,0,"PC_write",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+37,0,"PC_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+34,0,"PC_address",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+34,0,"address",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "rf", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BIT(tracep,c+80,0,"global_clock",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+76,0,"RF_write",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+47,0,"reg_A",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 4,0);
    VL_TRACE_DECL_BUS(tracep,c+48,0,"reg_B",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 4,0);
    VL_TRACE_DECL_BUS(tracep,c+49,0,"reg_W",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 4,0);
    VL_TRACE_DECL_BUS(tracep,c+87,0,"data_w",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+0,0,"data_A",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+1,0,"data_B",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_PUSH_PREFIX(tracep, "registers", VerilatedTracePrefixType::ARRAY_UNPACKED, 31, 0);
    for (int i = 0; i < 32; ++i) {
        VL_TRACE_DECL_BUS_ARRAY(tracep,c+2+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, (31 - i), 31,0);
    }
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_POP_PREFIX(tracep);
}

VL_ATTR_COLD void Vfsm_tb___024root__trace_init_top(Vfsm_tb___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfsm_tb___024root__trace_init_top\n"); );
    Vfsm_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vfsm_tb___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vfsm_tb___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
VL_ATTR_COLD void Vfsm_tb___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vfsm_tb___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vfsm_tb___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vfsm_tb___024root__trace_register(Vfsm_tb___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfsm_tb___024root__trace_register\n"); );
    Vfsm_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    tracep->addConstCb(&Vfsm_tb___024root__trace_const_0, 0, vlSelf);
    tracep->addFullCb(&Vfsm_tb___024root__trace_full_0, 0, vlSelf);
    tracep->addChgCb(&Vfsm_tb___024root__trace_chg_0, 0, vlSelf);
    tracep->addCleanupCb(&Vfsm_tb___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vfsm_tb___024root__trace_const_0_sub_0(Vfsm_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vfsm_tb___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfsm_tb___024root__trace_const_0\n"); );
    // Body
    Vfsm_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vfsm_tb___024root*>(voidSelf);
    Vfsm_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    Vfsm_tb___024root__trace_const_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vfsm_tb___024root__trace_const_0_sub_0(Vfsm_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfsm_tb___024root__trace_const_0_sub_0\n"); );
    Vfsm_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    bufp->fullIData(oldp+90,(vlSelfRef.fsm_tb__DOT__do_write_rf__Vstatic__amount),32);
    bufp->fullCData(oldp+91,(vlSelfRef.fsm_tb__DOT__do_write_rf__Vstatic__reg_num),5);
}

VL_ATTR_COLD void Vfsm_tb___024root__trace_full_0_sub_0(Vfsm_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vfsm_tb___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfsm_tb___024root__trace_full_0\n"); );
    // Body
    Vfsm_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vfsm_tb___024root*>(voidSelf);
    Vfsm_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    Vfsm_tb___024root__trace_full_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vfsm_tb___024root__trace_full_0_sub_0(Vfsm_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfsm_tb___024root__trace_full_0_sub_0\n"); );
    Vfsm_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    bufp->fullIData(oldp+0,((vlSelfRef.fsm_tb__DOT__dut__DOT__rf__DOT__registers
                             [vlSelfRef.fsm_tb__DOT__dut__DOT__cu__DOT__rs1] 
                             & (- (IData)((0U != (IData)(vlSelfRef.fsm_tb__DOT__dut__DOT__cu__DOT__rs1)))))),32);
    bufp->fullIData(oldp+1,((vlSelfRef.fsm_tb__DOT__dut__DOT__rf__DOT__registers
                             [vlSelfRef.fsm_tb__DOT__dut__DOT__cu__DOT__rs2] 
                             & (- (IData)((0U != (IData)(vlSelfRef.fsm_tb__DOT__dut__DOT__cu__DOT__rs2)))))),32);
    bufp->fullIData(oldp+2,(vlSelfRef.fsm_tb__DOT__dut__DOT__rf__DOT__registers[31]),32);
    bufp->fullIData(oldp+3,(vlSelfRef.fsm_tb__DOT__dut__DOT__rf__DOT__registers[30]),32);
    bufp->fullIData(oldp+4,(vlSelfRef.fsm_tb__DOT__dut__DOT__rf__DOT__registers[29]),32);
    bufp->fullIData(oldp+5,(vlSelfRef.fsm_tb__DOT__dut__DOT__rf__DOT__registers[28]),32);
    bufp->fullIData(oldp+6,(vlSelfRef.fsm_tb__DOT__dut__DOT__rf__DOT__registers[27]),32);
    bufp->fullIData(oldp+7,(vlSelfRef.fsm_tb__DOT__dut__DOT__rf__DOT__registers[26]),32);
    bufp->fullIData(oldp+8,(vlSelfRef.fsm_tb__DOT__dut__DOT__rf__DOT__registers[25]),32);
    bufp->fullIData(oldp+9,(vlSelfRef.fsm_tb__DOT__dut__DOT__rf__DOT__registers[24]),32);
    bufp->fullIData(oldp+10,(vlSelfRef.fsm_tb__DOT__dut__DOT__rf__DOT__registers[23]),32);
    bufp->fullIData(oldp+11,(vlSelfRef.fsm_tb__DOT__dut__DOT__rf__DOT__registers[22]),32);
    bufp->fullIData(oldp+12,(vlSelfRef.fsm_tb__DOT__dut__DOT__rf__DOT__registers[21]),32);
    bufp->fullIData(oldp+13,(vlSelfRef.fsm_tb__DOT__dut__DOT__rf__DOT__registers[20]),32);
    bufp->fullIData(oldp+14,(vlSelfRef.fsm_tb__DOT__dut__DOT__rf__DOT__registers[19]),32);
    bufp->fullIData(oldp+15,(vlSelfRef.fsm_tb__DOT__dut__DOT__rf__DOT__registers[18]),32);
    bufp->fullIData(oldp+16,(vlSelfRef.fsm_tb__DOT__dut__DOT__rf__DOT__registers[17]),32);
    bufp->fullIData(oldp+17,(vlSelfRef.fsm_tb__DOT__dut__DOT__rf__DOT__registers[16]),32);
    bufp->fullIData(oldp+18,(vlSelfRef.fsm_tb__DOT__dut__DOT__rf__DOT__registers[15]),32);
    bufp->fullIData(oldp+19,(vlSelfRef.fsm_tb__DOT__dut__DOT__rf__DOT__registers[14]),32);
    bufp->fullIData(oldp+20,(vlSelfRef.fsm_tb__DOT__dut__DOT__rf__DOT__registers[13]),32);
    bufp->fullIData(oldp+21,(vlSelfRef.fsm_tb__DOT__dut__DOT__rf__DOT__registers[12]),32);
    bufp->fullIData(oldp+22,(vlSelfRef.fsm_tb__DOT__dut__DOT__rf__DOT__registers[11]),32);
    bufp->fullIData(oldp+23,(vlSelfRef.fsm_tb__DOT__dut__DOT__rf__DOT__registers[10]),32);
    bufp->fullIData(oldp+24,(vlSelfRef.fsm_tb__DOT__dut__DOT__rf__DOT__registers[9]),32);
    bufp->fullIData(oldp+25,(vlSelfRef.fsm_tb__DOT__dut__DOT__rf__DOT__registers[8]),32);
    bufp->fullIData(oldp+26,(vlSelfRef.fsm_tb__DOT__dut__DOT__rf__DOT__registers[7]),32);
    bufp->fullIData(oldp+27,(vlSelfRef.fsm_tb__DOT__dut__DOT__rf__DOT__registers[6]),32);
    bufp->fullIData(oldp+28,(vlSelfRef.fsm_tb__DOT__dut__DOT__rf__DOT__registers[5]),32);
    bufp->fullIData(oldp+29,(vlSelfRef.fsm_tb__DOT__dut__DOT__rf__DOT__registers[4]),32);
    bufp->fullIData(oldp+30,(vlSelfRef.fsm_tb__DOT__dut__DOT__rf__DOT__registers[3]),32);
    bufp->fullIData(oldp+31,(vlSelfRef.fsm_tb__DOT__dut__DOT__rf__DOT__registers[2]),32);
    bufp->fullIData(oldp+32,(vlSelfRef.fsm_tb__DOT__dut__DOT__rf__DOT__registers[1]),32);
    bufp->fullIData(oldp+33,(vlSelfRef.fsm_tb__DOT__dut__DOT__rf__DOT__registers[0]),32);
    bufp->fullIData(oldp+34,(vlSelfRef.fsm_tb__DOT__dut__DOT__pc__DOT__address),32);
    bufp->fullIData(oldp+35,(vlSelfRef.fsm_tb__DOT__dut__DOT__a_load),32);
    bufp->fullIData(oldp+36,(vlSelfRef.fsm_tb__DOT__dut__DOT__b_load),32);
    bufp->fullIData(oldp+37,(vlSelfRef.fsm_tb__DOT__dut__DOT__alu__DOT__out),32);
    bufp->fullIData(oldp+38,(vlSelfRef.fsm_tb__DOT__dut__DOT__ALU_output_load),32);
    bufp->fullIData(oldp+39,(vlSelfRef.fsm_tb__DOT__dut__DOT__data_out_to_write),32);
    bufp->fullIData(oldp+40,(vlSelfRef.fsm_tb__DOT__dut__DOT__IR_out),32);
    bufp->fullSData(oldp+41,(vlSelfRef.fsm_tb__DOT__dut__DOT__cu__DOT__immediate_12),12);
    bufp->fullCData(oldp+42,(vlSelfRef.fsm_tb__DOT__dut__DOT__cu__DOT__immediate_7),7);
    bufp->fullIData(oldp+43,((vlSelfRef.fsm_tb__DOT__dut__DOT__IR_out 
                              >> 0x0000000cU)),20);
    bufp->fullSData(oldp+44,(((((2U & (vlSelfRef.fsm_tb__DOT__dut__DOT__IR_out 
                                       >> 0x0000001eU)) 
                                | (1U & (vlSelfRef.fsm_tb__DOT__dut__DOT__IR_out 
                                         >> 7U))) << 0x0000000bU) 
                              | ((0x000007e0U & (vlSelfRef.fsm_tb__DOT__dut__DOT__IR_out 
                                                 >> 0x00000014U)) 
                                 | (0x0000001eU & (vlSelfRef.fsm_tb__DOT__dut__DOT__IR_out 
                                                   >> 7U))))),13);
    bufp->fullBit(oldp+45,(vlSelfRef.fsm_tb__DOT__dut__DOT__neg));
    bufp->fullBit(oldp+46,(vlSelfRef.fsm_tb__DOT__dut__DOT__zero));
    bufp->fullCData(oldp+47,(vlSelfRef.fsm_tb__DOT__dut__DOT__cu__DOT__rs1),5);
    bufp->fullCData(oldp+48,(vlSelfRef.fsm_tb__DOT__dut__DOT__cu__DOT__rs2),5);
    bufp->fullCData(oldp+49,((0x0000001fU & (vlSelfRef.fsm_tb__DOT__dut__DOT__IR_out 
                                             >> 7U))),5);
    bufp->fullCData(oldp+50,(vlSelfRef.fsm_tb__DOT__dut__DOT__cu__DOT__instruction_type),2);
    bufp->fullBit(oldp+51,(vlSelfRef.fsm_tb__DOT__dut__DOT__cu__DOT__mem_read));
    bufp->fullBit(oldp+52,(vlSelfRef.fsm_tb__DOT__dut__DOT__cu__DOT__mem_write));
    bufp->fullCData(oldp+53,(vlSelfRef.fsm_tb__DOT__dut__DOT__cu__DOT__alu_b_en),3);
    bufp->fullCData(oldp+54,((7U & (vlSelfRef.fsm_tb__DOT__dut__DOT__IR_out 
                                    >> 0x0000000cU))),3);
    bufp->fullCData(oldp+55,(vlSelfRef.fsm_tb__DOT__dut__DOT__cu__DOT__alu_op_code),7);
    bufp->fullCData(oldp+56,(vlSelfRef.fsm_tb__DOT__dut__DOT__cu__DOT__instruction_type),2);
    bufp->fullCData(oldp+57,((0x0000007fU & vlSelfRef.fsm_tb__DOT__dut__DOT__IR_out)),7);
    bufp->fullCData(oldp+58,(vlSelfRef.fsm_tb__DOT__dut__DOT__cu__DOT__instruction_type),2);
    bufp->fullBit(oldp+59,(vlSelfRef.fsm_tb__DOT__dut__DOT__AB_load));
    bufp->fullBit(oldp+60,(vlSelfRef.fsm_tb__DOT__dut__DOT__IR_load));
    bufp->fullCData(oldp+61,(vlSelfRef.fsm_tb__DOT__dut__DOT__current_state),3);
    bufp->fullBit(oldp+62,(vlSelfRef.fsm_tb__DOT__dut__DOT__instr_done));
    bufp->fullIData(oldp+63,(vlSelfRef.fsm_tb__DOT__dut__DOT__AddrSelOUT),32);
    bufp->fullBit(oldp+64,(vlSelfRef.fsm_tb__DOT__dut__DOT__AddrSel));
    bufp->fullBit(oldp+65,(vlSelfRef.fsm_tb__DOT__dut__DOT__PC_write));
    bufp->fullIData(oldp+66,(vlSelfRef.fsm_tb__DOT__dut__DOT__ALU_b),32);
    bufp->fullIData(oldp+67,(vlSelfRef.fsm_tb__DOT__dut__DOT__ALU_a),32);
    bufp->fullBit(oldp+68,(vlSelfRef.fsm_tb__DOT__dut__DOT__ALU_out_load));
    bufp->fullBit(oldp+69,(vlSelfRef.fsm_tb__DOT__dut__DOT__ALU_a_en));
    bufp->fullCData(oldp+70,(vlSelfRef.fsm_tb__DOT__dut__DOT__ALU_b_en),3);
    bufp->fullBit(oldp+71,(vlSelfRef.fsm_tb__DOT__dut__DOT__MDR_load));
    bufp->fullBit(oldp+72,(vlSelfRef.fsm_tb__DOT__dut__DOT__reg_in));
    bufp->fullBit(oldp+73,(vlSelfRef.fsm_tb__DOT__dut__DOT__flag_write));
    bufp->fullCData(oldp+74,(vlSelfRef.fsm_tb__DOT__dut__DOT__ALU_op),7);
    bufp->fullCData(oldp+75,(vlSelfRef.fsm_tb__DOT__dut__DOT__next_state),3);
    bufp->fullBit(oldp+76,(vlSelfRef.fsm_tb__DOT__dut__DOT__RF_write));
    bufp->fullCData(oldp+77,(vlSelfRef.fsm_tb__DOT__dut__DOT__FSM_alu_op),7);
    bufp->fullCData(oldp+78,(vlSelfRef.fsm_tb__DOT__dut__DOT__FSM_alu_b_en),3);
    bufp->fullCData(oldp+79,(vlSelfRef.fsm_tb__DOT__dut__DOT__ALU_op),7);
    bufp->fullBit(oldp+80,(vlSelfRef.fsm_tb__DOT__global_clock));
    bufp->fullIData(oldp+81,(vlSelfRef.fsm_tb__DOT__address_start),32);
    bufp->fullBit(oldp+82,(vlSelfRef.fsm_tb__DOT__reset));
    bufp->fullBit(oldp+83,(vlSelfRef.fsm_tb__DOT__global_interrupt));
    bufp->fullIData(oldp+84,(vlSelfRef.fsm_tb__DOT__errors),32);
    bufp->fullIData(oldp+85,(vlSelfRef.fsm_tb__DOT__finish_instruction__Vstatic__instructions),32);
    bufp->fullIData(oldp+86,(vlSelfRef.fsm_tb__DOT__dut__DOT__data_out_mem),32);
    bufp->fullIData(oldp+87,(((IData)(vlSelfRef.fsm_tb__DOT__dut__DOT__reg_in)
                               ? vlSelfRef.fsm_tb__DOT__dut__DOT__data_out_to_write
                               : vlSelfRef.fsm_tb__DOT__dut__DOT__ALU_output_load)),32);
    bufp->fullBit(oldp+88,(((IData)(vlSelfRef.fsm_tb__DOT__dut__DOT__cu__DOT__mem_read) 
                            | (0U == (IData)(vlSelfRef.fsm_tb__DOT__dut__DOT__current_state)))));
    bufp->fullBit(oldp+89,(((IData)(vlSelfRef.fsm_tb__DOT__dut__DOT__cu__DOT__mem_write) 
                            & (4U == (IData)(vlSelfRef.fsm_tb__DOT__dut__DOT__current_state)))));
}
