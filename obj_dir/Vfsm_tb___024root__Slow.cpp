// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vfsm_tb.h for the primary calling header

#include "Vfsm_tb__pch.h"

void Vfsm_tb___024root___ctor_var_reset(Vfsm_tb___024root* vlSelf);

Vfsm_tb___024root::Vfsm_tb___024root(Vfsm_tb__Syms* symsp, const char* namep)
    : __VdlySched{*symsp->_vm_contextp__}
 {
    vlSymsp = symsp;
    vlNamep = strdup(namep);
    // Reset structure values
    Vfsm_tb___024root___ctor_var_reset(this);
}

void Vfsm_tb___024root::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vfsm_tb___024root::~Vfsm_tb___024root() {
    VL_DO_DANGLING(std::free(const_cast<char*>(vlNamep)), vlNamep);
}
