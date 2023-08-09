// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See rm_tb_lane.h for the primary calling header

#include "verilated.h"

#include "rm_tb_lane___024root.h"

void rm_tb_lane___024root___eval_act(rm_tb_lane___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    rm_tb_lane__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    rm_tb_lane___024root___eval_act\n"); );
}

VL_INLINE_OPT void rm_tb_lane___024root___nba_sequent__TOP__0(rm_tb_lane___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    rm_tb_lane__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    rm_tb_lane___024root___nba_sequent__TOP__0\n"); );
    // Body
    if (vlSelf->lanewrap__DOT__lane_reset_reg) {
        vlSelf->lanewrap__DOT__dut__DOT__c1__DOT__automata_stage0c1__DOT__out_reset = 1U;
        vlSelf->lanewrap__DOT__dut__DOT__c0__DOT__automata_stage0C0__DOT__out_reset = 1U;
        vlSelf->lanewrap__DOT__dut__DOT__c0__DOT__automata_stage0C0__DOT__automata_ltl0c0__DOT__ltl0c0_ste_1__DOT__internal_reg = 1U;
        vlSelf->lanewrap__DOT__dut__DOT__c0__DOT__automata_stage0C0__DOT__automata_ltl0c0__DOT__ltl0c0_ste_3__DOT__internal_reg = 1U;
        vlSelf->lanewrap__DOT__dut__DOT__c1__DOT__automata_stage0c1__DOT__automata_ltl0c1__DOT__ltl0c1_ste_3__DOT__internal_reg = 1U;
        vlSelf->lanewrap__DOT__dut__DOT__c1__DOT__automata_stage0c1__DOT__automata_ltl0c1__DOT__ltl0c1_ste_1__DOT__internal_reg = 1U;
        vlSelf->lanewrap__DOT__dut__DOT__c1__DOT__automata_stage0c1__DOT__automata_ltl2c1__DOT__ltl2c1_ste_1__DOT__internal_reg = 1U;
        vlSelf->lanewrap__DOT__dut__DOT__c1__DOT__automata_stage0c1__DOT__automata_ltl1c1__DOT__ltl1c1_ste_1__DOT__internal_reg = 1U;
        vlSelf->lanewrap__DOT__dut__DOT__c0__DOT__automata_stage0C0__DOT__automata_ltl1c0__DOT__ltl1c0_ste_1__DOT__internal_reg = 1U;
        vlSelf->lanewrap__DOT__dut__DOT__c1__DOT__automata_stage0c1__DOT__automata_ltl1c1__DOT__ltl1c1_ste_3__DOT__internal_reg = 1U;
        vlSelf->lanewrap__DOT__dut__DOT__c1__DOT__automata_stage0c1__DOT__automata_ltl2c1__DOT__ltl2c1_ste_2__DOT__internal_reg = 1U;
        vlSelf->lanewrap__DOT__dut__DOT__c0__DOT__automata_stage0C0__DOT__automata_ltl1c0__DOT__ltl1c0_ste_2__DOT__internal_reg = 1U;
        vlSelf->lanewrap__DOT__dut__DOT__c0__DOT__automata_stage0C0__DOT__automata_ltl0c0__DOT__ltl0c0_ste_2__DOT__internal_reg = 1U;
        vlSelf->lanewrap__DOT__dut__DOT__c1__DOT__automata_stage0c1__DOT__automata_ltl0c1__DOT__ltl0c1_ste_2__DOT__internal_reg = 1U;
        vlSelf->lanewrap__DOT__dut__DOT__c1__DOT__automata_stage0c1__DOT__automata_ltl2c1__DOT__ltl2c1_ste_3__DOT__internal_reg = 1U;
        vlSelf->lanewrap__DOT__dut__DOT__c0__DOT__automata_stage0C0__DOT__automata_ltl1c0__DOT__ltl1c0_ste_3__DOT__internal_reg = 1U;
        vlSelf->lanewrap__DOT__dut__DOT__c1__DOT__automata_stage0c1__DOT__automata_ltl1c1__DOT__ltl1c1_ste_2__DOT__internal_reg = 1U;
    } else {
        vlSelf->lanewrap__DOT__dut__DOT__c1__DOT__automata_stage0c1__DOT__out_reset = 0U;
        vlSelf->lanewrap__DOT__dut__DOT__c0__DOT__automata_stage0C0__DOT__out_reset = 0U;
        vlSelf->lanewrap__DOT__dut__DOT__c0__DOT__automata_stage0C0__DOT__automata_ltl0c0__DOT__ltl0c0_ste_1__DOT__internal_reg 
            = (0U != (IData)(vlSelf->lanewrap__DOT__dut__DOT__c0__DOT__automata_stage0C0__DOT__automata_ltl0c0__DOT____Vcellinp__ltl0c0_ste_1__income_edges));
        vlSelf->lanewrap__DOT__dut__DOT__c0__DOT__automata_stage0C0__DOT__automata_ltl0c0__DOT__ltl0c0_ste_3__DOT__internal_reg 
            = (0U != (IData)(vlSelf->lanewrap__DOT__dut__DOT__c0__DOT__automata_stage0C0__DOT__automata_ltl0c0__DOT____Vcellinp__ltl0c0_ste_1__income_edges));
        vlSelf->lanewrap__DOT__dut__DOT__c1__DOT__automata_stage0c1__DOT__automata_ltl0c1__DOT__ltl0c1_ste_3__DOT__internal_reg 
            = (0U != (IData)(vlSelf->lanewrap__DOT__dut__DOT__c1__DOT__automata_stage0c1__DOT__automata_ltl0c1__DOT____Vcellinp__ltl0c1_ste_1__income_edges));
        vlSelf->lanewrap__DOT__dut__DOT__c1__DOT__automata_stage0c1__DOT__automata_ltl0c1__DOT__ltl0c1_ste_1__DOT__internal_reg 
            = (0U != (IData)(vlSelf->lanewrap__DOT__dut__DOT__c1__DOT__automata_stage0c1__DOT__automata_ltl0c1__DOT____Vcellinp__ltl0c1_ste_1__income_edges));
        vlSelf->lanewrap__DOT__dut__DOT__c1__DOT__automata_stage0c1__DOT__automata_ltl2c1__DOT__ltl2c1_ste_1__DOT__internal_reg 
            = (0U != (IData)(vlSelf->lanewrap__DOT__dut__DOT__c1__DOT__automata_stage0c1__DOT__automata_ltl2c1__DOT____Vcellinp__ltl2c1_ste_1__income_edges));
        vlSelf->lanewrap__DOT__dut__DOT__c1__DOT__automata_stage0c1__DOT__automata_ltl1c1__DOT__ltl1c1_ste_1__DOT__internal_reg 
            = (0U != (IData)(vlSelf->lanewrap__DOT__dut__DOT__c1__DOT__automata_stage0c1__DOT__automata_ltl1c1__DOT____Vcellinp__ltl1c1_ste_1__income_edges));
        vlSelf->lanewrap__DOT__dut__DOT__c0__DOT__automata_stage0C0__DOT__automata_ltl1c0__DOT__ltl1c0_ste_1__DOT__internal_reg 
            = (0U != (IData)(vlSelf->lanewrap__DOT__dut__DOT__c0__DOT__automata_stage0C0__DOT__automata_ltl1c0__DOT____Vcellinp__ltl1c0_ste_1__income_edges));
        vlSelf->lanewrap__DOT__dut__DOT__c1__DOT__automata_stage0c1__DOT__automata_ltl1c1__DOT__ltl1c1_ste_3__DOT__internal_reg 
            = (0U != (IData)(vlSelf->lanewrap__DOT__dut__DOT__c1__DOT__automata_stage0c1__DOT__automata_ltl1c1__DOT____Vcellinp__ltl1c1_ste_1__income_edges));
        vlSelf->lanewrap__DOT__dut__DOT__c1__DOT__automata_stage0c1__DOT__automata_ltl2c1__DOT__ltl2c1_ste_2__DOT__internal_reg 
            = (0U != (IData)(vlSelf->lanewrap__DOT__dut__DOT__c1__DOT__automata_stage0c1__DOT__automata_ltl2c1__DOT____Vcellinp__ltl2c1_ste_1__income_edges));
        vlSelf->lanewrap__DOT__dut__DOT__c0__DOT__automata_stage0C0__DOT__automata_ltl1c0__DOT__ltl1c0_ste_2__DOT__internal_reg 
            = (0U != (IData)(vlSelf->lanewrap__DOT__dut__DOT__c0__DOT__automata_stage0C0__DOT__automata_ltl1c0__DOT____Vcellinp__ltl1c0_ste_1__income_edges));
        vlSelf->lanewrap__DOT__dut__DOT__c0__DOT__automata_stage0C0__DOT__automata_ltl0c0__DOT__ltl0c0_ste_2__DOT__internal_reg 
            = (0U != (IData)(vlSelf->lanewrap__DOT__dut__DOT__c0__DOT__automata_stage0C0__DOT__automata_ltl0c0__DOT____Vcellinp__ltl0c0_ste_1__income_edges));
        if (vlSelf->lanewrap__DOT__dut__DOT__c0__DOT__automata_stage0C0__DOT__automata_ltl0c0__DOT__start_of_data) {
            vlSelf->lanewrap__DOT__dut__DOT__c0__DOT__automata_stage0C0__DOT__automata_ltl0c0__DOT__ltl0c0_ste_1__DOT__internal_reg = 1U;
            vlSelf->lanewrap__DOT__dut__DOT__c0__DOT__automata_stage0C0__DOT__automata_ltl0c0__DOT__ltl0c0_ste_3__DOT__internal_reg = 1U;
            vlSelf->lanewrap__DOT__dut__DOT__c0__DOT__automata_stage0C0__DOT__automata_ltl0c0__DOT__ltl0c0_ste_2__DOT__internal_reg = 1U;
        }
        vlSelf->lanewrap__DOT__dut__DOT__c1__DOT__automata_stage0c1__DOT__automata_ltl0c1__DOT__ltl0c1_ste_2__DOT__internal_reg 
            = (0U != (IData)(vlSelf->lanewrap__DOT__dut__DOT__c1__DOT__automata_stage0c1__DOT__automata_ltl0c1__DOT____Vcellinp__ltl0c1_ste_1__income_edges));
        vlSelf->lanewrap__DOT__dut__DOT__c1__DOT__automata_stage0c1__DOT__automata_ltl2c1__DOT__ltl2c1_ste_3__DOT__internal_reg 
            = (0U != (IData)(vlSelf->lanewrap__DOT__dut__DOT__c1__DOT__automata_stage0c1__DOT__automata_ltl2c1__DOT____Vcellinp__ltl2c1_ste_1__income_edges));
        vlSelf->lanewrap__DOT__dut__DOT__c0__DOT__automata_stage0C0__DOT__automata_ltl1c0__DOT__ltl1c0_ste_3__DOT__internal_reg 
            = (0U != (IData)(vlSelf->lanewrap__DOT__dut__DOT__c0__DOT__automata_stage0C0__DOT__automata_ltl1c0__DOT____Vcellinp__ltl1c0_ste_1__income_edges));
        vlSelf->lanewrap__DOT__dut__DOT__c1__DOT__automata_stage0c1__DOT__automata_ltl1c1__DOT__ltl1c1_ste_2__DOT__internal_reg 
            = (0U != (IData)(vlSelf->lanewrap__DOT__dut__DOT__c1__DOT__automata_stage0c1__DOT__automata_ltl1c1__DOT____Vcellinp__ltl1c1_ste_1__income_edges));
        if (vlSelf->lanewrap__DOT__dut__DOT__c0__DOT__automata_stage0C0__DOT__automata_ltl1c0__DOT__start_of_data) {
            vlSelf->lanewrap__DOT__dut__DOT__c1__DOT__automata_stage0c1__DOT__automata_ltl0c1__DOT__ltl0c1_ste_3__DOT__internal_reg = 1U;
            vlSelf->lanewrap__DOT__dut__DOT__c1__DOT__automata_stage0c1__DOT__automata_ltl0c1__DOT__ltl0c1_ste_1__DOT__internal_reg = 1U;
            vlSelf->lanewrap__DOT__dut__DOT__c1__DOT__automata_stage0c1__DOT__automata_ltl2c1__DOT__ltl2c1_ste_1__DOT__internal_reg = 1U;
            vlSelf->lanewrap__DOT__dut__DOT__c1__DOT__automata_stage0c1__DOT__automata_ltl1c1__DOT__ltl1c1_ste_1__DOT__internal_reg = 1U;
            vlSelf->lanewrap__DOT__dut__DOT__c0__DOT__automata_stage0C0__DOT__automata_ltl1c0__DOT__ltl1c0_ste_1__DOT__internal_reg = 1U;
            vlSelf->lanewrap__DOT__dut__DOT__c1__DOT__automata_stage0c1__DOT__automata_ltl1c1__DOT__ltl1c1_ste_3__DOT__internal_reg = 1U;
            vlSelf->lanewrap__DOT__dut__DOT__c1__DOT__automata_stage0c1__DOT__automata_ltl2c1__DOT__ltl2c1_ste_2__DOT__internal_reg = 1U;
            vlSelf->lanewrap__DOT__dut__DOT__c0__DOT__automata_stage0C0__DOT__automata_ltl1c0__DOT__ltl1c0_ste_2__DOT__internal_reg = 1U;
            vlSelf->lanewrap__DOT__dut__DOT__c1__DOT__automata_stage0c1__DOT__automata_ltl0c1__DOT__ltl0c1_ste_2__DOT__internal_reg = 1U;
            vlSelf->lanewrap__DOT__dut__DOT__c1__DOT__automata_stage0c1__DOT__automata_ltl2c1__DOT__ltl2c1_ste_3__DOT__internal_reg = 1U;
            vlSelf->lanewrap__DOT__dut__DOT__c0__DOT__automata_stage0C0__DOT__automata_ltl1c0__DOT__ltl1c0_ste_3__DOT__internal_reg = 1U;
            vlSelf->lanewrap__DOT__dut__DOT__c1__DOT__automata_stage0c1__DOT__automata_ltl1c1__DOT__ltl1c1_ste_2__DOT__internal_reg = 1U;
        }
    }
    vlSelf->lanewrap__DOT__dut__DOT__c1__DOT__automata_stage0c1__DOT__automata_ltl0c1__DOT__ltl0c1_ste_4__DOT__internal_reg 
        = ((~ (IData)(vlSelf->lanewrap__DOT__lane_reset_reg)) 
           & (0U != (IData)(vlSelf->lanewrap__DOT__dut__DOT__c1__DOT__automata_stage0c1__DOT__automata_ltl0c1__DOT____Vcellinp__ltl0c1_ste_4__income_edges)));
    vlSelf->lanewrap__DOT__dut__DOT__c1__DOT__automata_stage0c1__DOT__automata_ltl2c1__DOT__ltl2c1_ste_7__DOT__internal_reg 
        = ((~ (IData)(vlSelf->lanewrap__DOT__lane_reset_reg)) 
           & (0U != (IData)(vlSelf->lanewrap__DOT__dut__DOT__c1__DOT__automata_stage0c1__DOT__automata_ltl2c1__DOT____Vcellinp__ltl2c1_ste_7__income_edges)));
    vlSelf->lanewrap__DOT__dut__DOT__c1__DOT__automata_stage0c1__DOT__automata_ltl1c1__DOT__ltl1c1_ste_4__DOT__internal_reg 
        = ((~ (IData)(vlSelf->lanewrap__DOT__lane_reset_reg)) 
           & (0U != (IData)(vlSelf->lanewrap__DOT__dut__DOT__c1__DOT__automata_stage0c1__DOT__automata_ltl1c1__DOT____Vcellinp__ltl1c1_ste_4__income_edges)));
    vlSelf->lanewrap__DOT__dut__DOT__c0__DOT__automata_stage0C0__DOT__automata_ltl1c0__DOT__ltl1c0_ste_7__DOT__internal_reg 
        = ((~ (IData)(vlSelf->lanewrap__DOT__lane_reset_reg)) 
           & (0U != (IData)(vlSelf->lanewrap__DOT__dut__DOT__c0__DOT__automata_stage0C0__DOT__automata_ltl1c0__DOT____Vcellinp__ltl1c0_ste_7__income_edges)));
    vlSelf->lanewrap__DOT__dut__DOT__c0__DOT__automata_stage0C0__DOT__automata_ltl0c0__DOT__ltl0c0_ste_4__DOT__internal_reg 
        = ((~ (IData)(vlSelf->lanewrap__DOT__lane_reset_reg)) 
           & (0U != (IData)(vlSelf->lanewrap__DOT__dut__DOT__c0__DOT__automata_stage0C0__DOT__automata_ltl0c0__DOT____Vcellinp__ltl0c0_ste_4__income_edges)));
    vlSelf->lanewrap__DOT__dut__DOT__c0__DOT__automata_stage0C0__DOT__automata_ltl0c0__DOT__start_of_data_reg 
        = vlSelf->lanewrap__DOT__lane_reset_reg;
    vlSelf->lanewrap__DOT__dut__DOT__c1__DOT__automata_stage0c1__DOT__automata_ltl0c1__DOT__ltl0c1_ste_8__DOT__internal_reg 
        = ((~ (IData)(vlSelf->lanewrap__DOT__lane_reset_reg)) 
           & (0U != (IData)(vlSelf->lanewrap__DOT__dut__DOT__c1__DOT__automata_stage0c1__DOT__automata_ltl0c1__DOT____Vcellinp__ltl0c1_ste_8__income_edges)));
    vlSelf->lanewrap__DOT__dut__DOT__c1__DOT__automata_stage0c1__DOT__automata_ltl1c1__DOT__ltl1c1_ste_8__DOT__internal_reg 
        = ((~ (IData)(vlSelf->lanewrap__DOT__lane_reset_reg)) 
           & (0U != (IData)(vlSelf->lanewrap__DOT__dut__DOT__c1__DOT__automata_stage0c1__DOT__automata_ltl1c1__DOT____Vcellinp__ltl1c1_ste_8__income_edges)));
    vlSelf->lanewrap__DOT__dut__DOT__c0__DOT__automata_stage0C0__DOT__automata_ltl0c0__DOT__ltl0c0_ste_8__DOT__internal_reg 
        = ((~ (IData)(vlSelf->lanewrap__DOT__lane_reset_reg)) 
           & (0U != (IData)(vlSelf->lanewrap__DOT__dut__DOT__c0__DOT__automata_stage0C0__DOT__automata_ltl0c0__DOT____Vcellinp__ltl0c0_ste_8__income_edges)));
    vlSelf->lanewrap__DOT__dut__DOT__c0__DOT__automata_stage0C0__DOT__automata_ltl1c0__DOT__ltl1c0_ste_8__DOT__internal_reg 
        = ((~ (IData)(vlSelf->lanewrap__DOT__lane_reset_reg)) 
           & (0U != (IData)(vlSelf->lanewrap__DOT__dut__DOT__c0__DOT__automata_stage0C0__DOT__automata_ltl1c0__DOT____Vcellinp__ltl1c0_ste_8__income_edges)));
    vlSelf->lanewrap__DOT__dut__DOT__c1__DOT__automata_stage0c1__DOT__automata_ltl2c1__DOT__ltl2c1_ste_8__DOT__internal_reg 
        = ((~ (IData)(vlSelf->lanewrap__DOT__lane_reset_reg)) 
           & (0U != (IData)(vlSelf->lanewrap__DOT__dut__DOT__c1__DOT__automata_stage0c1__DOT__automata_ltl2c1__DOT____Vcellinp__ltl2c1_ste_8__income_edges)));
    vlSelf->lanewrap__DOT__dut__DOT__c1__DOT__automata_stage0c1__DOT__automata_ltl0c1__DOT__ltl0c1_ste_5__DOT__internal_reg 
        = ((~ (IData)(vlSelf->lanewrap__DOT__lane_reset_reg)) 
           & (0U != (IData)(vlSelf->lanewrap__DOT__dut__DOT__c1__DOT__automata_stage0c1__DOT__automata_ltl0c1__DOT____Vcellinp__ltl0c1_ste_5__income_edges)));
    vlSelf->lanewrap__DOT__dut__DOT__c1__DOT__automata_stage0c1__DOT__automata_ltl1c1__DOT__ltl1c1_ste_5__DOT__internal_reg 
        = ((~ (IData)(vlSelf->lanewrap__DOT__lane_reset_reg)) 
           & (0U != (IData)(vlSelf->lanewrap__DOT__dut__DOT__c1__DOT__automata_stage0c1__DOT__automata_ltl1c1__DOT____Vcellinp__ltl1c1_ste_5__income_edges)));
    vlSelf->lanewrap__DOT__dut__DOT__c0__DOT__automata_stage0C0__DOT__automata_ltl0c0__DOT__ltl0c0_ste_5__DOT__internal_reg 
        = ((~ (IData)(vlSelf->lanewrap__DOT__lane_reset_reg)) 
           & (0U != (IData)(vlSelf->lanewrap__DOT__dut__DOT__c0__DOT__automata_stage0C0__DOT__automata_ltl0c0__DOT____Vcellinp__ltl0c0_ste_5__income_edges)));
    vlSelf->lanewrap__DOT__dut__DOT__c1__DOT__automata_stage0c1__DOT__automata_ltl2c1__DOT__ltl2c1_ste_4__DOT__internal_reg 
        = ((~ (IData)(vlSelf->lanewrap__DOT__lane_reset_reg)) 
           & (0U != (IData)(vlSelf->lanewrap__DOT__dut__DOT__c1__DOT__automata_stage0c1__DOT__automata_ltl2c1__DOT____Vcellinp__ltl2c1_ste_4__income_edges)));
    vlSelf->lanewrap__DOT__dut__DOT__c0__DOT__automata_stage0C0__DOT__automata_ltl1c0__DOT__ltl1c0_ste_4__DOT__internal_reg 
        = ((~ (IData)(vlSelf->lanewrap__DOT__lane_reset_reg)) 
           & (0U != (IData)(vlSelf->lanewrap__DOT__dut__DOT__c0__DOT__automata_stage0C0__DOT__automata_ltl1c0__DOT____Vcellinp__ltl1c0_ste_4__income_edges)));
    vlSelf->lanewrap__DOT__dut__DOT__c0__DOT__automata_stage0C0__DOT__out_symbols 
        = vlSelf->lanewrap__DOT__dut__DOT__c0_i;
    vlSelf->lanewrap__DOT__dut__DOT__c1__DOT__automata_stage0c1__DOT__out_symbols 
        = vlSelf->lanewrap__DOT__dut__DOT__c1_i;
    vlSelf->lanewrap__DOT__lane_vector_reg = vlSelf->lane_vector_i;
    vlSelf->lanewrap__DOT__lane_reset_reg = vlSelf->lane_reset_i;
    vlSelf->lanewrap__DOT__dut__DOT__c0_i = ((8U & 
                                              ((IData)(vlSelf->lanewrap__DOT__lane_vector_reg) 
                                               << 3U)) 
                                             | ((4U 
                                                 & ((IData)(vlSelf->lanewrap__DOT__lane_vector_reg) 
                                                    >> 2U)) 
                                                | ((2U 
                                                    & ((IData)(vlSelf->lanewrap__DOT__lane_vector_reg) 
                                                       >> 4U)) 
                                                   | (1U 
                                                      & ((IData)(vlSelf->lanewrap__DOT__lane_vector_reg) 
                                                         >> 3U)))));
    vlSelf->lanewrap__DOT__dut__DOT__c1_i = ((8U & 
                                              ((IData)(vlSelf->lanewrap__DOT__lane_vector_reg) 
                                               << 2U)) 
                                             | ((4U 
                                                 & (IData)(vlSelf->lanewrap__DOT__lane_vector_reg)) 
                                                | ((2U 
                                                    & ((IData)(vlSelf->lanewrap__DOT__lane_vector_reg) 
                                                       >> 2U)) 
                                                   | (1U 
                                                      & (IData)(vlSelf->lanewrap__DOT__lane_vector_reg)))));
    vlSelf->lanewrap__DOT__dut__DOT__c0__DOT__automata_stage0C0__DOT__automata_ltl0c0__DOT__lut_match_ltl0c0_1__DOT__match_internal 
        = ((1U >= (IData)(vlSelf->lanewrap__DOT__dut__DOT__c0_i)) 
           | ((8U <= (IData)(vlSelf->lanewrap__DOT__dut__DOT__c0_i)) 
              & (9U >= (IData)(vlSelf->lanewrap__DOT__dut__DOT__c0_i))));
    vlSelf->lanewrap__DOT__dut__DOT__c0__DOT__automata_stage0C0__DOT__automata_ltl1c0__DOT__lut_match_ltl1c0_1__DOT__match_internal 
        = ((0U >= (IData)(vlSelf->lanewrap__DOT__dut__DOT__c0_i)) 
           | (((2U <= (IData)(vlSelf->lanewrap__DOT__dut__DOT__c0_i)) 
               & (2U >= (IData)(vlSelf->lanewrap__DOT__dut__DOT__c0_i))) 
              | (((8U <= (IData)(vlSelf->lanewrap__DOT__dut__DOT__c0_i)) 
                  & (8U >= (IData)(vlSelf->lanewrap__DOT__dut__DOT__c0_i))) 
                 | ((0xaU <= (IData)(vlSelf->lanewrap__DOT__dut__DOT__c0_i)) 
                    & (0xaU >= (IData)(vlSelf->lanewrap__DOT__dut__DOT__c0_i))))));
    vlSelf->lanewrap__DOT__dut__DOT__c0__DOT__ltl0c0_w_out_9 
        = ((IData)(vlSelf->lanewrap__DOT__dut__DOT__c0__DOT__automata_stage0C0__DOT__automata_ltl0c0__DOT__ltl0c0_ste_8__DOT__internal_reg) 
           & (((2U <= (IData)(vlSelf->lanewrap__DOT__dut__DOT__c0_i)) 
               & (7U >= (IData)(vlSelf->lanewrap__DOT__dut__DOT__c0_i))) 
              | (0xaU <= (IData)(vlSelf->lanewrap__DOT__dut__DOT__c0_i))));
    vlSelf->__VdfgTmp_h7a557b80__0 = ((2U <= (IData)(vlSelf->lanewrap__DOT__dut__DOT__c0_i)) 
                                      & (3U >= (IData)(vlSelf->lanewrap__DOT__dut__DOT__c0_i)));
    vlSelf->__VdfgTmp_h5ee6e828__0 = ((0xaU <= (IData)(vlSelf->lanewrap__DOT__dut__DOT__c0_i)) 
                                      & (0xbU >= (IData)(vlSelf->lanewrap__DOT__dut__DOT__c0_i)));
    vlSelf->__VdfgTmp_h1f7eb2d3__0 = ((3U <= (IData)(vlSelf->lanewrap__DOT__dut__DOT__c0_i)) 
                                      & (3U >= (IData)(vlSelf->lanewrap__DOT__dut__DOT__c0_i)));
    vlSelf->__VdfgTmp_hf8f9c47f__0 = ((0xbU <= (IData)(vlSelf->lanewrap__DOT__dut__DOT__c0_i)) 
                                      & (0xbU >= (IData)(vlSelf->lanewrap__DOT__dut__DOT__c0_i)));
    vlSelf->lanewrap__DOT__dut__DOT__c0__DOT__automata_stage0C0__DOT__automata_ltl0c0__DOT__lut_match_ltl0c0_7__DOT__match_internal 
        = (((4U <= (IData)(vlSelf->lanewrap__DOT__dut__DOT__c0_i)) 
            & (7U >= (IData)(vlSelf->lanewrap__DOT__dut__DOT__c0_i))) 
           | (0xcU <= (IData)(vlSelf->lanewrap__DOT__dut__DOT__c0_i)));
    vlSelf->__VdfgTmp_h6dd2d5bc__0 = ((1U <= (IData)(vlSelf->lanewrap__DOT__dut__DOT__c0_i)) 
                                      & (1U >= (IData)(vlSelf->lanewrap__DOT__dut__DOT__c0_i)));
    vlSelf->__VdfgTmp_had61064c__0 = ((9U <= (IData)(vlSelf->lanewrap__DOT__dut__DOT__c0_i)) 
                                      & (9U >= (IData)(vlSelf->lanewrap__DOT__dut__DOT__c0_i)));
    vlSelf->lanewrap__DOT__dut__DOT__c1__DOT__automata_stage0c1__DOT__automata_ltl0c1__DOT____Vcellinp__ltl0c1_ste_5__income_edges 
        = ((((IData)(vlSelf->lanewrap__DOT__dut__DOT__c1__DOT__automata_stage0c1__DOT__automata_ltl0c1__DOT__ltl0c1_ste_3__DOT__internal_reg) 
             & ((8U <= (IData)(vlSelf->lanewrap__DOT__dut__DOT__c1_i)) 
                & (0xbU >= (IData)(vlSelf->lanewrap__DOT__dut__DOT__c1_i)))) 
            << 1U) | ((IData)(vlSelf->lanewrap__DOT__dut__DOT__c1__DOT__automata_stage0c1__DOT__automata_ltl0c1__DOT__ltl0c1_ste_5__DOT__internal_reg) 
                      & (3U >= (IData)(vlSelf->lanewrap__DOT__dut__DOT__c1_i))));
    vlSelf->lanewrap__DOT__dut__DOT__c1__DOT__automata_stage0c1__DOT__automata_ltl1c1__DOT__lut_match_ltl1c1_1__DOT__match_internal 
        = ((1U >= (IData)(vlSelf->lanewrap__DOT__dut__DOT__c1_i)) 
           | ((8U <= (IData)(vlSelf->lanewrap__DOT__dut__DOT__c1_i)) 
              & (9U >= (IData)(vlSelf->lanewrap__DOT__dut__DOT__c1_i))));
    vlSelf->lanewrap__DOT__dut__DOT__c1__DOT__automata_stage0c1__DOT__automata_ltl2c1__DOT__lut_match_ltl2c1_1__DOT__match_internal 
        = ((0U >= (IData)(vlSelf->lanewrap__DOT__dut__DOT__c1_i)) 
           | (((2U <= (IData)(vlSelf->lanewrap__DOT__dut__DOT__c1_i)) 
               & (2U >= (IData)(vlSelf->lanewrap__DOT__dut__DOT__c1_i))) 
              | (((4U <= (IData)(vlSelf->lanewrap__DOT__dut__DOT__c1_i)) 
                  & (4U >= (IData)(vlSelf->lanewrap__DOT__dut__DOT__c1_i))) 
                 | ((6U <= (IData)(vlSelf->lanewrap__DOT__dut__DOT__c1_i)) 
                    & (6U >= (IData)(vlSelf->lanewrap__DOT__dut__DOT__c1_i))))));
    vlSelf->lanewrap__DOT__dut__DOT__c1__DOT__ltl1c1_w_out_9 
        = ((IData)(vlSelf->lanewrap__DOT__dut__DOT__c1__DOT__automata_stage0c1__DOT__automata_ltl1c1__DOT__ltl1c1_ste_8__DOT__internal_reg) 
           & (((2U <= (IData)(vlSelf->lanewrap__DOT__dut__DOT__c1_i)) 
               & (7U >= (IData)(vlSelf->lanewrap__DOT__dut__DOT__c1_i))) 
              | (0xaU <= (IData)(vlSelf->lanewrap__DOT__dut__DOT__c1_i))));
    vlSelf->lanewrap__DOT__dut__DOT__c1__DOT__ltl2c1_w_out_3 
        = ((IData)(vlSelf->lanewrap__DOT__dut__DOT__c1__DOT__automata_stage0c1__DOT__automata_ltl2c1__DOT__ltl2c1_ste_3__DOT__internal_reg) 
           & (8U <= (IData)(vlSelf->lanewrap__DOT__dut__DOT__c1_i)));
    vlSelf->lanewrap__DOT__dut__DOT__c1__DOT__ltl0c1_w_out_7 
        = ((IData)(vlSelf->lanewrap__DOT__dut__DOT__c1__DOT__automata_stage0c1__DOT__automata_ltl0c1__DOT__ltl0c1_ste_5__DOT__internal_reg) 
           & (8U <= (IData)(vlSelf->lanewrap__DOT__dut__DOT__c1_i)));
    vlSelf->lanewrap__DOT__dut__DOT__c1__DOT__ltl0c1_w_out_9 
        = ((IData)(vlSelf->lanewrap__DOT__dut__DOT__c1__DOT__automata_stage0c1__DOT__automata_ltl0c1__DOT__ltl0c1_ste_8__DOT__internal_reg) 
           & (4U <= (IData)(vlSelf->lanewrap__DOT__dut__DOT__c1_i)));
    vlSelf->__VdfgTmp_h175d29ab__0 = ((2U <= (IData)(vlSelf->lanewrap__DOT__dut__DOT__c1_i)) 
                                      & (3U >= (IData)(vlSelf->lanewrap__DOT__dut__DOT__c1_i)));
    vlSelf->__VdfgTmp_h21aa8855__0 = ((0xaU <= (IData)(vlSelf->lanewrap__DOT__dut__DOT__c1_i)) 
                                      & (0xbU >= (IData)(vlSelf->lanewrap__DOT__dut__DOT__c1_i)));
    vlSelf->__VdfgTmp_h2a84069a__0 = ((7U <= (IData)(vlSelf->lanewrap__DOT__dut__DOT__c1_i)) 
                                      & (7U >= (IData)(vlSelf->lanewrap__DOT__dut__DOT__c1_i)));
    vlSelf->lanewrap__DOT__dut__DOT__c1__DOT__automata_stage0c1__DOT__automata_ltl0c1__DOT__lut_match_ltl0c1_6__DOT__match_internal 
        = ((4U <= (IData)(vlSelf->lanewrap__DOT__dut__DOT__c1_i)) 
           & (7U >= (IData)(vlSelf->lanewrap__DOT__dut__DOT__c1_i)));
    vlSelf->__VdfgTmp_h1a33c7a9__0 = ((1U <= (IData)(vlSelf->lanewrap__DOT__dut__DOT__c1_i)) 
                                      & (1U >= (IData)(vlSelf->lanewrap__DOT__dut__DOT__c1_i)));
    vlSelf->__VdfgTmp_h477da5fc__0 = ((3U <= (IData)(vlSelf->lanewrap__DOT__dut__DOT__c1_i)) 
                                      & (3U >= (IData)(vlSelf->lanewrap__DOT__dut__DOT__c1_i)));
    vlSelf->__VdfgTmp_hbc9ec8b7__0 = ((5U <= (IData)(vlSelf->lanewrap__DOT__dut__DOT__c1_i)) 
                                      & (5U >= (IData)(vlSelf->lanewrap__DOT__dut__DOT__c1_i)));
    vlSelf->lanewrap__DOT__dut__DOT__c0__DOT__automata_stage0C0__DOT__automata_ltl1c0__DOT__start_of_data 
        = ((~ (IData)(vlSelf->lanewrap__DOT__lane_reset_reg)) 
           & (IData)(vlSelf->lanewrap__DOT__dut__DOT__c0__DOT__automata_stage0C0__DOT__automata_ltl0c0__DOT__start_of_data_reg));
    vlSelf->lanewrap__DOT__dut__DOT__c0__DOT__automata_stage0C0__DOT__automata_ltl0c0__DOT____Vcellinp__ltl0c0_ste_5__income_edges 
        = ((((IData)(vlSelf->lanewrap__DOT__dut__DOT__c0__DOT__automata_stage0C0__DOT__automata_ltl0c0__DOT__ltl0c0_ste_3__DOT__internal_reg) 
             & (((4U <= (IData)(vlSelf->lanewrap__DOT__dut__DOT__c0_i)) 
                 & (5U >= (IData)(vlSelf->lanewrap__DOT__dut__DOT__c0_i))) 
                | ((0xcU <= (IData)(vlSelf->lanewrap__DOT__dut__DOT__c0_i)) 
                   & (0xdU >= (IData)(vlSelf->lanewrap__DOT__dut__DOT__c0_i))))) 
            << 1U) | ((IData)(vlSelf->lanewrap__DOT__dut__DOT__c0__DOT__automata_stage0C0__DOT__automata_ltl0c0__DOT__ltl0c0_ste_5__DOT__internal_reg) 
                      & (IData)(vlSelf->lanewrap__DOT__dut__DOT__c0__DOT__automata_stage0C0__DOT__automata_ltl0c0__DOT__lut_match_ltl0c0_1__DOT__match_internal)));
    vlSelf->lanewrap__DOT__dut__DOT__c0__DOT__automata_stage0C0__DOT__automata_ltl1c0__DOT____Vcellinp__ltl1c0_ste_8__income_edges 
        = ((((IData)(vlSelf->lanewrap__DOT__dut__DOT__c0__DOT__automata_stage0C0__DOT__automata_ltl1c0__DOT__ltl1c0_ste_8__DOT__internal_reg) 
             & (IData)(vlSelf->lanewrap__DOT__dut__DOT__c0__DOT__automata_stage0C0__DOT__automata_ltl1c0__DOT__lut_match_ltl1c0_1__DOT__match_internal)) 
            << 1U) | ((IData)(vlSelf->lanewrap__DOT__dut__DOT__c0__DOT__automata_stage0C0__DOT__automata_ltl1c0__DOT__ltl1c0_ste_4__DOT__internal_reg) 
                      & (((4U <= (IData)(vlSelf->lanewrap__DOT__dut__DOT__c0_i)) 
                          & (4U >= (IData)(vlSelf->lanewrap__DOT__dut__DOT__c0_i))) 
                         | (((6U <= (IData)(vlSelf->lanewrap__DOT__dut__DOT__c0_i)) 
                             & (6U >= (IData)(vlSelf->lanewrap__DOT__dut__DOT__c0_i))) 
                            | (((0xcU <= (IData)(vlSelf->lanewrap__DOT__dut__DOT__c0_i)) 
                                & (0xcU >= (IData)(vlSelf->lanewrap__DOT__dut__DOT__c0_i))) 
                               | ((0xeU <= (IData)(vlSelf->lanewrap__DOT__dut__DOT__c0_i)) 
                                  & (0xeU >= (IData)(vlSelf->lanewrap__DOT__dut__DOT__c0_i))))))));
    vlSelf->lanewrap__DOT__dut__DOT__c0__DOT__automata_stage0C0__DOT__automata_ltl0c0__DOT____Vcellinp__ltl0c0_ste_8__income_edges 
        = ((((IData)(vlSelf->lanewrap__DOT__dut__DOT__c0__DOT__automata_stage0C0__DOT__automata_ltl0c0__DOT__ltl0c0_ste_8__DOT__internal_reg) 
             & (IData)(vlSelf->lanewrap__DOT__dut__DOT__c0__DOT__automata_stage0C0__DOT__automata_ltl0c0__DOT__lut_match_ltl0c0_1__DOT__match_internal)) 
            << 1U) | ((IData)(vlSelf->lanewrap__DOT__dut__DOT__c0__DOT__automata_stage0C0__DOT__automata_ltl0c0__DOT__ltl0c0_ste_5__DOT__internal_reg) 
                      & ((IData)(vlSelf->__VdfgTmp_h7a557b80__0) 
                         | (IData)(vlSelf->__VdfgTmp_h5ee6e828__0))));
    vlSelf->lanewrap__DOT__dut__DOT__c0__DOT__ltl0c0_w_out_2 
        = ((IData)(vlSelf->lanewrap__DOT__dut__DOT__c0__DOT__automata_stage0C0__DOT__automata_ltl0c0__DOT__ltl0c0_ste_2__DOT__internal_reg) 
           & ((IData)(vlSelf->__VdfgTmp_h7a557b80__0) 
              | (((6U <= (IData)(vlSelf->lanewrap__DOT__dut__DOT__c0_i)) 
                  & (7U >= (IData)(vlSelf->lanewrap__DOT__dut__DOT__c0_i))) 
                 | ((IData)(vlSelf->__VdfgTmp_h5ee6e828__0) 
                    | (0xeU <= (IData)(vlSelf->lanewrap__DOT__dut__DOT__c0_i))))));
    vlSelf->lanewrap__DOT__dut__DOT__c0__DOT__ltl0c0_w_out_7 
        = ((IData)(vlSelf->lanewrap__DOT__dut__DOT__c0__DOT__automata_stage0C0__DOT__automata_ltl0c0__DOT__ltl0c0_ste_5__DOT__internal_reg) 
           & (IData)(vlSelf->lanewrap__DOT__dut__DOT__c0__DOT__automata_stage0C0__DOT__automata_ltl0c0__DOT__lut_match_ltl0c0_7__DOT__match_internal));
    vlSelf->lanewrap__DOT__dut__DOT__c0__DOT__ltl1c0_w_out_3 
        = ((IData)(vlSelf->lanewrap__DOT__dut__DOT__c0__DOT__automata_stage0C0__DOT__automata_ltl1c0__DOT__ltl1c0_ste_3__DOT__internal_reg) 
           & (IData)(vlSelf->lanewrap__DOT__dut__DOT__c0__DOT__automata_stage0C0__DOT__automata_ltl0c0__DOT__lut_match_ltl0c0_7__DOT__match_internal));
    vlSelf->lanewrap__DOT__dut__DOT__c0__DOT__automata_stage0C0__DOT__automata_ltl1c0__DOT____Vcellinp__ltl1c0_ste_4__income_edges 
        = ((((IData)(vlSelf->lanewrap__DOT__dut__DOT__c0__DOT__automata_stage0C0__DOT__automata_ltl1c0__DOT__ltl1c0_ste_2__DOT__internal_reg) 
             & ((IData)(vlSelf->__VdfgTmp_h6dd2d5bc__0) 
                | ((IData)(vlSelf->__VdfgTmp_h1f7eb2d3__0) 
                   | ((IData)(vlSelf->__VdfgTmp_had61064c__0) 
                      | (IData)(vlSelf->__VdfgTmp_hf8f9c47f__0))))) 
            << 1U) | ((IData)(vlSelf->lanewrap__DOT__dut__DOT__c0__DOT__automata_stage0C0__DOT__automata_ltl1c0__DOT__ltl1c0_ste_4__DOT__internal_reg) 
                      & (IData)(vlSelf->lanewrap__DOT__dut__DOT__c0__DOT__automata_stage0C0__DOT__automata_ltl1c0__DOT__lut_match_ltl1c0_1__DOT__match_internal)));
    vlSelf->lanewrap__DOT__dut__DOT__c0__DOT__ltl1c0_w_out_9 
        = ((IData)(vlSelf->lanewrap__DOT__dut__DOT__c0__DOT__automata_stage0C0__DOT__automata_ltl1c0__DOT__ltl1c0_ste_8__DOT__internal_reg) 
           & ((IData)(vlSelf->__VdfgTmp_h6dd2d5bc__0) 
              | (((3U <= (IData)(vlSelf->lanewrap__DOT__dut__DOT__c0_i)) 
                  & (7U >= (IData)(vlSelf->lanewrap__DOT__dut__DOT__c0_i))) 
                 | ((IData)(vlSelf->__VdfgTmp_had61064c__0) 
                    | (0xbU <= (IData)(vlSelf->lanewrap__DOT__dut__DOT__c0_i))))));
    vlSelf->lanewrap__DOT__dut__DOT__c0__DOT__ltl1c0_w_out_5 
        = ((IData)(vlSelf->lanewrap__DOT__dut__DOT__c0__DOT__automata_stage0C0__DOT__automata_ltl1c0__DOT__ltl1c0_ste_4__DOT__internal_reg) 
           & ((IData)(vlSelf->__VdfgTmp_h6dd2d5bc__0) 
              | ((IData)(vlSelf->__VdfgTmp_h1f7eb2d3__0) 
                 | (((5U <= (IData)(vlSelf->lanewrap__DOT__dut__DOT__c0_i)) 
                     & (5U >= (IData)(vlSelf->lanewrap__DOT__dut__DOT__c0_i))) 
                    | (((7U <= (IData)(vlSelf->lanewrap__DOT__dut__DOT__c0_i)) 
                        & (7U >= (IData)(vlSelf->lanewrap__DOT__dut__DOT__c0_i))) 
                       | ((IData)(vlSelf->__VdfgTmp_had61064c__0) 
                          | ((IData)(vlSelf->__VdfgTmp_hf8f9c47f__0) 
                             | (((0xdU <= (IData)(vlSelf->lanewrap__DOT__dut__DOT__c0_i)) 
                                 & (0xdU >= (IData)(vlSelf->lanewrap__DOT__dut__DOT__c0_i))) 
                                | (0xfU <= (IData)(vlSelf->lanewrap__DOT__dut__DOT__c0_i))))))))));
    vlSelf->lanewrap__DOT__dut__DOT__c1__DOT__automata_stage0c1__DOT__automata_ltl1c1__DOT____Vcellinp__ltl1c1_ste_5__income_edges 
        = ((((IData)(vlSelf->lanewrap__DOT__dut__DOT__c1__DOT__automata_stage0c1__DOT__automata_ltl1c1__DOT__ltl1c1_ste_3__DOT__internal_reg) 
             & (((4U <= (IData)(vlSelf->lanewrap__DOT__dut__DOT__c1_i)) 
                 & (5U >= (IData)(vlSelf->lanewrap__DOT__dut__DOT__c1_i))) 
                | ((0xcU <= (IData)(vlSelf->lanewrap__DOT__dut__DOT__c1_i)) 
                   & (0xdU >= (IData)(vlSelf->lanewrap__DOT__dut__DOT__c1_i))))) 
            << 1U) | ((IData)(vlSelf->lanewrap__DOT__dut__DOT__c1__DOT__automata_stage0c1__DOT__automata_ltl1c1__DOT__ltl1c1_ste_5__DOT__internal_reg) 
                      & (IData)(vlSelf->lanewrap__DOT__dut__DOT__c1__DOT__automata_stage0c1__DOT__automata_ltl1c1__DOT__lut_match_ltl1c1_1__DOT__match_internal)));
    vlSelf->lanewrap__DOT__dut__DOT__c1__DOT__automata_stage0c1__DOT__automata_ltl2c1__DOT____Vcellinp__ltl2c1_ste_8__income_edges 
        = ((((IData)(vlSelf->lanewrap__DOT__dut__DOT__c1__DOT__automata_stage0c1__DOT__automata_ltl2c1__DOT__ltl2c1_ste_8__DOT__internal_reg) 
             & (IData)(vlSelf->lanewrap__DOT__dut__DOT__c1__DOT__automata_stage0c1__DOT__automata_ltl2c1__DOT__lut_match_ltl2c1_1__DOT__match_internal)) 
            << 1U) | ((IData)(vlSelf->lanewrap__DOT__dut__DOT__c1__DOT__automata_stage0c1__DOT__automata_ltl2c1__DOT__ltl2c1_ste_4__DOT__internal_reg) 
                      & (((8U <= (IData)(vlSelf->lanewrap__DOT__dut__DOT__c1_i)) 
                          & (8U >= (IData)(vlSelf->lanewrap__DOT__dut__DOT__c1_i))) 
                         | (((0xaU <= (IData)(vlSelf->lanewrap__DOT__dut__DOT__c1_i)) 
                             & (0xaU >= (IData)(vlSelf->lanewrap__DOT__dut__DOT__c1_i))) 
                            | (((0xcU <= (IData)(vlSelf->lanewrap__DOT__dut__DOT__c1_i)) 
                                & (0xcU >= (IData)(vlSelf->lanewrap__DOT__dut__DOT__c1_i))) 
                               | ((0xeU <= (IData)(vlSelf->lanewrap__DOT__dut__DOT__c1_i)) 
                                  & (0xeU >= (IData)(vlSelf->lanewrap__DOT__dut__DOT__c1_i))))))));
    vlSelf->lanewrap__DOT__dut__DOT__c1__DOT__automata_stage0c1__DOT__automata_ltl1c1__DOT____Vcellinp__ltl1c1_ste_8__income_edges 
        = ((((IData)(vlSelf->lanewrap__DOT__dut__DOT__c1__DOT__automata_stage0c1__DOT__automata_ltl1c1__DOT__ltl1c1_ste_8__DOT__internal_reg) 
             & (IData)(vlSelf->lanewrap__DOT__dut__DOT__c1__DOT__automata_stage0c1__DOT__automata_ltl1c1__DOT__lut_match_ltl1c1_1__DOT__match_internal)) 
            << 1U) | ((IData)(vlSelf->lanewrap__DOT__dut__DOT__c1__DOT__automata_stage0c1__DOT__automata_ltl1c1__DOT__ltl1c1_ste_5__DOT__internal_reg) 
                      & ((IData)(vlSelf->__VdfgTmp_h175d29ab__0) 
                         | (IData)(vlSelf->__VdfgTmp_h21aa8855__0))));
    vlSelf->lanewrap__DOT__dut__DOT__c1__DOT__ltl1c1_w_out_2 
        = ((IData)(vlSelf->lanewrap__DOT__dut__DOT__c1__DOT__automata_stage0c1__DOT__automata_ltl1c1__DOT__ltl1c1_ste_2__DOT__internal_reg) 
           & ((IData)(vlSelf->__VdfgTmp_h175d29ab__0) 
              | (((6U <= (IData)(vlSelf->lanewrap__DOT__dut__DOT__c1_i)) 
                  & (7U >= (IData)(vlSelf->lanewrap__DOT__dut__DOT__c1_i))) 
                 | ((IData)(vlSelf->__VdfgTmp_h21aa8855__0) 
                    | (0xeU <= (IData)(vlSelf->lanewrap__DOT__dut__DOT__c1_i))))));
    vlSelf->lanewrap__DOT__dut__DOT__c1__DOT__automata_stage0c1__DOT__automata_ltl0c1__DOT____Vcellinp__ltl0c1_ste_8__income_edges 
        = ((((IData)(vlSelf->lanewrap__DOT__dut__DOT__c1__DOT__automata_stage0c1__DOT__automata_ltl0c1__DOT__ltl0c1_ste_8__DOT__internal_reg) 
             & (3U >= (IData)(vlSelf->lanewrap__DOT__dut__DOT__c1_i))) 
            << 1U) | ((IData)(vlSelf->lanewrap__DOT__dut__DOT__c1__DOT__automata_stage0c1__DOT__automata_ltl0c1__DOT__ltl0c1_ste_5__DOT__internal_reg) 
                      & (IData)(vlSelf->lanewrap__DOT__dut__DOT__c1__DOT__automata_stage0c1__DOT__automata_ltl0c1__DOT__lut_match_ltl0c1_6__DOT__match_internal)));
    vlSelf->lanewrap__DOT__dut__DOT__c1__DOT__automata_stage0c1__DOT__automata_ltl0c1__DOT__lut_match_ltl0c1_2__DOT__match_internal 
        = ((IData)(vlSelf->lanewrap__DOT__dut__DOT__c1__DOT__automata_stage0c1__DOT__automata_ltl0c1__DOT__lut_match_ltl0c1_6__DOT__match_internal) 
           | (0xcU <= (IData)(vlSelf->lanewrap__DOT__dut__DOT__c1_i)));
    vlSelf->lanewrap__DOT__dut__DOT__c1__DOT__automata_stage0c1__DOT__automata_ltl2c1__DOT____Vcellinp__ltl2c1_ste_4__income_edges 
        = ((((IData)(vlSelf->lanewrap__DOT__dut__DOT__c1__DOT__automata_stage0c1__DOT__automata_ltl2c1__DOT__ltl2c1_ste_2__DOT__internal_reg) 
             & ((IData)(vlSelf->__VdfgTmp_h1a33c7a9__0) 
                | ((IData)(vlSelf->__VdfgTmp_h477da5fc__0) 
                   | ((IData)(vlSelf->__VdfgTmp_hbc9ec8b7__0) 
                      | (IData)(vlSelf->__VdfgTmp_h2a84069a__0))))) 
            << 1U) | ((IData)(vlSelf->lanewrap__DOT__dut__DOT__c1__DOT__automata_stage0c1__DOT__automata_ltl2c1__DOT__ltl2c1_ste_4__DOT__internal_reg) 
                      & (IData)(vlSelf->lanewrap__DOT__dut__DOT__c1__DOT__automata_stage0c1__DOT__automata_ltl2c1__DOT__lut_match_ltl2c1_1__DOT__match_internal)));
    vlSelf->lanewrap__DOT__dut__DOT__c1__DOT__ltl2c1_w_out_9 
        = ((IData)(vlSelf->lanewrap__DOT__dut__DOT__c1__DOT__automata_stage0c1__DOT__automata_ltl2c1__DOT__ltl2c1_ste_8__DOT__internal_reg) 
           & ((IData)(vlSelf->__VdfgTmp_h1a33c7a9__0) 
              | ((IData)(vlSelf->__VdfgTmp_h477da5fc__0) 
                 | ((IData)(vlSelf->__VdfgTmp_hbc9ec8b7__0) 
                    | (7U <= (IData)(vlSelf->lanewrap__DOT__dut__DOT__c1_i))))));
    vlSelf->lanewrap__DOT__dut__DOT__c1__DOT__ltl2c1_w_out_5 
        = ((IData)(vlSelf->lanewrap__DOT__dut__DOT__c1__DOT__automata_stage0c1__DOT__automata_ltl2c1__DOT__ltl2c1_ste_4__DOT__internal_reg) 
           & ((IData)(vlSelf->__VdfgTmp_h1a33c7a9__0) 
              | ((IData)(vlSelf->__VdfgTmp_h477da5fc__0) 
                 | ((IData)(vlSelf->__VdfgTmp_hbc9ec8b7__0) 
                    | ((IData)(vlSelf->__VdfgTmp_h2a84069a__0) 
                       | (((9U <= (IData)(vlSelf->lanewrap__DOT__dut__DOT__c1_i)) 
                           & (9U >= (IData)(vlSelf->lanewrap__DOT__dut__DOT__c1_i))) 
                          | (((0xbU <= (IData)(vlSelf->lanewrap__DOT__dut__DOT__c1_i)) 
                              & (0xbU >= (IData)(vlSelf->lanewrap__DOT__dut__DOT__c1_i))) 
                             | (((0xdU <= (IData)(vlSelf->lanewrap__DOT__dut__DOT__c1_i)) 
                                 & (0xdU >= (IData)(vlSelf->lanewrap__DOT__dut__DOT__c1_i))) 
                                | (0xfU <= (IData)(vlSelf->lanewrap__DOT__dut__DOT__c1_i))))))))));
    vlSelf->lanewrap__DOT__dut__DOT__c0__DOT__automata_stage0C0__DOT__automata_ltl1c0__DOT____Vcellinp__ltl1c0_ste_1__income_edges 
        = (((IData)(vlSelf->lanewrap__DOT__dut__DOT__c0__DOT__automata_stage0C0__DOT__automata_ltl1c0__DOT__start_of_data) 
            << 1U) | ((IData)(vlSelf->lanewrap__DOT__dut__DOT__c0__DOT__automata_stage0C0__DOT__automata_ltl1c0__DOT__ltl1c0_ste_1__DOT__internal_reg) 
                      & (IData)(vlSelf->lanewrap__DOT__dut__DOT__c0__DOT__automata_stage0C0__DOT__automata_ltl1c0__DOT__lut_match_ltl1c0_1__DOT__match_internal)));
    vlSelf->lanewrap__DOT__dut__DOT__c1__DOT__automata_stage0c1__DOT__automata_ltl1c1__DOT____Vcellinp__ltl1c1_ste_1__income_edges 
        = (((IData)(vlSelf->lanewrap__DOT__dut__DOT__c0__DOT__automata_stage0C0__DOT__automata_ltl1c0__DOT__start_of_data) 
            << 1U) | ((IData)(vlSelf->lanewrap__DOT__dut__DOT__c1__DOT__automata_stage0c1__DOT__automata_ltl1c1__DOT__ltl1c1_ste_1__DOT__internal_reg) 
                      & (IData)(vlSelf->lanewrap__DOT__dut__DOT__c1__DOT__automata_stage0c1__DOT__automata_ltl1c1__DOT__lut_match_ltl1c1_1__DOT__match_internal)));
    vlSelf->lanewrap__DOT__dut__DOT__c1__DOT__automata_stage0c1__DOT__automata_ltl2c1__DOT____Vcellinp__ltl2c1_ste_1__income_edges 
        = (((IData)(vlSelf->lanewrap__DOT__dut__DOT__c0__DOT__automata_stage0C0__DOT__automata_ltl1c0__DOT__start_of_data) 
            << 1U) | ((IData)(vlSelf->lanewrap__DOT__dut__DOT__c1__DOT__automata_stage0c1__DOT__automata_ltl2c1__DOT__ltl2c1_ste_1__DOT__internal_reg) 
                      & (IData)(vlSelf->lanewrap__DOT__dut__DOT__c1__DOT__automata_stage0c1__DOT__automata_ltl2c1__DOT__lut_match_ltl2c1_1__DOT__match_internal)));
    vlSelf->lanewrap__DOT__dut__DOT__c1__DOT__automata_stage0c1__DOT__automata_ltl0c1__DOT____Vcellinp__ltl0c1_ste_1__income_edges 
        = (((IData)(vlSelf->lanewrap__DOT__dut__DOT__c0__DOT__automata_stage0C0__DOT__automata_ltl1c0__DOT__start_of_data) 
            << 1U) | ((IData)(vlSelf->lanewrap__DOT__dut__DOT__c1__DOT__automata_stage0c1__DOT__automata_ltl0c1__DOT__ltl0c1_ste_1__DOT__internal_reg) 
                      & (3U >= (IData)(vlSelf->lanewrap__DOT__dut__DOT__c1_i))));
    vlSelf->lanewrap__DOT__dut__DOT__c0__DOT__automata_stage0C0__DOT__automata_ltl0c0__DOT____Vcellinp__ltl0c0_ste_4__income_edges 
        = (((IData)(vlSelf->lanewrap__DOT__dut__DOT__c0__DOT__ltl0c0_w_out_9) 
            << 3U) | (((IData)(vlSelf->lanewrap__DOT__dut__DOT__c0__DOT__ltl0c0_w_out_2) 
                       << 2U) | (((IData)(vlSelf->lanewrap__DOT__dut__DOT__c0__DOT__automata_stage0C0__DOT__automata_ltl0c0__DOT__ltl0c0_ste_4__DOT__internal_reg) 
                                  << 1U) | (IData)(vlSelf->lanewrap__DOT__dut__DOT__c0__DOT__ltl0c0_w_out_7))));
    vlSelf->lanewrap__DOT__dut__DOT__c0__DOT__automata_stage0C0__DOT__automata_ltl1c0__DOT____Vcellinp__ltl1c0_ste_7__income_edges 
        = (((IData)(vlSelf->lanewrap__DOT__dut__DOT__c0__DOT__ltl1c0_w_out_9) 
            << 3U) | (((IData)(vlSelf->lanewrap__DOT__dut__DOT__c0__DOT__ltl1c0_w_out_3) 
                       << 2U) | (((IData)(vlSelf->lanewrap__DOT__dut__DOT__c0__DOT__ltl1c0_w_out_5) 
                                  << 1U) | (IData)(vlSelf->lanewrap__DOT__dut__DOT__c0__DOT__automata_stage0C0__DOT__automata_ltl1c0__DOT__ltl1c0_ste_7__DOT__internal_reg))));
    vlSelf->lanewrap__DOT__dut__DOT__c1__DOT__ltl1c1_w_out_7 
        = ((IData)(vlSelf->lanewrap__DOT__dut__DOT__c1__DOT__automata_stage0c1__DOT__automata_ltl1c1__DOT__ltl1c1_ste_5__DOT__internal_reg) 
           & (IData)(vlSelf->lanewrap__DOT__dut__DOT__c1__DOT__automata_stage0c1__DOT__automata_ltl0c1__DOT__lut_match_ltl0c1_2__DOT__match_internal));
    vlSelf->lanewrap__DOT__dut__DOT__c1__DOT__ltl0c1_w_out_2 
        = ((IData)(vlSelf->lanewrap__DOT__dut__DOT__c1__DOT__automata_stage0c1__DOT__automata_ltl0c1__DOT__ltl0c1_ste_2__DOT__internal_reg) 
           & (IData)(vlSelf->lanewrap__DOT__dut__DOT__c1__DOT__automata_stage0c1__DOT__automata_ltl0c1__DOT__lut_match_ltl0c1_2__DOT__match_internal));
    vlSelf->lanewrap__DOT__dut__DOT__c1__DOT__automata_stage0c1__DOT__automata_ltl2c1__DOT____Vcellinp__ltl2c1_ste_7__income_edges 
        = (((IData)(vlSelf->lanewrap__DOT__dut__DOT__c1__DOT__ltl2c1_w_out_9) 
            << 3U) | (((IData)(vlSelf->lanewrap__DOT__dut__DOT__c1__DOT__ltl2c1_w_out_3) 
                       << 2U) | (((IData)(vlSelf->lanewrap__DOT__dut__DOT__c1__DOT__ltl2c1_w_out_5) 
                                  << 1U) | (IData)(vlSelf->lanewrap__DOT__dut__DOT__c1__DOT__automata_stage0c1__DOT__automata_ltl2c1__DOT__ltl2c1_ste_7__DOT__internal_reg))));
    vlSelf->lanewrap__DOT__dut__DOT__c1__DOT__automata_stage0c1__DOT__automata_ltl1c1__DOT____Vcellinp__ltl1c1_ste_4__income_edges 
        = (((IData)(vlSelf->lanewrap__DOT__dut__DOT__c1__DOT__ltl1c1_w_out_9) 
            << 3U) | (((IData)(vlSelf->lanewrap__DOT__dut__DOT__c1__DOT__ltl1c1_w_out_2) 
                       << 2U) | (((IData)(vlSelf->lanewrap__DOT__dut__DOT__c1__DOT__automata_stage0c1__DOT__automata_ltl1c1__DOT__ltl1c1_ste_4__DOT__internal_reg) 
                                  << 1U) | (IData)(vlSelf->lanewrap__DOT__dut__DOT__c1__DOT__ltl1c1_w_out_7))));
    vlSelf->lanewrap__DOT__dut__DOT__c1__DOT__automata_stage0c1__DOT__automata_ltl0c1__DOT____Vcellinp__ltl0c1_ste_4__income_edges 
        = (((IData)(vlSelf->lanewrap__DOT__dut__DOT__c1__DOT__ltl0c1_w_out_9) 
            << 3U) | (((IData)(vlSelf->lanewrap__DOT__dut__DOT__c1__DOT__ltl0c1_w_out_2) 
                       << 2U) | (((IData)(vlSelf->lanewrap__DOT__dut__DOT__c1__DOT__automata_stage0c1__DOT__automata_ltl0c1__DOT__ltl0c1_ste_4__DOT__internal_reg) 
                                  << 1U) | (IData)(vlSelf->lanewrap__DOT__dut__DOT__c1__DOT__ltl0c1_w_out_7))));
    vlSelf->monitor_o = ((((IData)(vlSelf->lanewrap__DOT__dut__DOT__c1__DOT__ltl2c1_w_out_3) 
                           | ((IData)(vlSelf->lanewrap__DOT__dut__DOT__c1__DOT__ltl2c1_w_out_5) 
                              | ((IData)(vlSelf->lanewrap__DOT__dut__DOT__c1__DOT__automata_stage0c1__DOT__automata_ltl2c1__DOT__ltl2c1_ste_7__DOT__internal_reg) 
                                 | (IData)(vlSelf->lanewrap__DOT__dut__DOT__c1__DOT__ltl2c1_w_out_9)))) 
                          << 4U) | ((((IData)(vlSelf->lanewrap__DOT__dut__DOT__c1__DOT__ltl1c1_w_out_2) 
                                      | ((IData)(vlSelf->lanewrap__DOT__dut__DOT__c1__DOT__automata_stage0c1__DOT__automata_ltl1c1__DOT__ltl1c1_ste_4__DOT__internal_reg) 
                                         | ((IData)(vlSelf->lanewrap__DOT__dut__DOT__c1__DOT__ltl1c1_w_out_7) 
                                            | (IData)(vlSelf->lanewrap__DOT__dut__DOT__c1__DOT__ltl1c1_w_out_9)))) 
                                     << 3U) | ((((IData)(vlSelf->lanewrap__DOT__dut__DOT__c1__DOT__ltl0c1_w_out_2) 
                                                 | ((IData)(vlSelf->lanewrap__DOT__dut__DOT__c1__DOT__automata_stage0c1__DOT__automata_ltl0c1__DOT__ltl0c1_ste_4__DOT__internal_reg) 
                                                    | ((IData)(vlSelf->lanewrap__DOT__dut__DOT__c1__DOT__ltl0c1_w_out_7) 
                                                       | (IData)(vlSelf->lanewrap__DOT__dut__DOT__c1__DOT__ltl0c1_w_out_9)))) 
                                                << 2U) 
                                               | ((((IData)(vlSelf->lanewrap__DOT__dut__DOT__c0__DOT__ltl1c0_w_out_3) 
                                                    | ((IData)(vlSelf->lanewrap__DOT__dut__DOT__c0__DOT__ltl1c0_w_out_5) 
                                                       | ((IData)(vlSelf->lanewrap__DOT__dut__DOT__c0__DOT__automata_stage0C0__DOT__automata_ltl1c0__DOT__ltl1c0_ste_7__DOT__internal_reg) 
                                                          | (IData)(vlSelf->lanewrap__DOT__dut__DOT__c0__DOT__ltl1c0_w_out_9)))) 
                                                   << 1U) 
                                                  | ((IData)(vlSelf->lanewrap__DOT__dut__DOT__c0__DOT__ltl0c0_w_out_2) 
                                                     | ((IData)(vlSelf->lanewrap__DOT__dut__DOT__c0__DOT__automata_stage0C0__DOT__automata_ltl0c0__DOT__ltl0c0_ste_4__DOT__internal_reg) 
                                                        | ((IData)(vlSelf->lanewrap__DOT__dut__DOT__c0__DOT__ltl0c0_w_out_7) 
                                                           | (IData)(vlSelf->lanewrap__DOT__dut__DOT__c0__DOT__ltl0c0_w_out_9))))))));
}

