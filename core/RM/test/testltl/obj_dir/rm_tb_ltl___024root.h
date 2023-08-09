// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See rm_tb_ltl.h for the primary calling header

#ifndef VERILATED_RM_TB_LTL___024ROOT_H_
#define VERILATED_RM_TB_LTL___024ROOT_H_  // guard

#include "verilated.h"

class rm_tb_ltl__Syms;

class rm_tb_ltl___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(clk,0,0);
    VL_IN8(run,0,0);
    VL_IN8(reset,0,0);
    VL_IN8(symbols,7,0);
    VL_OUT8(ltl0c0_w_out_2,0,0);
    VL_OUT8(ltl0c0_w_out_4,0,0);
    VL_OUT8(ltl0c0_w_out_7,0,0);
    VL_OUT8(ltl0c0_w_out_9,0,0);
    CData/*0:0*/ ltlwrap__DOT__run_reg;
    CData/*0:0*/ ltlwrap__DOT__reset_reg;
    CData/*0:0*/ ltlwrap__DOT__lreset_reg;
    CData/*7:0*/ ltlwrap__DOT__symbols_reg;
    CData/*0:0*/ ltlwrap__DOT__dut__DOT__start_of_data;
    CData/*0:0*/ ltlwrap__DOT__dut__DOT__start_of_data_reg;
    CData/*1:0*/ ltlwrap__DOT__dut__DOT____Vcellinp__ltl0c0_ste_1__income_edges;
    CData/*1:0*/ ltlwrap__DOT__dut__DOT____Vcellinp__ltl0c0_ste_5__income_edges;
    CData/*1:0*/ ltlwrap__DOT__dut__DOT____Vcellinp__ltl0c0_ste_8__income_edges;
    CData/*0:0*/ ltlwrap__DOT__dut__DOT__lut_match_ltl0c0_1__DOT__match_internal;
    CData/*0:0*/ ltlwrap__DOT__dut__DOT__ltl0c0_ste_1__DOT__internal_reg;
    CData/*0:0*/ ltlwrap__DOT__dut__DOT__ltl0c0_ste_2__DOT__internal_reg;
    CData/*0:0*/ ltlwrap__DOT__dut__DOT__ltl0c0_ste_3__DOT__internal_reg;
    CData/*0:0*/ ltlwrap__DOT__dut__DOT__ltl0c0_ste_4__DOT__internal_reg;
    CData/*0:0*/ ltlwrap__DOT__dut__DOT__ltl0c0_ste_5__DOT__internal_reg;
    CData/*0:0*/ ltlwrap__DOT__dut__DOT__ltl0c0_ste_6__DOT__internal_reg;
    CData/*0:0*/ ltlwrap__DOT__dut__DOT__ltl0c0_ste_7__DOT__internal_reg;
    CData/*0:0*/ ltlwrap__DOT__dut__DOT__ltl0c0_ste_8__DOT__internal_reg;
    CData/*0:0*/ ltlwrap__DOT__dut__DOT__ltl0c0_ste_9__DOT__internal_reg;
    CData/*0:0*/ __VdfgTmp_h075c32ea__0;
    CData/*0:0*/ __VdfgTmp_hbe0d7d58__0;
    CData/*0:0*/ __Vtrigrprev__TOP__clk;
    CData/*0:0*/ __VactDidInit;
    CData/*0:0*/ __VactContinue;
    IData/*31:0*/ __VstlIterCount;
    IData/*31:0*/ __VactIterCount;
    VlUnpacked<CData/*0:0*/, 2> __Vm_traceActivity;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<1> __VactTriggered;
    VlTriggerVec<1> __VnbaTriggered;

    // INTERNAL VARIABLES
    rm_tb_ltl__Syms* const vlSymsp;

    // CONSTRUCTORS
    rm_tb_ltl___024root(rm_tb_ltl__Syms* symsp, const char* v__name);
    ~rm_tb_ltl___024root();
    VL_UNCOPYABLE(rm_tb_ltl___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
