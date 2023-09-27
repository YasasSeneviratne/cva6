// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See rm_tb_top_routerlinkedlist.h for the primary calling header

#include "verilated.h"

#include "rm_tb_top_routerlinkedlist_Top_ModuleC1.h"
#include "rm_tb_top_routerlinkedlist__Syms.h"

void rm_tb_top_routerlinkedlist_Top_ModuleC1___ctor_var_reset(rm_tb_top_routerlinkedlist_Top_ModuleC1* vlSelf);

rm_tb_top_routerlinkedlist_Top_ModuleC1::rm_tb_top_routerlinkedlist_Top_ModuleC1(rm_tb_top_routerlinkedlist__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    rm_tb_top_routerlinkedlist_Top_ModuleC1___ctor_var_reset(this);
}

void rm_tb_top_routerlinkedlist_Top_ModuleC1::__Vconfigure(bool first) {
    if (false && first) {}  // Prevent unused
}

rm_tb_top_routerlinkedlist_Top_ModuleC1::~rm_tb_top_routerlinkedlist_Top_ModuleC1() {
}
