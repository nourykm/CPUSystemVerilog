// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vhardware_memory_tb.h for the primary calling header

#include "Vhardware_memory_tb__pch.h"

void Vhardware_memory_tb___024root___ctor_var_reset(Vhardware_memory_tb___024root* vlSelf);

Vhardware_memory_tb___024root::Vhardware_memory_tb___024root(Vhardware_memory_tb__Syms* symsp, const char* namep)
    : __VdlySched{*symsp->_vm_contextp__}
 {
    vlSymsp = symsp;
    vlNamep = strdup(namep);
    // Reset structure values
    Vhardware_memory_tb___024root___ctor_var_reset(this);
}

void Vhardware_memory_tb___024root::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vhardware_memory_tb___024root::~Vhardware_memory_tb___024root() {
    VL_DO_DANGLING(std::free(const_cast<char*>(vlNamep)), vlNamep);
}
