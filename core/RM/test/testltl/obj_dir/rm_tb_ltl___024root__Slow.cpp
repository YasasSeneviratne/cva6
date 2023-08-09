// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See rm_tb_ltl.h for the primary calling header

#include "verilated.h"

#include "rm_tb_ltl__Syms.h"
#include "rm_tb_ltl___024root.h"

void rm_tb_ltl___024root___ctor_var_reset(rm_tb_ltl___024root* vlSelf);

rm_tb_ltl___024root::rm_tb_ltl___024root(rm_tb_ltl__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    rm_tb_ltl___024root___ctor_var_reset(this);
}

void rm_tb_ltl___024root::__Vconfigure(bool first) {
    if (false && first) {}  // Prevent unused
}

rm_tb_ltl___024root::~rm_tb_ltl___024root() {
}
