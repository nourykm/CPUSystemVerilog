// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VARCHITECTURE_COMPONENTS__SYMS_H_
#define VERILATED_VARCHITECTURE_COMPONENTS__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODEL CLASS

#include "Varchitecture_components.h"

// INCLUDE MODULE CLASSES
#include "Varchitecture_components___024root.h"

// SYMS CLASS (contains all model state)
class alignas(VL_CACHE_LINE_BYTES) Varchitecture_components__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    Varchitecture_components* const __Vm_modelp;
    bool __Vm_activity = false;  ///< Used by trace routines to determine change occurred
    uint32_t __Vm_baseCode = 0;  ///< Used by trace routines when tracing multiple models
    VlDeleter __Vm_deleter;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    Varchitecture_components___024root TOP;

    // CONSTRUCTORS
    Varchitecture_components__Syms(VerilatedContext* contextp, const char* namep, Varchitecture_components* modelp);
    ~Varchitecture_components__Syms();

    // METHODS
    const char* name() const { return TOP.vlNamep; }
};

#endif  // guard
