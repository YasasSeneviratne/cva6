// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See rm_tb_top_routerlinkedlist.h for the primary calling header

#ifndef VERILATED_RM_TB_TOP_ROUTERLINKEDLIST_TOP_MODULEC1_H_
#define VERILATED_RM_TB_TOP_ROUTERLINKEDLIST_TOP_MODULEC1_H_  // guard

#include "verilated.h"

class rm_tb_top_routerlinkedlist__Syms;

class rm_tb_top_routerlinkedlist_Top_ModuleC1 final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(clk,0,0);
    VL_IN8(reset,0,0);
    VL_IN8(run,0,0);
    VL_IN8(symbols,7,0);
    VL_OUT8(ltl1c1,0,0);
    VL_OUT8(ltl2c1,0,0);
    VL_OUT8(ltl0c1,0,0);
    CData/*0:0*/ __PVT__ltl1c1_w_out_2;
    CData/*0:0*/ __PVT__ltl1c1_w_out_7;
    CData/*0:0*/ __PVT__ltl1c1_w_out_9;
    CData/*0:0*/ __PVT__ltl2c1_w_out_3;
    CData/*0:0*/ __PVT__ltl2c1_w_out_5;
    CData/*0:0*/ __PVT__ltl2c1_w_out_9;
    CData/*0:0*/ __PVT__ltl0c1_w_out_2;
    CData/*0:0*/ __PVT__ltl0c1_w_out_7;
    CData/*0:0*/ __PVT__ltl0c1_w_out_9;
    CData/*7:0*/ __PVT__automata_stage0c1__DOT__out_symbols;
    CData/*0:0*/ __PVT__automata_stage0c1__DOT__out_reset;
    CData/*1:0*/ automata_stage0c1__DOT__automata_ltl1c1__DOT____Vcellinp__ltl1c1_ste_1__income_edges;
    CData/*3:0*/ automata_stage0c1__DOT__automata_ltl1c1__DOT____Vcellinp__ltl1c1_ste_4__income_edges;
    CData/*1:0*/ automata_stage0c1__DOT__automata_ltl1c1__DOT____Vcellinp__ltl1c1_ste_5__income_edges;
    CData/*1:0*/ automata_stage0c1__DOT__automata_ltl1c1__DOT____Vcellinp__ltl1c1_ste_8__income_edges;
    CData/*0:0*/ __PVT__automata_stage0c1__DOT__automata_ltl1c1__DOT__lut_match_ltl1c1_1__DOT__match_internal;
    CData/*0:0*/ __PVT__automata_stage0c1__DOT__automata_ltl1c1__DOT__ltl1c1_ste_1__DOT__internal_reg;
    CData/*0:0*/ __PVT__automata_stage0c1__DOT__automata_ltl1c1__DOT__ltl1c1_ste_2__DOT__internal_reg;
    CData/*0:0*/ __PVT__automata_stage0c1__DOT__automata_ltl1c1__DOT__ltl1c1_ste_3__DOT__internal_reg;
    CData/*0:0*/ __PVT__automata_stage0c1__DOT__automata_ltl1c1__DOT__ltl1c1_ste_4__DOT__internal_reg;
    CData/*0:0*/ __PVT__automata_stage0c1__DOT__automata_ltl1c1__DOT__ltl1c1_ste_5__DOT__internal_reg;
    CData/*0:0*/ __PVT__automata_stage0c1__DOT__automata_ltl1c1__DOT__ltl1c1_ste_8__DOT__internal_reg;
    CData/*0:0*/ __PVT__automata_stage0c1__DOT__automata_ltl2c1__DOT__start_of_data;
    CData/*0:0*/ __PVT__automata_stage0c1__DOT__automata_ltl2c1__DOT__start_of_data_reg;
    CData/*0:0*/ __PVT__automata_stage0c1__DOT__automata_ltl2c1__DOT__start_of_data_reg_ne;
    CData/*1:0*/ automata_stage0c1__DOT__automata_ltl2c1__DOT____Vcellinp__ltl2c1_ste_1__income_edges;
    CData/*1:0*/ automata_stage0c1__DOT__automata_ltl2c1__DOT____Vcellinp__ltl2c1_ste_4__income_edges;
    CData/*3:0*/ automata_stage0c1__DOT__automata_ltl2c1__DOT____Vcellinp__ltl2c1_ste_7__income_edges;
    CData/*1:0*/ automata_stage0c1__DOT__automata_ltl2c1__DOT____Vcellinp__ltl2c1_ste_8__income_edges;
    CData/*0:0*/ __PVT__automata_stage0c1__DOT__automata_ltl2c1__DOT__lut_match_ltl2c1_1__DOT__match_internal;
    CData/*0:0*/ __PVT__automata_stage0c1__DOT__automata_ltl2c1__DOT__ltl2c1_ste_1__DOT__internal_reg;
    CData/*0:0*/ __PVT__automata_stage0c1__DOT__automata_ltl2c1__DOT__ltl2c1_ste_2__DOT__internal_reg;
    CData/*0:0*/ __PVT__automata_stage0c1__DOT__automata_ltl2c1__DOT__ltl2c1_ste_3__DOT__internal_reg;
    CData/*0:0*/ __PVT__automata_stage0c1__DOT__automata_ltl2c1__DOT__ltl2c1_ste_4__DOT__internal_reg;
    CData/*0:0*/ __PVT__automata_stage0c1__DOT__automata_ltl2c1__DOT__ltl2c1_ste_7__DOT__internal_reg;
    CData/*0:0*/ __PVT__automata_stage0c1__DOT__automata_ltl2c1__DOT__ltl2c1_ste_8__DOT__internal_reg;
    CData/*1:0*/ automata_stage0c1__DOT__automata_ltl0c1__DOT____Vcellinp__ltl0c1_ste_1__income_edges;
    CData/*3:0*/ automata_stage0c1__DOT__automata_ltl0c1__DOT____Vcellinp__ltl0c1_ste_4__income_edges;
    CData/*1:0*/ automata_stage0c1__DOT__automata_ltl0c1__DOT____Vcellinp__ltl0c1_ste_5__income_edges;
    CData/*1:0*/ automata_stage0c1__DOT__automata_ltl0c1__DOT____Vcellinp__ltl0c1_ste_8__income_edges;
    CData/*0:0*/ __PVT__automata_stage0c1__DOT__automata_ltl0c1__DOT__ltl0c1_ste_1__DOT__internal_reg;
    CData/*0:0*/ __PVT__automata_stage0c1__DOT__automata_ltl0c1__DOT__lut_match_ltl0c1_2__DOT__match_internal;
    CData/*0:0*/ __PVT__automata_stage0c1__DOT__automata_ltl0c1__DOT__ltl0c1_ste_2__DOT__internal_reg;
    CData/*0:0*/ __PVT__automata_stage0c1__DOT__automata_ltl0c1__DOT__ltl0c1_ste_3__DOT__internal_reg;
    CData/*0:0*/ __PVT__automata_stage0c1__DOT__automata_ltl0c1__DOT__ltl0c1_ste_4__DOT__internal_reg;
    CData/*0:0*/ __PVT__automata_stage0c1__DOT__automata_ltl0c1__DOT__ltl0c1_ste_5__DOT__internal_reg;
    CData/*0:0*/ __PVT__automata_stage0c1__DOT__automata_ltl0c1__DOT__lut_match_ltl0c1_6__DOT__match_internal;
    CData/*0:0*/ __PVT__automata_stage0c1__DOT__automata_ltl0c1__DOT__ltl0c1_ste_8__DOT__internal_reg;
    CData/*0:0*/ __VdfgTmp_hb5b42c0f__0;
    CData/*0:0*/ __VdfgTmp_h2aa42c51__0;
    CData/*0:0*/ __VdfgTmp_hb30bd723__0;
    CData/*0:0*/ __VdfgTmp_he9b10395__0;
    CData/*0:0*/ __VdfgTmp_hd3ae48ab__0;
    CData/*0:0*/ __VdfgTmp_h8f083f76__0;

    // INTERNAL VARIABLES
    rm_tb_top_routerlinkedlist__Syms* const vlSymsp;

    // CONSTRUCTORS
    rm_tb_top_routerlinkedlist_Top_ModuleC1(rm_tb_top_routerlinkedlist__Syms* symsp, const char* v__name);
    ~rm_tb_top_routerlinkedlist_Top_ModuleC1();
    VL_UNCOPYABLE(rm_tb_top_routerlinkedlist_Top_ModuleC1);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
