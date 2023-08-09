// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See rm_tb_lane.h for the primary calling header

#ifndef VERILATED_RM_TB_LANE___024ROOT_H_
#define VERILATED_RM_TB_LANE___024ROOT_H_  // guard

#include "verilated.h"

class rm_tb_lane__Syms;

class rm_tb_lane___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        VL_IN8(clk_i,0,0);
        VL_IN8(lane_vector_i,5,0);
        VL_IN8(lane_reset_i,0,0);
        VL_OUT8(monitor_o,4,0);
        CData/*5:0*/ lanewrap__DOT__lane_vector_reg;
        CData/*0:0*/ lanewrap__DOT__lane_reset_reg;
        CData/*3:0*/ lanewrap__DOT__dut__DOT__c0_i;
        CData/*3:0*/ lanewrap__DOT__dut__DOT__c1_i;
        CData/*0:0*/ lanewrap__DOT__dut__DOT__c0__DOT__ltl0c0_w_out_2;
        CData/*0:0*/ lanewrap__DOT__dut__DOT__c0__DOT__ltl0c0_w_out_7;
        CData/*0:0*/ lanewrap__DOT__dut__DOT__c0__DOT__ltl0c0_w_out_9;
        CData/*0:0*/ lanewrap__DOT__dut__DOT__c0__DOT__ltl1c0_w_out_3;
        CData/*0:0*/ lanewrap__DOT__dut__DOT__c0__DOT__ltl1c0_w_out_5;
        CData/*0:0*/ lanewrap__DOT__dut__DOT__c0__DOT__ltl1c0_w_out_9;
        CData/*7:0*/ lanewrap__DOT__dut__DOT__c0__DOT__automata_stage0C0__DOT__out_symbols;
        CData/*0:0*/ lanewrap__DOT__dut__DOT__c0__DOT__automata_stage0C0__DOT__out_reset;
        CData/*0:0*/ lanewrap__DOT__dut__DOT__c0__DOT__automata_stage0C0__DOT__automata_ltl0c0__DOT__start_of_data;
        CData/*0:0*/ lanewrap__DOT__dut__DOT__c0__DOT__automata_stage0C0__DOT__automata_ltl0c0__DOT__start_of_data_reg;
        CData/*0:0*/ lanewrap__DOT__dut__DOT__c0__DOT__automata_stage0C0__DOT__automata_ltl0c0__DOT__start_of_data_reg_ne;
        CData/*1:0*/ lanewrap__DOT__dut__DOT__c0__DOT__automata_stage0C0__DOT__automata_ltl0c0__DOT____Vcellinp__ltl0c0_ste_1__income_edges;
        CData/*3:0*/ lanewrap__DOT__dut__DOT__c0__DOT__automata_stage0C0__DOT__automata_ltl0c0__DOT____Vcellinp__ltl0c0_ste_4__income_edges;
        CData/*1:0*/ lanewrap__DOT__dut__DOT__c0__DOT__automata_stage0C0__DOT__automata_ltl0c0__DOT____Vcellinp__ltl0c0_ste_5__income_edges;
        CData/*1:0*/ lanewrap__DOT__dut__DOT__c0__DOT__automata_stage0C0__DOT__automata_ltl0c0__DOT____Vcellinp__ltl0c0_ste_8__income_edges;
        CData/*0:0*/ lanewrap__DOT__dut__DOT__c0__DOT__automata_stage0C0__DOT__automata_ltl0c0__DOT__lut_match_ltl0c0_1__DOT__match_internal;
        CData/*0:0*/ lanewrap__DOT__dut__DOT__c0__DOT__automata_stage0C0__DOT__automata_ltl0c0__DOT__ltl0c0_ste_1__DOT__internal_reg;
        CData/*0:0*/ lanewrap__DOT__dut__DOT__c0__DOT__automata_stage0C0__DOT__automata_ltl0c0__DOT__ltl0c0_ste_2__DOT__internal_reg;
        CData/*0:0*/ lanewrap__DOT__dut__DOT__c0__DOT__automata_stage0C0__DOT__automata_ltl0c0__DOT__ltl0c0_ste_3__DOT__internal_reg;
        CData/*0:0*/ lanewrap__DOT__dut__DOT__c0__DOT__automata_stage0C0__DOT__automata_ltl0c0__DOT__ltl0c0_ste_4__DOT__internal_reg;
        CData/*0:0*/ lanewrap__DOT__dut__DOT__c0__DOT__automata_stage0C0__DOT__automata_ltl0c0__DOT__ltl0c0_ste_5__DOT__internal_reg;
        CData/*0:0*/ lanewrap__DOT__dut__DOT__c0__DOT__automata_stage0C0__DOT__automata_ltl0c0__DOT__lut_match_ltl0c0_7__DOT__match_internal;
        CData/*0:0*/ lanewrap__DOT__dut__DOT__c0__DOT__automata_stage0C0__DOT__automata_ltl0c0__DOT__ltl0c0_ste_8__DOT__internal_reg;
        CData/*0:0*/ lanewrap__DOT__dut__DOT__c0__DOT__automata_stage0C0__DOT__automata_ltl1c0__DOT__start_of_data;
        CData/*1:0*/ lanewrap__DOT__dut__DOT__c0__DOT__automata_stage0C0__DOT__automata_ltl1c0__DOT____Vcellinp__ltl1c0_ste_1__income_edges;
        CData/*1:0*/ lanewrap__DOT__dut__DOT__c0__DOT__automata_stage0C0__DOT__automata_ltl1c0__DOT____Vcellinp__ltl1c0_ste_4__income_edges;
        CData/*3:0*/ lanewrap__DOT__dut__DOT__c0__DOT__automata_stage0C0__DOT__automata_ltl1c0__DOT____Vcellinp__ltl1c0_ste_7__income_edges;
        CData/*1:0*/ lanewrap__DOT__dut__DOT__c0__DOT__automata_stage0C0__DOT__automata_ltl1c0__DOT____Vcellinp__ltl1c0_ste_8__income_edges;
        CData/*0:0*/ lanewrap__DOT__dut__DOT__c0__DOT__automata_stage0C0__DOT__automata_ltl1c0__DOT__lut_match_ltl1c0_1__DOT__match_internal;
        CData/*0:0*/ lanewrap__DOT__dut__DOT__c0__DOT__automata_stage0C0__DOT__automata_ltl1c0__DOT__ltl1c0_ste_1__DOT__internal_reg;
        CData/*0:0*/ lanewrap__DOT__dut__DOT__c0__DOT__automata_stage0C0__DOT__automata_ltl1c0__DOT__ltl1c0_ste_2__DOT__internal_reg;
        CData/*0:0*/ lanewrap__DOT__dut__DOT__c0__DOT__automata_stage0C0__DOT__automata_ltl1c0__DOT__ltl1c0_ste_3__DOT__internal_reg;
        CData/*0:0*/ lanewrap__DOT__dut__DOT__c0__DOT__automata_stage0C0__DOT__automata_ltl1c0__DOT__ltl1c0_ste_4__DOT__internal_reg;
        CData/*0:0*/ lanewrap__DOT__dut__DOT__c0__DOT__automata_stage0C0__DOT__automata_ltl1c0__DOT__ltl1c0_ste_7__DOT__internal_reg;
        CData/*0:0*/ lanewrap__DOT__dut__DOT__c0__DOT__automata_stage0C0__DOT__automata_ltl1c0__DOT__ltl1c0_ste_8__DOT__internal_reg;
        CData/*0:0*/ lanewrap__DOT__dut__DOT__c1__DOT__ltl1c1_w_out_2;
        CData/*0:0*/ lanewrap__DOT__dut__DOT__c1__DOT__ltl1c1_w_out_7;
        CData/*0:0*/ lanewrap__DOT__dut__DOT__c1__DOT__ltl1c1_w_out_9;
        CData/*0:0*/ lanewrap__DOT__dut__DOT__c1__DOT__ltl2c1_w_out_3;
        CData/*0:0*/ lanewrap__DOT__dut__DOT__c1__DOT__ltl2c1_w_out_5;
        CData/*0:0*/ lanewrap__DOT__dut__DOT__c1__DOT__ltl2c1_w_out_9;
        CData/*0:0*/ lanewrap__DOT__dut__DOT__c1__DOT__ltl0c1_w_out_2;
        CData/*0:0*/ lanewrap__DOT__dut__DOT__c1__DOT__ltl0c1_w_out_7;
        CData/*0:0*/ lanewrap__DOT__dut__DOT__c1__DOT__ltl0c1_w_out_9;
        CData/*7:0*/ lanewrap__DOT__dut__DOT__c1__DOT__automata_stage0c1__DOT__out_symbols;
        CData/*0:0*/ lanewrap__DOT__dut__DOT__c1__DOT__automata_stage0c1__DOT__out_reset;
        CData/*1:0*/ lanewrap__DOT__dut__DOT__c1__DOT__automata_stage0c1__DOT__automata_ltl1c1__DOT____Vcellinp__ltl1c1_ste_1__income_edges;
        CData/*3:0*/ lanewrap__DOT__dut__DOT__c1__DOT__automata_stage0c1__DOT__automata_ltl1c1__DOT____Vcellinp__ltl1c1_ste_4__income_edges;
        CData/*1:0*/ lanewrap__DOT__dut__DOT__c1__DOT__automata_stage0c1__DOT__automata_ltl1c1__DOT____Vcellinp__ltl1c1_ste_5__income_edges;
        CData/*1:0*/ lanewrap__DOT__dut__DOT__c1__DOT__automata_stage0c1__DOT__automata_ltl1c1__DOT____Vcellinp__ltl1c1_ste_8__income_edges;
        CData/*0:0*/ lanewrap__DOT__dut__DOT__c1__DOT__automata_stage0c1__DOT__automata_ltl1c1__DOT__lut_match_ltl1c1_1__DOT__match_internal;
        CData/*0:0*/ lanewrap__DOT__dut__DOT__c1__DOT__automata_stage0c1__DOT__automata_ltl1c1__DOT__ltl1c1_ste_1__DOT__internal_reg;
        CData/*0:0*/ lanewrap__DOT__dut__DOT__c1__DOT__automata_stage0c1__DOT__automata_ltl1c1__DOT__ltl1c1_ste_2__DOT__internal_reg;
        CData/*0:0*/ lanewrap__DOT__dut__DOT__c1__DOT__automata_stage0c1__DOT__automata_ltl1c1__DOT__ltl1c1_ste_3__DOT__internal_reg;
        CData/*0:0*/ lanewrap__DOT__dut__DOT__c1__DOT__automata_stage0c1__DOT__automata_ltl1c1__DOT__ltl1c1_ste_4__DOT__internal_reg;
        CData/*0:0*/ lanewrap__DOT__dut__DOT__c1__DOT__automata_stage0c1__DOT__automata_ltl1c1__DOT__ltl1c1_ste_5__DOT__internal_reg;
    };
    struct {
        CData/*0:0*/ lanewrap__DOT__dut__DOT__c1__DOT__automata_stage0c1__DOT__automata_ltl1c1__DOT__ltl1c1_ste_8__DOT__internal_reg;
        CData/*1:0*/ lanewrap__DOT__dut__DOT__c1__DOT__automata_stage0c1__DOT__automata_ltl2c1__DOT____Vcellinp__ltl2c1_ste_1__income_edges;
        CData/*1:0*/ lanewrap__DOT__dut__DOT__c1__DOT__automata_stage0c1__DOT__automata_ltl2c1__DOT____Vcellinp__ltl2c1_ste_4__income_edges;
        CData/*3:0*/ lanewrap__DOT__dut__DOT__c1__DOT__automata_stage0c1__DOT__automata_ltl2c1__DOT____Vcellinp__ltl2c1_ste_7__income_edges;
        CData/*1:0*/ lanewrap__DOT__dut__DOT__c1__DOT__automata_stage0c1__DOT__automata_ltl2c1__DOT____Vcellinp__ltl2c1_ste_8__income_edges;
        CData/*0:0*/ lanewrap__DOT__dut__DOT__c1__DOT__automata_stage0c1__DOT__automata_ltl2c1__DOT__lut_match_ltl2c1_1__DOT__match_internal;
        CData/*0:0*/ lanewrap__DOT__dut__DOT__c1__DOT__automata_stage0c1__DOT__automata_ltl2c1__DOT__ltl2c1_ste_1__DOT__internal_reg;
        CData/*0:0*/ lanewrap__DOT__dut__DOT__c1__DOT__automata_stage0c1__DOT__automata_ltl2c1__DOT__ltl2c1_ste_2__DOT__internal_reg;
        CData/*0:0*/ lanewrap__DOT__dut__DOT__c1__DOT__automata_stage0c1__DOT__automata_ltl2c1__DOT__ltl2c1_ste_3__DOT__internal_reg;
        CData/*0:0*/ lanewrap__DOT__dut__DOT__c1__DOT__automata_stage0c1__DOT__automata_ltl2c1__DOT__ltl2c1_ste_4__DOT__internal_reg;
        CData/*0:0*/ lanewrap__DOT__dut__DOT__c1__DOT__automata_stage0c1__DOT__automata_ltl2c1__DOT__ltl2c1_ste_7__DOT__internal_reg;
        CData/*0:0*/ lanewrap__DOT__dut__DOT__c1__DOT__automata_stage0c1__DOT__automata_ltl2c1__DOT__ltl2c1_ste_8__DOT__internal_reg;
        CData/*1:0*/ lanewrap__DOT__dut__DOT__c1__DOT__automata_stage0c1__DOT__automata_ltl0c1__DOT____Vcellinp__ltl0c1_ste_1__income_edges;
        CData/*3:0*/ lanewrap__DOT__dut__DOT__c1__DOT__automata_stage0c1__DOT__automata_ltl0c1__DOT____Vcellinp__ltl0c1_ste_4__income_edges;
        CData/*1:0*/ lanewrap__DOT__dut__DOT__c1__DOT__automata_stage0c1__DOT__automata_ltl0c1__DOT____Vcellinp__ltl0c1_ste_5__income_edges;
        CData/*1:0*/ lanewrap__DOT__dut__DOT__c1__DOT__automata_stage0c1__DOT__automata_ltl0c1__DOT____Vcellinp__ltl0c1_ste_8__income_edges;
        CData/*0:0*/ lanewrap__DOT__dut__DOT__c1__DOT__automata_stage0c1__DOT__automata_ltl0c1__DOT__ltl0c1_ste_1__DOT__internal_reg;
        CData/*0:0*/ lanewrap__DOT__dut__DOT__c1__DOT__automata_stage0c1__DOT__automata_ltl0c1__DOT__lut_match_ltl0c1_2__DOT__match_internal;
        CData/*0:0*/ lanewrap__DOT__dut__DOT__c1__DOT__automata_stage0c1__DOT__automata_ltl0c1__DOT__ltl0c1_ste_2__DOT__internal_reg;
        CData/*0:0*/ lanewrap__DOT__dut__DOT__c1__DOT__automata_stage0c1__DOT__automata_ltl0c1__DOT__ltl0c1_ste_3__DOT__internal_reg;
        CData/*0:0*/ lanewrap__DOT__dut__DOT__c1__DOT__automata_stage0c1__DOT__automata_ltl0c1__DOT__ltl0c1_ste_4__DOT__internal_reg;
        CData/*0:0*/ lanewrap__DOT__dut__DOT__c1__DOT__automata_stage0c1__DOT__automata_ltl0c1__DOT__ltl0c1_ste_5__DOT__internal_reg;
        CData/*0:0*/ lanewrap__DOT__dut__DOT__c1__DOT__automata_stage0c1__DOT__automata_ltl0c1__DOT__lut_match_ltl0c1_6__DOT__match_internal;
        CData/*0:0*/ lanewrap__DOT__dut__DOT__c1__DOT__automata_stage0c1__DOT__automata_ltl0c1__DOT__ltl0c1_ste_8__DOT__internal_reg;
        CData/*0:0*/ __VdfgTmp_h7a557b80__0;
        CData/*0:0*/ __VdfgTmp_h5ee6e828__0;
        CData/*0:0*/ __VdfgTmp_h6dd2d5bc__0;
        CData/*0:0*/ __VdfgTmp_h1f7eb2d3__0;
        CData/*0:0*/ __VdfgTmp_had61064c__0;
        CData/*0:0*/ __VdfgTmp_hf8f9c47f__0;
        CData/*0:0*/ __VdfgTmp_h175d29ab__0;
        CData/*0:0*/ __VdfgTmp_h21aa8855__0;
        CData/*0:0*/ __VdfgTmp_h1a33c7a9__0;
        CData/*0:0*/ __VdfgTmp_h477da5fc__0;
        CData/*0:0*/ __VdfgTmp_hbc9ec8b7__0;
        CData/*0:0*/ __VdfgTmp_h2a84069a__0;
        CData/*0:0*/ __Vtrigrprev__TOP__clk_i;
        CData/*0:0*/ __VactContinue;
        IData/*31:0*/ __VstlIterCount;
        IData/*31:0*/ __VactIterCount;
        VlUnpacked<CData/*0:0*/, 2> __Vm_traceActivity;
    };
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<2> __VactTriggered;
    VlTriggerVec<2> __VnbaTriggered;

    // INTERNAL VARIABLES
    rm_tb_lane__Syms* const vlSymsp;

    // CONSTRUCTORS
    rm_tb_lane___024root(rm_tb_lane__Syms* symsp, const char* v__name);
    ~rm_tb_lane___024root();
    VL_UNCOPYABLE(rm_tb_lane___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
