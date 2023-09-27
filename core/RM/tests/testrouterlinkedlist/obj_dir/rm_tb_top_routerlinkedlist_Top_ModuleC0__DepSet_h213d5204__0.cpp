// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See rm_tb_top_routerlinkedlist.h for the primary calling header

#include "verilated.h"

#include "rm_tb_top_routerlinkedlist_Top_ModuleC0.h"

VL_INLINE_OPT void rm_tb_top_routerlinkedlist_Top_ModuleC0___nba_comb__TOP__rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__0__KET____DOT__lane__DOT__I0c0__2(rm_tb_top_routerlinkedlist_Top_ModuleC0* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    rm_tb_top_routerlinkedlist__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            rm_tb_top_routerlinkedlist_Top_ModuleC0___nba_comb__TOP__rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__0__KET____DOT__lane__DOT__I0c0__2\n"); );
    // Body
    vlSelf->automata_stage0__DOT__automata_ltl0c0__DOT____Vcellinp__ltl0c0_ste_1__income_edges 
        = (((IData)(vlSelf->__PVT__automata_stage0__DOT__automata_ltl1c0__DOT__start_of_data) 
            << 1U) | ((IData)(vlSelf->__PVT__automata_stage0__DOT__automata_ltl0c0__DOT__ltl0c0_ste_1__DOT__internal_reg) 
                      & (IData)(vlSelf->__PVT__automata_stage0__DOT__automata_ltl0c0__DOT__lut_match_ltl0c0_1__DOT__match_internal)));
    vlSelf->automata_stage0__DOT__automata_ltl1c0__DOT____Vcellinp__ltl1c0_ste_1__income_edges 
        = (((IData)(vlSelf->__PVT__automata_stage0__DOT__automata_ltl1c0__DOT__start_of_data) 
            << 1U) | ((IData)(vlSelf->__PVT__automata_stage0__DOT__automata_ltl1c0__DOT__ltl1c0_ste_1__DOT__internal_reg) 
                      & (IData)(vlSelf->__PVT__automata_stage0__DOT__automata_ltl1c0__DOT__lut_match_ltl1c0_1__DOT__match_internal)));
}
