// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vfsm_tb.h for the primary calling header

#ifndef VERILATED_VFSM_TB___024ROOT_H_
#define VERILATED_VFSM_TB___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vfsm_tb__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vfsm_tb___024root final {
  public:

    // DESIGN SPECIFIC STATE
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        CData/*0:0*/ fsm_tb__DOT__global_clock;
        CData/*0:0*/ fsm_tb__DOT__reset;
        CData/*0:0*/ fsm_tb__DOT__global_interrupt;
        CData/*4:0*/ fsm_tb__DOT__do_write_rf__Vstatic__reg_num;
        CData/*0:0*/ fsm_tb__DOT__dut__DOT__instr_done;
        CData/*0:0*/ fsm_tb__DOT__dut__DOT__AddrSel;
        CData/*0:0*/ fsm_tb__DOT__dut__DOT__PC_write;
        CData/*0:0*/ fsm_tb__DOT__dut__DOT__AB_load;
        CData/*0:0*/ fsm_tb__DOT__dut__DOT__ALU_out_load;
        CData/*0:0*/ fsm_tb__DOT__dut__DOT__ALU_a_en;
        CData/*2:0*/ fsm_tb__DOT__dut__DOT__ALU_b_en;
        CData/*0:0*/ fsm_tb__DOT__dut__DOT__IR_load;
        CData/*0:0*/ fsm_tb__DOT__dut__DOT__MDR_load;
        CData/*0:0*/ fsm_tb__DOT__dut__DOT__reg_in;
        CData/*0:0*/ fsm_tb__DOT__dut__DOT__flag_write;
        CData/*6:0*/ fsm_tb__DOT__dut__DOT__ALU_op;
        CData/*2:0*/ fsm_tb__DOT__dut__DOT__current_state;
        CData/*2:0*/ fsm_tb__DOT__dut__DOT__next_state;
        CData/*0:0*/ fsm_tb__DOT__dut__DOT__neg;
        CData/*0:0*/ fsm_tb__DOT__dut__DOT__zero;
        CData/*0:0*/ fsm_tb__DOT__dut__DOT__RF_write;
        CData/*6:0*/ fsm_tb__DOT__dut__DOT__FSM_alu_op;
        CData/*2:0*/ fsm_tb__DOT__dut__DOT__FSM_alu_b_en;
        CData/*6:0*/ fsm_tb__DOT__dut__DOT__cu__DOT__alu_op_code;
        CData/*4:0*/ fsm_tb__DOT__dut__DOT__cu__DOT__rs1;
        CData/*4:0*/ fsm_tb__DOT__dut__DOT__cu__DOT__rs2;
        CData/*6:0*/ fsm_tb__DOT__dut__DOT__cu__DOT__immediate_7;
        CData/*2:0*/ fsm_tb__DOT__dut__DOT__cu__DOT__alu_b_en;
        CData/*1:0*/ fsm_tb__DOT__dut__DOT__cu__DOT__instruction_type;
        CData/*0:0*/ fsm_tb__DOT__dut__DOT__cu__DOT__mem_read;
        CData/*0:0*/ fsm_tb__DOT__dut__DOT__cu__DOT__mem_write;
        CData/*0:0*/ __VstlFirstIteration;
        CData/*0:0*/ __VstlPhaseResult;
        CData/*0:0*/ __Vtrigprevexpr___TOP__fsm_tb__DOT__global_clock__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__fsm_tb__DOT__global_interrupt__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__fsm_tb__DOT__dut__DOT__instr_done__0;
        CData/*0:0*/ __Vtrigprevexpr_hd6618f3c__1;
        CData/*0:0*/ __VactPhaseResult;
        CData/*0:0*/ __VinactPhaseResult;
        CData/*0:0*/ __VnbaPhaseResult;
        SData/*11:0*/ fsm_tb__DOT__dut__DOT__cu__DOT__immediate_12;
        IData/*31:0*/ fsm_tb__DOT__address_start;
        IData/*31:0*/ fsm_tb__DOT__errors;
        IData/*31:0*/ fsm_tb__DOT__do_write_rf__Vstatic__amount;
        IData/*31:0*/ fsm_tb__DOT__finish_instruction__Vstatic__instructions;
        IData/*31:0*/ fsm_tb__DOT__dut__DOT__AddrSelOUT;
        IData/*31:0*/ fsm_tb__DOT__dut__DOT__a_load;
        IData/*31:0*/ fsm_tb__DOT__dut__DOT__b_load;
        IData/*31:0*/ fsm_tb__DOT__dut__DOT__ALU_b;
        IData/*31:0*/ fsm_tb__DOT__dut__DOT__ALU_a;
        IData/*31:0*/ fsm_tb__DOT__dut__DOT__ALU_output_load;
        IData/*31:0*/ fsm_tb__DOT__dut__DOT__data_out_mem;
        IData/*31:0*/ fsm_tb__DOT__dut__DOT__data_out_to_write;
        IData/*31:0*/ fsm_tb__DOT__dut__DOT__IR_out;
        IData/*31:0*/ fsm_tb__DOT__dut__DOT__alu__DOT__out;
        IData/*31:0*/ fsm_tb__DOT__dut__DOT__pc__DOT__address;
        IData/*31:0*/ __VactIterCount;
        IData/*31:0*/ __VinactIterCount;
        IData/*31:0*/ __Vi;
        VlUnpacked<IData/*31:0*/, 32> fsm_tb__DOT__dut__DOT__rf__DOT__registers;
        VlUnpacked<IData/*31:0*/, 4096> fsm_tb__DOT__dut__DOT__memory__DOT__memory;
        VlUnpacked<QData/*63:0*/, 1> __VstlTriggered;
        VlUnpacked<QData/*63:0*/, 1> __VactTriggered;
        VlUnpacked<QData/*63:0*/, 1> __VactTriggeredAcc;
    };
    struct {
        VlUnpacked<QData/*63:0*/, 1> __VnbaTriggered;
        VlUnpacked<CData/*0:0*/, 5> __Vm_traceActivity;
    };
    std::string fsm_tb__DOT__load_instructions__Vstatic__file;
    std::string __Vtask_fsm_tb__DOT__load_instructions__4__file;
    std::string __Vtask_fsm_tb__DOT__load_instructions__11__file;
    VlDelayScheduler __VdlySched;
    VlTriggerScheduler __VtrigSched_h128ed905__0;
    VlTriggerScheduler __VtrigSched_h128ec9c4__0;
    VlTriggerScheduler __VtrigSched_hc4faf76f__0;
    VlTriggerScheduler __VtrigSched_h5255dc51__0;

    // INTERNAL VARIABLES
    Vfsm_tb__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vfsm_tb___024root(Vfsm_tb__Syms* symsp, const char* namep);
    ~Vfsm_tb___024root();
    VL_UNCOPYABLE(Vfsm_tb___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