VL_INLINE_OPT void rm_tb_lane___024root___nba_sequent__TOP__1(rm_tb_lane___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    rm_tb_lane__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    rm_tb_lane___024root___nba_sequent__TOP__1\n"); );
    // Body
    vlSelf->lanewrap__DOT__dut__DOT__c0__DOT__automata_stage0C0__DOT__automata_ltl0c0__DOT__start_of_data_reg_ne 
        = vlSelf->lanewrap__DOT__lane_reset_reg;
}

VL_INLINE_OPT void rm_tb_lane___024root___nba_comb__TOP__0(rm_tb_lane___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    rm_tb_lane__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    rm_tb_lane___024root___nba_comb__TOP__0\n"); );
    // Body
    vlSelf->lanewrap__DOT__dut__DOT__c0__DOT__automata_stage0C0__DOT__automata_ltl0c0__DOT__start_of_data 
        = ((IData)(vlSelf->lanewrap__DOT__dut__DOT__c0__DOT__automata_stage0C0__DOT__automata_ltl0c0__DOT__start_of_data_reg) 
           & ((~ (IData)(vlSelf->lanewrap__DOT__lane_reset_reg)) 
              & (IData)(vlSelf->lanewrap__DOT__dut__DOT__c0__DOT__automata_stage0C0__DOT__automata_ltl0c0__DOT__start_of_data_reg_ne)));
    vlSelf->lanewrap__DOT__dut__DOT__c0__DOT__automata_stage0C0__DOT__automata_ltl0c0__DOT____Vcellinp__ltl0c0_ste_1__income_edges 
        = (((IData)(vlSelf->lanewrap__DOT__dut__DOT__c0__DOT__automata_stage0C0__DOT__automata_ltl0c0__DOT__start_of_data) 
            << 1U) | ((IData)(vlSelf->lanewrap__DOT__dut__DOT__c0__DOT__automata_stage0C0__DOT__automata_ltl0c0__DOT__ltl0c0_ste_1__DOT__internal_reg) 
                      & (IData)(vlSelf->lanewrap__DOT__dut__DOT__c0__DOT__automata_stage0C0__DOT__automata_ltl0c0__DOT__lut_match_ltl0c0_1__DOT__match_internal)));
}

