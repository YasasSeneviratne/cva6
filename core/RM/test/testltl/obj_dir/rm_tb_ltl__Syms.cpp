// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "rm_tb_ltl__Syms.h"
#include "rm_tb_ltl.h"
#include "rm_tb_ltl___024root.h"

// FUNCTIONS
rm_tb_ltl__Syms::~rm_tb_ltl__Syms()
{
}

rm_tb_ltl__Syms::rm_tb_ltl__Syms(VerilatedContext* contextp, const char* namep, rm_tb_ltl* modelp)
    : VerilatedSyms{contextp}
    // Setup internal state of the Syms class
    , __Vm_modelp{modelp}
    // Setup module instances
    , TOP{this, namep}
{
    // Configure time unit / time precision
    _vm_contextp__->timeunit(-12);
    _vm_contextp__->timeprecision(-12);
    // Setup each module's pointers to their submodules
    // Setup each module's pointer back to symbol table (for public functions)
    TOP.__Vconfigure(true);
}
