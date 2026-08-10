// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Varchitecture_components.h for the primary calling header

#include "Varchitecture_components__pch.h"

void Varchitecture_components___024root___ctor_var_reset(Varchitecture_components___024root* vlSelf);

Varchitecture_components___024root::Varchitecture_components___024root(Varchitecture_components__Syms* symsp, const char* namep)
    : __VdlySched{*symsp->_vm_contextp__}
 {
    vlSymsp = symsp;
    vlNamep = strdup(namep);
    // Reset structure values
    Varchitecture_components___024root___ctor_var_reset(this);
}

void Varchitecture_components___024root::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Varchitecture_components___024root::~Varchitecture_components___024root() {
    VL_DO_DANGLING(std::free(const_cast<char*>(vlNamep)), vlNamep);
}