void rm_tb_lane___024root___eval_nba(rm_tb_lane___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    rm_tb_lane__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    rm_tb_lane___024root___eval_nba\n"); );
    // Body
    if (vlSelf->__VnbaTriggered.at(0U)) {
        rm_tb_lane___024root___nba_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[1U] = 1U;
    }
    if (vlSelf->__VnbaTriggered.at(1U)) {
        rm_tb_lane___024root___nba_sequent__TOP__1(vlSelf);
    }
    if ((vlSelf->__VnbaTriggered.at(0U) | vlSelf->__VnbaTriggered.at(1U))) {
        rm_tb_lane___024root___nba_comb__TOP__0(vlSelf);
    }
}

void rm_tb_lane___024root___eval_triggers__act(rm_tb_lane___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void rm_tb_lane___024root___dump_triggers__act(rm_tb_lane___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void rm_tb_lane___024root___dump_triggers__nba(rm_tb_lane___024root* vlSelf);
#endif  // VL_DEBUG

void rm_tb_lane___024root___eval(rm_tb_lane___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    rm_tb_lane__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    rm_tb_lane___024root___eval\n"); );
    // Init
    VlTriggerVec<2> __VpreTriggered;
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        __VnbaContinue = 0U;
        vlSelf->__VnbaTriggered.clear();
        vlSelf->__VactIterCount = 0U;
        vlSelf->__VactContinue = 1U;
        while (vlSelf->__VactContinue) {
            vlSelf->__VactContinue = 0U;
            rm_tb_lane___024root___eval_triggers__act(vlSelf);
            if (vlSelf->__VactTriggered.any()) {
                vlSelf->__VactContinue = 1U;
                if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                    rm_tb_lane___024root___dump_triggers__act(vlSelf);
#endif
                    VL_FATAL_MT("tb_top_lane.sv", 1, "", "Active region did not converge.");
                }
                vlSelf->__VactIterCount = ((IData)(1U) 
                                           + vlSelf->__VactIterCount);
                __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
                vlSelf->__VnbaTriggered.set(vlSelf->__VactTriggered);
                rm_tb_lane___024root___eval_act(vlSelf);
            }
        }
        if (vlSelf->__VnbaTriggered.any()) {
            __VnbaContinue = 1U;
            if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
                rm_tb_lane___024root___dump_triggers__nba(vlSelf);
#endif
                VL_FATAL_MT("tb_top_lane.sv", 1, "", "NBA region did not converge.");
            }
            __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
            rm_tb_lane___024root___eval_nba(vlSelf);
        }
    }
}

#ifdef VL_DEBUG
void rm_tb_lane___024root___eval_debug_assertions(rm_tb_lane___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    rm_tb_lane__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    rm_tb_lane___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->clk_i & 0xfeU))) {
        Verilated::overWidthError("clk_i");}
    if (VL_UNLIKELY((vlSelf->lane_vector_i & 0xc0U))) {
        Verilated::overWidthError("lane_vector_i");}
    if (VL_UNLIKELY((vlSelf->lane_reset_i & 0xfeU))) {
        Verilated::overWidthError("lane_reset_i");}
}
#endif  // VL_DEBUG
