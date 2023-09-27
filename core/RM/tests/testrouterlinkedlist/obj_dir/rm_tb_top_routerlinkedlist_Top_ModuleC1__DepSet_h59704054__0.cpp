// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See rm_tb_top_routerlinkedlist.h for the primary calling header

#include "verilated.h"

#include "rm_tb_top_routerlinkedlist_Top_ModuleC1.h"
#include "rm_tb_top_routerlinkedlist__Syms.h"

VL_INLINE_OPT void rm_tb_top_routerlinkedlist_Top_ModuleC1___nba_sequent__TOP__rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__0__KET____DOT__lane__DOT__I0c1__0(rm_tb_top_routerlinkedlist_Top_ModuleC1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    rm_tb_top_routerlinkedlist__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            rm_tb_top_routerlinkedlist_Top_ModuleC1___nba_sequent__TOP__rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__0__KET____DOT__lane__DOT__I0c1__0\n"); );
    // Body
    if (vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT____Vcellinp__genblk1__BRA__0__KET____DOT__lane__lane_reset_i) {
        vlSelf->__PVT__automata_stage0c1__DOT__out_reset = 1U;
        vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl2c1__DOT__start_of_data_reg = 1U;
        vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl0c1__DOT__ltl0c1_ste_3__DOT__internal_reg = 1U;
        vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl0c1__DOT__ltl0c1_ste_1__DOT__internal_reg = 1U;
        vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl2c1__DOT__ltl2c1_ste_1__DOT__internal_reg = 1U;
        vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl1c1__DOT__ltl1c1_ste_1__DOT__internal_reg = 1U;
        vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl1c1__DOT__ltl1c1_ste_3__DOT__internal_reg = 1U;
        vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl2c1__DOT__ltl2c1_ste_2__DOT__internal_reg = 1U;
        vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl0c1__DOT__ltl0c1_ste_2__DOT__internal_reg = 1U;
        vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl2c1__DOT__ltl2c1_ste_3__DOT__internal_reg = 1U;
        vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl1c1__DOT__ltl1c1_ste_2__DOT__internal_reg = 1U;
    } else {
        vlSelf->__PVT__automata_stage0c1__DOT__out_reset = 0U;
        vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl2c1__DOT__start_of_data_reg = 0U;
        vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl0c1__DOT__ltl0c1_ste_3__DOT__internal_reg 
            = (0U != (IData)(vlSelf->automata_stage0c1__DOT__automata_ltl0c1__DOT____Vcellinp__ltl0c1_ste_1__income_edges));
        vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl0c1__DOT__ltl0c1_ste_1__DOT__internal_reg 
            = (0U != (IData)(vlSelf->automata_stage0c1__DOT__automata_ltl0c1__DOT____Vcellinp__ltl0c1_ste_1__income_edges));
        vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl2c1__DOT__ltl2c1_ste_1__DOT__internal_reg 
            = (0U != (IData)(vlSelf->automata_stage0c1__DOT__automata_ltl2c1__DOT____Vcellinp__ltl2c1_ste_1__income_edges));
        vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl1c1__DOT__ltl1c1_ste_1__DOT__internal_reg 
            = (0U != (IData)(vlSelf->automata_stage0c1__DOT__automata_ltl1c1__DOT____Vcellinp__ltl1c1_ste_1__income_edges));
        vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl1c1__DOT__ltl1c1_ste_3__DOT__internal_reg 
            = (0U != (IData)(vlSelf->automata_stage0c1__DOT__automata_ltl1c1__DOT____Vcellinp__ltl1c1_ste_1__income_edges));
        vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl2c1__DOT__ltl2c1_ste_2__DOT__internal_reg 
            = (0U != (IData)(vlSelf->automata_stage0c1__DOT__automata_ltl2c1__DOT____Vcellinp__ltl2c1_ste_1__income_edges));
        vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl0c1__DOT__ltl0c1_ste_2__DOT__internal_reg 
            = (0U != (IData)(vlSelf->automata_stage0c1__DOT__automata_ltl0c1__DOT____Vcellinp__ltl0c1_ste_1__income_edges));
        vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl2c1__DOT__ltl2c1_ste_3__DOT__internal_reg 
            = (0U != (IData)(vlSelf->automata_stage0c1__DOT__automata_ltl2c1__DOT____Vcellinp__ltl2c1_ste_1__income_edges));
        vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl1c1__DOT__ltl1c1_ste_2__DOT__internal_reg 
            = (0U != (IData)(vlSelf->automata_stage0c1__DOT__automata_ltl1c1__DOT____Vcellinp__ltl1c1_ste_1__income_edges));
        if (vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl2c1__DOT__start_of_data) {
            vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl0c1__DOT__ltl0c1_ste_3__DOT__internal_reg = 1U;
            vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl0c1__DOT__ltl0c1_ste_1__DOT__internal_reg = 1U;
            vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl2c1__DOT__ltl2c1_ste_1__DOT__internal_reg = 1U;
            vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl1c1__DOT__ltl1c1_ste_1__DOT__internal_reg = 1U;
            vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl1c1__DOT__ltl1c1_ste_3__DOT__internal_reg = 1U;
            vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl2c1__DOT__ltl2c1_ste_2__DOT__internal_reg = 1U;
            vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl0c1__DOT__ltl0c1_ste_2__DOT__internal_reg = 1U;
            vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl2c1__DOT__ltl2c1_ste_3__DOT__internal_reg = 1U;
            vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl1c1__DOT__ltl1c1_ste_2__DOT__internal_reg = 1U;
        }
    }
    vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl0c1__DOT__ltl0c1_ste_4__DOT__internal_reg 
        = ((~ (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT____Vcellinp__genblk1__BRA__0__KET____DOT__lane__lane_reset_i)) 
           & (0U != (IData)(vlSelf->automata_stage0c1__DOT__automata_ltl0c1__DOT____Vcellinp__ltl0c1_ste_4__income_edges)));
    vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl2c1__DOT__ltl2c1_ste_7__DOT__internal_reg 
        = ((~ (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT____Vcellinp__genblk1__BRA__0__KET____DOT__lane__lane_reset_i)) 
           & (0U != (IData)(vlSelf->automata_stage0c1__DOT__automata_ltl2c1__DOT____Vcellinp__ltl2c1_ste_7__income_edges)));
    vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl1c1__DOT__ltl1c1_ste_4__DOT__internal_reg 
        = ((~ (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT____Vcellinp__genblk1__BRA__0__KET____DOT__lane__lane_reset_i)) 
           & (0U != (IData)(vlSelf->automata_stage0c1__DOT__automata_ltl1c1__DOT____Vcellinp__ltl1c1_ste_4__income_edges)));
    vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl0c1__DOT__ltl0c1_ste_8__DOT__internal_reg 
        = ((~ (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT____Vcellinp__genblk1__BRA__0__KET____DOT__lane__lane_reset_i)) 
           & (0U != (IData)(vlSelf->automata_stage0c1__DOT__automata_ltl0c1__DOT____Vcellinp__ltl0c1_ste_8__income_edges)));
    vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl1c1__DOT__ltl1c1_ste_8__DOT__internal_reg 
        = ((~ (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT____Vcellinp__genblk1__BRA__0__KET____DOT__lane__lane_reset_i)) 
           & (0U != (IData)(vlSelf->automata_stage0c1__DOT__automata_ltl1c1__DOT____Vcellinp__ltl1c1_ste_8__income_edges)));
    vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl2c1__DOT__ltl2c1_ste_8__DOT__internal_reg 
        = ((~ (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT____Vcellinp__genblk1__BRA__0__KET____DOT__lane__lane_reset_i)) 
           & (0U != (IData)(vlSelf->automata_stage0c1__DOT__automata_ltl2c1__DOT____Vcellinp__ltl2c1_ste_8__income_edges)));
    vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl0c1__DOT__ltl0c1_ste_5__DOT__internal_reg 
        = ((~ (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT____Vcellinp__genblk1__BRA__0__KET____DOT__lane__lane_reset_i)) 
           & (0U != (IData)(vlSelf->automata_stage0c1__DOT__automata_ltl0c1__DOT____Vcellinp__ltl0c1_ste_5__income_edges)));
    vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl1c1__DOT__ltl1c1_ste_5__DOT__internal_reg 
        = ((~ (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT____Vcellinp__genblk1__BRA__0__KET____DOT__lane__lane_reset_i)) 
           & (0U != (IData)(vlSelf->automata_stage0c1__DOT__automata_ltl1c1__DOT____Vcellinp__ltl1c1_ste_5__income_edges)));
    vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl2c1__DOT__ltl2c1_ste_4__DOT__internal_reg 
        = ((~ (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT____Vcellinp__genblk1__BRA__0__KET____DOT__lane__lane_reset_i)) 
           & (0U != (IData)(vlSelf->automata_stage0c1__DOT__automata_ltl2c1__DOT____Vcellinp__ltl2c1_ste_4__income_edges)));
    vlSelf->__PVT__automata_stage0c1__DOT__out_symbols 
        = vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__0__KET____DOT__lane__DOT__c1_i;
}

VL_INLINE_OPT void rm_tb_top_routerlinkedlist_Top_ModuleC1___nba_sequent__TOP__rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__0__KET____DOT__lane__DOT__I0c1__1(rm_tb_top_routerlinkedlist_Top_ModuleC1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    rm_tb_top_routerlinkedlist__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            rm_tb_top_routerlinkedlist_Top_ModuleC1___nba_sequent__TOP__rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__0__KET____DOT__lane__DOT__I0c1__1\n"); );
    // Body
    vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl2c1__DOT__start_of_data_reg_ne 
        = vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT____Vcellinp__genblk1__BRA__0__KET____DOT__lane__lane_reset_i;
}

VL_INLINE_OPT void rm_tb_top_routerlinkedlist_Top_ModuleC1___nba_comb__TOP__rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__0__KET____DOT__lane__DOT__I0c1__0(rm_tb_top_routerlinkedlist_Top_ModuleC1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    rm_tb_top_routerlinkedlist__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            rm_tb_top_routerlinkedlist_Top_ModuleC1___nba_comb__TOP__rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__0__KET____DOT__lane__DOT__I0c1__0\n"); );
    // Body
    vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl2c1__DOT__start_of_data 
        = ((IData)(vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl2c1__DOT__start_of_data_reg) 
           & ((~ (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT____Vcellinp__genblk1__BRA__0__KET____DOT__lane__lane_reset_i)) 
              & (IData)(vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl2c1__DOT__start_of_data_reg_ne)));
}

VL_INLINE_OPT void rm_tb_top_routerlinkedlist_Top_ModuleC1___nba_comb__TOP__rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__0__KET____DOT__lane__DOT__I0c1__1(rm_tb_top_routerlinkedlist_Top_ModuleC1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    rm_tb_top_routerlinkedlist__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            rm_tb_top_routerlinkedlist_Top_ModuleC1___nba_comb__TOP__rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__0__KET____DOT__lane__DOT__I0c1__1\n"); );
    // Body
    vlSelf->automata_stage0c1__DOT__automata_ltl0c1__DOT____Vcellinp__ltl0c1_ste_5__income_edges 
        = ((((IData)(vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl0c1__DOT__ltl0c1_ste_3__DOT__internal_reg) 
             & ((8U <= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__0__KET____DOT__lane__DOT__c1_i)) 
                & (0xbU >= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__0__KET____DOT__lane__DOT__c1_i)))) 
            << 1U) | ((IData)(vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl0c1__DOT__ltl0c1_ste_5__DOT__internal_reg) 
                      & (3U >= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__0__KET____DOT__lane__DOT__c1_i))));
    vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl1c1__DOT__lut_match_ltl1c1_1__DOT__match_internal 
        = ((1U >= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__0__KET____DOT__lane__DOT__c1_i)) 
           | ((8U <= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__0__KET____DOT__lane__DOT__c1_i)) 
              & (9U >= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__0__KET____DOT__lane__DOT__c1_i))));
    vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl2c1__DOT__lut_match_ltl2c1_1__DOT__match_internal 
        = ((0U >= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__0__KET____DOT__lane__DOT__c1_i)) 
           | (((2U <= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__0__KET____DOT__lane__DOT__c1_i)) 
               & (2U >= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__0__KET____DOT__lane__DOT__c1_i))) 
              | (((4U <= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__0__KET____DOT__lane__DOT__c1_i)) 
                  & (4U >= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__0__KET____DOT__lane__DOT__c1_i))) 
                 | ((6U <= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__0__KET____DOT__lane__DOT__c1_i)) 
                    & (6U >= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__0__KET____DOT__lane__DOT__c1_i))))));
    vlSelf->__PVT__ltl1c1_w_out_9 = ((IData)(vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl1c1__DOT__ltl1c1_ste_8__DOT__internal_reg) 
                                     & (((2U <= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__0__KET____DOT__lane__DOT__c1_i)) 
                                         & (7U >= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__0__KET____DOT__lane__DOT__c1_i))) 
                                        | (0xaU <= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__0__KET____DOT__lane__DOT__c1_i))));
    vlSelf->__PVT__ltl2c1_w_out_3 = ((IData)(vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl2c1__DOT__ltl2c1_ste_3__DOT__internal_reg) 
                                     & (8U <= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__0__KET____DOT__lane__DOT__c1_i)));
    vlSelf->__PVT__ltl0c1_w_out_7 = ((IData)(vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl0c1__DOT__ltl0c1_ste_5__DOT__internal_reg) 
                                     & (8U <= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__0__KET____DOT__lane__DOT__c1_i)));
    vlSelf->__PVT__ltl0c1_w_out_9 = ((IData)(vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl0c1__DOT__ltl0c1_ste_8__DOT__internal_reg) 
                                     & (4U <= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__0__KET____DOT__lane__DOT__c1_i)));
    vlSelf->__VdfgTmp_hb5b42c0f__0 = ((2U <= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__0__KET____DOT__lane__DOT__c1_i)) 
                                      & (3U >= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__0__KET____DOT__lane__DOT__c1_i)));
    vlSelf->__VdfgTmp_h2aa42c51__0 = ((0xaU <= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__0__KET____DOT__lane__DOT__c1_i)) 
                                      & (0xbU >= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__0__KET____DOT__lane__DOT__c1_i)));
    vlSelf->__VdfgTmp_h8f083f76__0 = ((7U <= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__0__KET____DOT__lane__DOT__c1_i)) 
                                      & (7U >= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__0__KET____DOT__lane__DOT__c1_i)));
    vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl0c1__DOT__lut_match_ltl0c1_6__DOT__match_internal 
        = ((4U <= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__0__KET____DOT__lane__DOT__c1_i)) 
           & (7U >= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__0__KET____DOT__lane__DOT__c1_i)));
    vlSelf->__VdfgTmp_hb30bd723__0 = ((1U <= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__0__KET____DOT__lane__DOT__c1_i)) 
                                      & (1U >= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__0__KET____DOT__lane__DOT__c1_i)));
    vlSelf->__VdfgTmp_he9b10395__0 = ((3U <= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__0__KET____DOT__lane__DOT__c1_i)) 
                                      & (3U >= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__0__KET____DOT__lane__DOT__c1_i)));
    vlSelf->__VdfgTmp_hd3ae48ab__0 = ((5U <= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__0__KET____DOT__lane__DOT__c1_i)) 
                                      & (5U >= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__0__KET____DOT__lane__DOT__c1_i)));
    vlSelf->automata_stage0c1__DOT__automata_ltl1c1__DOT____Vcellinp__ltl1c1_ste_5__income_edges 
        = ((((IData)(vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl1c1__DOT__ltl1c1_ste_3__DOT__internal_reg) 
             & (((4U <= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__0__KET____DOT__lane__DOT__c1_i)) 
                 & (5U >= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__0__KET____DOT__lane__DOT__c1_i))) 
                | ((0xcU <= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__0__KET____DOT__lane__DOT__c1_i)) 
                   & (0xdU >= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__0__KET____DOT__lane__DOT__c1_i))))) 
            << 1U) | ((IData)(vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl1c1__DOT__ltl1c1_ste_5__DOT__internal_reg) 
                      & (IData)(vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl1c1__DOT__lut_match_ltl1c1_1__DOT__match_internal)));
    vlSelf->automata_stage0c1__DOT__automata_ltl2c1__DOT____Vcellinp__ltl2c1_ste_8__income_edges 
        = ((((IData)(vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl2c1__DOT__ltl2c1_ste_8__DOT__internal_reg) 
             & (IData)(vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl2c1__DOT__lut_match_ltl2c1_1__DOT__match_internal)) 
            << 1U) | ((IData)(vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl2c1__DOT__ltl2c1_ste_4__DOT__internal_reg) 
                      & (((8U <= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__0__KET____DOT__lane__DOT__c1_i)) 
                          & (8U >= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__0__KET____DOT__lane__DOT__c1_i))) 
                         | (((0xaU <= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__0__KET____DOT__lane__DOT__c1_i)) 
                             & (0xaU >= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__0__KET____DOT__lane__DOT__c1_i))) 
                            | (((0xcU <= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__0__KET____DOT__lane__DOT__c1_i)) 
                                & (0xcU >= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__0__KET____DOT__lane__DOT__c1_i))) 
                               | ((0xeU <= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__0__KET____DOT__lane__DOT__c1_i)) 
                                  & (0xeU >= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__0__KET____DOT__lane__DOT__c1_i))))))));
    vlSelf->automata_stage0c1__DOT__automata_ltl1c1__DOT____Vcellinp__ltl1c1_ste_8__income_edges 
        = ((((IData)(vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl1c1__DOT__ltl1c1_ste_8__DOT__internal_reg) 
             & (IData)(vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl1c1__DOT__lut_match_ltl1c1_1__DOT__match_internal)) 
            << 1U) | ((IData)(vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl1c1__DOT__ltl1c1_ste_5__DOT__internal_reg) 
                      & ((IData)(vlSelf->__VdfgTmp_hb5b42c0f__0) 
                         | (IData)(vlSelf->__VdfgTmp_h2aa42c51__0))));
    vlSelf->__PVT__ltl1c1_w_out_2 = ((IData)(vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl1c1__DOT__ltl1c1_ste_2__DOT__internal_reg) 
                                     & ((IData)(vlSelf->__VdfgTmp_hb5b42c0f__0) 
                                        | (((6U <= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__0__KET____DOT__lane__DOT__c1_i)) 
                                            & (7U >= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__0__KET____DOT__lane__DOT__c1_i))) 
                                           | ((IData)(vlSelf->__VdfgTmp_h2aa42c51__0) 
                                              | (0xeU 
                                                 <= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__0__KET____DOT__lane__DOT__c1_i))))));
    vlSelf->automata_stage0c1__DOT__automata_ltl0c1__DOT____Vcellinp__ltl0c1_ste_8__income_edges 
        = ((((IData)(vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl0c1__DOT__ltl0c1_ste_8__DOT__internal_reg) 
             & (3U >= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__0__KET____DOT__lane__DOT__c1_i))) 
            << 1U) | ((IData)(vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl0c1__DOT__ltl0c1_ste_5__DOT__internal_reg) 
                      & (IData)(vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl0c1__DOT__lut_match_ltl0c1_6__DOT__match_internal)));
    vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl0c1__DOT__lut_match_ltl0c1_2__DOT__match_internal 
        = ((IData)(vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl0c1__DOT__lut_match_ltl0c1_6__DOT__match_internal) 
           | (0xcU <= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__0__KET____DOT__lane__DOT__c1_i)));
    vlSelf->automata_stage0c1__DOT__automata_ltl2c1__DOT____Vcellinp__ltl2c1_ste_4__income_edges 
        = ((((IData)(vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl2c1__DOT__ltl2c1_ste_2__DOT__internal_reg) 
             & ((IData)(vlSelf->__VdfgTmp_hb30bd723__0) 
                | ((IData)(vlSelf->__VdfgTmp_he9b10395__0) 
                   | ((IData)(vlSelf->__VdfgTmp_hd3ae48ab__0) 
                      | (IData)(vlSelf->__VdfgTmp_h8f083f76__0))))) 
            << 1U) | ((IData)(vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl2c1__DOT__ltl2c1_ste_4__DOT__internal_reg) 
                      & (IData)(vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl2c1__DOT__lut_match_ltl2c1_1__DOT__match_internal)));
    vlSelf->__PVT__ltl2c1_w_out_9 = ((IData)(vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl2c1__DOT__ltl2c1_ste_8__DOT__internal_reg) 
                                     & ((IData)(vlSelf->__VdfgTmp_hb30bd723__0) 
                                        | ((IData)(vlSelf->__VdfgTmp_he9b10395__0) 
                                           | ((IData)(vlSelf->__VdfgTmp_hd3ae48ab__0) 
                                              | (7U 
                                                 <= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__0__KET____DOT__lane__DOT__c1_i))))));
    vlSelf->__PVT__ltl2c1_w_out_5 = ((IData)(vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl2c1__DOT__ltl2c1_ste_4__DOT__internal_reg) 
                                     & ((IData)(vlSelf->__VdfgTmp_hb30bd723__0) 
                                        | ((IData)(vlSelf->__VdfgTmp_he9b10395__0) 
                                           | ((IData)(vlSelf->__VdfgTmp_hd3ae48ab__0) 
                                              | ((IData)(vlSelf->__VdfgTmp_h8f083f76__0) 
                                                 | (((9U 
                                                      <= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__0__KET____DOT__lane__DOT__c1_i)) 
                                                     & (9U 
                                                        >= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__0__KET____DOT__lane__DOT__c1_i))) 
                                                    | (((0xbU 
                                                         <= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__0__KET____DOT__lane__DOT__c1_i)) 
                                                        & (0xbU 
                                                           >= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__0__KET____DOT__lane__DOT__c1_i))) 
                                                       | (((0xdU 
                                                            <= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__0__KET____DOT__lane__DOT__c1_i)) 
                                                           & (0xdU 
                                                              >= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__0__KET____DOT__lane__DOT__c1_i))) 
                                                          | (0xfU 
                                                             <= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__0__KET____DOT__lane__DOT__c1_i))))))))));
    vlSelf->__PVT__ltl1c1_w_out_7 = ((IData)(vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl1c1__DOT__ltl1c1_ste_5__DOT__internal_reg) 
                                     & (IData)(vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl0c1__DOT__lut_match_ltl0c1_2__DOT__match_internal));
    vlSelf->__PVT__ltl0c1_w_out_2 = ((IData)(vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl0c1__DOT__ltl0c1_ste_2__DOT__internal_reg) 
                                     & (IData)(vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl0c1__DOT__lut_match_ltl0c1_2__DOT__match_internal));
    vlSelf->automata_stage0c1__DOT__automata_ltl2c1__DOT____Vcellinp__ltl2c1_ste_7__income_edges 
        = (((IData)(vlSelf->__PVT__ltl2c1_w_out_9) 
            << 3U) | (((IData)(vlSelf->__PVT__ltl2c1_w_out_3) 
                       << 2U) | (((IData)(vlSelf->__PVT__ltl2c1_w_out_5) 
                                  << 1U) | (IData)(vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl2c1__DOT__ltl2c1_ste_7__DOT__internal_reg))));
    vlSelf->automata_stage0c1__DOT__automata_ltl1c1__DOT____Vcellinp__ltl1c1_ste_4__income_edges 
        = (((IData)(vlSelf->__PVT__ltl1c1_w_out_9) 
            << 3U) | (((IData)(vlSelf->__PVT__ltl1c1_w_out_2) 
                       << 2U) | (((IData)(vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl1c1__DOT__ltl1c1_ste_4__DOT__internal_reg) 
                                  << 1U) | (IData)(vlSelf->__PVT__ltl1c1_w_out_7))));
    vlSelf->automata_stage0c1__DOT__automata_ltl0c1__DOT____Vcellinp__ltl0c1_ste_4__income_edges 
        = (((IData)(vlSelf->__PVT__ltl0c1_w_out_9) 
            << 3U) | (((IData)(vlSelf->__PVT__ltl0c1_w_out_2) 
                       << 2U) | (((IData)(vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl0c1__DOT__ltl0c1_ste_4__DOT__internal_reg) 
                                  << 1U) | (IData)(vlSelf->__PVT__ltl0c1_w_out_7))));
}

VL_INLINE_OPT void rm_tb_top_routerlinkedlist_Top_ModuleC1___nba_comb__TOP__rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__0__KET____DOT__lane__DOT__I0c1__2(rm_tb_top_routerlinkedlist_Top_ModuleC1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    rm_tb_top_routerlinkedlist__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            rm_tb_top_routerlinkedlist_Top_ModuleC1___nba_comb__TOP__rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__0__KET____DOT__lane__DOT__I0c1__2\n"); );
    // Body
    vlSelf->automata_stage0c1__DOT__automata_ltl0c1__DOT____Vcellinp__ltl0c1_ste_1__income_edges 
        = (((IData)(vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl2c1__DOT__start_of_data) 
            << 1U) | ((IData)(vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl0c1__DOT__ltl0c1_ste_1__DOT__internal_reg) 
                      & (3U >= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__0__KET____DOT__lane__DOT__c1_i))));
    vlSelf->automata_stage0c1__DOT__automata_ltl1c1__DOT____Vcellinp__ltl1c1_ste_1__income_edges 
        = (((IData)(vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl2c1__DOT__start_of_data) 
            << 1U) | ((IData)(vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl1c1__DOT__ltl1c1_ste_1__DOT__internal_reg) 
                      & (IData)(vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl1c1__DOT__lut_match_ltl1c1_1__DOT__match_internal)));
    vlSelf->automata_stage0c1__DOT__automata_ltl2c1__DOT____Vcellinp__ltl2c1_ste_1__income_edges 
        = (((IData)(vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl2c1__DOT__start_of_data) 
            << 1U) | ((IData)(vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl2c1__DOT__ltl2c1_ste_1__DOT__internal_reg) 
                      & (IData)(vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl2c1__DOT__lut_match_ltl2c1_1__DOT__match_internal)));
}

VL_INLINE_OPT void rm_tb_top_routerlinkedlist_Top_ModuleC1___nba_sequent__TOP__rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__0__KET____DOT__lane__DOT__I1c1__0(rm_tb_top_routerlinkedlist_Top_ModuleC1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    rm_tb_top_routerlinkedlist__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            rm_tb_top_routerlinkedlist_Top_ModuleC1___nba_sequent__TOP__rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__0__KET____DOT__lane__DOT__I1c1__0\n"); );
    // Body
    if (vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT____Vcellinp__genblk1__BRA__0__KET____DOT__lane__lane_reset_i) {
        vlSelf->__PVT__automata_stage0c1__DOT__out_reset = 1U;
        vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl2c1__DOT__start_of_data_reg = 1U;
        vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl0c1__DOT__ltl0c1_ste_3__DOT__internal_reg = 1U;
        vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl0c1__DOT__ltl0c1_ste_1__DOT__internal_reg = 1U;
        vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl2c1__DOT__ltl2c1_ste_1__DOT__internal_reg = 1U;
        vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl1c1__DOT__ltl1c1_ste_1__DOT__internal_reg = 1U;
        vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl1c1__DOT__ltl1c1_ste_3__DOT__internal_reg = 1U;
        vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl2c1__DOT__ltl2c1_ste_2__DOT__internal_reg = 1U;
        vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl0c1__DOT__ltl0c1_ste_2__DOT__internal_reg = 1U;
        vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl2c1__DOT__ltl2c1_ste_3__DOT__internal_reg = 1U;
        vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl1c1__DOT__ltl1c1_ste_2__DOT__internal_reg = 1U;
    } else {
        vlSelf->__PVT__automata_stage0c1__DOT__out_reset = 0U;
        vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl2c1__DOT__start_of_data_reg = 0U;
        vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl0c1__DOT__ltl0c1_ste_3__DOT__internal_reg 
            = (0U != (IData)(vlSelf->automata_stage0c1__DOT__automata_ltl0c1__DOT____Vcellinp__ltl0c1_ste_1__income_edges));
        vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl0c1__DOT__ltl0c1_ste_1__DOT__internal_reg 
            = (0U != (IData)(vlSelf->automata_stage0c1__DOT__automata_ltl0c1__DOT____Vcellinp__ltl0c1_ste_1__income_edges));
        vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl2c1__DOT__ltl2c1_ste_1__DOT__internal_reg 
            = (0U != (IData)(vlSelf->automata_stage0c1__DOT__automata_ltl2c1__DOT____Vcellinp__ltl2c1_ste_1__income_edges));
        vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl1c1__DOT__ltl1c1_ste_1__DOT__internal_reg 
            = (0U != (IData)(vlSelf->automata_stage0c1__DOT__automata_ltl1c1__DOT____Vcellinp__ltl1c1_ste_1__income_edges));
        vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl1c1__DOT__ltl1c1_ste_3__DOT__internal_reg 
            = (0U != (IData)(vlSelf->automata_stage0c1__DOT__automata_ltl1c1__DOT____Vcellinp__ltl1c1_ste_1__income_edges));
        vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl2c1__DOT__ltl2c1_ste_2__DOT__internal_reg 
            = (0U != (IData)(vlSelf->automata_stage0c1__DOT__automata_ltl2c1__DOT____Vcellinp__ltl2c1_ste_1__income_edges));
        vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl0c1__DOT__ltl0c1_ste_2__DOT__internal_reg 
            = (0U != (IData)(vlSelf->automata_stage0c1__DOT__automata_ltl0c1__DOT____Vcellinp__ltl0c1_ste_1__income_edges));
        vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl2c1__DOT__ltl2c1_ste_3__DOT__internal_reg 
            = (0U != (IData)(vlSelf->automata_stage0c1__DOT__automata_ltl2c1__DOT____Vcellinp__ltl2c1_ste_1__income_edges));
        vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl1c1__DOT__ltl1c1_ste_2__DOT__internal_reg 
            = (0U != (IData)(vlSelf->automata_stage0c1__DOT__automata_ltl1c1__DOT____Vcellinp__ltl1c1_ste_1__income_edges));
        if (vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl2c1__DOT__start_of_data) {
            vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl0c1__DOT__ltl0c1_ste_3__DOT__internal_reg = 1U;
            vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl0c1__DOT__ltl0c1_ste_1__DOT__internal_reg = 1U;
            vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl2c1__DOT__ltl2c1_ste_1__DOT__internal_reg = 1U;
            vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl1c1__DOT__ltl1c1_ste_1__DOT__internal_reg = 1U;
            vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl1c1__DOT__ltl1c1_ste_3__DOT__internal_reg = 1U;
            vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl2c1__DOT__ltl2c1_ste_2__DOT__internal_reg = 1U;
            vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl0c1__DOT__ltl0c1_ste_2__DOT__internal_reg = 1U;
            vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl2c1__DOT__ltl2c1_ste_3__DOT__internal_reg = 1U;
            vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl1c1__DOT__ltl1c1_ste_2__DOT__internal_reg = 1U;
        }
    }
    vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl0c1__DOT__ltl0c1_ste_4__DOT__internal_reg 
        = ((~ (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT____Vcellinp__genblk1__BRA__0__KET____DOT__lane__lane_reset_i)) 
           & (0U != (IData)(vlSelf->automata_stage0c1__DOT__automata_ltl0c1__DOT____Vcellinp__ltl0c1_ste_4__income_edges)));
    vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl2c1__DOT__ltl2c1_ste_7__DOT__internal_reg 
        = ((~ (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT____Vcellinp__genblk1__BRA__0__KET____DOT__lane__lane_reset_i)) 
           & (0U != (IData)(vlSelf->automata_stage0c1__DOT__automata_ltl2c1__DOT____Vcellinp__ltl2c1_ste_7__income_edges)));
    vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl1c1__DOT__ltl1c1_ste_4__DOT__internal_reg 
        = ((~ (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT____Vcellinp__genblk1__BRA__0__KET____DOT__lane__lane_reset_i)) 
           & (0U != (IData)(vlSelf->automata_stage0c1__DOT__automata_ltl1c1__DOT____Vcellinp__ltl1c1_ste_4__income_edges)));
    vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl0c1__DOT__ltl0c1_ste_8__DOT__internal_reg 
        = ((~ (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT____Vcellinp__genblk1__BRA__0__KET____DOT__lane__lane_reset_i)) 
           & (0U != (IData)(vlSelf->automata_stage0c1__DOT__automata_ltl0c1__DOT____Vcellinp__ltl0c1_ste_8__income_edges)));
    vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl1c1__DOT__ltl1c1_ste_8__DOT__internal_reg 
        = ((~ (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT____Vcellinp__genblk1__BRA__0__KET____DOT__lane__lane_reset_i)) 
           & (0U != (IData)(vlSelf->automata_stage0c1__DOT__automata_ltl1c1__DOT____Vcellinp__ltl1c1_ste_8__income_edges)));
    vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl2c1__DOT__ltl2c1_ste_8__DOT__internal_reg 
        = ((~ (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT____Vcellinp__genblk1__BRA__0__KET____DOT__lane__lane_reset_i)) 
           & (0U != (IData)(vlSelf->automata_stage0c1__DOT__automata_ltl2c1__DOT____Vcellinp__ltl2c1_ste_8__income_edges)));
    vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl0c1__DOT__ltl0c1_ste_5__DOT__internal_reg 
        = ((~ (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT____Vcellinp__genblk1__BRA__0__KET____DOT__lane__lane_reset_i)) 
           & (0U != (IData)(vlSelf->automata_stage0c1__DOT__automata_ltl0c1__DOT____Vcellinp__ltl0c1_ste_5__income_edges)));
    vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl1c1__DOT__ltl1c1_ste_5__DOT__internal_reg 
        = ((~ (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT____Vcellinp__genblk1__BRA__0__KET____DOT__lane__lane_reset_i)) 
           & (0U != (IData)(vlSelf->automata_stage0c1__DOT__automata_ltl1c1__DOT____Vcellinp__ltl1c1_ste_5__income_edges)));
    vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl2c1__DOT__ltl2c1_ste_4__DOT__internal_reg 
        = ((~ (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT____Vcellinp__genblk1__BRA__0__KET____DOT__lane__lane_reset_i)) 
           & (0U != (IData)(vlSelf->automata_stage0c1__DOT__automata_ltl2c1__DOT____Vcellinp__ltl2c1_ste_4__income_edges)));
    vlSelf->__PVT__automata_stage0c1__DOT__out_symbols 
        = vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__0__KET____DOT__lane__DOT__c3_i;
}

VL_INLINE_OPT void rm_tb_top_routerlinkedlist_Top_ModuleC1___nba_comb__TOP__rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__0__KET____DOT__lane__DOT__I1c1__1(rm_tb_top_routerlinkedlist_Top_ModuleC1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    rm_tb_top_routerlinkedlist__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            rm_tb_top_routerlinkedlist_Top_ModuleC1___nba_comb__TOP__rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__0__KET____DOT__lane__DOT__I1c1__1\n"); );
    // Body
    vlSelf->automata_stage0c1__DOT__automata_ltl0c1__DOT____Vcellinp__ltl0c1_ste_5__income_edges 
        = ((((IData)(vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl0c1__DOT__ltl0c1_ste_3__DOT__internal_reg) 
             & ((8U <= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__0__KET____DOT__lane__DOT__c3_i)) 
                & (0xbU >= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__0__KET____DOT__lane__DOT__c3_i)))) 
            << 1U) | ((IData)(vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl0c1__DOT__ltl0c1_ste_5__DOT__internal_reg) 
                      & (3U >= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__0__KET____DOT__lane__DOT__c3_i))));
    vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl1c1__DOT__lut_match_ltl1c1_1__DOT__match_internal 
        = ((1U >= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__0__KET____DOT__lane__DOT__c3_i)) 
           | ((8U <= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__0__KET____DOT__lane__DOT__c3_i)) 
              & (9U >= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__0__KET____DOT__lane__DOT__c3_i))));
    vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl2c1__DOT__lut_match_ltl2c1_1__DOT__match_internal 
        = ((0U >= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__0__KET____DOT__lane__DOT__c3_i)) 
           | (((2U <= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__0__KET____DOT__lane__DOT__c3_i)) 
               & (2U >= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__0__KET____DOT__lane__DOT__c3_i))) 
              | (((4U <= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__0__KET____DOT__lane__DOT__c3_i)) 
                  & (4U >= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__0__KET____DOT__lane__DOT__c3_i))) 
                 | ((6U <= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__0__KET____DOT__lane__DOT__c3_i)) 
                    & (6U >= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__0__KET____DOT__lane__DOT__c3_i))))));
    vlSelf->__PVT__ltl1c1_w_out_9 = ((IData)(vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl1c1__DOT__ltl1c1_ste_8__DOT__internal_reg) 
                                     & (((2U <= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__0__KET____DOT__lane__DOT__c3_i)) 
                                         & (7U >= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__0__KET____DOT__lane__DOT__c3_i))) 
                                        | (0xaU <= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__0__KET____DOT__lane__DOT__c3_i))));
    vlSelf->__PVT__ltl2c1_w_out_3 = ((IData)(vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl2c1__DOT__ltl2c1_ste_3__DOT__internal_reg) 
                                     & (8U <= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__0__KET____DOT__lane__DOT__c3_i)));
    vlSelf->__PVT__ltl0c1_w_out_7 = ((IData)(vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl0c1__DOT__ltl0c1_ste_5__DOT__internal_reg) 
                                     & (8U <= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__0__KET____DOT__lane__DOT__c3_i)));
    vlSelf->__PVT__ltl0c1_w_out_9 = ((IData)(vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl0c1__DOT__ltl0c1_ste_8__DOT__internal_reg) 
                                     & (4U <= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__0__KET____DOT__lane__DOT__c3_i)));
    vlSelf->__VdfgTmp_hb5b42c0f__0 = ((2U <= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__0__KET____DOT__lane__DOT__c3_i)) 
                                      & (3U >= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__0__KET____DOT__lane__DOT__c3_i)));
    vlSelf->__VdfgTmp_h2aa42c51__0 = ((0xaU <= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__0__KET____DOT__lane__DOT__c3_i)) 
                                      & (0xbU >= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__0__KET____DOT__lane__DOT__c3_i)));
    vlSelf->__VdfgTmp_h8f083f76__0 = ((7U <= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__0__KET____DOT__lane__DOT__c3_i)) 
                                      & (7U >= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__0__KET____DOT__lane__DOT__c3_i)));
    vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl0c1__DOT__lut_match_ltl0c1_6__DOT__match_internal 
        = ((4U <= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__0__KET____DOT__lane__DOT__c3_i)) 
           & (7U >= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__0__KET____DOT__lane__DOT__c3_i)));
    vlSelf->__VdfgTmp_hb30bd723__0 = ((1U <= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__0__KET____DOT__lane__DOT__c3_i)) 
                                      & (1U >= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__0__KET____DOT__lane__DOT__c3_i)));
    vlSelf->__VdfgTmp_he9b10395__0 = ((3U <= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__0__KET____DOT__lane__DOT__c3_i)) 
                                      & (3U >= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__0__KET____DOT__lane__DOT__c3_i)));
    vlSelf->__VdfgTmp_hd3ae48ab__0 = ((5U <= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__0__KET____DOT__lane__DOT__c3_i)) 
                                      & (5U >= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__0__KET____DOT__lane__DOT__c3_i)));
    vlSelf->automata_stage0c1__DOT__automata_ltl1c1__DOT____Vcellinp__ltl1c1_ste_5__income_edges 
        = ((((IData)(vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl1c1__DOT__ltl1c1_ste_3__DOT__internal_reg) 
             & (((4U <= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__0__KET____DOT__lane__DOT__c3_i)) 
                 & (5U >= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__0__KET____DOT__lane__DOT__c3_i))) 
                | ((0xcU <= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__0__KET____DOT__lane__DOT__c3_i)) 
                   & (0xdU >= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__0__KET____DOT__lane__DOT__c3_i))))) 
            << 1U) | ((IData)(vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl1c1__DOT__ltl1c1_ste_5__DOT__internal_reg) 
                      & (IData)(vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl1c1__DOT__lut_match_ltl1c1_1__DOT__match_internal)));
    vlSelf->automata_stage0c1__DOT__automata_ltl2c1__DOT____Vcellinp__ltl2c1_ste_8__income_edges 
        = ((((IData)(vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl2c1__DOT__ltl2c1_ste_8__DOT__internal_reg) 
             & (IData)(vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl2c1__DOT__lut_match_ltl2c1_1__DOT__match_internal)) 
            << 1U) | ((IData)(vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl2c1__DOT__ltl2c1_ste_4__DOT__internal_reg) 
                      & (((8U <= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__0__KET____DOT__lane__DOT__c3_i)) 
                          & (8U >= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__0__KET____DOT__lane__DOT__c3_i))) 
                         | (((0xaU <= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__0__KET____DOT__lane__DOT__c3_i)) 
                             & (0xaU >= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__0__KET____DOT__lane__DOT__c3_i))) 
                            | (((0xcU <= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__0__KET____DOT__lane__DOT__c3_i)) 
                                & (0xcU >= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__0__KET____DOT__lane__DOT__c3_i))) 
                               | ((0xeU <= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__0__KET____DOT__lane__DOT__c3_i)) 
                                  & (0xeU >= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__0__KET____DOT__lane__DOT__c3_i))))))));
    vlSelf->automata_stage0c1__DOT__automata_ltl1c1__DOT____Vcellinp__ltl1c1_ste_8__income_edges 
        = ((((IData)(vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl1c1__DOT__ltl1c1_ste_8__DOT__internal_reg) 
             & (IData)(vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl1c1__DOT__lut_match_ltl1c1_1__DOT__match_internal)) 
            << 1U) | ((IData)(vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl1c1__DOT__ltl1c1_ste_5__DOT__internal_reg) 
                      & ((IData)(vlSelf->__VdfgTmp_hb5b42c0f__0) 
                         | (IData)(vlSelf->__VdfgTmp_h2aa42c51__0))));
    vlSelf->__PVT__ltl1c1_w_out_2 = ((IData)(vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl1c1__DOT__ltl1c1_ste_2__DOT__internal_reg) 
                                     & ((IData)(vlSelf->__VdfgTmp_hb5b42c0f__0) 
                                        | (((6U <= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__0__KET____DOT__lane__DOT__c3_i)) 
                                            & (7U >= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__0__KET____DOT__lane__DOT__c3_i))) 
                                           | ((IData)(vlSelf->__VdfgTmp_h2aa42c51__0) 
                                              | (0xeU 
                                                 <= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__0__KET____DOT__lane__DOT__c3_i))))));
    vlSelf->automata_stage0c1__DOT__automata_ltl0c1__DOT____Vcellinp__ltl0c1_ste_8__income_edges 
        = ((((IData)(vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl0c1__DOT__ltl0c1_ste_8__DOT__internal_reg) 
             & (3U >= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__0__KET____DOT__lane__DOT__c3_i))) 
            << 1U) | ((IData)(vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl0c1__DOT__ltl0c1_ste_5__DOT__internal_reg) 
                      & (IData)(vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl0c1__DOT__lut_match_ltl0c1_6__DOT__match_internal)));
    vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl0c1__DOT__lut_match_ltl0c1_2__DOT__match_internal 
        = ((IData)(vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl0c1__DOT__lut_match_ltl0c1_6__DOT__match_internal) 
           | (0xcU <= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__0__KET____DOT__lane__DOT__c3_i)));
    vlSelf->automata_stage0c1__DOT__automata_ltl2c1__DOT____Vcellinp__ltl2c1_ste_4__income_edges 
        = ((((IData)(vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl2c1__DOT__ltl2c1_ste_2__DOT__internal_reg) 
             & ((IData)(vlSelf->__VdfgTmp_hb30bd723__0) 
                | ((IData)(vlSelf->__VdfgTmp_he9b10395__0) 
                   | ((IData)(vlSelf->__VdfgTmp_hd3ae48ab__0) 
                      | (IData)(vlSelf->__VdfgTmp_h8f083f76__0))))) 
            << 1U) | ((IData)(vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl2c1__DOT__ltl2c1_ste_4__DOT__internal_reg) 
                      & (IData)(vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl2c1__DOT__lut_match_ltl2c1_1__DOT__match_internal)));
    vlSelf->__PVT__ltl2c1_w_out_9 = ((IData)(vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl2c1__DOT__ltl2c1_ste_8__DOT__internal_reg) 
                                     & ((IData)(vlSelf->__VdfgTmp_hb30bd723__0) 
                                        | ((IData)(vlSelf->__VdfgTmp_he9b10395__0) 
                                           | ((IData)(vlSelf->__VdfgTmp_hd3ae48ab__0) 
                                              | (7U 
                                                 <= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__0__KET____DOT__lane__DOT__c3_i))))));
    vlSelf->__PVT__ltl2c1_w_out_5 = ((IData)(vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl2c1__DOT__ltl2c1_ste_4__DOT__internal_reg) 
                                     & ((IData)(vlSelf->__VdfgTmp_hb30bd723__0) 
                                        | ((IData)(vlSelf->__VdfgTmp_he9b10395__0) 
                                           | ((IData)(vlSelf->__VdfgTmp_hd3ae48ab__0) 
                                              | ((IData)(vlSelf->__VdfgTmp_h8f083f76__0) 
                                                 | (((9U 
                                                      <= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__0__KET____DOT__lane__DOT__c3_i)) 
                                                     & (9U 
                                                        >= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__0__KET____DOT__lane__DOT__c3_i))) 
                                                    | (((0xbU 
                                                         <= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__0__KET____DOT__lane__DOT__c3_i)) 
                                                        & (0xbU 
                                                           >= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__0__KET____DOT__lane__DOT__c3_i))) 
                                                       | (((0xdU 
                                                            <= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__0__KET____DOT__lane__DOT__c3_i)) 
                                                           & (0xdU 
                                                              >= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__0__KET____DOT__lane__DOT__c3_i))) 
                                                          | (0xfU 
                                                             <= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__0__KET____DOT__lane__DOT__c3_i))))))))));
    vlSelf->__PVT__ltl1c1_w_out_7 = ((IData)(vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl1c1__DOT__ltl1c1_ste_5__DOT__internal_reg) 
                                     & (IData)(vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl0c1__DOT__lut_match_ltl0c1_2__DOT__match_internal));
    vlSelf->__PVT__ltl0c1_w_out_2 = ((IData)(vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl0c1__DOT__ltl0c1_ste_2__DOT__internal_reg) 
                                     & (IData)(vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl0c1__DOT__lut_match_ltl0c1_2__DOT__match_internal));
    vlSelf->automata_stage0c1__DOT__automata_ltl2c1__DOT____Vcellinp__ltl2c1_ste_7__income_edges 
        = (((IData)(vlSelf->__PVT__ltl2c1_w_out_9) 
            << 3U) | (((IData)(vlSelf->__PVT__ltl2c1_w_out_3) 
                       << 2U) | (((IData)(vlSelf->__PVT__ltl2c1_w_out_5) 
                                  << 1U) | (IData)(vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl2c1__DOT__ltl2c1_ste_7__DOT__internal_reg))));
    vlSelf->automata_stage0c1__DOT__automata_ltl1c1__DOT____Vcellinp__ltl1c1_ste_4__income_edges 
        = (((IData)(vlSelf->__PVT__ltl1c1_w_out_9) 
            << 3U) | (((IData)(vlSelf->__PVT__ltl1c1_w_out_2) 
                       << 2U) | (((IData)(vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl1c1__DOT__ltl1c1_ste_4__DOT__internal_reg) 
                                  << 1U) | (IData)(vlSelf->__PVT__ltl1c1_w_out_7))));
    vlSelf->automata_stage0c1__DOT__automata_ltl0c1__DOT____Vcellinp__ltl0c1_ste_4__income_edges 
        = (((IData)(vlSelf->__PVT__ltl0c1_w_out_9) 
            << 3U) | (((IData)(vlSelf->__PVT__ltl0c1_w_out_2) 
                       << 2U) | (((IData)(vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl0c1__DOT__ltl0c1_ste_4__DOT__internal_reg) 
                                  << 1U) | (IData)(vlSelf->__PVT__ltl0c1_w_out_7))));
}

VL_INLINE_OPT void rm_tb_top_routerlinkedlist_Top_ModuleC1___nba_comb__TOP__rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__0__KET____DOT__lane__DOT__I1c1__2(rm_tb_top_routerlinkedlist_Top_ModuleC1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    rm_tb_top_routerlinkedlist__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            rm_tb_top_routerlinkedlist_Top_ModuleC1___nba_comb__TOP__rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__0__KET____DOT__lane__DOT__I1c1__2\n"); );
    // Body
    vlSelf->automata_stage0c1__DOT__automata_ltl0c1__DOT____Vcellinp__ltl0c1_ste_1__income_edges 
        = (((IData)(vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl2c1__DOT__start_of_data) 
            << 1U) | ((IData)(vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl0c1__DOT__ltl0c1_ste_1__DOT__internal_reg) 
                      & (3U >= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__0__KET____DOT__lane__DOT__c3_i))));
    vlSelf->automata_stage0c1__DOT__automata_ltl1c1__DOT____Vcellinp__ltl1c1_ste_1__income_edges 
        = (((IData)(vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl2c1__DOT__start_of_data) 
            << 1U) | ((IData)(vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl1c1__DOT__ltl1c1_ste_1__DOT__internal_reg) 
                      & (IData)(vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl1c1__DOT__lut_match_ltl1c1_1__DOT__match_internal)));
    vlSelf->automata_stage0c1__DOT__automata_ltl2c1__DOT____Vcellinp__ltl2c1_ste_1__income_edges 
        = (((IData)(vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl2c1__DOT__start_of_data) 
            << 1U) | ((IData)(vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl2c1__DOT__ltl2c1_ste_1__DOT__internal_reg) 
                      & (IData)(vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl2c1__DOT__lut_match_ltl2c1_1__DOT__match_internal)));
}

VL_INLINE_OPT void rm_tb_top_routerlinkedlist_Top_ModuleC1___nba_sequent__TOP__rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__1__KET____DOT__lane__DOT__I0c1__0(rm_tb_top_routerlinkedlist_Top_ModuleC1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    rm_tb_top_routerlinkedlist__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            rm_tb_top_routerlinkedlist_Top_ModuleC1___nba_sequent__TOP__rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__1__KET____DOT__lane__DOT__I0c1__0\n"); );
    // Body
    if (vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__lane__lane_reset_i) {
        vlSelf->__PVT__automata_stage0c1__DOT__out_reset = 1U;
        vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl2c1__DOT__start_of_data_reg = 1U;
        vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl0c1__DOT__ltl0c1_ste_3__DOT__internal_reg = 1U;
        vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl0c1__DOT__ltl0c1_ste_1__DOT__internal_reg = 1U;
        vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl2c1__DOT__ltl2c1_ste_1__DOT__internal_reg = 1U;
        vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl1c1__DOT__ltl1c1_ste_1__DOT__internal_reg = 1U;
        vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl1c1__DOT__ltl1c1_ste_3__DOT__internal_reg = 1U;
        vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl2c1__DOT__ltl2c1_ste_2__DOT__internal_reg = 1U;
        vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl0c1__DOT__ltl0c1_ste_2__DOT__internal_reg = 1U;
        vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl2c1__DOT__ltl2c1_ste_3__DOT__internal_reg = 1U;
        vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl1c1__DOT__ltl1c1_ste_2__DOT__internal_reg = 1U;
    } else {
        vlSelf->__PVT__automata_stage0c1__DOT__out_reset = 0U;
        vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl2c1__DOT__start_of_data_reg = 0U;
        vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl0c1__DOT__ltl0c1_ste_3__DOT__internal_reg 
            = (0U != (IData)(vlSelf->automata_stage0c1__DOT__automata_ltl0c1__DOT____Vcellinp__ltl0c1_ste_1__income_edges));
        vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl0c1__DOT__ltl0c1_ste_1__DOT__internal_reg 
            = (0U != (IData)(vlSelf->automata_stage0c1__DOT__automata_ltl0c1__DOT____Vcellinp__ltl0c1_ste_1__income_edges));
        vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl2c1__DOT__ltl2c1_ste_1__DOT__internal_reg 
            = (0U != (IData)(vlSelf->automata_stage0c1__DOT__automata_ltl2c1__DOT____Vcellinp__ltl2c1_ste_1__income_edges));
        vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl1c1__DOT__ltl1c1_ste_1__DOT__internal_reg 
            = (0U != (IData)(vlSelf->automata_stage0c1__DOT__automata_ltl1c1__DOT____Vcellinp__ltl1c1_ste_1__income_edges));
        vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl1c1__DOT__ltl1c1_ste_3__DOT__internal_reg 
            = (0U != (IData)(vlSelf->automata_stage0c1__DOT__automata_ltl1c1__DOT____Vcellinp__ltl1c1_ste_1__income_edges));
        vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl2c1__DOT__ltl2c1_ste_2__DOT__internal_reg 
            = (0U != (IData)(vlSelf->automata_stage0c1__DOT__automata_ltl2c1__DOT____Vcellinp__ltl2c1_ste_1__income_edges));
        vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl0c1__DOT__ltl0c1_ste_2__DOT__internal_reg 
            = (0U != (IData)(vlSelf->automata_stage0c1__DOT__automata_ltl0c1__DOT____Vcellinp__ltl0c1_ste_1__income_edges));
        vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl2c1__DOT__ltl2c1_ste_3__DOT__internal_reg 
            = (0U != (IData)(vlSelf->automata_stage0c1__DOT__automata_ltl2c1__DOT____Vcellinp__ltl2c1_ste_1__income_edges));
        vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl1c1__DOT__ltl1c1_ste_2__DOT__internal_reg 
            = (0U != (IData)(vlSelf->automata_stage0c1__DOT__automata_ltl1c1__DOT____Vcellinp__ltl1c1_ste_1__income_edges));
        if (vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl2c1__DOT__start_of_data) {
            vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl0c1__DOT__ltl0c1_ste_3__DOT__internal_reg = 1U;
            vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl0c1__DOT__ltl0c1_ste_1__DOT__internal_reg = 1U;
            vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl2c1__DOT__ltl2c1_ste_1__DOT__internal_reg = 1U;
            vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl1c1__DOT__ltl1c1_ste_1__DOT__internal_reg = 1U;
            vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl1c1__DOT__ltl1c1_ste_3__DOT__internal_reg = 1U;
            vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl2c1__DOT__ltl2c1_ste_2__DOT__internal_reg = 1U;
            vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl0c1__DOT__ltl0c1_ste_2__DOT__internal_reg = 1U;
            vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl2c1__DOT__ltl2c1_ste_3__DOT__internal_reg = 1U;
            vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl1c1__DOT__ltl1c1_ste_2__DOT__internal_reg = 1U;
        }
    }
    vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl0c1__DOT__ltl0c1_ste_4__DOT__internal_reg 
        = ((~ (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__lane__lane_reset_i)) 
           & (0U != (IData)(vlSelf->automata_stage0c1__DOT__automata_ltl0c1__DOT____Vcellinp__ltl0c1_ste_4__income_edges)));
    vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl2c1__DOT__ltl2c1_ste_7__DOT__internal_reg 
        = ((~ (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__lane__lane_reset_i)) 
           & (0U != (IData)(vlSelf->automata_stage0c1__DOT__automata_ltl2c1__DOT____Vcellinp__ltl2c1_ste_7__income_edges)));
    vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl1c1__DOT__ltl1c1_ste_4__DOT__internal_reg 
        = ((~ (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__lane__lane_reset_i)) 
           & (0U != (IData)(vlSelf->automata_stage0c1__DOT__automata_ltl1c1__DOT____Vcellinp__ltl1c1_ste_4__income_edges)));
    vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl0c1__DOT__ltl0c1_ste_8__DOT__internal_reg 
        = ((~ (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__lane__lane_reset_i)) 
           & (0U != (IData)(vlSelf->automata_stage0c1__DOT__automata_ltl0c1__DOT____Vcellinp__ltl0c1_ste_8__income_edges)));
    vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl1c1__DOT__ltl1c1_ste_8__DOT__internal_reg 
        = ((~ (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__lane__lane_reset_i)) 
           & (0U != (IData)(vlSelf->automata_stage0c1__DOT__automata_ltl1c1__DOT____Vcellinp__ltl1c1_ste_8__income_edges)));
    vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl2c1__DOT__ltl2c1_ste_8__DOT__internal_reg 
        = ((~ (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__lane__lane_reset_i)) 
           & (0U != (IData)(vlSelf->automata_stage0c1__DOT__automata_ltl2c1__DOT____Vcellinp__ltl2c1_ste_8__income_edges)));
    vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl0c1__DOT__ltl0c1_ste_5__DOT__internal_reg 
        = ((~ (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__lane__lane_reset_i)) 
           & (0U != (IData)(vlSelf->automata_stage0c1__DOT__automata_ltl0c1__DOT____Vcellinp__ltl0c1_ste_5__income_edges)));
    vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl1c1__DOT__ltl1c1_ste_5__DOT__internal_reg 
        = ((~ (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__lane__lane_reset_i)) 
           & (0U != (IData)(vlSelf->automata_stage0c1__DOT__automata_ltl1c1__DOT____Vcellinp__ltl1c1_ste_5__income_edges)));
    vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl2c1__DOT__ltl2c1_ste_4__DOT__internal_reg 
        = ((~ (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__lane__lane_reset_i)) 
           & (0U != (IData)(vlSelf->automata_stage0c1__DOT__automata_ltl2c1__DOT____Vcellinp__ltl2c1_ste_4__income_edges)));
    vlSelf->__PVT__automata_stage0c1__DOT__out_symbols 
        = vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__1__KET____DOT__lane__DOT__c1_i;
}

VL_INLINE_OPT void rm_tb_top_routerlinkedlist_Top_ModuleC1___nba_sequent__TOP__rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__1__KET____DOT__lane__DOT__I0c1__1(rm_tb_top_routerlinkedlist_Top_ModuleC1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    rm_tb_top_routerlinkedlist__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            rm_tb_top_routerlinkedlist_Top_ModuleC1___nba_sequent__TOP__rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__1__KET____DOT__lane__DOT__I0c1__1\n"); );
    // Body
    vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl2c1__DOT__start_of_data_reg_ne 
        = vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__lane__lane_reset_i;
}

VL_INLINE_OPT void rm_tb_top_routerlinkedlist_Top_ModuleC1___nba_comb__TOP__rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__1__KET____DOT__lane__DOT__I0c1__0(rm_tb_top_routerlinkedlist_Top_ModuleC1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    rm_tb_top_routerlinkedlist__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            rm_tb_top_routerlinkedlist_Top_ModuleC1___nba_comb__TOP__rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__1__KET____DOT__lane__DOT__I0c1__0\n"); );
    // Body
    vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl2c1__DOT__start_of_data 
        = ((IData)(vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl2c1__DOT__start_of_data_reg) 
           & ((~ (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__lane__lane_reset_i)) 
              & (IData)(vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl2c1__DOT__start_of_data_reg_ne)));
}

VL_INLINE_OPT void rm_tb_top_routerlinkedlist_Top_ModuleC1___nba_comb__TOP__rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__1__KET____DOT__lane__DOT__I0c1__1(rm_tb_top_routerlinkedlist_Top_ModuleC1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    rm_tb_top_routerlinkedlist__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            rm_tb_top_routerlinkedlist_Top_ModuleC1___nba_comb__TOP__rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__1__KET____DOT__lane__DOT__I0c1__1\n"); );
    // Body
    vlSelf->automata_stage0c1__DOT__automata_ltl0c1__DOT____Vcellinp__ltl0c1_ste_5__income_edges 
        = ((((IData)(vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl0c1__DOT__ltl0c1_ste_3__DOT__internal_reg) 
             & ((8U <= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__1__KET____DOT__lane__DOT__c1_i)) 
                & (0xbU >= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__1__KET____DOT__lane__DOT__c1_i)))) 
            << 1U) | ((IData)(vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl0c1__DOT__ltl0c1_ste_5__DOT__internal_reg) 
                      & (3U >= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__1__KET____DOT__lane__DOT__c1_i))));
    vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl1c1__DOT__lut_match_ltl1c1_1__DOT__match_internal 
        = ((1U >= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__1__KET____DOT__lane__DOT__c1_i)) 
           | ((8U <= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__1__KET____DOT__lane__DOT__c1_i)) 
              & (9U >= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__1__KET____DOT__lane__DOT__c1_i))));
    vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl2c1__DOT__lut_match_ltl2c1_1__DOT__match_internal 
        = ((0U >= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__1__KET____DOT__lane__DOT__c1_i)) 
           | (((2U <= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__1__KET____DOT__lane__DOT__c1_i)) 
               & (2U >= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__1__KET____DOT__lane__DOT__c1_i))) 
              | (((4U <= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__1__KET____DOT__lane__DOT__c1_i)) 
                  & (4U >= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__1__KET____DOT__lane__DOT__c1_i))) 
                 | ((6U <= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__1__KET____DOT__lane__DOT__c1_i)) 
                    & (6U >= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__1__KET____DOT__lane__DOT__c1_i))))));
    vlSelf->__PVT__ltl1c1_w_out_9 = ((IData)(vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl1c1__DOT__ltl1c1_ste_8__DOT__internal_reg) 
                                     & (((2U <= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__1__KET____DOT__lane__DOT__c1_i)) 
                                         & (7U >= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__1__KET____DOT__lane__DOT__c1_i))) 
                                        | (0xaU <= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__1__KET____DOT__lane__DOT__c1_i))));
    vlSelf->__PVT__ltl2c1_w_out_3 = ((IData)(vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl2c1__DOT__ltl2c1_ste_3__DOT__internal_reg) 
                                     & (8U <= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__1__KET____DOT__lane__DOT__c1_i)));
    vlSelf->__PVT__ltl0c1_w_out_7 = ((IData)(vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl0c1__DOT__ltl0c1_ste_5__DOT__internal_reg) 
                                     & (8U <= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__1__KET____DOT__lane__DOT__c1_i)));
    vlSelf->__PVT__ltl0c1_w_out_9 = ((IData)(vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl0c1__DOT__ltl0c1_ste_8__DOT__internal_reg) 
                                     & (4U <= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__1__KET____DOT__lane__DOT__c1_i)));
    vlSelf->__VdfgTmp_hb5b42c0f__0 = ((2U <= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__1__KET____DOT__lane__DOT__c1_i)) 
                                      & (3U >= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__1__KET____DOT__lane__DOT__c1_i)));
    vlSelf->__VdfgTmp_h2aa42c51__0 = ((0xaU <= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__1__KET____DOT__lane__DOT__c1_i)) 
                                      & (0xbU >= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__1__KET____DOT__lane__DOT__c1_i)));
    vlSelf->__VdfgTmp_h8f083f76__0 = ((7U <= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__1__KET____DOT__lane__DOT__c1_i)) 
                                      & (7U >= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__1__KET____DOT__lane__DOT__c1_i)));
    vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl0c1__DOT__lut_match_ltl0c1_6__DOT__match_internal 
        = ((4U <= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__1__KET____DOT__lane__DOT__c1_i)) 
           & (7U >= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__1__KET____DOT__lane__DOT__c1_i)));
    vlSelf->__VdfgTmp_hb30bd723__0 = ((1U <= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__1__KET____DOT__lane__DOT__c1_i)) 
                                      & (1U >= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__1__KET____DOT__lane__DOT__c1_i)));
    vlSelf->__VdfgTmp_he9b10395__0 = ((3U <= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__1__KET____DOT__lane__DOT__c1_i)) 
                                      & (3U >= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__1__KET____DOT__lane__DOT__c1_i)));
    vlSelf->__VdfgTmp_hd3ae48ab__0 = ((5U <= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__1__KET____DOT__lane__DOT__c1_i)) 
                                      & (5U >= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__1__KET____DOT__lane__DOT__c1_i)));
    vlSelf->automata_stage0c1__DOT__automata_ltl1c1__DOT____Vcellinp__ltl1c1_ste_5__income_edges 
        = ((((IData)(vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl1c1__DOT__ltl1c1_ste_3__DOT__internal_reg) 
             & (((4U <= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__1__KET____DOT__lane__DOT__c1_i)) 
                 & (5U >= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__1__KET____DOT__lane__DOT__c1_i))) 
                | ((0xcU <= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__1__KET____DOT__lane__DOT__c1_i)) 
                   & (0xdU >= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__1__KET____DOT__lane__DOT__c1_i))))) 
            << 1U) | ((IData)(vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl1c1__DOT__ltl1c1_ste_5__DOT__internal_reg) 
                      & (IData)(vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl1c1__DOT__lut_match_ltl1c1_1__DOT__match_internal)));
    vlSelf->automata_stage0c1__DOT__automata_ltl2c1__DOT____Vcellinp__ltl2c1_ste_8__income_edges 
        = ((((IData)(vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl2c1__DOT__ltl2c1_ste_8__DOT__internal_reg) 
             & (IData)(vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl2c1__DOT__lut_match_ltl2c1_1__DOT__match_internal)) 
            << 1U) | ((IData)(vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl2c1__DOT__ltl2c1_ste_4__DOT__internal_reg) 
                      & (((8U <= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__1__KET____DOT__lane__DOT__c1_i)) 
                          & (8U >= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__1__KET____DOT__lane__DOT__c1_i))) 
                         | (((0xaU <= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__1__KET____DOT__lane__DOT__c1_i)) 
                             & (0xaU >= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__1__KET____DOT__lane__DOT__c1_i))) 
                            | (((0xcU <= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__1__KET____DOT__lane__DOT__c1_i)) 
                                & (0xcU >= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__1__KET____DOT__lane__DOT__c1_i))) 
                               | ((0xeU <= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__1__KET____DOT__lane__DOT__c1_i)) 
                                  & (0xeU >= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__1__KET____DOT__lane__DOT__c1_i))))))));
    vlSelf->automata_stage0c1__DOT__automata_ltl1c1__DOT____Vcellinp__ltl1c1_ste_8__income_edges 
        = ((((IData)(vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl1c1__DOT__ltl1c1_ste_8__DOT__internal_reg) 
             & (IData)(vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl1c1__DOT__lut_match_ltl1c1_1__DOT__match_internal)) 
            << 1U) | ((IData)(vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl1c1__DOT__ltl1c1_ste_5__DOT__internal_reg) 
                      & ((IData)(vlSelf->__VdfgTmp_hb5b42c0f__0) 
                         | (IData)(vlSelf->__VdfgTmp_h2aa42c51__0))));
    vlSelf->__PVT__ltl1c1_w_out_2 = ((IData)(vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl1c1__DOT__ltl1c1_ste_2__DOT__internal_reg) 
                                     & ((IData)(vlSelf->__VdfgTmp_hb5b42c0f__0) 
                                        | (((6U <= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__1__KET____DOT__lane__DOT__c1_i)) 
                                            & (7U >= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__1__KET____DOT__lane__DOT__c1_i))) 
                                           | ((IData)(vlSelf->__VdfgTmp_h2aa42c51__0) 
                                              | (0xeU 
                                                 <= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__1__KET____DOT__lane__DOT__c1_i))))));
    vlSelf->automata_stage0c1__DOT__automata_ltl0c1__DOT____Vcellinp__ltl0c1_ste_8__income_edges 
        = ((((IData)(vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl0c1__DOT__ltl0c1_ste_8__DOT__internal_reg) 
             & (3U >= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__1__KET____DOT__lane__DOT__c1_i))) 
            << 1U) | ((IData)(vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl0c1__DOT__ltl0c1_ste_5__DOT__internal_reg) 
                      & (IData)(vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl0c1__DOT__lut_match_ltl0c1_6__DOT__match_internal)));
    vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl0c1__DOT__lut_match_ltl0c1_2__DOT__match_internal 
        = ((IData)(vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl0c1__DOT__lut_match_ltl0c1_6__DOT__match_internal) 
           | (0xcU <= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__1__KET____DOT__lane__DOT__c1_i)));
    vlSelf->automata_stage0c1__DOT__automata_ltl2c1__DOT____Vcellinp__ltl2c1_ste_4__income_edges 
        = ((((IData)(vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl2c1__DOT__ltl2c1_ste_2__DOT__internal_reg) 
             & ((IData)(vlSelf->__VdfgTmp_hb30bd723__0) 
                | ((IData)(vlSelf->__VdfgTmp_he9b10395__0) 
                   | ((IData)(vlSelf->__VdfgTmp_hd3ae48ab__0) 
                      | (IData)(vlSelf->__VdfgTmp_h8f083f76__0))))) 
            << 1U) | ((IData)(vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl2c1__DOT__ltl2c1_ste_4__DOT__internal_reg) 
                      & (IData)(vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl2c1__DOT__lut_match_ltl2c1_1__DOT__match_internal)));
    vlSelf->__PVT__ltl2c1_w_out_9 = ((IData)(vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl2c1__DOT__ltl2c1_ste_8__DOT__internal_reg) 
                                     & ((IData)(vlSelf->__VdfgTmp_hb30bd723__0) 
                                        | ((IData)(vlSelf->__VdfgTmp_he9b10395__0) 
                                           | ((IData)(vlSelf->__VdfgTmp_hd3ae48ab__0) 
                                              | (7U 
                                                 <= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__1__KET____DOT__lane__DOT__c1_i))))));
    vlSelf->__PVT__ltl2c1_w_out_5 = ((IData)(vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl2c1__DOT__ltl2c1_ste_4__DOT__internal_reg) 
                                     & ((IData)(vlSelf->__VdfgTmp_hb30bd723__0) 
                                        | ((IData)(vlSelf->__VdfgTmp_he9b10395__0) 
                                           | ((IData)(vlSelf->__VdfgTmp_hd3ae48ab__0) 
                                              | ((IData)(vlSelf->__VdfgTmp_h8f083f76__0) 
                                                 | (((9U 
                                                      <= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__1__KET____DOT__lane__DOT__c1_i)) 
                                                     & (9U 
                                                        >= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__1__KET____DOT__lane__DOT__c1_i))) 
                                                    | (((0xbU 
                                                         <= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__1__KET____DOT__lane__DOT__c1_i)) 
                                                        & (0xbU 
                                                           >= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__1__KET____DOT__lane__DOT__c1_i))) 
                                                       | (((0xdU 
                                                            <= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__1__KET____DOT__lane__DOT__c1_i)) 
                                                           & (0xdU 
                                                              >= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__1__KET____DOT__lane__DOT__c1_i))) 
                                                          | (0xfU 
                                                             <= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__1__KET____DOT__lane__DOT__c1_i))))))))));
    vlSelf->__PVT__ltl1c1_w_out_7 = ((IData)(vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl1c1__DOT__ltl1c1_ste_5__DOT__internal_reg) 
                                     & (IData)(vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl0c1__DOT__lut_match_ltl0c1_2__DOT__match_internal));
    vlSelf->__PVT__ltl0c1_w_out_2 = ((IData)(vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl0c1__DOT__ltl0c1_ste_2__DOT__internal_reg) 
                                     & (IData)(vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl0c1__DOT__lut_match_ltl0c1_2__DOT__match_internal));
    vlSelf->automata_stage0c1__DOT__automata_ltl2c1__DOT____Vcellinp__ltl2c1_ste_7__income_edges 
        = (((IData)(vlSelf->__PVT__ltl2c1_w_out_9) 
            << 3U) | (((IData)(vlSelf->__PVT__ltl2c1_w_out_3) 
                       << 2U) | (((IData)(vlSelf->__PVT__ltl2c1_w_out_5) 
                                  << 1U) | (IData)(vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl2c1__DOT__ltl2c1_ste_7__DOT__internal_reg))));
    vlSelf->automata_stage0c1__DOT__automata_ltl1c1__DOT____Vcellinp__ltl1c1_ste_4__income_edges 
        = (((IData)(vlSelf->__PVT__ltl1c1_w_out_9) 
            << 3U) | (((IData)(vlSelf->__PVT__ltl1c1_w_out_2) 
                       << 2U) | (((IData)(vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl1c1__DOT__ltl1c1_ste_4__DOT__internal_reg) 
                                  << 1U) | (IData)(vlSelf->__PVT__ltl1c1_w_out_7))));
    vlSelf->automata_stage0c1__DOT__automata_ltl0c1__DOT____Vcellinp__ltl0c1_ste_4__income_edges 
        = (((IData)(vlSelf->__PVT__ltl0c1_w_out_9) 
            << 3U) | (((IData)(vlSelf->__PVT__ltl0c1_w_out_2) 
                       << 2U) | (((IData)(vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl0c1__DOT__ltl0c1_ste_4__DOT__internal_reg) 
                                  << 1U) | (IData)(vlSelf->__PVT__ltl0c1_w_out_7))));
}

VL_INLINE_OPT void rm_tb_top_routerlinkedlist_Top_ModuleC1___nba_comb__TOP__rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__1__KET____DOT__lane__DOT__I0c1__2(rm_tb_top_routerlinkedlist_Top_ModuleC1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    rm_tb_top_routerlinkedlist__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            rm_tb_top_routerlinkedlist_Top_ModuleC1___nba_comb__TOP__rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__1__KET____DOT__lane__DOT__I0c1__2\n"); );
    // Body
    vlSelf->automata_stage0c1__DOT__automata_ltl0c1__DOT____Vcellinp__ltl0c1_ste_1__income_edges 
        = (((IData)(vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl2c1__DOT__start_of_data) 
            << 1U) | ((IData)(vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl0c1__DOT__ltl0c1_ste_1__DOT__internal_reg) 
                      & (3U >= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__1__KET____DOT__lane__DOT__c1_i))));
    vlSelf->automata_stage0c1__DOT__automata_ltl1c1__DOT____Vcellinp__ltl1c1_ste_1__income_edges 
        = (((IData)(vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl2c1__DOT__start_of_data) 
            << 1U) | ((IData)(vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl1c1__DOT__ltl1c1_ste_1__DOT__internal_reg) 
                      & (IData)(vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl1c1__DOT__lut_match_ltl1c1_1__DOT__match_internal)));
    vlSelf->automata_stage0c1__DOT__automata_ltl2c1__DOT____Vcellinp__ltl2c1_ste_1__income_edges 
        = (((IData)(vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl2c1__DOT__start_of_data) 
            << 1U) | ((IData)(vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl2c1__DOT__ltl2c1_ste_1__DOT__internal_reg) 
                      & (IData)(vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl2c1__DOT__lut_match_ltl2c1_1__DOT__match_internal)));
}

VL_INLINE_OPT void rm_tb_top_routerlinkedlist_Top_ModuleC1___nba_sequent__TOP__rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__1__KET____DOT__lane__DOT__I1c1__0(rm_tb_top_routerlinkedlist_Top_ModuleC1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    rm_tb_top_routerlinkedlist__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            rm_tb_top_routerlinkedlist_Top_ModuleC1___nba_sequent__TOP__rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__1__KET____DOT__lane__DOT__I1c1__0\n"); );
    // Body
    if (vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__lane__lane_reset_i) {
        vlSelf->__PVT__automata_stage0c1__DOT__out_reset = 1U;
        vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl2c1__DOT__start_of_data_reg = 1U;
        vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl0c1__DOT__ltl0c1_ste_3__DOT__internal_reg = 1U;
        vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl0c1__DOT__ltl0c1_ste_1__DOT__internal_reg = 1U;
        vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl2c1__DOT__ltl2c1_ste_1__DOT__internal_reg = 1U;
        vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl1c1__DOT__ltl1c1_ste_1__DOT__internal_reg = 1U;
        vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl1c1__DOT__ltl1c1_ste_3__DOT__internal_reg = 1U;
        vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl2c1__DOT__ltl2c1_ste_2__DOT__internal_reg = 1U;
        vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl0c1__DOT__ltl0c1_ste_2__DOT__internal_reg = 1U;
        vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl2c1__DOT__ltl2c1_ste_3__DOT__internal_reg = 1U;
        vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl1c1__DOT__ltl1c1_ste_2__DOT__internal_reg = 1U;
    } else {
        vlSelf->__PVT__automata_stage0c1__DOT__out_reset = 0U;
        vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl2c1__DOT__start_of_data_reg = 0U;
        vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl0c1__DOT__ltl0c1_ste_3__DOT__internal_reg 
            = (0U != (IData)(vlSelf->automata_stage0c1__DOT__automata_ltl0c1__DOT____Vcellinp__ltl0c1_ste_1__income_edges));
        vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl0c1__DOT__ltl0c1_ste_1__DOT__internal_reg 
            = (0U != (IData)(vlSelf->automata_stage0c1__DOT__automata_ltl0c1__DOT____Vcellinp__ltl0c1_ste_1__income_edges));
        vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl2c1__DOT__ltl2c1_ste_1__DOT__internal_reg 
            = (0U != (IData)(vlSelf->automata_stage0c1__DOT__automata_ltl2c1__DOT____Vcellinp__ltl2c1_ste_1__income_edges));
        vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl1c1__DOT__ltl1c1_ste_1__DOT__internal_reg 
            = (0U != (IData)(vlSelf->automata_stage0c1__DOT__automata_ltl1c1__DOT____Vcellinp__ltl1c1_ste_1__income_edges));
        vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl1c1__DOT__ltl1c1_ste_3__DOT__internal_reg 
            = (0U != (IData)(vlSelf->automata_stage0c1__DOT__automata_ltl1c1__DOT____Vcellinp__ltl1c1_ste_1__income_edges));
        vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl2c1__DOT__ltl2c1_ste_2__DOT__internal_reg 
            = (0U != (IData)(vlSelf->automata_stage0c1__DOT__automata_ltl2c1__DOT____Vcellinp__ltl2c1_ste_1__income_edges));
        vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl0c1__DOT__ltl0c1_ste_2__DOT__internal_reg 
            = (0U != (IData)(vlSelf->automata_stage0c1__DOT__automata_ltl0c1__DOT____Vcellinp__ltl0c1_ste_1__income_edges));
        vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl2c1__DOT__ltl2c1_ste_3__DOT__internal_reg 
            = (0U != (IData)(vlSelf->automata_stage0c1__DOT__automata_ltl2c1__DOT____Vcellinp__ltl2c1_ste_1__income_edges));
        vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl1c1__DOT__ltl1c1_ste_2__DOT__internal_reg 
            = (0U != (IData)(vlSelf->automata_stage0c1__DOT__automata_ltl1c1__DOT____Vcellinp__ltl1c1_ste_1__income_edges));
        if (vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl2c1__DOT__start_of_data) {
            vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl0c1__DOT__ltl0c1_ste_3__DOT__internal_reg = 1U;
            vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl0c1__DOT__ltl0c1_ste_1__DOT__internal_reg = 1U;
            vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl2c1__DOT__ltl2c1_ste_1__DOT__internal_reg = 1U;
            vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl1c1__DOT__ltl1c1_ste_1__DOT__internal_reg = 1U;
            vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl1c1__DOT__ltl1c1_ste_3__DOT__internal_reg = 1U;
            vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl2c1__DOT__ltl2c1_ste_2__DOT__internal_reg = 1U;
            vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl0c1__DOT__ltl0c1_ste_2__DOT__internal_reg = 1U;
            vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl2c1__DOT__ltl2c1_ste_3__DOT__internal_reg = 1U;
            vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl1c1__DOT__ltl1c1_ste_2__DOT__internal_reg = 1U;
        }
    }
    vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl0c1__DOT__ltl0c1_ste_4__DOT__internal_reg 
        = ((~ (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__lane__lane_reset_i)) 
           & (0U != (IData)(vlSelf->automata_stage0c1__DOT__automata_ltl0c1__DOT____Vcellinp__ltl0c1_ste_4__income_edges)));
    vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl2c1__DOT__ltl2c1_ste_7__DOT__internal_reg 
        = ((~ (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__lane__lane_reset_i)) 
           & (0U != (IData)(vlSelf->automata_stage0c1__DOT__automata_ltl2c1__DOT____Vcellinp__ltl2c1_ste_7__income_edges)));
    vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl1c1__DOT__ltl1c1_ste_4__DOT__internal_reg 
        = ((~ (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__lane__lane_reset_i)) 
           & (0U != (IData)(vlSelf->automata_stage0c1__DOT__automata_ltl1c1__DOT____Vcellinp__ltl1c1_ste_4__income_edges)));
    vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl0c1__DOT__ltl0c1_ste_8__DOT__internal_reg 
        = ((~ (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__lane__lane_reset_i)) 
           & (0U != (IData)(vlSelf->automata_stage0c1__DOT__automata_ltl0c1__DOT____Vcellinp__ltl0c1_ste_8__income_edges)));
    vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl1c1__DOT__ltl1c1_ste_8__DOT__internal_reg 
        = ((~ (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__lane__lane_reset_i)) 
           & (0U != (IData)(vlSelf->automata_stage0c1__DOT__automata_ltl1c1__DOT____Vcellinp__ltl1c1_ste_8__income_edges)));
    vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl2c1__DOT__ltl2c1_ste_8__DOT__internal_reg 
        = ((~ (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__lane__lane_reset_i)) 
           & (0U != (IData)(vlSelf->automata_stage0c1__DOT__automata_ltl2c1__DOT____Vcellinp__ltl2c1_ste_8__income_edges)));
    vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl0c1__DOT__ltl0c1_ste_5__DOT__internal_reg 
        = ((~ (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__lane__lane_reset_i)) 
           & (0U != (IData)(vlSelf->automata_stage0c1__DOT__automata_ltl0c1__DOT____Vcellinp__ltl0c1_ste_5__income_edges)));
    vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl1c1__DOT__ltl1c1_ste_5__DOT__internal_reg 
        = ((~ (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__lane__lane_reset_i)) 
           & (0U != (IData)(vlSelf->automata_stage0c1__DOT__automata_ltl1c1__DOT____Vcellinp__ltl1c1_ste_5__income_edges)));
    vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl2c1__DOT__ltl2c1_ste_4__DOT__internal_reg 
        = ((~ (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__lane__lane_reset_i)) 
           & (0U != (IData)(vlSelf->automata_stage0c1__DOT__automata_ltl2c1__DOT____Vcellinp__ltl2c1_ste_4__income_edges)));
    vlSelf->__PVT__automata_stage0c1__DOT__out_symbols 
        = vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__1__KET____DOT__lane__DOT__c3_i;
}

VL_INLINE_OPT void rm_tb_top_routerlinkedlist_Top_ModuleC1___nba_comb__TOP__rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__1__KET____DOT__lane__DOT__I1c1__1(rm_tb_top_routerlinkedlist_Top_ModuleC1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    rm_tb_top_routerlinkedlist__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            rm_tb_top_routerlinkedlist_Top_ModuleC1___nba_comb__TOP__rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__1__KET____DOT__lane__DOT__I1c1__1\n"); );
    // Body
    vlSelf->automata_stage0c1__DOT__automata_ltl0c1__DOT____Vcellinp__ltl0c1_ste_5__income_edges 
        = ((((IData)(vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl0c1__DOT__ltl0c1_ste_3__DOT__internal_reg) 
             & ((8U <= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__1__KET____DOT__lane__DOT__c3_i)) 
                & (0xbU >= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__1__KET____DOT__lane__DOT__c3_i)))) 
            << 1U) | ((IData)(vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl0c1__DOT__ltl0c1_ste_5__DOT__internal_reg) 
                      & (3U >= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__1__KET____DOT__lane__DOT__c3_i))));
    vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl1c1__DOT__lut_match_ltl1c1_1__DOT__match_internal 
        = ((1U >= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__1__KET____DOT__lane__DOT__c3_i)) 
           | ((8U <= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__1__KET____DOT__lane__DOT__c3_i)) 
              & (9U >= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__1__KET____DOT__lane__DOT__c3_i))));
    vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl2c1__DOT__lut_match_ltl2c1_1__DOT__match_internal 
        = ((0U >= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__1__KET____DOT__lane__DOT__c3_i)) 
           | (((2U <= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__1__KET____DOT__lane__DOT__c3_i)) 
               & (2U >= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__1__KET____DOT__lane__DOT__c3_i))) 
              | (((4U <= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__1__KET____DOT__lane__DOT__c3_i)) 
                  & (4U >= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__1__KET____DOT__lane__DOT__c3_i))) 
                 | ((6U <= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__1__KET____DOT__lane__DOT__c3_i)) 
                    & (6U >= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__1__KET____DOT__lane__DOT__c3_i))))));
    vlSelf->__PVT__ltl1c1_w_out_9 = ((IData)(vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl1c1__DOT__ltl1c1_ste_8__DOT__internal_reg) 
                                     & (((2U <= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__1__KET____DOT__lane__DOT__c3_i)) 
                                         & (7U >= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__1__KET____DOT__lane__DOT__c3_i))) 
                                        | (0xaU <= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__1__KET____DOT__lane__DOT__c3_i))));
    vlSelf->__PVT__ltl2c1_w_out_3 = ((IData)(vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl2c1__DOT__ltl2c1_ste_3__DOT__internal_reg) 
                                     & (8U <= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__1__KET____DOT__lane__DOT__c3_i)));
    vlSelf->__PVT__ltl0c1_w_out_7 = ((IData)(vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl0c1__DOT__ltl0c1_ste_5__DOT__internal_reg) 
                                     & (8U <= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__1__KET____DOT__lane__DOT__c3_i)));
    vlSelf->__PVT__ltl0c1_w_out_9 = ((IData)(vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl0c1__DOT__ltl0c1_ste_8__DOT__internal_reg) 
                                     & (4U <= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__1__KET____DOT__lane__DOT__c3_i)));
    vlSelf->__VdfgTmp_hb5b42c0f__0 = ((2U <= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__1__KET____DOT__lane__DOT__c3_i)) 
                                      & (3U >= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__1__KET____DOT__lane__DOT__c3_i)));
    vlSelf->__VdfgTmp_h2aa42c51__0 = ((0xaU <= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__1__KET____DOT__lane__DOT__c3_i)) 
                                      & (0xbU >= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__1__KET____DOT__lane__DOT__c3_i)));
    vlSelf->__VdfgTmp_h8f083f76__0 = ((7U <= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__1__KET____DOT__lane__DOT__c3_i)) 
                                      & (7U >= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__1__KET____DOT__lane__DOT__c3_i)));
    vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl0c1__DOT__lut_match_ltl0c1_6__DOT__match_internal 
        = ((4U <= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__1__KET____DOT__lane__DOT__c3_i)) 
           & (7U >= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__1__KET____DOT__lane__DOT__c3_i)));
    vlSelf->__VdfgTmp_hb30bd723__0 = ((1U <= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__1__KET____DOT__lane__DOT__c3_i)) 
                                      & (1U >= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__1__KET____DOT__lane__DOT__c3_i)));
    vlSelf->__VdfgTmp_he9b10395__0 = ((3U <= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__1__KET____DOT__lane__DOT__c3_i)) 
                                      & (3U >= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__1__KET____DOT__lane__DOT__c3_i)));
    vlSelf->__VdfgTmp_hd3ae48ab__0 = ((5U <= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__1__KET____DOT__lane__DOT__c3_i)) 
                                      & (5U >= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__1__KET____DOT__lane__DOT__c3_i)));
    vlSelf->automata_stage0c1__DOT__automata_ltl1c1__DOT____Vcellinp__ltl1c1_ste_5__income_edges 
        = ((((IData)(vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl1c1__DOT__ltl1c1_ste_3__DOT__internal_reg) 
             & (((4U <= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__1__KET____DOT__lane__DOT__c3_i)) 
                 & (5U >= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__1__KET____DOT__lane__DOT__c3_i))) 
                | ((0xcU <= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__1__KET____DOT__lane__DOT__c3_i)) 
                   & (0xdU >= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__1__KET____DOT__lane__DOT__c3_i))))) 
            << 1U) | ((IData)(vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl1c1__DOT__ltl1c1_ste_5__DOT__internal_reg) 
                      & (IData)(vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl1c1__DOT__lut_match_ltl1c1_1__DOT__match_internal)));
    vlSelf->automata_stage0c1__DOT__automata_ltl2c1__DOT____Vcellinp__ltl2c1_ste_8__income_edges 
        = ((((IData)(vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl2c1__DOT__ltl2c1_ste_8__DOT__internal_reg) 
             & (IData)(vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl2c1__DOT__lut_match_ltl2c1_1__DOT__match_internal)) 
            << 1U) | ((IData)(vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl2c1__DOT__ltl2c1_ste_4__DOT__internal_reg) 
                      & (((8U <= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__1__KET____DOT__lane__DOT__c3_i)) 
                          & (8U >= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__1__KET____DOT__lane__DOT__c3_i))) 
                         | (((0xaU <= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__1__KET____DOT__lane__DOT__c3_i)) 
                             & (0xaU >= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__1__KET____DOT__lane__DOT__c3_i))) 
                            | (((0xcU <= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__1__KET____DOT__lane__DOT__c3_i)) 
                                & (0xcU >= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__1__KET____DOT__lane__DOT__c3_i))) 
                               | ((0xeU <= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__1__KET____DOT__lane__DOT__c3_i)) 
                                  & (0xeU >= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__1__KET____DOT__lane__DOT__c3_i))))))));
    vlSelf->automata_stage0c1__DOT__automata_ltl1c1__DOT____Vcellinp__ltl1c1_ste_8__income_edges 
        = ((((IData)(vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl1c1__DOT__ltl1c1_ste_8__DOT__internal_reg) 
             & (IData)(vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl1c1__DOT__lut_match_ltl1c1_1__DOT__match_internal)) 
            << 1U) | ((IData)(vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl1c1__DOT__ltl1c1_ste_5__DOT__internal_reg) 
                      & ((IData)(vlSelf->__VdfgTmp_hb5b42c0f__0) 
                         | (IData)(vlSelf->__VdfgTmp_h2aa42c51__0))));
    vlSelf->__PVT__ltl1c1_w_out_2 = ((IData)(vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl1c1__DOT__ltl1c1_ste_2__DOT__internal_reg) 
                                     & ((IData)(vlSelf->__VdfgTmp_hb5b42c0f__0) 
                                        | (((6U <= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__1__KET____DOT__lane__DOT__c3_i)) 
                                            & (7U >= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__1__KET____DOT__lane__DOT__c3_i))) 
                                           | ((IData)(vlSelf->__VdfgTmp_h2aa42c51__0) 
                                              | (0xeU 
                                                 <= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__1__KET____DOT__lane__DOT__c3_i))))));
    vlSelf->automata_stage0c1__DOT__automata_ltl0c1__DOT____Vcellinp__ltl0c1_ste_8__income_edges 
        = ((((IData)(vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl0c1__DOT__ltl0c1_ste_8__DOT__internal_reg) 
             & (3U >= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__1__KET____DOT__lane__DOT__c3_i))) 
            << 1U) | ((IData)(vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl0c1__DOT__ltl0c1_ste_5__DOT__internal_reg) 
                      & (IData)(vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl0c1__DOT__lut_match_ltl0c1_6__DOT__match_internal)));
    vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl0c1__DOT__lut_match_ltl0c1_2__DOT__match_internal 
        = ((IData)(vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl0c1__DOT__lut_match_ltl0c1_6__DOT__match_internal) 
           | (0xcU <= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__1__KET____DOT__lane__DOT__c3_i)));
    vlSelf->automata_stage0c1__DOT__automata_ltl2c1__DOT____Vcellinp__ltl2c1_ste_4__income_edges 
        = ((((IData)(vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl2c1__DOT__ltl2c1_ste_2__DOT__internal_reg) 
             & ((IData)(vlSelf->__VdfgTmp_hb30bd723__0) 
                | ((IData)(vlSelf->__VdfgTmp_he9b10395__0) 
                   | ((IData)(vlSelf->__VdfgTmp_hd3ae48ab__0) 
                      | (IData)(vlSelf->__VdfgTmp_h8f083f76__0))))) 
            << 1U) | ((IData)(vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl2c1__DOT__ltl2c1_ste_4__DOT__internal_reg) 
                      & (IData)(vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl2c1__DOT__lut_match_ltl2c1_1__DOT__match_internal)));
    vlSelf->__PVT__ltl2c1_w_out_9 = ((IData)(vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl2c1__DOT__ltl2c1_ste_8__DOT__internal_reg) 
                                     & ((IData)(vlSelf->__VdfgTmp_hb30bd723__0) 
                                        | ((IData)(vlSelf->__VdfgTmp_he9b10395__0) 
                                           | ((IData)(vlSelf->__VdfgTmp_hd3ae48ab__0) 
                                              | (7U 
                                                 <= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__1__KET____DOT__lane__DOT__c3_i))))));
    vlSelf->__PVT__ltl2c1_w_out_5 = ((IData)(vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl2c1__DOT__ltl2c1_ste_4__DOT__internal_reg) 
                                     & ((IData)(vlSelf->__VdfgTmp_hb30bd723__0) 
                                        | ((IData)(vlSelf->__VdfgTmp_he9b10395__0) 
                                           | ((IData)(vlSelf->__VdfgTmp_hd3ae48ab__0) 
                                              | ((IData)(vlSelf->__VdfgTmp_h8f083f76__0) 
                                                 | (((9U 
                                                      <= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__1__KET____DOT__lane__DOT__c3_i)) 
                                                     & (9U 
                                                        >= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__1__KET____DOT__lane__DOT__c3_i))) 
                                                    | (((0xbU 
                                                         <= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__1__KET____DOT__lane__DOT__c3_i)) 
                                                        & (0xbU 
                                                           >= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__1__KET____DOT__lane__DOT__c3_i))) 
                                                       | (((0xdU 
                                                            <= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__1__KET____DOT__lane__DOT__c3_i)) 
                                                           & (0xdU 
                                                              >= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__1__KET____DOT__lane__DOT__c3_i))) 
                                                          | (0xfU 
                                                             <= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__1__KET____DOT__lane__DOT__c3_i))))))))));
    vlSelf->__PVT__ltl1c1_w_out_7 = ((IData)(vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl1c1__DOT__ltl1c1_ste_5__DOT__internal_reg) 
                                     & (IData)(vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl0c1__DOT__lut_match_ltl0c1_2__DOT__match_internal));
    vlSelf->__PVT__ltl0c1_w_out_2 = ((IData)(vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl0c1__DOT__ltl0c1_ste_2__DOT__internal_reg) 
                                     & (IData)(vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl0c1__DOT__lut_match_ltl0c1_2__DOT__match_internal));
    vlSelf->automata_stage0c1__DOT__automata_ltl2c1__DOT____Vcellinp__ltl2c1_ste_7__income_edges 
        = (((IData)(vlSelf->__PVT__ltl2c1_w_out_9) 
            << 3U) | (((IData)(vlSelf->__PVT__ltl2c1_w_out_3) 
                       << 2U) | (((IData)(vlSelf->__PVT__ltl2c1_w_out_5) 
                                  << 1U) | (IData)(vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl2c1__DOT__ltl2c1_ste_7__DOT__internal_reg))));
    vlSelf->automata_stage0c1__DOT__automata_ltl1c1__DOT____Vcellinp__ltl1c1_ste_4__income_edges 
        = (((IData)(vlSelf->__PVT__ltl1c1_w_out_9) 
            << 3U) | (((IData)(vlSelf->__PVT__ltl1c1_w_out_2) 
                       << 2U) | (((IData)(vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl1c1__DOT__ltl1c1_ste_4__DOT__internal_reg) 
                                  << 1U) | (IData)(vlSelf->__PVT__ltl1c1_w_out_7))));
    vlSelf->automata_stage0c1__DOT__automata_ltl0c1__DOT____Vcellinp__ltl0c1_ste_4__income_edges 
        = (((IData)(vlSelf->__PVT__ltl0c1_w_out_9) 
            << 3U) | (((IData)(vlSelf->__PVT__ltl0c1_w_out_2) 
                       << 2U) | (((IData)(vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl0c1__DOT__ltl0c1_ste_4__DOT__internal_reg) 
                                  << 1U) | (IData)(vlSelf->__PVT__ltl0c1_w_out_7))));
}

VL_INLINE_OPT void rm_tb_top_routerlinkedlist_Top_ModuleC1___nba_comb__TOP__rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__1__KET____DOT__lane__DOT__I1c1__2(rm_tb_top_routerlinkedlist_Top_ModuleC1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    rm_tb_top_routerlinkedlist__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            rm_tb_top_routerlinkedlist_Top_ModuleC1___nba_comb__TOP__rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__1__KET____DOT__lane__DOT__I1c1__2\n"); );
    // Body
    vlSelf->automata_stage0c1__DOT__automata_ltl0c1__DOT____Vcellinp__ltl0c1_ste_1__income_edges 
        = (((IData)(vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl2c1__DOT__start_of_data) 
            << 1U) | ((IData)(vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl0c1__DOT__ltl0c1_ste_1__DOT__internal_reg) 
                      & (3U >= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__1__KET____DOT__lane__DOT__c3_i))));
    vlSelf->automata_stage0c1__DOT__automata_ltl1c1__DOT____Vcellinp__ltl1c1_ste_1__income_edges 
        = (((IData)(vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl2c1__DOT__start_of_data) 
            << 1U) | ((IData)(vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl1c1__DOT__ltl1c1_ste_1__DOT__internal_reg) 
                      & (IData)(vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl1c1__DOT__lut_match_ltl1c1_1__DOT__match_internal)));
    vlSelf->automata_stage0c1__DOT__automata_ltl2c1__DOT____Vcellinp__ltl2c1_ste_1__income_edges 
        = (((IData)(vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl2c1__DOT__start_of_data) 
            << 1U) | ((IData)(vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl2c1__DOT__ltl2c1_ste_1__DOT__internal_reg) 
                      & (IData)(vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl2c1__DOT__lut_match_ltl2c1_1__DOT__match_internal)));
}

VL_INLINE_OPT void rm_tb_top_routerlinkedlist_Top_ModuleC1___nba_sequent__TOP__rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__2__KET____DOT__lane__DOT__I0c1__0(rm_tb_top_routerlinkedlist_Top_ModuleC1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    rm_tb_top_routerlinkedlist__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            rm_tb_top_routerlinkedlist_Top_ModuleC1___nba_sequent__TOP__rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__2__KET____DOT__lane__DOT__I0c1__0\n"); );
    // Body
    if (vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT____Vcellinp__genblk1__BRA__2__KET____DOT__lane__lane_reset_i) {
        vlSelf->__PVT__automata_stage0c1__DOT__out_reset = 1U;
        vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl2c1__DOT__start_of_data_reg = 1U;
        vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl0c1__DOT__ltl0c1_ste_3__DOT__internal_reg = 1U;
        vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl0c1__DOT__ltl0c1_ste_1__DOT__internal_reg = 1U;
        vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl2c1__DOT__ltl2c1_ste_1__DOT__internal_reg = 1U;
        vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl1c1__DOT__ltl1c1_ste_1__DOT__internal_reg = 1U;
        vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl1c1__DOT__ltl1c1_ste_3__DOT__internal_reg = 1U;
        vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl2c1__DOT__ltl2c1_ste_2__DOT__internal_reg = 1U;
        vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl0c1__DOT__ltl0c1_ste_2__DOT__internal_reg = 1U;
        vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl2c1__DOT__ltl2c1_ste_3__DOT__internal_reg = 1U;
        vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl1c1__DOT__ltl1c1_ste_2__DOT__internal_reg = 1U;
    } else {
        vlSelf->__PVT__automata_stage0c1__DOT__out_reset = 0U;
        vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl2c1__DOT__start_of_data_reg = 0U;
        vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl0c1__DOT__ltl0c1_ste_3__DOT__internal_reg 
            = (0U != (IData)(vlSelf->automata_stage0c1__DOT__automata_ltl0c1__DOT____Vcellinp__ltl0c1_ste_1__income_edges));
        vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl0c1__DOT__ltl0c1_ste_1__DOT__internal_reg 
            = (0U != (IData)(vlSelf->automata_stage0c1__DOT__automata_ltl0c1__DOT____Vcellinp__ltl0c1_ste_1__income_edges));
        vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl2c1__DOT__ltl2c1_ste_1__DOT__internal_reg 
            = (0U != (IData)(vlSelf->automata_stage0c1__DOT__automata_ltl2c1__DOT____Vcellinp__ltl2c1_ste_1__income_edges));
        vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl1c1__DOT__ltl1c1_ste_1__DOT__internal_reg 
            = (0U != (IData)(vlSelf->automata_stage0c1__DOT__automata_ltl1c1__DOT____Vcellinp__ltl1c1_ste_1__income_edges));
        vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl1c1__DOT__ltl1c1_ste_3__DOT__internal_reg 
            = (0U != (IData)(vlSelf->automata_stage0c1__DOT__automata_ltl1c1__DOT____Vcellinp__ltl1c1_ste_1__income_edges));
        vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl2c1__DOT__ltl2c1_ste_2__DOT__internal_reg 
            = (0U != (IData)(vlSelf->automata_stage0c1__DOT__automata_ltl2c1__DOT____Vcellinp__ltl2c1_ste_1__income_edges));
        vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl0c1__DOT__ltl0c1_ste_2__DOT__internal_reg 
            = (0U != (IData)(vlSelf->automata_stage0c1__DOT__automata_ltl0c1__DOT____Vcellinp__ltl0c1_ste_1__income_edges));
        vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl2c1__DOT__ltl2c1_ste_3__DOT__internal_reg 
            = (0U != (IData)(vlSelf->automata_stage0c1__DOT__automata_ltl2c1__DOT____Vcellinp__ltl2c1_ste_1__income_edges));
        vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl1c1__DOT__ltl1c1_ste_2__DOT__internal_reg 
            = (0U != (IData)(vlSelf->automata_stage0c1__DOT__automata_ltl1c1__DOT____Vcellinp__ltl1c1_ste_1__income_edges));
        if (vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl2c1__DOT__start_of_data) {
            vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl0c1__DOT__ltl0c1_ste_3__DOT__internal_reg = 1U;
            vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl0c1__DOT__ltl0c1_ste_1__DOT__internal_reg = 1U;
            vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl2c1__DOT__ltl2c1_ste_1__DOT__internal_reg = 1U;
            vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl1c1__DOT__ltl1c1_ste_1__DOT__internal_reg = 1U;
            vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl1c1__DOT__ltl1c1_ste_3__DOT__internal_reg = 1U;
            vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl2c1__DOT__ltl2c1_ste_2__DOT__internal_reg = 1U;
            vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl0c1__DOT__ltl0c1_ste_2__DOT__internal_reg = 1U;
            vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl2c1__DOT__ltl2c1_ste_3__DOT__internal_reg = 1U;
            vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl1c1__DOT__ltl1c1_ste_2__DOT__internal_reg = 1U;
        }
    }
    vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl0c1__DOT__ltl0c1_ste_4__DOT__internal_reg 
        = ((~ (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT____Vcellinp__genblk1__BRA__2__KET____DOT__lane__lane_reset_i)) 
           & (0U != (IData)(vlSelf->automata_stage0c1__DOT__automata_ltl0c1__DOT____Vcellinp__ltl0c1_ste_4__income_edges)));
    vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl2c1__DOT__ltl2c1_ste_7__DOT__internal_reg 
        = ((~ (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT____Vcellinp__genblk1__BRA__2__KET____DOT__lane__lane_reset_i)) 
           & (0U != (IData)(vlSelf->automata_stage0c1__DOT__automata_ltl2c1__DOT____Vcellinp__ltl2c1_ste_7__income_edges)));
    vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl1c1__DOT__ltl1c1_ste_4__DOT__internal_reg 
        = ((~ (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT____Vcellinp__genblk1__BRA__2__KET____DOT__lane__lane_reset_i)) 
           & (0U != (IData)(vlSelf->automata_stage0c1__DOT__automata_ltl1c1__DOT____Vcellinp__ltl1c1_ste_4__income_edges)));
    vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl0c1__DOT__ltl0c1_ste_8__DOT__internal_reg 
        = ((~ (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT____Vcellinp__genblk1__BRA__2__KET____DOT__lane__lane_reset_i)) 
           & (0U != (IData)(vlSelf->automata_stage0c1__DOT__automata_ltl0c1__DOT____Vcellinp__ltl0c1_ste_8__income_edges)));
    vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl1c1__DOT__ltl1c1_ste_8__DOT__internal_reg 
        = ((~ (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT____Vcellinp__genblk1__BRA__2__KET____DOT__lane__lane_reset_i)) 
           & (0U != (IData)(vlSelf->automata_stage0c1__DOT__automata_ltl1c1__DOT____Vcellinp__ltl1c1_ste_8__income_edges)));
    vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl2c1__DOT__ltl2c1_ste_8__DOT__internal_reg 
        = ((~ (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT____Vcellinp__genblk1__BRA__2__KET____DOT__lane__lane_reset_i)) 
           & (0U != (IData)(vlSelf->automata_stage0c1__DOT__automata_ltl2c1__DOT____Vcellinp__ltl2c1_ste_8__income_edges)));
    vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl0c1__DOT__ltl0c1_ste_5__DOT__internal_reg 
        = ((~ (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT____Vcellinp__genblk1__BRA__2__KET____DOT__lane__lane_reset_i)) 
           & (0U != (IData)(vlSelf->automata_stage0c1__DOT__automata_ltl0c1__DOT____Vcellinp__ltl0c1_ste_5__income_edges)));
    vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl1c1__DOT__ltl1c1_ste_5__DOT__internal_reg 
        = ((~ (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT____Vcellinp__genblk1__BRA__2__KET____DOT__lane__lane_reset_i)) 
           & (0U != (IData)(vlSelf->automata_stage0c1__DOT__automata_ltl1c1__DOT____Vcellinp__ltl1c1_ste_5__income_edges)));
    vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl2c1__DOT__ltl2c1_ste_4__DOT__internal_reg 
        = ((~ (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT____Vcellinp__genblk1__BRA__2__KET____DOT__lane__lane_reset_i)) 
           & (0U != (IData)(vlSelf->automata_stage0c1__DOT__automata_ltl2c1__DOT____Vcellinp__ltl2c1_ste_4__income_edges)));
    vlSelf->__PVT__automata_stage0c1__DOT__out_symbols 
        = vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__2__KET____DOT__lane__DOT__c1_i;
}

VL_INLINE_OPT void rm_tb_top_routerlinkedlist_Top_ModuleC1___nba_sequent__TOP__rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__2__KET____DOT__lane__DOT__I0c1__1(rm_tb_top_routerlinkedlist_Top_ModuleC1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    rm_tb_top_routerlinkedlist__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            rm_tb_top_routerlinkedlist_Top_ModuleC1___nba_sequent__TOP__rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__2__KET____DOT__lane__DOT__I0c1__1\n"); );
    // Body
    vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl2c1__DOT__start_of_data_reg_ne 
        = vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT____Vcellinp__genblk1__BRA__2__KET____DOT__lane__lane_reset_i;
}

VL_INLINE_OPT void rm_tb_top_routerlinkedlist_Top_ModuleC1___nba_comb__TOP__rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__2__KET____DOT__lane__DOT__I0c1__0(rm_tb_top_routerlinkedlist_Top_ModuleC1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    rm_tb_top_routerlinkedlist__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            rm_tb_top_routerlinkedlist_Top_ModuleC1___nba_comb__TOP__rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__2__KET____DOT__lane__DOT__I0c1__0\n"); );
    // Body
    vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl2c1__DOT__start_of_data 
        = ((IData)(vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl2c1__DOT__start_of_data_reg) 
           & ((~ (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT____Vcellinp__genblk1__BRA__2__KET____DOT__lane__lane_reset_i)) 
              & (IData)(vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl2c1__DOT__start_of_data_reg_ne)));
}

VL_INLINE_OPT void rm_tb_top_routerlinkedlist_Top_ModuleC1___nba_comb__TOP__rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__2__KET____DOT__lane__DOT__I0c1__1(rm_tb_top_routerlinkedlist_Top_ModuleC1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    rm_tb_top_routerlinkedlist__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            rm_tb_top_routerlinkedlist_Top_ModuleC1___nba_comb__TOP__rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__2__KET____DOT__lane__DOT__I0c1__1\n"); );
    // Body
    vlSelf->automata_stage0c1__DOT__automata_ltl0c1__DOT____Vcellinp__ltl0c1_ste_5__income_edges 
        = ((((IData)(vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl0c1__DOT__ltl0c1_ste_3__DOT__internal_reg) 
             & ((8U <= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__2__KET____DOT__lane__DOT__c1_i)) 
                & (0xbU >= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__2__KET____DOT__lane__DOT__c1_i)))) 
            << 1U) | ((IData)(vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl0c1__DOT__ltl0c1_ste_5__DOT__internal_reg) 
                      & (3U >= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__2__KET____DOT__lane__DOT__c1_i))));
    vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl1c1__DOT__lut_match_ltl1c1_1__DOT__match_internal 
        = ((1U >= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__2__KET____DOT__lane__DOT__c1_i)) 
           | ((8U <= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__2__KET____DOT__lane__DOT__c1_i)) 
              & (9U >= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__2__KET____DOT__lane__DOT__c1_i))));
    vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl2c1__DOT__lut_match_ltl2c1_1__DOT__match_internal 
        = ((0U >= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__2__KET____DOT__lane__DOT__c1_i)) 
           | (((2U <= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__2__KET____DOT__lane__DOT__c1_i)) 
               & (2U >= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__2__KET____DOT__lane__DOT__c1_i))) 
              | (((4U <= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__2__KET____DOT__lane__DOT__c1_i)) 
                  & (4U >= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__2__KET____DOT__lane__DOT__c1_i))) 
                 | ((6U <= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__2__KET____DOT__lane__DOT__c1_i)) 
                    & (6U >= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__2__KET____DOT__lane__DOT__c1_i))))));
    vlSelf->__PVT__ltl1c1_w_out_9 = ((IData)(vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl1c1__DOT__ltl1c1_ste_8__DOT__internal_reg) 
                                     & (((2U <= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__2__KET____DOT__lane__DOT__c1_i)) 
                                         & (7U >= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__2__KET____DOT__lane__DOT__c1_i))) 
                                        | (0xaU <= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__2__KET____DOT__lane__DOT__c1_i))));
    vlSelf->__PVT__ltl2c1_w_out_3 = ((IData)(vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl2c1__DOT__ltl2c1_ste_3__DOT__internal_reg) 
                                     & (8U <= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__2__KET____DOT__lane__DOT__c1_i)));
    vlSelf->__PVT__ltl0c1_w_out_7 = ((IData)(vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl0c1__DOT__ltl0c1_ste_5__DOT__internal_reg) 
                                     & (8U <= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__2__KET____DOT__lane__DOT__c1_i)));
    vlSelf->__PVT__ltl0c1_w_out_9 = ((IData)(vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl0c1__DOT__ltl0c1_ste_8__DOT__internal_reg) 
                                     & (4U <= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__2__KET____DOT__lane__DOT__c1_i)));
    vlSelf->__VdfgTmp_hb5b42c0f__0 = ((2U <= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__2__KET____DOT__lane__DOT__c1_i)) 
                                      & (3U >= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__2__KET____DOT__lane__DOT__c1_i)));
    vlSelf->__VdfgTmp_h2aa42c51__0 = ((0xaU <= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__2__KET____DOT__lane__DOT__c1_i)) 
                                      & (0xbU >= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__2__KET____DOT__lane__DOT__c1_i)));
    vlSelf->__VdfgTmp_h8f083f76__0 = ((7U <= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__2__KET____DOT__lane__DOT__c1_i)) 
                                      & (7U >= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__2__KET____DOT__lane__DOT__c1_i)));
    vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl0c1__DOT__lut_match_ltl0c1_6__DOT__match_internal 
        = ((4U <= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__2__KET____DOT__lane__DOT__c1_i)) 
           & (7U >= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__2__KET____DOT__lane__DOT__c1_i)));
    vlSelf->__VdfgTmp_hb30bd723__0 = ((1U <= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__2__KET____DOT__lane__DOT__c1_i)) 
                                      & (1U >= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__2__KET____DOT__lane__DOT__c1_i)));
    vlSelf->__VdfgTmp_he9b10395__0 = ((3U <= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__2__KET____DOT__lane__DOT__c1_i)) 
                                      & (3U >= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__2__KET____DOT__lane__DOT__c1_i)));
    vlSelf->__VdfgTmp_hd3ae48ab__0 = ((5U <= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__2__KET____DOT__lane__DOT__c1_i)) 
                                      & (5U >= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__2__KET____DOT__lane__DOT__c1_i)));
    vlSelf->automata_stage0c1__DOT__automata_ltl1c1__DOT____Vcellinp__ltl1c1_ste_5__income_edges 
        = ((((IData)(vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl1c1__DOT__ltl1c1_ste_3__DOT__internal_reg) 
             & (((4U <= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__2__KET____DOT__lane__DOT__c1_i)) 
                 & (5U >= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__2__KET____DOT__lane__DOT__c1_i))) 
                | ((0xcU <= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__2__KET____DOT__lane__DOT__c1_i)) 
                   & (0xdU >= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__2__KET____DOT__lane__DOT__c1_i))))) 
            << 1U) | ((IData)(vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl1c1__DOT__ltl1c1_ste_5__DOT__internal_reg) 
                      & (IData)(vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl1c1__DOT__lut_match_ltl1c1_1__DOT__match_internal)));
    vlSelf->automata_stage0c1__DOT__automata_ltl2c1__DOT____Vcellinp__ltl2c1_ste_8__income_edges 
        = ((((IData)(vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl2c1__DOT__ltl2c1_ste_8__DOT__internal_reg) 
             & (IData)(vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl2c1__DOT__lut_match_ltl2c1_1__DOT__match_internal)) 
            << 1U) | ((IData)(vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl2c1__DOT__ltl2c1_ste_4__DOT__internal_reg) 
                      & (((8U <= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__2__KET____DOT__lane__DOT__c1_i)) 
                          & (8U >= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__2__KET____DOT__lane__DOT__c1_i))) 
                         | (((0xaU <= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__2__KET____DOT__lane__DOT__c1_i)) 
                             & (0xaU >= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__2__KET____DOT__lane__DOT__c1_i))) 
                            | (((0xcU <= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__2__KET____DOT__lane__DOT__c1_i)) 
                                & (0xcU >= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__2__KET____DOT__lane__DOT__c1_i))) 
                               | ((0xeU <= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__2__KET____DOT__lane__DOT__c1_i)) 
                                  & (0xeU >= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__2__KET____DOT__lane__DOT__c1_i))))))));
    vlSelf->automata_stage0c1__DOT__automata_ltl1c1__DOT____Vcellinp__ltl1c1_ste_8__income_edges 
        = ((((IData)(vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl1c1__DOT__ltl1c1_ste_8__DOT__internal_reg) 
             & (IData)(vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl1c1__DOT__lut_match_ltl1c1_1__DOT__match_internal)) 
            << 1U) | ((IData)(vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl1c1__DOT__ltl1c1_ste_5__DOT__internal_reg) 
                      & ((IData)(vlSelf->__VdfgTmp_hb5b42c0f__0) 
                         | (IData)(vlSelf->__VdfgTmp_h2aa42c51__0))));
    vlSelf->__PVT__ltl1c1_w_out_2 = ((IData)(vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl1c1__DOT__ltl1c1_ste_2__DOT__internal_reg) 
                                     & ((IData)(vlSelf->__VdfgTmp_hb5b42c0f__0) 
                                        | (((6U <= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__2__KET____DOT__lane__DOT__c1_i)) 
                                            & (7U >= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__2__KET____DOT__lane__DOT__c1_i))) 
                                           | ((IData)(vlSelf->__VdfgTmp_h2aa42c51__0) 
                                              | (0xeU 
                                                 <= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__2__KET____DOT__lane__DOT__c1_i))))));
    vlSelf->automata_stage0c1__DOT__automata_ltl0c1__DOT____Vcellinp__ltl0c1_ste_8__income_edges 
        = ((((IData)(vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl0c1__DOT__ltl0c1_ste_8__DOT__internal_reg) 
             & (3U >= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__2__KET____DOT__lane__DOT__c1_i))) 
            << 1U) | ((IData)(vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl0c1__DOT__ltl0c1_ste_5__DOT__internal_reg) 
                      & (IData)(vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl0c1__DOT__lut_match_ltl0c1_6__DOT__match_internal)));
    vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl0c1__DOT__lut_match_ltl0c1_2__DOT__match_internal 
        = ((IData)(vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl0c1__DOT__lut_match_ltl0c1_6__DOT__match_internal) 
           | (0xcU <= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__2__KET____DOT__lane__DOT__c1_i)));
    vlSelf->automata_stage0c1__DOT__automata_ltl2c1__DOT____Vcellinp__ltl2c1_ste_4__income_edges 
        = ((((IData)(vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl2c1__DOT__ltl2c1_ste_2__DOT__internal_reg) 
             & ((IData)(vlSelf->__VdfgTmp_hb30bd723__0) 
                | ((IData)(vlSelf->__VdfgTmp_he9b10395__0) 
                   | ((IData)(vlSelf->__VdfgTmp_hd3ae48ab__0) 
                      | (IData)(vlSelf->__VdfgTmp_h8f083f76__0))))) 
            << 1U) | ((IData)(vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl2c1__DOT__ltl2c1_ste_4__DOT__internal_reg) 
                      & (IData)(vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl2c1__DOT__lut_match_ltl2c1_1__DOT__match_internal)));
    vlSelf->__PVT__ltl2c1_w_out_9 = ((IData)(vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl2c1__DOT__ltl2c1_ste_8__DOT__internal_reg) 
                                     & ((IData)(vlSelf->__VdfgTmp_hb30bd723__0) 
                                        | ((IData)(vlSelf->__VdfgTmp_he9b10395__0) 
                                           | ((IData)(vlSelf->__VdfgTmp_hd3ae48ab__0) 
                                              | (7U 
                                                 <= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__2__KET____DOT__lane__DOT__c1_i))))));
    vlSelf->__PVT__ltl2c1_w_out_5 = ((IData)(vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl2c1__DOT__ltl2c1_ste_4__DOT__internal_reg) 
                                     & ((IData)(vlSelf->__VdfgTmp_hb30bd723__0) 
                                        | ((IData)(vlSelf->__VdfgTmp_he9b10395__0) 
                                           | ((IData)(vlSelf->__VdfgTmp_hd3ae48ab__0) 
                                              | ((IData)(vlSelf->__VdfgTmp_h8f083f76__0) 
                                                 | (((9U 
                                                      <= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__2__KET____DOT__lane__DOT__c1_i)) 
                                                     & (9U 
                                                        >= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__2__KET____DOT__lane__DOT__c1_i))) 
                                                    | (((0xbU 
                                                         <= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__2__KET____DOT__lane__DOT__c1_i)) 
                                                        & (0xbU 
                                                           >= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__2__KET____DOT__lane__DOT__c1_i))) 
                                                       | (((0xdU 
                                                            <= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__2__KET____DOT__lane__DOT__c1_i)) 
                                                           & (0xdU 
                                                              >= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__2__KET____DOT__lane__DOT__c1_i))) 
                                                          | (0xfU 
                                                             <= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__2__KET____DOT__lane__DOT__c1_i))))))))));
    vlSelf->__PVT__ltl1c1_w_out_7 = ((IData)(vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl1c1__DOT__ltl1c1_ste_5__DOT__internal_reg) 
                                     & (IData)(vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl0c1__DOT__lut_match_ltl0c1_2__DOT__match_internal));
    vlSelf->__PVT__ltl0c1_w_out_2 = ((IData)(vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl0c1__DOT__ltl0c1_ste_2__DOT__internal_reg) 
                                     & (IData)(vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl0c1__DOT__lut_match_ltl0c1_2__DOT__match_internal));
    vlSelf->automata_stage0c1__DOT__automata_ltl2c1__DOT____Vcellinp__ltl2c1_ste_7__income_edges 
        = (((IData)(vlSelf->__PVT__ltl2c1_w_out_9) 
            << 3U) | (((IData)(vlSelf->__PVT__ltl2c1_w_out_3) 
                       << 2U) | (((IData)(vlSelf->__PVT__ltl2c1_w_out_5) 
                                  << 1U) | (IData)(vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl2c1__DOT__ltl2c1_ste_7__DOT__internal_reg))));
    vlSelf->automata_stage0c1__DOT__automata_ltl1c1__DOT____Vcellinp__ltl1c1_ste_4__income_edges 
        = (((IData)(vlSelf->__PVT__ltl1c1_w_out_9) 
            << 3U) | (((IData)(vlSelf->__PVT__ltl1c1_w_out_2) 
                       << 2U) | (((IData)(vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl1c1__DOT__ltl1c1_ste_4__DOT__internal_reg) 
                                  << 1U) | (IData)(vlSelf->__PVT__ltl1c1_w_out_7))));
    vlSelf->automata_stage0c1__DOT__automata_ltl0c1__DOT____Vcellinp__ltl0c1_ste_4__income_edges 
        = (((IData)(vlSelf->__PVT__ltl0c1_w_out_9) 
            << 3U) | (((IData)(vlSelf->__PVT__ltl0c1_w_out_2) 
                       << 2U) | (((IData)(vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl0c1__DOT__ltl0c1_ste_4__DOT__internal_reg) 
                                  << 1U) | (IData)(vlSelf->__PVT__ltl0c1_w_out_7))));
}

VL_INLINE_OPT void rm_tb_top_routerlinkedlist_Top_ModuleC1___nba_comb__TOP__rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__2__KET____DOT__lane__DOT__I0c1__2(rm_tb_top_routerlinkedlist_Top_ModuleC1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    rm_tb_top_routerlinkedlist__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            rm_tb_top_routerlinkedlist_Top_ModuleC1___nba_comb__TOP__rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__2__KET____DOT__lane__DOT__I0c1__2\n"); );
    // Body
    vlSelf->automata_stage0c1__DOT__automata_ltl0c1__DOT____Vcellinp__ltl0c1_ste_1__income_edges 
        = (((IData)(vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl2c1__DOT__start_of_data) 
            << 1U) | ((IData)(vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl0c1__DOT__ltl0c1_ste_1__DOT__internal_reg) 
                      & (3U >= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__2__KET____DOT__lane__DOT__c1_i))));
    vlSelf->automata_stage0c1__DOT__automata_ltl1c1__DOT____Vcellinp__ltl1c1_ste_1__income_edges 
        = (((IData)(vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl2c1__DOT__start_of_data) 
            << 1U) | ((IData)(vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl1c1__DOT__ltl1c1_ste_1__DOT__internal_reg) 
                      & (IData)(vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl1c1__DOT__lut_match_ltl1c1_1__DOT__match_internal)));
    vlSelf->automata_stage0c1__DOT__automata_ltl2c1__DOT____Vcellinp__ltl2c1_ste_1__income_edges 
        = (((IData)(vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl2c1__DOT__start_of_data) 
            << 1U) | ((IData)(vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl2c1__DOT__ltl2c1_ste_1__DOT__internal_reg) 
                      & (IData)(vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl2c1__DOT__lut_match_ltl2c1_1__DOT__match_internal)));
}

VL_INLINE_OPT void rm_tb_top_routerlinkedlist_Top_ModuleC1___nba_sequent__TOP__rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__2__KET____DOT__lane__DOT__I1c1__0(rm_tb_top_routerlinkedlist_Top_ModuleC1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    rm_tb_top_routerlinkedlist__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            rm_tb_top_routerlinkedlist_Top_ModuleC1___nba_sequent__TOP__rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__2__KET____DOT__lane__DOT__I1c1__0\n"); );
    // Body
    if (vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT____Vcellinp__genblk1__BRA__2__KET____DOT__lane__lane_reset_i) {
        vlSelf->__PVT__automata_stage0c1__DOT__out_reset = 1U;
        vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl2c1__DOT__start_of_data_reg = 1U;
        vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl0c1__DOT__ltl0c1_ste_3__DOT__internal_reg = 1U;
        vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl0c1__DOT__ltl0c1_ste_1__DOT__internal_reg = 1U;
        vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl2c1__DOT__ltl2c1_ste_1__DOT__internal_reg = 1U;
        vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl1c1__DOT__ltl1c1_ste_1__DOT__internal_reg = 1U;
        vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl1c1__DOT__ltl1c1_ste_3__DOT__internal_reg = 1U;
        vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl2c1__DOT__ltl2c1_ste_2__DOT__internal_reg = 1U;
        vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl0c1__DOT__ltl0c1_ste_2__DOT__internal_reg = 1U;
        vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl2c1__DOT__ltl2c1_ste_3__DOT__internal_reg = 1U;
        vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl1c1__DOT__ltl1c1_ste_2__DOT__internal_reg = 1U;
    } else {
        vlSelf->__PVT__automata_stage0c1__DOT__out_reset = 0U;
        vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl2c1__DOT__start_of_data_reg = 0U;
        vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl0c1__DOT__ltl0c1_ste_3__DOT__internal_reg 
            = (0U != (IData)(vlSelf->automata_stage0c1__DOT__automata_ltl0c1__DOT____Vcellinp__ltl0c1_ste_1__income_edges));
        vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl0c1__DOT__ltl0c1_ste_1__DOT__internal_reg 
            = (0U != (IData)(vlSelf->automata_stage0c1__DOT__automata_ltl0c1__DOT____Vcellinp__ltl0c1_ste_1__income_edges));
        vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl2c1__DOT__ltl2c1_ste_1__DOT__internal_reg 
            = (0U != (IData)(vlSelf->automata_stage0c1__DOT__automata_ltl2c1__DOT____Vcellinp__ltl2c1_ste_1__income_edges));
        vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl1c1__DOT__ltl1c1_ste_1__DOT__internal_reg 
            = (0U != (IData)(vlSelf->automata_stage0c1__DOT__automata_ltl1c1__DOT____Vcellinp__ltl1c1_ste_1__income_edges));
        vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl1c1__DOT__ltl1c1_ste_3__DOT__internal_reg 
            = (0U != (IData)(vlSelf->automata_stage0c1__DOT__automata_ltl1c1__DOT____Vcellinp__ltl1c1_ste_1__income_edges));
        vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl2c1__DOT__ltl2c1_ste_2__DOT__internal_reg 
            = (0U != (IData)(vlSelf->automata_stage0c1__DOT__automata_ltl2c1__DOT____Vcellinp__ltl2c1_ste_1__income_edges));
        vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl0c1__DOT__ltl0c1_ste_2__DOT__internal_reg 
            = (0U != (IData)(vlSelf->automata_stage0c1__DOT__automata_ltl0c1__DOT____Vcellinp__ltl0c1_ste_1__income_edges));
        vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl2c1__DOT__ltl2c1_ste_3__DOT__internal_reg 
            = (0U != (IData)(vlSelf->automata_stage0c1__DOT__automata_ltl2c1__DOT____Vcellinp__ltl2c1_ste_1__income_edges));
        vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl1c1__DOT__ltl1c1_ste_2__DOT__internal_reg 
            = (0U != (IData)(vlSelf->automata_stage0c1__DOT__automata_ltl1c1__DOT____Vcellinp__ltl1c1_ste_1__income_edges));
        if (vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl2c1__DOT__start_of_data) {
            vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl0c1__DOT__ltl0c1_ste_3__DOT__internal_reg = 1U;
            vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl0c1__DOT__ltl0c1_ste_1__DOT__internal_reg = 1U;
            vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl2c1__DOT__ltl2c1_ste_1__DOT__internal_reg = 1U;
            vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl1c1__DOT__ltl1c1_ste_1__DOT__internal_reg = 1U;
            vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl1c1__DOT__ltl1c1_ste_3__DOT__internal_reg = 1U;
            vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl2c1__DOT__ltl2c1_ste_2__DOT__internal_reg = 1U;
            vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl0c1__DOT__ltl0c1_ste_2__DOT__internal_reg = 1U;
            vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl2c1__DOT__ltl2c1_ste_3__DOT__internal_reg = 1U;
            vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl1c1__DOT__ltl1c1_ste_2__DOT__internal_reg = 1U;
        }
    }
    vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl0c1__DOT__ltl0c1_ste_4__DOT__internal_reg 
        = ((~ (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT____Vcellinp__genblk1__BRA__2__KET____DOT__lane__lane_reset_i)) 
           & (0U != (IData)(vlSelf->automata_stage0c1__DOT__automata_ltl0c1__DOT____Vcellinp__ltl0c1_ste_4__income_edges)));
    vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl2c1__DOT__ltl2c1_ste_7__DOT__internal_reg 
        = ((~ (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT____Vcellinp__genblk1__BRA__2__KET____DOT__lane__lane_reset_i)) 
           & (0U != (IData)(vlSelf->automata_stage0c1__DOT__automata_ltl2c1__DOT____Vcellinp__ltl2c1_ste_7__income_edges)));
    vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl1c1__DOT__ltl1c1_ste_4__DOT__internal_reg 
        = ((~ (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT____Vcellinp__genblk1__BRA__2__KET____DOT__lane__lane_reset_i)) 
           & (0U != (IData)(vlSelf->automata_stage0c1__DOT__automata_ltl1c1__DOT____Vcellinp__ltl1c1_ste_4__income_edges)));
    vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl0c1__DOT__ltl0c1_ste_8__DOT__internal_reg 
        = ((~ (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT____Vcellinp__genblk1__BRA__2__KET____DOT__lane__lane_reset_i)) 
           & (0U != (IData)(vlSelf->automata_stage0c1__DOT__automata_ltl0c1__DOT____Vcellinp__ltl0c1_ste_8__income_edges)));
    vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl1c1__DOT__ltl1c1_ste_8__DOT__internal_reg 
        = ((~ (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT____Vcellinp__genblk1__BRA__2__KET____DOT__lane__lane_reset_i)) 
           & (0U != (IData)(vlSelf->automata_stage0c1__DOT__automata_ltl1c1__DOT____Vcellinp__ltl1c1_ste_8__income_edges)));
    vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl2c1__DOT__ltl2c1_ste_8__DOT__internal_reg 
        = ((~ (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT____Vcellinp__genblk1__BRA__2__KET____DOT__lane__lane_reset_i)) 
           & (0U != (IData)(vlSelf->automata_stage0c1__DOT__automata_ltl2c1__DOT____Vcellinp__ltl2c1_ste_8__income_edges)));
    vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl0c1__DOT__ltl0c1_ste_5__DOT__internal_reg 
        = ((~ (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT____Vcellinp__genblk1__BRA__2__KET____DOT__lane__lane_reset_i)) 
           & (0U != (IData)(vlSelf->automata_stage0c1__DOT__automata_ltl0c1__DOT____Vcellinp__ltl0c1_ste_5__income_edges)));
    vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl1c1__DOT__ltl1c1_ste_5__DOT__internal_reg 
        = ((~ (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT____Vcellinp__genblk1__BRA__2__KET____DOT__lane__lane_reset_i)) 
           & (0U != (IData)(vlSelf->automata_stage0c1__DOT__automata_ltl1c1__DOT____Vcellinp__ltl1c1_ste_5__income_edges)));
    vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl2c1__DOT__ltl2c1_ste_4__DOT__internal_reg 
        = ((~ (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT____Vcellinp__genblk1__BRA__2__KET____DOT__lane__lane_reset_i)) 
           & (0U != (IData)(vlSelf->automata_stage0c1__DOT__automata_ltl2c1__DOT____Vcellinp__ltl2c1_ste_4__income_edges)));
    vlSelf->__PVT__automata_stage0c1__DOT__out_symbols 
        = vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__2__KET____DOT__lane__DOT__c3_i;
}

VL_INLINE_OPT void rm_tb_top_routerlinkedlist_Top_ModuleC1___nba_comb__TOP__rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__2__KET____DOT__lane__DOT__I1c1__1(rm_tb_top_routerlinkedlist_Top_ModuleC1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    rm_tb_top_routerlinkedlist__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            rm_tb_top_routerlinkedlist_Top_ModuleC1___nba_comb__TOP__rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__2__KET____DOT__lane__DOT__I1c1__1\n"); );
    // Body
    vlSelf->automata_stage0c1__DOT__automata_ltl0c1__DOT____Vcellinp__ltl0c1_ste_5__income_edges 
        = ((((IData)(vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl0c1__DOT__ltl0c1_ste_3__DOT__internal_reg) 
             & ((8U <= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__2__KET____DOT__lane__DOT__c3_i)) 
                & (0xbU >= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__2__KET____DOT__lane__DOT__c3_i)))) 
            << 1U) | ((IData)(vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl0c1__DOT__ltl0c1_ste_5__DOT__internal_reg) 
                      & (3U >= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__2__KET____DOT__lane__DOT__c3_i))));
    vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl1c1__DOT__lut_match_ltl1c1_1__DOT__match_internal 
        = ((1U >= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__2__KET____DOT__lane__DOT__c3_i)) 
           | ((8U <= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__2__KET____DOT__lane__DOT__c3_i)) 
              & (9U >= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__2__KET____DOT__lane__DOT__c3_i))));
    vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl2c1__DOT__lut_match_ltl2c1_1__DOT__match_internal 
        = ((0U >= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__2__KET____DOT__lane__DOT__c3_i)) 
           | (((2U <= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__2__KET____DOT__lane__DOT__c3_i)) 
               & (2U >= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__2__KET____DOT__lane__DOT__c3_i))) 
              | (((4U <= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__2__KET____DOT__lane__DOT__c3_i)) 
                  & (4U >= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__2__KET____DOT__lane__DOT__c3_i))) 
                 | ((6U <= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__2__KET____DOT__lane__DOT__c3_i)) 
                    & (6U >= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__2__KET____DOT__lane__DOT__c3_i))))));
    vlSelf->__PVT__ltl1c1_w_out_9 = ((IData)(vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl1c1__DOT__ltl1c1_ste_8__DOT__internal_reg) 
                                     & (((2U <= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__2__KET____DOT__lane__DOT__c3_i)) 
                                         & (7U >= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__2__KET____DOT__lane__DOT__c3_i))) 
                                        | (0xaU <= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__2__KET____DOT__lane__DOT__c3_i))));
    vlSelf->__PVT__ltl2c1_w_out_3 = ((IData)(vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl2c1__DOT__ltl2c1_ste_3__DOT__internal_reg) 
                                     & (8U <= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__2__KET____DOT__lane__DOT__c3_i)));
    vlSelf->__PVT__ltl0c1_w_out_7 = ((IData)(vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl0c1__DOT__ltl0c1_ste_5__DOT__internal_reg) 
                                     & (8U <= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__2__KET____DOT__lane__DOT__c3_i)));
    vlSelf->__PVT__ltl0c1_w_out_9 = ((IData)(vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl0c1__DOT__ltl0c1_ste_8__DOT__internal_reg) 
                                     & (4U <= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__2__KET____DOT__lane__DOT__c3_i)));
    vlSelf->__VdfgTmp_hb5b42c0f__0 = ((2U <= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__2__KET____DOT__lane__DOT__c3_i)) 
                                      & (3U >= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__2__KET____DOT__lane__DOT__c3_i)));
    vlSelf->__VdfgTmp_h2aa42c51__0 = ((0xaU <= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__2__KET____DOT__lane__DOT__c3_i)) 
                                      & (0xbU >= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__2__KET____DOT__lane__DOT__c3_i)));
    vlSelf->__VdfgTmp_h8f083f76__0 = ((7U <= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__2__KET____DOT__lane__DOT__c3_i)) 
                                      & (7U >= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__2__KET____DOT__lane__DOT__c3_i)));
    vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl0c1__DOT__lut_match_ltl0c1_6__DOT__match_internal 
        = ((4U <= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__2__KET____DOT__lane__DOT__c3_i)) 
           & (7U >= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__2__KET____DOT__lane__DOT__c3_i)));
    vlSelf->__VdfgTmp_hb30bd723__0 = ((1U <= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__2__KET____DOT__lane__DOT__c3_i)) 
                                      & (1U >= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__2__KET____DOT__lane__DOT__c3_i)));
    vlSelf->__VdfgTmp_he9b10395__0 = ((3U <= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__2__KET____DOT__lane__DOT__c3_i)) 
                                      & (3U >= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__2__KET____DOT__lane__DOT__c3_i)));
    vlSelf->__VdfgTmp_hd3ae48ab__0 = ((5U <= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__2__KET____DOT__lane__DOT__c3_i)) 
                                      & (5U >= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__2__KET____DOT__lane__DOT__c3_i)));
    vlSelf->automata_stage0c1__DOT__automata_ltl1c1__DOT____Vcellinp__ltl1c1_ste_5__income_edges 
        = ((((IData)(vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl1c1__DOT__ltl1c1_ste_3__DOT__internal_reg) 
             & (((4U <= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__2__KET____DOT__lane__DOT__c3_i)) 
                 & (5U >= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__2__KET____DOT__lane__DOT__c3_i))) 
                | ((0xcU <= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__2__KET____DOT__lane__DOT__c3_i)) 
                   & (0xdU >= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__2__KET____DOT__lane__DOT__c3_i))))) 
            << 1U) | ((IData)(vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl1c1__DOT__ltl1c1_ste_5__DOT__internal_reg) 
                      & (IData)(vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl1c1__DOT__lut_match_ltl1c1_1__DOT__match_internal)));
    vlSelf->automata_stage0c1__DOT__automata_ltl2c1__DOT____Vcellinp__ltl2c1_ste_8__income_edges 
        = ((((IData)(vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl2c1__DOT__ltl2c1_ste_8__DOT__internal_reg) 
             & (IData)(vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl2c1__DOT__lut_match_ltl2c1_1__DOT__match_internal)) 
            << 1U) | ((IData)(vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl2c1__DOT__ltl2c1_ste_4__DOT__internal_reg) 
                      & (((8U <= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__2__KET____DOT__lane__DOT__c3_i)) 
                          & (8U >= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__2__KET____DOT__lane__DOT__c3_i))) 
                         | (((0xaU <= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__2__KET____DOT__lane__DOT__c3_i)) 
                             & (0xaU >= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__2__KET____DOT__lane__DOT__c3_i))) 
                            | (((0xcU <= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__2__KET____DOT__lane__DOT__c3_i)) 
                                & (0xcU >= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__2__KET____DOT__lane__DOT__c3_i))) 
                               | ((0xeU <= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__2__KET____DOT__lane__DOT__c3_i)) 
                                  & (0xeU >= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__2__KET____DOT__lane__DOT__c3_i))))))));
    vlSelf->automata_stage0c1__DOT__automata_ltl1c1__DOT____Vcellinp__ltl1c1_ste_8__income_edges 
        = ((((IData)(vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl1c1__DOT__ltl1c1_ste_8__DOT__internal_reg) 
             & (IData)(vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl1c1__DOT__lut_match_ltl1c1_1__DOT__match_internal)) 
            << 1U) | ((IData)(vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl1c1__DOT__ltl1c1_ste_5__DOT__internal_reg) 
                      & ((IData)(vlSelf->__VdfgTmp_hb5b42c0f__0) 
                         | (IData)(vlSelf->__VdfgTmp_h2aa42c51__0))));
    vlSelf->__PVT__ltl1c1_w_out_2 = ((IData)(vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl1c1__DOT__ltl1c1_ste_2__DOT__internal_reg) 
                                     & ((IData)(vlSelf->__VdfgTmp_hb5b42c0f__0) 
                                        | (((6U <= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__2__KET____DOT__lane__DOT__c3_i)) 
                                            & (7U >= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__2__KET____DOT__lane__DOT__c3_i))) 
                                           | ((IData)(vlSelf->__VdfgTmp_h2aa42c51__0) 
                                              | (0xeU 
                                                 <= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__2__KET____DOT__lane__DOT__c3_i))))));
    vlSelf->automata_stage0c1__DOT__automata_ltl0c1__DOT____Vcellinp__ltl0c1_ste_8__income_edges 
        = ((((IData)(vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl0c1__DOT__ltl0c1_ste_8__DOT__internal_reg) 
             & (3U >= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__2__KET____DOT__lane__DOT__c3_i))) 
            << 1U) | ((IData)(vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl0c1__DOT__ltl0c1_ste_5__DOT__internal_reg) 
                      & (IData)(vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl0c1__DOT__lut_match_ltl0c1_6__DOT__match_internal)));
    vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl0c1__DOT__lut_match_ltl0c1_2__DOT__match_internal 
        = ((IData)(vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl0c1__DOT__lut_match_ltl0c1_6__DOT__match_internal) 
           | (0xcU <= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__2__KET____DOT__lane__DOT__c3_i)));
    vlSelf->automata_stage0c1__DOT__automata_ltl2c1__DOT____Vcellinp__ltl2c1_ste_4__income_edges 
        = ((((IData)(vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl2c1__DOT__ltl2c1_ste_2__DOT__internal_reg) 
             & ((IData)(vlSelf->__VdfgTmp_hb30bd723__0) 
                | ((IData)(vlSelf->__VdfgTmp_he9b10395__0) 
                   | ((IData)(vlSelf->__VdfgTmp_hd3ae48ab__0) 
                      | (IData)(vlSelf->__VdfgTmp_h8f083f76__0))))) 
            << 1U) | ((IData)(vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl2c1__DOT__ltl2c1_ste_4__DOT__internal_reg) 
                      & (IData)(vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl2c1__DOT__lut_match_ltl2c1_1__DOT__match_internal)));
    vlSelf->__PVT__ltl2c1_w_out_9 = ((IData)(vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl2c1__DOT__ltl2c1_ste_8__DOT__internal_reg) 
                                     & ((IData)(vlSelf->__VdfgTmp_hb30bd723__0) 
                                        | ((IData)(vlSelf->__VdfgTmp_he9b10395__0) 
                                           | ((IData)(vlSelf->__VdfgTmp_hd3ae48ab__0) 
                                              | (7U 
                                                 <= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__2__KET____DOT__lane__DOT__c3_i))))));
    vlSelf->__PVT__ltl2c1_w_out_5 = ((IData)(vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl2c1__DOT__ltl2c1_ste_4__DOT__internal_reg) 
                                     & ((IData)(vlSelf->__VdfgTmp_hb30bd723__0) 
                                        | ((IData)(vlSelf->__VdfgTmp_he9b10395__0) 
                                           | ((IData)(vlSelf->__VdfgTmp_hd3ae48ab__0) 
                                              | ((IData)(vlSelf->__VdfgTmp_h8f083f76__0) 
                                                 | (((9U 
                                                      <= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__2__KET____DOT__lane__DOT__c3_i)) 
                                                     & (9U 
                                                        >= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__2__KET____DOT__lane__DOT__c3_i))) 
                                                    | (((0xbU 
                                                         <= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__2__KET____DOT__lane__DOT__c3_i)) 
                                                        & (0xbU 
                                                           >= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__2__KET____DOT__lane__DOT__c3_i))) 
                                                       | (((0xdU 
                                                            <= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__2__KET____DOT__lane__DOT__c3_i)) 
                                                           & (0xdU 
                                                              >= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__2__KET____DOT__lane__DOT__c3_i))) 
                                                          | (0xfU 
                                                             <= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__2__KET____DOT__lane__DOT__c3_i))))))))));
    vlSelf->__PVT__ltl1c1_w_out_7 = ((IData)(vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl1c1__DOT__ltl1c1_ste_5__DOT__internal_reg) 
                                     & (IData)(vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl0c1__DOT__lut_match_ltl0c1_2__DOT__match_internal));
    vlSelf->__PVT__ltl0c1_w_out_2 = ((IData)(vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl0c1__DOT__ltl0c1_ste_2__DOT__internal_reg) 
                                     & (IData)(vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl0c1__DOT__lut_match_ltl0c1_2__DOT__match_internal));
    vlSelf->automata_stage0c1__DOT__automata_ltl2c1__DOT____Vcellinp__ltl2c1_ste_7__income_edges 
        = (((IData)(vlSelf->__PVT__ltl2c1_w_out_9) 
            << 3U) | (((IData)(vlSelf->__PVT__ltl2c1_w_out_3) 
                       << 2U) | (((IData)(vlSelf->__PVT__ltl2c1_w_out_5) 
                                  << 1U) | (IData)(vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl2c1__DOT__ltl2c1_ste_7__DOT__internal_reg))));
    vlSelf->automata_stage0c1__DOT__automata_ltl1c1__DOT____Vcellinp__ltl1c1_ste_4__income_edges 
        = (((IData)(vlSelf->__PVT__ltl1c1_w_out_9) 
            << 3U) | (((IData)(vlSelf->__PVT__ltl1c1_w_out_2) 
                       << 2U) | (((IData)(vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl1c1__DOT__ltl1c1_ste_4__DOT__internal_reg) 
                                  << 1U) | (IData)(vlSelf->__PVT__ltl1c1_w_out_7))));
    vlSelf->automata_stage0c1__DOT__automata_ltl0c1__DOT____Vcellinp__ltl0c1_ste_4__income_edges 
        = (((IData)(vlSelf->__PVT__ltl0c1_w_out_9) 
            << 3U) | (((IData)(vlSelf->__PVT__ltl0c1_w_out_2) 
                       << 2U) | (((IData)(vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl0c1__DOT__ltl0c1_ste_4__DOT__internal_reg) 
                                  << 1U) | (IData)(vlSelf->__PVT__ltl0c1_w_out_7))));
}

VL_INLINE_OPT void rm_tb_top_routerlinkedlist_Top_ModuleC1___nba_comb__TOP__rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__2__KET____DOT__lane__DOT__I1c1__2(rm_tb_top_routerlinkedlist_Top_ModuleC1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    rm_tb_top_routerlinkedlist__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            rm_tb_top_routerlinkedlist_Top_ModuleC1___nba_comb__TOP__rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__2__KET____DOT__lane__DOT__I1c1__2\n"); );
    // Body
    vlSelf->automata_stage0c1__DOT__automata_ltl0c1__DOT____Vcellinp__ltl0c1_ste_1__income_edges 
        = (((IData)(vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl2c1__DOT__start_of_data) 
            << 1U) | ((IData)(vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl0c1__DOT__ltl0c1_ste_1__DOT__internal_reg) 
                      & (3U >= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__2__KET____DOT__lane__DOT__c3_i))));
    vlSelf->automata_stage0c1__DOT__automata_ltl1c1__DOT____Vcellinp__ltl1c1_ste_1__income_edges 
        = (((IData)(vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl2c1__DOT__start_of_data) 
            << 1U) | ((IData)(vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl1c1__DOT__ltl1c1_ste_1__DOT__internal_reg) 
                      & (IData)(vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl1c1__DOT__lut_match_ltl1c1_1__DOT__match_internal)));
    vlSelf->automata_stage0c1__DOT__automata_ltl2c1__DOT____Vcellinp__ltl2c1_ste_1__income_edges 
        = (((IData)(vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl2c1__DOT__start_of_data) 
            << 1U) | ((IData)(vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl2c1__DOT__ltl2c1_ste_1__DOT__internal_reg) 
                      & (IData)(vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl2c1__DOT__lut_match_ltl2c1_1__DOT__match_internal)));
}

VL_INLINE_OPT void rm_tb_top_routerlinkedlist_Top_ModuleC1___nba_sequent__TOP__rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__3__KET____DOT__lane__DOT__I0c1__0(rm_tb_top_routerlinkedlist_Top_ModuleC1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    rm_tb_top_routerlinkedlist__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            rm_tb_top_routerlinkedlist_Top_ModuleC1___nba_sequent__TOP__rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__3__KET____DOT__lane__DOT__I0c1__0\n"); );
    // Body
    if (vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT____Vcellinp__genblk1__BRA__3__KET____DOT__lane__lane_reset_i) {
        vlSelf->__PVT__automata_stage0c1__DOT__out_reset = 1U;
        vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl2c1__DOT__start_of_data_reg = 1U;
        vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl0c1__DOT__ltl0c1_ste_3__DOT__internal_reg = 1U;
        vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl0c1__DOT__ltl0c1_ste_1__DOT__internal_reg = 1U;
        vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl2c1__DOT__ltl2c1_ste_1__DOT__internal_reg = 1U;
        vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl1c1__DOT__ltl1c1_ste_1__DOT__internal_reg = 1U;
        vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl1c1__DOT__ltl1c1_ste_3__DOT__internal_reg = 1U;
        vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl2c1__DOT__ltl2c1_ste_2__DOT__internal_reg = 1U;
        vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl0c1__DOT__ltl0c1_ste_2__DOT__internal_reg = 1U;
        vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl2c1__DOT__ltl2c1_ste_3__DOT__internal_reg = 1U;
        vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl1c1__DOT__ltl1c1_ste_2__DOT__internal_reg = 1U;
    } else {
        vlSelf->__PVT__automata_stage0c1__DOT__out_reset = 0U;
        vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl2c1__DOT__start_of_data_reg = 0U;
        vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl0c1__DOT__ltl0c1_ste_3__DOT__internal_reg 
            = (0U != (IData)(vlSelf->automata_stage0c1__DOT__automata_ltl0c1__DOT____Vcellinp__ltl0c1_ste_1__income_edges));
        vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl0c1__DOT__ltl0c1_ste_1__DOT__internal_reg 
            = (0U != (IData)(vlSelf->automata_stage0c1__DOT__automata_ltl0c1__DOT____Vcellinp__ltl0c1_ste_1__income_edges));
        vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl2c1__DOT__ltl2c1_ste_1__DOT__internal_reg 
            = (0U != (IData)(vlSelf->automata_stage0c1__DOT__automata_ltl2c1__DOT____Vcellinp__ltl2c1_ste_1__income_edges));
        vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl1c1__DOT__ltl1c1_ste_1__DOT__internal_reg 
            = (0U != (IData)(vlSelf->automata_stage0c1__DOT__automata_ltl1c1__DOT____Vcellinp__ltl1c1_ste_1__income_edges));
        vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl1c1__DOT__ltl1c1_ste_3__DOT__internal_reg 
            = (0U != (IData)(vlSelf->automata_stage0c1__DOT__automata_ltl1c1__DOT____Vcellinp__ltl1c1_ste_1__income_edges));
        vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl2c1__DOT__ltl2c1_ste_2__DOT__internal_reg 
            = (0U != (IData)(vlSelf->automata_stage0c1__DOT__automata_ltl2c1__DOT____Vcellinp__ltl2c1_ste_1__income_edges));
        vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl0c1__DOT__ltl0c1_ste_2__DOT__internal_reg 
            = (0U != (IData)(vlSelf->automata_stage0c1__DOT__automata_ltl0c1__DOT____Vcellinp__ltl0c1_ste_1__income_edges));
        vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl2c1__DOT__ltl2c1_ste_3__DOT__internal_reg 
            = (0U != (IData)(vlSelf->automata_stage0c1__DOT__automata_ltl2c1__DOT____Vcellinp__ltl2c1_ste_1__income_edges));
        vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl1c1__DOT__ltl1c1_ste_2__DOT__internal_reg 
            = (0U != (IData)(vlSelf->automata_stage0c1__DOT__automata_ltl1c1__DOT____Vcellinp__ltl1c1_ste_1__income_edges));
        if (vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl2c1__DOT__start_of_data) {
            vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl0c1__DOT__ltl0c1_ste_3__DOT__internal_reg = 1U;
            vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl0c1__DOT__ltl0c1_ste_1__DOT__internal_reg = 1U;
            vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl2c1__DOT__ltl2c1_ste_1__DOT__internal_reg = 1U;
            vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl1c1__DOT__ltl1c1_ste_1__DOT__internal_reg = 1U;
            vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl1c1__DOT__ltl1c1_ste_3__DOT__internal_reg = 1U;
            vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl2c1__DOT__ltl2c1_ste_2__DOT__internal_reg = 1U;
            vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl0c1__DOT__ltl0c1_ste_2__DOT__internal_reg = 1U;
            vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl2c1__DOT__ltl2c1_ste_3__DOT__internal_reg = 1U;
            vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl1c1__DOT__ltl1c1_ste_2__DOT__internal_reg = 1U;
        }
    }
    vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl0c1__DOT__ltl0c1_ste_4__DOT__internal_reg 
        = ((~ (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT____Vcellinp__genblk1__BRA__3__KET____DOT__lane__lane_reset_i)) 
           & (0U != (IData)(vlSelf->automata_stage0c1__DOT__automata_ltl0c1__DOT____Vcellinp__ltl0c1_ste_4__income_edges)));
    vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl2c1__DOT__ltl2c1_ste_7__DOT__internal_reg 
        = ((~ (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT____Vcellinp__genblk1__BRA__3__KET____DOT__lane__lane_reset_i)) 
           & (0U != (IData)(vlSelf->automata_stage0c1__DOT__automata_ltl2c1__DOT____Vcellinp__ltl2c1_ste_7__income_edges)));
    vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl1c1__DOT__ltl1c1_ste_4__DOT__internal_reg 
        = ((~ (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT____Vcellinp__genblk1__BRA__3__KET____DOT__lane__lane_reset_i)) 
           & (0U != (IData)(vlSelf->automata_stage0c1__DOT__automata_ltl1c1__DOT____Vcellinp__ltl1c1_ste_4__income_edges)));
    vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl0c1__DOT__ltl0c1_ste_8__DOT__internal_reg 
        = ((~ (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT____Vcellinp__genblk1__BRA__3__KET____DOT__lane__lane_reset_i)) 
           & (0U != (IData)(vlSelf->automata_stage0c1__DOT__automata_ltl0c1__DOT____Vcellinp__ltl0c1_ste_8__income_edges)));
    vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl1c1__DOT__ltl1c1_ste_8__DOT__internal_reg 
        = ((~ (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT____Vcellinp__genblk1__BRA__3__KET____DOT__lane__lane_reset_i)) 
           & (0U != (IData)(vlSelf->automata_stage0c1__DOT__automata_ltl1c1__DOT____Vcellinp__ltl1c1_ste_8__income_edges)));
    vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl2c1__DOT__ltl2c1_ste_8__DOT__internal_reg 
        = ((~ (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT____Vcellinp__genblk1__BRA__3__KET____DOT__lane__lane_reset_i)) 
           & (0U != (IData)(vlSelf->automata_stage0c1__DOT__automata_ltl2c1__DOT____Vcellinp__ltl2c1_ste_8__income_edges)));
    vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl0c1__DOT__ltl0c1_ste_5__DOT__internal_reg 
        = ((~ (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT____Vcellinp__genblk1__BRA__3__KET____DOT__lane__lane_reset_i)) 
           & (0U != (IData)(vlSelf->automata_stage0c1__DOT__automata_ltl0c1__DOT____Vcellinp__ltl0c1_ste_5__income_edges)));
    vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl1c1__DOT__ltl1c1_ste_5__DOT__internal_reg 
        = ((~ (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT____Vcellinp__genblk1__BRA__3__KET____DOT__lane__lane_reset_i)) 
           & (0U != (IData)(vlSelf->automata_stage0c1__DOT__automata_ltl1c1__DOT____Vcellinp__ltl1c1_ste_5__income_edges)));
    vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl2c1__DOT__ltl2c1_ste_4__DOT__internal_reg 
        = ((~ (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT____Vcellinp__genblk1__BRA__3__KET____DOT__lane__lane_reset_i)) 
           & (0U != (IData)(vlSelf->automata_stage0c1__DOT__automata_ltl2c1__DOT____Vcellinp__ltl2c1_ste_4__income_edges)));
    vlSelf->__PVT__automata_stage0c1__DOT__out_symbols 
        = vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__3__KET____DOT__lane__DOT__c1_i;
}

VL_INLINE_OPT void rm_tb_top_routerlinkedlist_Top_ModuleC1___nba_sequent__TOP__rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__3__KET____DOT__lane__DOT__I0c1__1(rm_tb_top_routerlinkedlist_Top_ModuleC1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    rm_tb_top_routerlinkedlist__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            rm_tb_top_routerlinkedlist_Top_ModuleC1___nba_sequent__TOP__rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__3__KET____DOT__lane__DOT__I0c1__1\n"); );
    // Body
    vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl2c1__DOT__start_of_data_reg_ne 
        = vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT____Vcellinp__genblk1__BRA__3__KET____DOT__lane__lane_reset_i;
}

VL_INLINE_OPT void rm_tb_top_routerlinkedlist_Top_ModuleC1___nba_comb__TOP__rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__3__KET____DOT__lane__DOT__I0c1__0(rm_tb_top_routerlinkedlist_Top_ModuleC1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    rm_tb_top_routerlinkedlist__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            rm_tb_top_routerlinkedlist_Top_ModuleC1___nba_comb__TOP__rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__3__KET____DOT__lane__DOT__I0c1__0\n"); );
    // Body
    vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl2c1__DOT__start_of_data 
        = ((IData)(vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl2c1__DOT__start_of_data_reg) 
           & ((~ (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT____Vcellinp__genblk1__BRA__3__KET____DOT__lane__lane_reset_i)) 
              & (IData)(vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl2c1__DOT__start_of_data_reg_ne)));
}

VL_INLINE_OPT void rm_tb_top_routerlinkedlist_Top_ModuleC1___nba_comb__TOP__rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__3__KET____DOT__lane__DOT__I0c1__1(rm_tb_top_routerlinkedlist_Top_ModuleC1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    rm_tb_top_routerlinkedlist__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            rm_tb_top_routerlinkedlist_Top_ModuleC1___nba_comb__TOP__rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__3__KET____DOT__lane__DOT__I0c1__1\n"); );
    // Body
    vlSelf->automata_stage0c1__DOT__automata_ltl0c1__DOT____Vcellinp__ltl0c1_ste_5__income_edges 
        = ((((IData)(vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl0c1__DOT__ltl0c1_ste_3__DOT__internal_reg) 
             & ((8U <= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__3__KET____DOT__lane__DOT__c1_i)) 
                & (0xbU >= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__3__KET____DOT__lane__DOT__c1_i)))) 
            << 1U) | ((IData)(vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl0c1__DOT__ltl0c1_ste_5__DOT__internal_reg) 
                      & (3U >= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__3__KET____DOT__lane__DOT__c1_i))));
    vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl1c1__DOT__lut_match_ltl1c1_1__DOT__match_internal 
        = ((1U >= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__3__KET____DOT__lane__DOT__c1_i)) 
           | ((8U <= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__3__KET____DOT__lane__DOT__c1_i)) 
              & (9U >= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__3__KET____DOT__lane__DOT__c1_i))));
    vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl2c1__DOT__lut_match_ltl2c1_1__DOT__match_internal 
        = ((0U >= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__3__KET____DOT__lane__DOT__c1_i)) 
           | (((2U <= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__3__KET____DOT__lane__DOT__c1_i)) 
               & (2U >= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__3__KET____DOT__lane__DOT__c1_i))) 
              | (((4U <= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__3__KET____DOT__lane__DOT__c1_i)) 
                  & (4U >= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__3__KET____DOT__lane__DOT__c1_i))) 
                 | ((6U <= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__3__KET____DOT__lane__DOT__c1_i)) 
                    & (6U >= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__3__KET____DOT__lane__DOT__c1_i))))));
    vlSelf->__PVT__ltl1c1_w_out_9 = ((IData)(vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl1c1__DOT__ltl1c1_ste_8__DOT__internal_reg) 
                                     & (((2U <= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__3__KET____DOT__lane__DOT__c1_i)) 
                                         & (7U >= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__3__KET____DOT__lane__DOT__c1_i))) 
                                        | (0xaU <= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__3__KET____DOT__lane__DOT__c1_i))));
    vlSelf->__PVT__ltl2c1_w_out_3 = ((IData)(vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl2c1__DOT__ltl2c1_ste_3__DOT__internal_reg) 
                                     & (8U <= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__3__KET____DOT__lane__DOT__c1_i)));
    vlSelf->__PVT__ltl0c1_w_out_7 = ((IData)(vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl0c1__DOT__ltl0c1_ste_5__DOT__internal_reg) 
                                     & (8U <= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__3__KET____DOT__lane__DOT__c1_i)));
    vlSelf->__PVT__ltl0c1_w_out_9 = ((IData)(vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl0c1__DOT__ltl0c1_ste_8__DOT__internal_reg) 
                                     & (4U <= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__3__KET____DOT__lane__DOT__c1_i)));
    vlSelf->__VdfgTmp_hb5b42c0f__0 = ((2U <= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__3__KET____DOT__lane__DOT__c1_i)) 
                                      & (3U >= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__3__KET____DOT__lane__DOT__c1_i)));
    vlSelf->__VdfgTmp_h2aa42c51__0 = ((0xaU <= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__3__KET____DOT__lane__DOT__c1_i)) 
                                      & (0xbU >= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__3__KET____DOT__lane__DOT__c1_i)));
    vlSelf->__VdfgTmp_h8f083f76__0 = ((7U <= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__3__KET____DOT__lane__DOT__c1_i)) 
                                      & (7U >= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__3__KET____DOT__lane__DOT__c1_i)));
    vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl0c1__DOT__lut_match_ltl0c1_6__DOT__match_internal 
        = ((4U <= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__3__KET____DOT__lane__DOT__c1_i)) 
           & (7U >= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__3__KET____DOT__lane__DOT__c1_i)));
    vlSelf->__VdfgTmp_hb30bd723__0 = ((1U <= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__3__KET____DOT__lane__DOT__c1_i)) 
                                      & (1U >= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__3__KET____DOT__lane__DOT__c1_i)));
    vlSelf->__VdfgTmp_he9b10395__0 = ((3U <= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__3__KET____DOT__lane__DOT__c1_i)) 
                                      & (3U >= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__3__KET____DOT__lane__DOT__c1_i)));
    vlSelf->__VdfgTmp_hd3ae48ab__0 = ((5U <= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__3__KET____DOT__lane__DOT__c1_i)) 
                                      & (5U >= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__3__KET____DOT__lane__DOT__c1_i)));
    vlSelf->automata_stage0c1__DOT__automata_ltl1c1__DOT____Vcellinp__ltl1c1_ste_5__income_edges 
        = ((((IData)(vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl1c1__DOT__ltl1c1_ste_3__DOT__internal_reg) 
             & (((4U <= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__3__KET____DOT__lane__DOT__c1_i)) 
                 & (5U >= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__3__KET____DOT__lane__DOT__c1_i))) 
                | ((0xcU <= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__3__KET____DOT__lane__DOT__c1_i)) 
                   & (0xdU >= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__3__KET____DOT__lane__DOT__c1_i))))) 
            << 1U) | ((IData)(vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl1c1__DOT__ltl1c1_ste_5__DOT__internal_reg) 
                      & (IData)(vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl1c1__DOT__lut_match_ltl1c1_1__DOT__match_internal)));
    vlSelf->automata_stage0c1__DOT__automata_ltl2c1__DOT____Vcellinp__ltl2c1_ste_8__income_edges 
        = ((((IData)(vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl2c1__DOT__ltl2c1_ste_8__DOT__internal_reg) 
             & (IData)(vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl2c1__DOT__lut_match_ltl2c1_1__DOT__match_internal)) 
            << 1U) | ((IData)(vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl2c1__DOT__ltl2c1_ste_4__DOT__internal_reg) 
                      & (((8U <= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__3__KET____DOT__lane__DOT__c1_i)) 
                          & (8U >= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__3__KET____DOT__lane__DOT__c1_i))) 
                         | (((0xaU <= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__3__KET____DOT__lane__DOT__c1_i)) 
                             & (0xaU >= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__3__KET____DOT__lane__DOT__c1_i))) 
                            | (((0xcU <= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__3__KET____DOT__lane__DOT__c1_i)) 
                                & (0xcU >= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__3__KET____DOT__lane__DOT__c1_i))) 
                               | ((0xeU <= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__3__KET____DOT__lane__DOT__c1_i)) 
                                  & (0xeU >= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__3__KET____DOT__lane__DOT__c1_i))))))));
    vlSelf->automata_stage0c1__DOT__automata_ltl1c1__DOT____Vcellinp__ltl1c1_ste_8__income_edges 
        = ((((IData)(vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl1c1__DOT__ltl1c1_ste_8__DOT__internal_reg) 
             & (IData)(vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl1c1__DOT__lut_match_ltl1c1_1__DOT__match_internal)) 
            << 1U) | ((IData)(vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl1c1__DOT__ltl1c1_ste_5__DOT__internal_reg) 
                      & ((IData)(vlSelf->__VdfgTmp_hb5b42c0f__0) 
                         | (IData)(vlSelf->__VdfgTmp_h2aa42c51__0))));
    vlSelf->__PVT__ltl1c1_w_out_2 = ((IData)(vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl1c1__DOT__ltl1c1_ste_2__DOT__internal_reg) 
                                     & ((IData)(vlSelf->__VdfgTmp_hb5b42c0f__0) 
                                        | (((6U <= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__3__KET____DOT__lane__DOT__c1_i)) 
                                            & (7U >= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__3__KET____DOT__lane__DOT__c1_i))) 
                                           | ((IData)(vlSelf->__VdfgTmp_h2aa42c51__0) 
                                              | (0xeU 
                                                 <= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__3__KET____DOT__lane__DOT__c1_i))))));
    vlSelf->automata_stage0c1__DOT__automata_ltl0c1__DOT____Vcellinp__ltl0c1_ste_8__income_edges 
        = ((((IData)(vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl0c1__DOT__ltl0c1_ste_8__DOT__internal_reg) 
             & (3U >= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__3__KET____DOT__lane__DOT__c1_i))) 
            << 1U) | ((IData)(vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl0c1__DOT__ltl0c1_ste_5__DOT__internal_reg) 
                      & (IData)(vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl0c1__DOT__lut_match_ltl0c1_6__DOT__match_internal)));
    vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl0c1__DOT__lut_match_ltl0c1_2__DOT__match_internal 
        = ((IData)(vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl0c1__DOT__lut_match_ltl0c1_6__DOT__match_internal) 
           | (0xcU <= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__3__KET____DOT__lane__DOT__c1_i)));
    vlSelf->automata_stage0c1__DOT__automata_ltl2c1__DOT____Vcellinp__ltl2c1_ste_4__income_edges 
        = ((((IData)(vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl2c1__DOT__ltl2c1_ste_2__DOT__internal_reg) 
             & ((IData)(vlSelf->__VdfgTmp_hb30bd723__0) 
                | ((IData)(vlSelf->__VdfgTmp_he9b10395__0) 
                   | ((IData)(vlSelf->__VdfgTmp_hd3ae48ab__0) 
                      | (IData)(vlSelf->__VdfgTmp_h8f083f76__0))))) 
            << 1U) | ((IData)(vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl2c1__DOT__ltl2c1_ste_4__DOT__internal_reg) 
                      & (IData)(vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl2c1__DOT__lut_match_ltl2c1_1__DOT__match_internal)));
    vlSelf->__PVT__ltl2c1_w_out_9 = ((IData)(vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl2c1__DOT__ltl2c1_ste_8__DOT__internal_reg) 
                                     & ((IData)(vlSelf->__VdfgTmp_hb30bd723__0) 
                                        | ((IData)(vlSelf->__VdfgTmp_he9b10395__0) 
                                           | ((IData)(vlSelf->__VdfgTmp_hd3ae48ab__0) 
                                              | (7U 
                                                 <= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__3__KET____DOT__lane__DOT__c1_i))))));
    vlSelf->__PVT__ltl2c1_w_out_5 = ((IData)(vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl2c1__DOT__ltl2c1_ste_4__DOT__internal_reg) 
                                     & ((IData)(vlSelf->__VdfgTmp_hb30bd723__0) 
                                        | ((IData)(vlSelf->__VdfgTmp_he9b10395__0) 
                                           | ((IData)(vlSelf->__VdfgTmp_hd3ae48ab__0) 
                                              | ((IData)(vlSelf->__VdfgTmp_h8f083f76__0) 
                                                 | (((9U 
                                                      <= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__3__KET____DOT__lane__DOT__c1_i)) 
                                                     & (9U 
                                                        >= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__3__KET____DOT__lane__DOT__c1_i))) 
                                                    | (((0xbU 
                                                         <= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__3__KET____DOT__lane__DOT__c1_i)) 
                                                        & (0xbU 
                                                           >= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__3__KET____DOT__lane__DOT__c1_i))) 
                                                       | (((0xdU 
                                                            <= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__3__KET____DOT__lane__DOT__c1_i)) 
                                                           & (0xdU 
                                                              >= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__3__KET____DOT__lane__DOT__c1_i))) 
                                                          | (0xfU 
                                                             <= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__3__KET____DOT__lane__DOT__c1_i))))))))));
    vlSelf->__PVT__ltl1c1_w_out_7 = ((IData)(vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl1c1__DOT__ltl1c1_ste_5__DOT__internal_reg) 
                                     & (IData)(vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl0c1__DOT__lut_match_ltl0c1_2__DOT__match_internal));
    vlSelf->__PVT__ltl0c1_w_out_2 = ((IData)(vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl0c1__DOT__ltl0c1_ste_2__DOT__internal_reg) 
                                     & (IData)(vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl0c1__DOT__lut_match_ltl0c1_2__DOT__match_internal));
    vlSelf->automata_stage0c1__DOT__automata_ltl2c1__DOT____Vcellinp__ltl2c1_ste_7__income_edges 
        = (((IData)(vlSelf->__PVT__ltl2c1_w_out_9) 
            << 3U) | (((IData)(vlSelf->__PVT__ltl2c1_w_out_3) 
                       << 2U) | (((IData)(vlSelf->__PVT__ltl2c1_w_out_5) 
                                  << 1U) | (IData)(vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl2c1__DOT__ltl2c1_ste_7__DOT__internal_reg))));
    vlSelf->automata_stage0c1__DOT__automata_ltl1c1__DOT____Vcellinp__ltl1c1_ste_4__income_edges 
        = (((IData)(vlSelf->__PVT__ltl1c1_w_out_9) 
            << 3U) | (((IData)(vlSelf->__PVT__ltl1c1_w_out_2) 
                       << 2U) | (((IData)(vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl1c1__DOT__ltl1c1_ste_4__DOT__internal_reg) 
                                  << 1U) | (IData)(vlSelf->__PVT__ltl1c1_w_out_7))));
    vlSelf->automata_stage0c1__DOT__automata_ltl0c1__DOT____Vcellinp__ltl0c1_ste_4__income_edges 
        = (((IData)(vlSelf->__PVT__ltl0c1_w_out_9) 
            << 3U) | (((IData)(vlSelf->__PVT__ltl0c1_w_out_2) 
                       << 2U) | (((IData)(vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl0c1__DOT__ltl0c1_ste_4__DOT__internal_reg) 
                                  << 1U) | (IData)(vlSelf->__PVT__ltl0c1_w_out_7))));
}

VL_INLINE_OPT void rm_tb_top_routerlinkedlist_Top_ModuleC1___nba_comb__TOP__rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__3__KET____DOT__lane__DOT__I0c1__2(rm_tb_top_routerlinkedlist_Top_ModuleC1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    rm_tb_top_routerlinkedlist__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            rm_tb_top_routerlinkedlist_Top_ModuleC1___nba_comb__TOP__rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__3__KET____DOT__lane__DOT__I0c1__2\n"); );
    // Body
    vlSelf->automata_stage0c1__DOT__automata_ltl0c1__DOT____Vcellinp__ltl0c1_ste_1__income_edges 
        = (((IData)(vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl2c1__DOT__start_of_data) 
            << 1U) | ((IData)(vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl0c1__DOT__ltl0c1_ste_1__DOT__internal_reg) 
                      & (3U >= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__3__KET____DOT__lane__DOT__c1_i))));
    vlSelf->automata_stage0c1__DOT__automata_ltl1c1__DOT____Vcellinp__ltl1c1_ste_1__income_edges 
        = (((IData)(vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl2c1__DOT__start_of_data) 
            << 1U) | ((IData)(vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl1c1__DOT__ltl1c1_ste_1__DOT__internal_reg) 
                      & (IData)(vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl1c1__DOT__lut_match_ltl1c1_1__DOT__match_internal)));
    vlSelf->automata_stage0c1__DOT__automata_ltl2c1__DOT____Vcellinp__ltl2c1_ste_1__income_edges 
        = (((IData)(vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl2c1__DOT__start_of_data) 
            << 1U) | ((IData)(vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl2c1__DOT__ltl2c1_ste_1__DOT__internal_reg) 
                      & (IData)(vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl2c1__DOT__lut_match_ltl2c1_1__DOT__match_internal)));
}

VL_INLINE_OPT void rm_tb_top_routerlinkedlist_Top_ModuleC1___nba_sequent__TOP__rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__3__KET____DOT__lane__DOT__I1c1__0(rm_tb_top_routerlinkedlist_Top_ModuleC1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    rm_tb_top_routerlinkedlist__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            rm_tb_top_routerlinkedlist_Top_ModuleC1___nba_sequent__TOP__rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__3__KET____DOT__lane__DOT__I1c1__0\n"); );
    // Body
    if (vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT____Vcellinp__genblk1__BRA__3__KET____DOT__lane__lane_reset_i) {
        vlSelf->__PVT__automata_stage0c1__DOT__out_reset = 1U;
        vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl2c1__DOT__start_of_data_reg = 1U;
        vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl0c1__DOT__ltl0c1_ste_3__DOT__internal_reg = 1U;
        vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl0c1__DOT__ltl0c1_ste_1__DOT__internal_reg = 1U;
        vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl2c1__DOT__ltl2c1_ste_1__DOT__internal_reg = 1U;
        vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl1c1__DOT__ltl1c1_ste_1__DOT__internal_reg = 1U;
        vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl1c1__DOT__ltl1c1_ste_3__DOT__internal_reg = 1U;
        vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl2c1__DOT__ltl2c1_ste_2__DOT__internal_reg = 1U;
        vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl0c1__DOT__ltl0c1_ste_2__DOT__internal_reg = 1U;
        vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl2c1__DOT__ltl2c1_ste_3__DOT__internal_reg = 1U;
        vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl1c1__DOT__ltl1c1_ste_2__DOT__internal_reg = 1U;
    } else {
        vlSelf->__PVT__automata_stage0c1__DOT__out_reset = 0U;
        vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl2c1__DOT__start_of_data_reg = 0U;
        vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl0c1__DOT__ltl0c1_ste_3__DOT__internal_reg 
            = (0U != (IData)(vlSelf->automata_stage0c1__DOT__automata_ltl0c1__DOT____Vcellinp__ltl0c1_ste_1__income_edges));
        vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl0c1__DOT__ltl0c1_ste_1__DOT__internal_reg 
            = (0U != (IData)(vlSelf->automata_stage0c1__DOT__automata_ltl0c1__DOT____Vcellinp__ltl0c1_ste_1__income_edges));
        vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl2c1__DOT__ltl2c1_ste_1__DOT__internal_reg 
            = (0U != (IData)(vlSelf->automata_stage0c1__DOT__automata_ltl2c1__DOT____Vcellinp__ltl2c1_ste_1__income_edges));
        vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl1c1__DOT__ltl1c1_ste_1__DOT__internal_reg 
            = (0U != (IData)(vlSelf->automata_stage0c1__DOT__automata_ltl1c1__DOT____Vcellinp__ltl1c1_ste_1__income_edges));
        vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl1c1__DOT__ltl1c1_ste_3__DOT__internal_reg 
            = (0U != (IData)(vlSelf->automata_stage0c1__DOT__automata_ltl1c1__DOT____Vcellinp__ltl1c1_ste_1__income_edges));
        vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl2c1__DOT__ltl2c1_ste_2__DOT__internal_reg 
            = (0U != (IData)(vlSelf->automata_stage0c1__DOT__automata_ltl2c1__DOT____Vcellinp__ltl2c1_ste_1__income_edges));
        vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl0c1__DOT__ltl0c1_ste_2__DOT__internal_reg 
            = (0U != (IData)(vlSelf->automata_stage0c1__DOT__automata_ltl0c1__DOT____Vcellinp__ltl0c1_ste_1__income_edges));
        vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl2c1__DOT__ltl2c1_ste_3__DOT__internal_reg 
            = (0U != (IData)(vlSelf->automata_stage0c1__DOT__automata_ltl2c1__DOT____Vcellinp__ltl2c1_ste_1__income_edges));
        vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl1c1__DOT__ltl1c1_ste_2__DOT__internal_reg 
            = (0U != (IData)(vlSelf->automata_stage0c1__DOT__automata_ltl1c1__DOT____Vcellinp__ltl1c1_ste_1__income_edges));
        if (vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl2c1__DOT__start_of_data) {
            vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl0c1__DOT__ltl0c1_ste_3__DOT__internal_reg = 1U;
            vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl0c1__DOT__ltl0c1_ste_1__DOT__internal_reg = 1U;
            vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl2c1__DOT__ltl2c1_ste_1__DOT__internal_reg = 1U;
            vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl1c1__DOT__ltl1c1_ste_1__DOT__internal_reg = 1U;
            vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl1c1__DOT__ltl1c1_ste_3__DOT__internal_reg = 1U;
            vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl2c1__DOT__ltl2c1_ste_2__DOT__internal_reg = 1U;
            vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl0c1__DOT__ltl0c1_ste_2__DOT__internal_reg = 1U;
            vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl2c1__DOT__ltl2c1_ste_3__DOT__internal_reg = 1U;
            vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl1c1__DOT__ltl1c1_ste_2__DOT__internal_reg = 1U;
        }
    }
    vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl0c1__DOT__ltl0c1_ste_4__DOT__internal_reg 
        = ((~ (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT____Vcellinp__genblk1__BRA__3__KET____DOT__lane__lane_reset_i)) 
           & (0U != (IData)(vlSelf->automata_stage0c1__DOT__automata_ltl0c1__DOT____Vcellinp__ltl0c1_ste_4__income_edges)));
    vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl2c1__DOT__ltl2c1_ste_7__DOT__internal_reg 
        = ((~ (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT____Vcellinp__genblk1__BRA__3__KET____DOT__lane__lane_reset_i)) 
           & (0U != (IData)(vlSelf->automata_stage0c1__DOT__automata_ltl2c1__DOT____Vcellinp__ltl2c1_ste_7__income_edges)));
    vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl1c1__DOT__ltl1c1_ste_4__DOT__internal_reg 
        = ((~ (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT____Vcellinp__genblk1__BRA__3__KET____DOT__lane__lane_reset_i)) 
           & (0U != (IData)(vlSelf->automata_stage0c1__DOT__automata_ltl1c1__DOT____Vcellinp__ltl1c1_ste_4__income_edges)));
    vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl0c1__DOT__ltl0c1_ste_8__DOT__internal_reg 
        = ((~ (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT____Vcellinp__genblk1__BRA__3__KET____DOT__lane__lane_reset_i)) 
           & (0U != (IData)(vlSelf->automata_stage0c1__DOT__automata_ltl0c1__DOT____Vcellinp__ltl0c1_ste_8__income_edges)));
    vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl1c1__DOT__ltl1c1_ste_8__DOT__internal_reg 
        = ((~ (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT____Vcellinp__genblk1__BRA__3__KET____DOT__lane__lane_reset_i)) 
           & (0U != (IData)(vlSelf->automata_stage0c1__DOT__automata_ltl1c1__DOT____Vcellinp__ltl1c1_ste_8__income_edges)));
    vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl2c1__DOT__ltl2c1_ste_8__DOT__internal_reg 
        = ((~ (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT____Vcellinp__genblk1__BRA__3__KET____DOT__lane__lane_reset_i)) 
           & (0U != (IData)(vlSelf->automata_stage0c1__DOT__automata_ltl2c1__DOT____Vcellinp__ltl2c1_ste_8__income_edges)));
    vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl0c1__DOT__ltl0c1_ste_5__DOT__internal_reg 
        = ((~ (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT____Vcellinp__genblk1__BRA__3__KET____DOT__lane__lane_reset_i)) 
           & (0U != (IData)(vlSelf->automata_stage0c1__DOT__automata_ltl0c1__DOT____Vcellinp__ltl0c1_ste_5__income_edges)));
    vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl1c1__DOT__ltl1c1_ste_5__DOT__internal_reg 
        = ((~ (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT____Vcellinp__genblk1__BRA__3__KET____DOT__lane__lane_reset_i)) 
           & (0U != (IData)(vlSelf->automata_stage0c1__DOT__automata_ltl1c1__DOT____Vcellinp__ltl1c1_ste_5__income_edges)));
    vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl2c1__DOT__ltl2c1_ste_4__DOT__internal_reg 
        = ((~ (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT____Vcellinp__genblk1__BRA__3__KET____DOT__lane__lane_reset_i)) 
           & (0U != (IData)(vlSelf->automata_stage0c1__DOT__automata_ltl2c1__DOT____Vcellinp__ltl2c1_ste_4__income_edges)));
    vlSelf->__PVT__automata_stage0c1__DOT__out_symbols 
        = vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__3__KET____DOT__lane__DOT__c3_i;
}

VL_INLINE_OPT void rm_tb_top_routerlinkedlist_Top_ModuleC1___nba_comb__TOP__rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__3__KET____DOT__lane__DOT__I1c1__1(rm_tb_top_routerlinkedlist_Top_ModuleC1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    rm_tb_top_routerlinkedlist__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            rm_tb_top_routerlinkedlist_Top_ModuleC1___nba_comb__TOP__rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__3__KET____DOT__lane__DOT__I1c1__1\n"); );
    // Body
    vlSelf->automata_stage0c1__DOT__automata_ltl0c1__DOT____Vcellinp__ltl0c1_ste_5__income_edges 
        = ((((IData)(vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl0c1__DOT__ltl0c1_ste_3__DOT__internal_reg) 
             & ((8U <= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__3__KET____DOT__lane__DOT__c3_i)) 
                & (0xbU >= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__3__KET____DOT__lane__DOT__c3_i)))) 
            << 1U) | ((IData)(vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl0c1__DOT__ltl0c1_ste_5__DOT__internal_reg) 
                      & (3U >= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__3__KET____DOT__lane__DOT__c3_i))));
    vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl1c1__DOT__lut_match_ltl1c1_1__DOT__match_internal 
        = ((1U >= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__3__KET____DOT__lane__DOT__c3_i)) 
           | ((8U <= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__3__KET____DOT__lane__DOT__c3_i)) 
              & (9U >= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__3__KET____DOT__lane__DOT__c3_i))));
    vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl2c1__DOT__lut_match_ltl2c1_1__DOT__match_internal 
        = ((0U >= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__3__KET____DOT__lane__DOT__c3_i)) 
           | (((2U <= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__3__KET____DOT__lane__DOT__c3_i)) 
               & (2U >= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__3__KET____DOT__lane__DOT__c3_i))) 
              | (((4U <= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__3__KET____DOT__lane__DOT__c3_i)) 
                  & (4U >= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__3__KET____DOT__lane__DOT__c3_i))) 
                 | ((6U <= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__3__KET____DOT__lane__DOT__c3_i)) 
                    & (6U >= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__3__KET____DOT__lane__DOT__c3_i))))));
    vlSelf->__PVT__ltl1c1_w_out_9 = ((IData)(vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl1c1__DOT__ltl1c1_ste_8__DOT__internal_reg) 
                                     & (((2U <= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__3__KET____DOT__lane__DOT__c3_i)) 
                                         & (7U >= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__3__KET____DOT__lane__DOT__c3_i))) 
                                        | (0xaU <= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__3__KET____DOT__lane__DOT__c3_i))));
    vlSelf->__PVT__ltl2c1_w_out_3 = ((IData)(vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl2c1__DOT__ltl2c1_ste_3__DOT__internal_reg) 
                                     & (8U <= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__3__KET____DOT__lane__DOT__c3_i)));
    vlSelf->__PVT__ltl0c1_w_out_7 = ((IData)(vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl0c1__DOT__ltl0c1_ste_5__DOT__internal_reg) 
                                     & (8U <= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__3__KET____DOT__lane__DOT__c3_i)));
    vlSelf->__PVT__ltl0c1_w_out_9 = ((IData)(vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl0c1__DOT__ltl0c1_ste_8__DOT__internal_reg) 
                                     & (4U <= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__3__KET____DOT__lane__DOT__c3_i)));
    vlSelf->__VdfgTmp_hb5b42c0f__0 = ((2U <= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__3__KET____DOT__lane__DOT__c3_i)) 
                                      & (3U >= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__3__KET____DOT__lane__DOT__c3_i)));
    vlSelf->__VdfgTmp_h2aa42c51__0 = ((0xaU <= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__3__KET____DOT__lane__DOT__c3_i)) 
                                      & (0xbU >= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__3__KET____DOT__lane__DOT__c3_i)));
    vlSelf->__VdfgTmp_h8f083f76__0 = ((7U <= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__3__KET____DOT__lane__DOT__c3_i)) 
                                      & (7U >= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__3__KET____DOT__lane__DOT__c3_i)));
    vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl0c1__DOT__lut_match_ltl0c1_6__DOT__match_internal 
        = ((4U <= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__3__KET____DOT__lane__DOT__c3_i)) 
           & (7U >= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__3__KET____DOT__lane__DOT__c3_i)));
    vlSelf->__VdfgTmp_hb30bd723__0 = ((1U <= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__3__KET____DOT__lane__DOT__c3_i)) 
                                      & (1U >= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__3__KET____DOT__lane__DOT__c3_i)));
    vlSelf->__VdfgTmp_he9b10395__0 = ((3U <= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__3__KET____DOT__lane__DOT__c3_i)) 
                                      & (3U >= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__3__KET____DOT__lane__DOT__c3_i)));
    vlSelf->__VdfgTmp_hd3ae48ab__0 = ((5U <= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__3__KET____DOT__lane__DOT__c3_i)) 
                                      & (5U >= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__3__KET____DOT__lane__DOT__c3_i)));
    vlSelf->automata_stage0c1__DOT__automata_ltl1c1__DOT____Vcellinp__ltl1c1_ste_5__income_edges 
        = ((((IData)(vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl1c1__DOT__ltl1c1_ste_3__DOT__internal_reg) 
             & (((4U <= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__3__KET____DOT__lane__DOT__c3_i)) 
                 & (5U >= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__3__KET____DOT__lane__DOT__c3_i))) 
                | ((0xcU <= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__3__KET____DOT__lane__DOT__c3_i)) 
                   & (0xdU >= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__3__KET____DOT__lane__DOT__c3_i))))) 
            << 1U) | ((IData)(vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl1c1__DOT__ltl1c1_ste_5__DOT__internal_reg) 
                      & (IData)(vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl1c1__DOT__lut_match_ltl1c1_1__DOT__match_internal)));
    vlSelf->automata_stage0c1__DOT__automata_ltl2c1__DOT____Vcellinp__ltl2c1_ste_8__income_edges 
        = ((((IData)(vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl2c1__DOT__ltl2c1_ste_8__DOT__internal_reg) 
             & (IData)(vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl2c1__DOT__lut_match_ltl2c1_1__DOT__match_internal)) 
            << 1U) | ((IData)(vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl2c1__DOT__ltl2c1_ste_4__DOT__internal_reg) 
                      & (((8U <= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__3__KET____DOT__lane__DOT__c3_i)) 
                          & (8U >= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__3__KET____DOT__lane__DOT__c3_i))) 
                         | (((0xaU <= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__3__KET____DOT__lane__DOT__c3_i)) 
                             & (0xaU >= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__3__KET____DOT__lane__DOT__c3_i))) 
                            | (((0xcU <= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__3__KET____DOT__lane__DOT__c3_i)) 
                                & (0xcU >= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__3__KET____DOT__lane__DOT__c3_i))) 
                               | ((0xeU <= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__3__KET____DOT__lane__DOT__c3_i)) 
                                  & (0xeU >= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__3__KET____DOT__lane__DOT__c3_i))))))));
    vlSelf->automata_stage0c1__DOT__automata_ltl1c1__DOT____Vcellinp__ltl1c1_ste_8__income_edges 
        = ((((IData)(vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl1c1__DOT__ltl1c1_ste_8__DOT__internal_reg) 
             & (IData)(vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl1c1__DOT__lut_match_ltl1c1_1__DOT__match_internal)) 
            << 1U) | ((IData)(vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl1c1__DOT__ltl1c1_ste_5__DOT__internal_reg) 
                      & ((IData)(vlSelf->__VdfgTmp_hb5b42c0f__0) 
                         | (IData)(vlSelf->__VdfgTmp_h2aa42c51__0))));
    vlSelf->__PVT__ltl1c1_w_out_2 = ((IData)(vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl1c1__DOT__ltl1c1_ste_2__DOT__internal_reg) 
                                     & ((IData)(vlSelf->__VdfgTmp_hb5b42c0f__0) 
                                        | (((6U <= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__3__KET____DOT__lane__DOT__c3_i)) 
                                            & (7U >= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__3__KET____DOT__lane__DOT__c3_i))) 
                                           | ((IData)(vlSelf->__VdfgTmp_h2aa42c51__0) 
                                              | (0xeU 
                                                 <= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__3__KET____DOT__lane__DOT__c3_i))))));
    vlSelf->automata_stage0c1__DOT__automata_ltl0c1__DOT____Vcellinp__ltl0c1_ste_8__income_edges 
        = ((((IData)(vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl0c1__DOT__ltl0c1_ste_8__DOT__internal_reg) 
             & (3U >= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__3__KET____DOT__lane__DOT__c3_i))) 
            << 1U) | ((IData)(vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl0c1__DOT__ltl0c1_ste_5__DOT__internal_reg) 
                      & (IData)(vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl0c1__DOT__lut_match_ltl0c1_6__DOT__match_internal)));
    vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl0c1__DOT__lut_match_ltl0c1_2__DOT__match_internal 
        = ((IData)(vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl0c1__DOT__lut_match_ltl0c1_6__DOT__match_internal) 
           | (0xcU <= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__3__KET____DOT__lane__DOT__c3_i)));
    vlSelf->automata_stage0c1__DOT__automata_ltl2c1__DOT____Vcellinp__ltl2c1_ste_4__income_edges 
        = ((((IData)(vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl2c1__DOT__ltl2c1_ste_2__DOT__internal_reg) 
             & ((IData)(vlSelf->__VdfgTmp_hb30bd723__0) 
                | ((IData)(vlSelf->__VdfgTmp_he9b10395__0) 
                   | ((IData)(vlSelf->__VdfgTmp_hd3ae48ab__0) 
                      | (IData)(vlSelf->__VdfgTmp_h8f083f76__0))))) 
            << 1U) | ((IData)(vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl2c1__DOT__ltl2c1_ste_4__DOT__internal_reg) 
                      & (IData)(vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl2c1__DOT__lut_match_ltl2c1_1__DOT__match_internal)));
    vlSelf->__PVT__ltl2c1_w_out_9 = ((IData)(vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl2c1__DOT__ltl2c1_ste_8__DOT__internal_reg) 
                                     & ((IData)(vlSelf->__VdfgTmp_hb30bd723__0) 
                                        | ((IData)(vlSelf->__VdfgTmp_he9b10395__0) 
                                           | ((IData)(vlSelf->__VdfgTmp_hd3ae48ab__0) 
                                              | (7U 
                                                 <= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__3__KET____DOT__lane__DOT__c3_i))))));
    vlSelf->__PVT__ltl2c1_w_out_5 = ((IData)(vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl2c1__DOT__ltl2c1_ste_4__DOT__internal_reg) 
                                     & ((IData)(vlSelf->__VdfgTmp_hb30bd723__0) 
                                        | ((IData)(vlSelf->__VdfgTmp_he9b10395__0) 
                                           | ((IData)(vlSelf->__VdfgTmp_hd3ae48ab__0) 
                                              | ((IData)(vlSelf->__VdfgTmp_h8f083f76__0) 
                                                 | (((9U 
                                                      <= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__3__KET____DOT__lane__DOT__c3_i)) 
                                                     & (9U 
                                                        >= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__3__KET____DOT__lane__DOT__c3_i))) 
                                                    | (((0xbU 
                                                         <= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__3__KET____DOT__lane__DOT__c3_i)) 
                                                        & (0xbU 
                                                           >= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__3__KET____DOT__lane__DOT__c3_i))) 
                                                       | (((0xdU 
                                                            <= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__3__KET____DOT__lane__DOT__c3_i)) 
                                                           & (0xdU 
                                                              >= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__3__KET____DOT__lane__DOT__c3_i))) 
                                                          | (0xfU 
                                                             <= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__3__KET____DOT__lane__DOT__c3_i))))))))));
    vlSelf->__PVT__ltl1c1_w_out_7 = ((IData)(vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl1c1__DOT__ltl1c1_ste_5__DOT__internal_reg) 
                                     & (IData)(vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl0c1__DOT__lut_match_ltl0c1_2__DOT__match_internal));
    vlSelf->__PVT__ltl0c1_w_out_2 = ((IData)(vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl0c1__DOT__ltl0c1_ste_2__DOT__internal_reg) 
                                     & (IData)(vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl0c1__DOT__lut_match_ltl0c1_2__DOT__match_internal));
    vlSelf->automata_stage0c1__DOT__automata_ltl2c1__DOT____Vcellinp__ltl2c1_ste_7__income_edges 
        = (((IData)(vlSelf->__PVT__ltl2c1_w_out_9) 
            << 3U) | (((IData)(vlSelf->__PVT__ltl2c1_w_out_3) 
                       << 2U) | (((IData)(vlSelf->__PVT__ltl2c1_w_out_5) 
                                  << 1U) | (IData)(vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl2c1__DOT__ltl2c1_ste_7__DOT__internal_reg))));
    vlSelf->automata_stage0c1__DOT__automata_ltl1c1__DOT____Vcellinp__ltl1c1_ste_4__income_edges 
        = (((IData)(vlSelf->__PVT__ltl1c1_w_out_9) 
            << 3U) | (((IData)(vlSelf->__PVT__ltl1c1_w_out_2) 
                       << 2U) | (((IData)(vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl1c1__DOT__ltl1c1_ste_4__DOT__internal_reg) 
                                  << 1U) | (IData)(vlSelf->__PVT__ltl1c1_w_out_7))));
    vlSelf->automata_stage0c1__DOT__automata_ltl0c1__DOT____Vcellinp__ltl0c1_ste_4__income_edges 
        = (((IData)(vlSelf->__PVT__ltl0c1_w_out_9) 
            << 3U) | (((IData)(vlSelf->__PVT__ltl0c1_w_out_2) 
                       << 2U) | (((IData)(vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl0c1__DOT__ltl0c1_ste_4__DOT__internal_reg) 
                                  << 1U) | (IData)(vlSelf->__PVT__ltl0c1_w_out_7))));
}

VL_INLINE_OPT void rm_tb_top_routerlinkedlist_Top_ModuleC1___nba_comb__TOP__rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__3__KET____DOT__lane__DOT__I1c1__2(rm_tb_top_routerlinkedlist_Top_ModuleC1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    rm_tb_top_routerlinkedlist__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            rm_tb_top_routerlinkedlist_Top_ModuleC1___nba_comb__TOP__rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__3__KET____DOT__lane__DOT__I1c1__2\n"); );
    // Body
    vlSelf->automata_stage0c1__DOT__automata_ltl0c1__DOT____Vcellinp__ltl0c1_ste_1__income_edges 
        = (((IData)(vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl2c1__DOT__start_of_data) 
            << 1U) | ((IData)(vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl0c1__DOT__ltl0c1_ste_1__DOT__internal_reg) 
                      & (3U >= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__3__KET____DOT__lane__DOT__c3_i))));
    vlSelf->automata_stage0c1__DOT__automata_ltl1c1__DOT____Vcellinp__ltl1c1_ste_1__income_edges 
        = (((IData)(vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl2c1__DOT__start_of_data) 
            << 1U) | ((IData)(vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl1c1__DOT__ltl1c1_ste_1__DOT__internal_reg) 
                      & (IData)(vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl1c1__DOT__lut_match_ltl1c1_1__DOT__match_internal)));
    vlSelf->automata_stage0c1__DOT__automata_ltl2c1__DOT____Vcellinp__ltl2c1_ste_1__income_edges 
        = (((IData)(vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl2c1__DOT__start_of_data) 
            << 1U) | ((IData)(vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl2c1__DOT__ltl2c1_ste_1__DOT__internal_reg) 
                      & (IData)(vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl2c1__DOT__lut_match_ltl2c1_1__DOT__match_internal)));
}

VL_INLINE_OPT void rm_tb_top_routerlinkedlist_Top_ModuleC1___nba_sequent__TOP__rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__4__KET____DOT__lane__DOT__I0c1__0(rm_tb_top_routerlinkedlist_Top_ModuleC1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    rm_tb_top_routerlinkedlist__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            rm_tb_top_routerlinkedlist_Top_ModuleC1___nba_sequent__TOP__rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__4__KET____DOT__lane__DOT__I0c1__0\n"); );
    // Body
    if (vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT____Vcellinp__genblk1__BRA__4__KET____DOT__lane__lane_reset_i) {
        vlSelf->__PVT__automata_stage0c1__DOT__out_reset = 1U;
        vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl2c1__DOT__start_of_data_reg = 1U;
        vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl0c1__DOT__ltl0c1_ste_3__DOT__internal_reg = 1U;
        vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl0c1__DOT__ltl0c1_ste_1__DOT__internal_reg = 1U;
        vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl2c1__DOT__ltl2c1_ste_1__DOT__internal_reg = 1U;
        vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl1c1__DOT__ltl1c1_ste_1__DOT__internal_reg = 1U;
        vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl1c1__DOT__ltl1c1_ste_3__DOT__internal_reg = 1U;
        vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl2c1__DOT__ltl2c1_ste_2__DOT__internal_reg = 1U;
        vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl0c1__DOT__ltl0c1_ste_2__DOT__internal_reg = 1U;
        vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl2c1__DOT__ltl2c1_ste_3__DOT__internal_reg = 1U;
        vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl1c1__DOT__ltl1c1_ste_2__DOT__internal_reg = 1U;
    } else {
        vlSelf->__PVT__automata_stage0c1__DOT__out_reset = 0U;
        vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl2c1__DOT__start_of_data_reg = 0U;
        vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl0c1__DOT__ltl0c1_ste_3__DOT__internal_reg 
            = (0U != (IData)(vlSelf->automata_stage0c1__DOT__automata_ltl0c1__DOT____Vcellinp__ltl0c1_ste_1__income_edges));
        vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl0c1__DOT__ltl0c1_ste_1__DOT__internal_reg 
            = (0U != (IData)(vlSelf->automata_stage0c1__DOT__automata_ltl0c1__DOT____Vcellinp__ltl0c1_ste_1__income_edges));
        vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl2c1__DOT__ltl2c1_ste_1__DOT__internal_reg 
            = (0U != (IData)(vlSelf->automata_stage0c1__DOT__automata_ltl2c1__DOT____Vcellinp__ltl2c1_ste_1__income_edges));
        vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl1c1__DOT__ltl1c1_ste_1__DOT__internal_reg 
            = (0U != (IData)(vlSelf->automata_stage0c1__DOT__automata_ltl1c1__DOT____Vcellinp__ltl1c1_ste_1__income_edges));
        vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl1c1__DOT__ltl1c1_ste_3__DOT__internal_reg 
            = (0U != (IData)(vlSelf->automata_stage0c1__DOT__automata_ltl1c1__DOT____Vcellinp__ltl1c1_ste_1__income_edges));
        vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl2c1__DOT__ltl2c1_ste_2__DOT__internal_reg 
            = (0U != (IData)(vlSelf->automata_stage0c1__DOT__automata_ltl2c1__DOT____Vcellinp__ltl2c1_ste_1__income_edges));
        vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl0c1__DOT__ltl0c1_ste_2__DOT__internal_reg 
            = (0U != (IData)(vlSelf->automata_stage0c1__DOT__automata_ltl0c1__DOT____Vcellinp__ltl0c1_ste_1__income_edges));
        vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl2c1__DOT__ltl2c1_ste_3__DOT__internal_reg 
            = (0U != (IData)(vlSelf->automata_stage0c1__DOT__automata_ltl2c1__DOT____Vcellinp__ltl2c1_ste_1__income_edges));
        vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl1c1__DOT__ltl1c1_ste_2__DOT__internal_reg 
            = (0U != (IData)(vlSelf->automata_stage0c1__DOT__automata_ltl1c1__DOT____Vcellinp__ltl1c1_ste_1__income_edges));
        if (vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl2c1__DOT__start_of_data) {
            vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl0c1__DOT__ltl0c1_ste_3__DOT__internal_reg = 1U;
            vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl0c1__DOT__ltl0c1_ste_1__DOT__internal_reg = 1U;
            vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl2c1__DOT__ltl2c1_ste_1__DOT__internal_reg = 1U;
            vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl1c1__DOT__ltl1c1_ste_1__DOT__internal_reg = 1U;
            vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl1c1__DOT__ltl1c1_ste_3__DOT__internal_reg = 1U;
            vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl2c1__DOT__ltl2c1_ste_2__DOT__internal_reg = 1U;
            vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl0c1__DOT__ltl0c1_ste_2__DOT__internal_reg = 1U;
            vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl2c1__DOT__ltl2c1_ste_3__DOT__internal_reg = 1U;
            vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl1c1__DOT__ltl1c1_ste_2__DOT__internal_reg = 1U;
        }
    }
    vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl0c1__DOT__ltl0c1_ste_4__DOT__internal_reg 
        = ((~ (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT____Vcellinp__genblk1__BRA__4__KET____DOT__lane__lane_reset_i)) 
           & (0U != (IData)(vlSelf->automata_stage0c1__DOT__automata_ltl0c1__DOT____Vcellinp__ltl0c1_ste_4__income_edges)));
    vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl2c1__DOT__ltl2c1_ste_7__DOT__internal_reg 
        = ((~ (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT____Vcellinp__genblk1__BRA__4__KET____DOT__lane__lane_reset_i)) 
           & (0U != (IData)(vlSelf->automata_stage0c1__DOT__automata_ltl2c1__DOT____Vcellinp__ltl2c1_ste_7__income_edges)));
    vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl1c1__DOT__ltl1c1_ste_4__DOT__internal_reg 
        = ((~ (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT____Vcellinp__genblk1__BRA__4__KET____DOT__lane__lane_reset_i)) 
           & (0U != (IData)(vlSelf->automata_stage0c1__DOT__automata_ltl1c1__DOT____Vcellinp__ltl1c1_ste_4__income_edges)));
    vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl0c1__DOT__ltl0c1_ste_8__DOT__internal_reg 
        = ((~ (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT____Vcellinp__genblk1__BRA__4__KET____DOT__lane__lane_reset_i)) 
           & (0U != (IData)(vlSelf->automata_stage0c1__DOT__automata_ltl0c1__DOT____Vcellinp__ltl0c1_ste_8__income_edges)));
    vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl1c1__DOT__ltl1c1_ste_8__DOT__internal_reg 
        = ((~ (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT____Vcellinp__genblk1__BRA__4__KET____DOT__lane__lane_reset_i)) 
           & (0U != (IData)(vlSelf->automata_stage0c1__DOT__automata_ltl1c1__DOT____Vcellinp__ltl1c1_ste_8__income_edges)));
    vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl2c1__DOT__ltl2c1_ste_8__DOT__internal_reg 
        = ((~ (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT____Vcellinp__genblk1__BRA__4__KET____DOT__lane__lane_reset_i)) 
           & (0U != (IData)(vlSelf->automata_stage0c1__DOT__automata_ltl2c1__DOT____Vcellinp__ltl2c1_ste_8__income_edges)));
    vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl0c1__DOT__ltl0c1_ste_5__DOT__internal_reg 
        = ((~ (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT____Vcellinp__genblk1__BRA__4__KET____DOT__lane__lane_reset_i)) 
           & (0U != (IData)(vlSelf->automata_stage0c1__DOT__automata_ltl0c1__DOT____Vcellinp__ltl0c1_ste_5__income_edges)));
    vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl1c1__DOT__ltl1c1_ste_5__DOT__internal_reg 
        = ((~ (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT____Vcellinp__genblk1__BRA__4__KET____DOT__lane__lane_reset_i)) 
           & (0U != (IData)(vlSelf->automata_stage0c1__DOT__automata_ltl1c1__DOT____Vcellinp__ltl1c1_ste_5__income_edges)));
    vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl2c1__DOT__ltl2c1_ste_4__DOT__internal_reg 
        = ((~ (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT____Vcellinp__genblk1__BRA__4__KET____DOT__lane__lane_reset_i)) 
           & (0U != (IData)(vlSelf->automata_stage0c1__DOT__automata_ltl2c1__DOT____Vcellinp__ltl2c1_ste_4__income_edges)));
    vlSelf->__PVT__automata_stage0c1__DOT__out_symbols 
        = vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__4__KET____DOT__lane__DOT__c1_i;
}

VL_INLINE_OPT void rm_tb_top_routerlinkedlist_Top_ModuleC1___nba_sequent__TOP__rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__4__KET____DOT__lane__DOT__I0c1__1(rm_tb_top_routerlinkedlist_Top_ModuleC1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    rm_tb_top_routerlinkedlist__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            rm_tb_top_routerlinkedlist_Top_ModuleC1___nba_sequent__TOP__rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__4__KET____DOT__lane__DOT__I0c1__1\n"); );
    // Body
    vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl2c1__DOT__start_of_data_reg_ne 
        = vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT____Vcellinp__genblk1__BRA__4__KET____DOT__lane__lane_reset_i;
}

VL_INLINE_OPT void rm_tb_top_routerlinkedlist_Top_ModuleC1___nba_comb__TOP__rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__4__KET____DOT__lane__DOT__I0c1__0(rm_tb_top_routerlinkedlist_Top_ModuleC1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    rm_tb_top_routerlinkedlist__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            rm_tb_top_routerlinkedlist_Top_ModuleC1___nba_comb__TOP__rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__4__KET____DOT__lane__DOT__I0c1__0\n"); );
    // Body
    vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl2c1__DOT__start_of_data 
        = ((IData)(vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl2c1__DOT__start_of_data_reg) 
           & ((~ (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT____Vcellinp__genblk1__BRA__4__KET____DOT__lane__lane_reset_i)) 
              & (IData)(vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl2c1__DOT__start_of_data_reg_ne)));
}

VL_INLINE_OPT void rm_tb_top_routerlinkedlist_Top_ModuleC1___nba_comb__TOP__rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__4__KET____DOT__lane__DOT__I0c1__1(rm_tb_top_routerlinkedlist_Top_ModuleC1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    rm_tb_top_routerlinkedlist__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            rm_tb_top_routerlinkedlist_Top_ModuleC1___nba_comb__TOP__rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__4__KET____DOT__lane__DOT__I0c1__1\n"); );
    // Body
    vlSelf->automata_stage0c1__DOT__automata_ltl0c1__DOT____Vcellinp__ltl0c1_ste_5__income_edges 
        = ((((IData)(vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl0c1__DOT__ltl0c1_ste_3__DOT__internal_reg) 
             & ((8U <= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__4__KET____DOT__lane__DOT__c1_i)) 
                & (0xbU >= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__4__KET____DOT__lane__DOT__c1_i)))) 
            << 1U) | ((IData)(vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl0c1__DOT__ltl0c1_ste_5__DOT__internal_reg) 
                      & (3U >= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__4__KET____DOT__lane__DOT__c1_i))));
    vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl1c1__DOT__lut_match_ltl1c1_1__DOT__match_internal 
        = ((1U >= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__4__KET____DOT__lane__DOT__c1_i)) 
           | ((8U <= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__4__KET____DOT__lane__DOT__c1_i)) 
              & (9U >= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__4__KET____DOT__lane__DOT__c1_i))));
    vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl2c1__DOT__lut_match_ltl2c1_1__DOT__match_internal 
        = ((0U >= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__4__KET____DOT__lane__DOT__c1_i)) 
           | (((2U <= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__4__KET____DOT__lane__DOT__c1_i)) 
               & (2U >= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__4__KET____DOT__lane__DOT__c1_i))) 
              | (((4U <= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__4__KET____DOT__lane__DOT__c1_i)) 
                  & (4U >= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__4__KET____DOT__lane__DOT__c1_i))) 
                 | ((6U <= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__4__KET____DOT__lane__DOT__c1_i)) 
                    & (6U >= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__4__KET____DOT__lane__DOT__c1_i))))));
    vlSelf->__PVT__ltl1c1_w_out_9 = ((IData)(vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl1c1__DOT__ltl1c1_ste_8__DOT__internal_reg) 
                                     & (((2U <= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__4__KET____DOT__lane__DOT__c1_i)) 
                                         & (7U >= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__4__KET____DOT__lane__DOT__c1_i))) 
                                        | (0xaU <= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__4__KET____DOT__lane__DOT__c1_i))));
    vlSelf->__PVT__ltl2c1_w_out_3 = ((IData)(vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl2c1__DOT__ltl2c1_ste_3__DOT__internal_reg) 
                                     & (8U <= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__4__KET____DOT__lane__DOT__c1_i)));
    vlSelf->__PVT__ltl0c1_w_out_7 = ((IData)(vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl0c1__DOT__ltl0c1_ste_5__DOT__internal_reg) 
                                     & (8U <= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__4__KET____DOT__lane__DOT__c1_i)));
    vlSelf->__PVT__ltl0c1_w_out_9 = ((IData)(vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl0c1__DOT__ltl0c1_ste_8__DOT__internal_reg) 
                                     & (4U <= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__4__KET____DOT__lane__DOT__c1_i)));
    vlSelf->__VdfgTmp_hb5b42c0f__0 = ((2U <= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__4__KET____DOT__lane__DOT__c1_i)) 
                                      & (3U >= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__4__KET____DOT__lane__DOT__c1_i)));
    vlSelf->__VdfgTmp_h2aa42c51__0 = ((0xaU <= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__4__KET____DOT__lane__DOT__c1_i)) 
                                      & (0xbU >= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__4__KET____DOT__lane__DOT__c1_i)));
    vlSelf->__VdfgTmp_h8f083f76__0 = ((7U <= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__4__KET____DOT__lane__DOT__c1_i)) 
                                      & (7U >= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__4__KET____DOT__lane__DOT__c1_i)));
    vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl0c1__DOT__lut_match_ltl0c1_6__DOT__match_internal 
        = ((4U <= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__4__KET____DOT__lane__DOT__c1_i)) 
           & (7U >= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__4__KET____DOT__lane__DOT__c1_i)));
    vlSelf->__VdfgTmp_hb30bd723__0 = ((1U <= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__4__KET____DOT__lane__DOT__c1_i)) 
                                      & (1U >= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__4__KET____DOT__lane__DOT__c1_i)));
    vlSelf->__VdfgTmp_he9b10395__0 = ((3U <= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__4__KET____DOT__lane__DOT__c1_i)) 
                                      & (3U >= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__4__KET____DOT__lane__DOT__c1_i)));
    vlSelf->__VdfgTmp_hd3ae48ab__0 = ((5U <= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__4__KET____DOT__lane__DOT__c1_i)) 
                                      & (5U >= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__4__KET____DOT__lane__DOT__c1_i)));
    vlSelf->automata_stage0c1__DOT__automata_ltl1c1__DOT____Vcellinp__ltl1c1_ste_5__income_edges 
        = ((((IData)(vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl1c1__DOT__ltl1c1_ste_3__DOT__internal_reg) 
             & (((4U <= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__4__KET____DOT__lane__DOT__c1_i)) 
                 & (5U >= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__4__KET____DOT__lane__DOT__c1_i))) 
                | ((0xcU <= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__4__KET____DOT__lane__DOT__c1_i)) 
                   & (0xdU >= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__4__KET____DOT__lane__DOT__c1_i))))) 
            << 1U) | ((IData)(vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl1c1__DOT__ltl1c1_ste_5__DOT__internal_reg) 
                      & (IData)(vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl1c1__DOT__lut_match_ltl1c1_1__DOT__match_internal)));
    vlSelf->automata_stage0c1__DOT__automata_ltl2c1__DOT____Vcellinp__ltl2c1_ste_8__income_edges 
        = ((((IData)(vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl2c1__DOT__ltl2c1_ste_8__DOT__internal_reg) 
             & (IData)(vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl2c1__DOT__lut_match_ltl2c1_1__DOT__match_internal)) 
            << 1U) | ((IData)(vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl2c1__DOT__ltl2c1_ste_4__DOT__internal_reg) 
                      & (((8U <= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__4__KET____DOT__lane__DOT__c1_i)) 
                          & (8U >= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__4__KET____DOT__lane__DOT__c1_i))) 
                         | (((0xaU <= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__4__KET____DOT__lane__DOT__c1_i)) 
                             & (0xaU >= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__4__KET____DOT__lane__DOT__c1_i))) 
                            | (((0xcU <= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__4__KET____DOT__lane__DOT__c1_i)) 
                                & (0xcU >= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__4__KET____DOT__lane__DOT__c1_i))) 
                               | ((0xeU <= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__4__KET____DOT__lane__DOT__c1_i)) 
                                  & (0xeU >= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__4__KET____DOT__lane__DOT__c1_i))))))));
    vlSelf->automata_stage0c1__DOT__automata_ltl1c1__DOT____Vcellinp__ltl1c1_ste_8__income_edges 
        = ((((IData)(vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl1c1__DOT__ltl1c1_ste_8__DOT__internal_reg) 
             & (IData)(vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl1c1__DOT__lut_match_ltl1c1_1__DOT__match_internal)) 
            << 1U) | ((IData)(vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl1c1__DOT__ltl1c1_ste_5__DOT__internal_reg) 
                      & ((IData)(vlSelf->__VdfgTmp_hb5b42c0f__0) 
                         | (IData)(vlSelf->__VdfgTmp_h2aa42c51__0))));
    vlSelf->__PVT__ltl1c1_w_out_2 = ((IData)(vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl1c1__DOT__ltl1c1_ste_2__DOT__internal_reg) 
                                     & ((IData)(vlSelf->__VdfgTmp_hb5b42c0f__0) 
                                        | (((6U <= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__4__KET____DOT__lane__DOT__c1_i)) 
                                            & (7U >= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__4__KET____DOT__lane__DOT__c1_i))) 
                                           | ((IData)(vlSelf->__VdfgTmp_h2aa42c51__0) 
                                              | (0xeU 
                                                 <= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__4__KET____DOT__lane__DOT__c1_i))))));
    vlSelf->automata_stage0c1__DOT__automata_ltl0c1__DOT____Vcellinp__ltl0c1_ste_8__income_edges 
        = ((((IData)(vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl0c1__DOT__ltl0c1_ste_8__DOT__internal_reg) 
             & (3U >= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__4__KET____DOT__lane__DOT__c1_i))) 
            << 1U) | ((IData)(vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl0c1__DOT__ltl0c1_ste_5__DOT__internal_reg) 
                      & (IData)(vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl0c1__DOT__lut_match_ltl0c1_6__DOT__match_internal)));
    vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl0c1__DOT__lut_match_ltl0c1_2__DOT__match_internal 
        = ((IData)(vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl0c1__DOT__lut_match_ltl0c1_6__DOT__match_internal) 
           | (0xcU <= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__4__KET____DOT__lane__DOT__c1_i)));
    vlSelf->automata_stage0c1__DOT__automata_ltl2c1__DOT____Vcellinp__ltl2c1_ste_4__income_edges 
        = ((((IData)(vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl2c1__DOT__ltl2c1_ste_2__DOT__internal_reg) 
             & ((IData)(vlSelf->__VdfgTmp_hb30bd723__0) 
                | ((IData)(vlSelf->__VdfgTmp_he9b10395__0) 
                   | ((IData)(vlSelf->__VdfgTmp_hd3ae48ab__0) 
                      | (IData)(vlSelf->__VdfgTmp_h8f083f76__0))))) 
            << 1U) | ((IData)(vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl2c1__DOT__ltl2c1_ste_4__DOT__internal_reg) 
                      & (IData)(vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl2c1__DOT__lut_match_ltl2c1_1__DOT__match_internal)));
    vlSelf->__PVT__ltl2c1_w_out_9 = ((IData)(vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl2c1__DOT__ltl2c1_ste_8__DOT__internal_reg) 
                                     & ((IData)(vlSelf->__VdfgTmp_hb30bd723__0) 
                                        | ((IData)(vlSelf->__VdfgTmp_he9b10395__0) 
                                           | ((IData)(vlSelf->__VdfgTmp_hd3ae48ab__0) 
                                              | (7U 
                                                 <= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__4__KET____DOT__lane__DOT__c1_i))))));
    vlSelf->__PVT__ltl2c1_w_out_5 = ((IData)(vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl2c1__DOT__ltl2c1_ste_4__DOT__internal_reg) 
                                     & ((IData)(vlSelf->__VdfgTmp_hb30bd723__0) 
                                        | ((IData)(vlSelf->__VdfgTmp_he9b10395__0) 
                                           | ((IData)(vlSelf->__VdfgTmp_hd3ae48ab__0) 
                                              | ((IData)(vlSelf->__VdfgTmp_h8f083f76__0) 
                                                 | (((9U 
                                                      <= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__4__KET____DOT__lane__DOT__c1_i)) 
                                                     & (9U 
                                                        >= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__4__KET____DOT__lane__DOT__c1_i))) 
                                                    | (((0xbU 
                                                         <= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__4__KET____DOT__lane__DOT__c1_i)) 
                                                        & (0xbU 
                                                           >= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__4__KET____DOT__lane__DOT__c1_i))) 
                                                       | (((0xdU 
                                                            <= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__4__KET____DOT__lane__DOT__c1_i)) 
                                                           & (0xdU 
                                                              >= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__4__KET____DOT__lane__DOT__c1_i))) 
                                                          | (0xfU 
                                                             <= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__4__KET____DOT__lane__DOT__c1_i))))))))));
    vlSelf->__PVT__ltl1c1_w_out_7 = ((IData)(vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl1c1__DOT__ltl1c1_ste_5__DOT__internal_reg) 
                                     & (IData)(vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl0c1__DOT__lut_match_ltl0c1_2__DOT__match_internal));
    vlSelf->__PVT__ltl0c1_w_out_2 = ((IData)(vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl0c1__DOT__ltl0c1_ste_2__DOT__internal_reg) 
                                     & (IData)(vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl0c1__DOT__lut_match_ltl0c1_2__DOT__match_internal));
    vlSelf->automata_stage0c1__DOT__automata_ltl2c1__DOT____Vcellinp__ltl2c1_ste_7__income_edges 
        = (((IData)(vlSelf->__PVT__ltl2c1_w_out_9) 
            << 3U) | (((IData)(vlSelf->__PVT__ltl2c1_w_out_3) 
                       << 2U) | (((IData)(vlSelf->__PVT__ltl2c1_w_out_5) 
                                  << 1U) | (IData)(vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl2c1__DOT__ltl2c1_ste_7__DOT__internal_reg))));
    vlSelf->automata_stage0c1__DOT__automata_ltl1c1__DOT____Vcellinp__ltl1c1_ste_4__income_edges 
        = (((IData)(vlSelf->__PVT__ltl1c1_w_out_9) 
            << 3U) | (((IData)(vlSelf->__PVT__ltl1c1_w_out_2) 
                       << 2U) | (((IData)(vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl1c1__DOT__ltl1c1_ste_4__DOT__internal_reg) 
                                  << 1U) | (IData)(vlSelf->__PVT__ltl1c1_w_out_7))));
    vlSelf->automata_stage0c1__DOT__automata_ltl0c1__DOT____Vcellinp__ltl0c1_ste_4__income_edges 
        = (((IData)(vlSelf->__PVT__ltl0c1_w_out_9) 
            << 3U) | (((IData)(vlSelf->__PVT__ltl0c1_w_out_2) 
                       << 2U) | (((IData)(vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl0c1__DOT__ltl0c1_ste_4__DOT__internal_reg) 
                                  << 1U) | (IData)(vlSelf->__PVT__ltl0c1_w_out_7))));
}

VL_INLINE_OPT void rm_tb_top_routerlinkedlist_Top_ModuleC1___nba_comb__TOP__rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__4__KET____DOT__lane__DOT__I0c1__2(rm_tb_top_routerlinkedlist_Top_ModuleC1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    rm_tb_top_routerlinkedlist__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            rm_tb_top_routerlinkedlist_Top_ModuleC1___nba_comb__TOP__rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__4__KET____DOT__lane__DOT__I0c1__2\n"); );
    // Body
    vlSelf->automata_stage0c1__DOT__automata_ltl0c1__DOT____Vcellinp__ltl0c1_ste_1__income_edges 
        = (((IData)(vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl2c1__DOT__start_of_data) 
            << 1U) | ((IData)(vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl0c1__DOT__ltl0c1_ste_1__DOT__internal_reg) 
                      & (3U >= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__4__KET____DOT__lane__DOT__c1_i))));
    vlSelf->automata_stage0c1__DOT__automata_ltl1c1__DOT____Vcellinp__ltl1c1_ste_1__income_edges 
        = (((IData)(vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl2c1__DOT__start_of_data) 
            << 1U) | ((IData)(vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl1c1__DOT__ltl1c1_ste_1__DOT__internal_reg) 
                      & (IData)(vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl1c1__DOT__lut_match_ltl1c1_1__DOT__match_internal)));
    vlSelf->automata_stage0c1__DOT__automata_ltl2c1__DOT____Vcellinp__ltl2c1_ste_1__income_edges 
        = (((IData)(vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl2c1__DOT__start_of_data) 
            << 1U) | ((IData)(vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl2c1__DOT__ltl2c1_ste_1__DOT__internal_reg) 
                      & (IData)(vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl2c1__DOT__lut_match_ltl2c1_1__DOT__match_internal)));
}

VL_INLINE_OPT void rm_tb_top_routerlinkedlist_Top_ModuleC1___nba_sequent__TOP__rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__4__KET____DOT__lane__DOT__I1c1__0(rm_tb_top_routerlinkedlist_Top_ModuleC1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    rm_tb_top_routerlinkedlist__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            rm_tb_top_routerlinkedlist_Top_ModuleC1___nba_sequent__TOP__rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__4__KET____DOT__lane__DOT__I1c1__0\n"); );
    // Body
    if (vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT____Vcellinp__genblk1__BRA__4__KET____DOT__lane__lane_reset_i) {
        vlSelf->__PVT__automata_stage0c1__DOT__out_reset = 1U;
        vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl2c1__DOT__start_of_data_reg = 1U;
        vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl0c1__DOT__ltl0c1_ste_3__DOT__internal_reg = 1U;
        vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl0c1__DOT__ltl0c1_ste_1__DOT__internal_reg = 1U;
        vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl2c1__DOT__ltl2c1_ste_1__DOT__internal_reg = 1U;
        vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl1c1__DOT__ltl1c1_ste_1__DOT__internal_reg = 1U;
        vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl1c1__DOT__ltl1c1_ste_3__DOT__internal_reg = 1U;
        vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl2c1__DOT__ltl2c1_ste_2__DOT__internal_reg = 1U;
        vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl0c1__DOT__ltl0c1_ste_2__DOT__internal_reg = 1U;
        vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl2c1__DOT__ltl2c1_ste_3__DOT__internal_reg = 1U;
        vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl1c1__DOT__ltl1c1_ste_2__DOT__internal_reg = 1U;
    } else {
        vlSelf->__PVT__automata_stage0c1__DOT__out_reset = 0U;
        vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl2c1__DOT__start_of_data_reg = 0U;
        vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl0c1__DOT__ltl0c1_ste_3__DOT__internal_reg 
            = (0U != (IData)(vlSelf->automata_stage0c1__DOT__automata_ltl0c1__DOT____Vcellinp__ltl0c1_ste_1__income_edges));
        vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl0c1__DOT__ltl0c1_ste_1__DOT__internal_reg 
            = (0U != (IData)(vlSelf->automata_stage0c1__DOT__automata_ltl0c1__DOT____Vcellinp__ltl0c1_ste_1__income_edges));
        vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl2c1__DOT__ltl2c1_ste_1__DOT__internal_reg 
            = (0U != (IData)(vlSelf->automata_stage0c1__DOT__automata_ltl2c1__DOT____Vcellinp__ltl2c1_ste_1__income_edges));
        vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl1c1__DOT__ltl1c1_ste_1__DOT__internal_reg 
            = (0U != (IData)(vlSelf->automata_stage0c1__DOT__automata_ltl1c1__DOT____Vcellinp__ltl1c1_ste_1__income_edges));
        vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl1c1__DOT__ltl1c1_ste_3__DOT__internal_reg 
            = (0U != (IData)(vlSelf->automata_stage0c1__DOT__automata_ltl1c1__DOT____Vcellinp__ltl1c1_ste_1__income_edges));
        vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl2c1__DOT__ltl2c1_ste_2__DOT__internal_reg 
            = (0U != (IData)(vlSelf->automata_stage0c1__DOT__automata_ltl2c1__DOT____Vcellinp__ltl2c1_ste_1__income_edges));
        vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl0c1__DOT__ltl0c1_ste_2__DOT__internal_reg 
            = (0U != (IData)(vlSelf->automata_stage0c1__DOT__automata_ltl0c1__DOT____Vcellinp__ltl0c1_ste_1__income_edges));
        vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl2c1__DOT__ltl2c1_ste_3__DOT__internal_reg 
            = (0U != (IData)(vlSelf->automata_stage0c1__DOT__automata_ltl2c1__DOT____Vcellinp__ltl2c1_ste_1__income_edges));
        vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl1c1__DOT__ltl1c1_ste_2__DOT__internal_reg 
            = (0U != (IData)(vlSelf->automata_stage0c1__DOT__automata_ltl1c1__DOT____Vcellinp__ltl1c1_ste_1__income_edges));
        if (vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl2c1__DOT__start_of_data) {
            vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl0c1__DOT__ltl0c1_ste_3__DOT__internal_reg = 1U;
            vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl0c1__DOT__ltl0c1_ste_1__DOT__internal_reg = 1U;
            vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl2c1__DOT__ltl2c1_ste_1__DOT__internal_reg = 1U;
            vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl1c1__DOT__ltl1c1_ste_1__DOT__internal_reg = 1U;
            vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl1c1__DOT__ltl1c1_ste_3__DOT__internal_reg = 1U;
            vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl2c1__DOT__ltl2c1_ste_2__DOT__internal_reg = 1U;
            vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl0c1__DOT__ltl0c1_ste_2__DOT__internal_reg = 1U;
            vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl2c1__DOT__ltl2c1_ste_3__DOT__internal_reg = 1U;
            vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl1c1__DOT__ltl1c1_ste_2__DOT__internal_reg = 1U;
        }
    }
    vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl0c1__DOT__ltl0c1_ste_4__DOT__internal_reg 
        = ((~ (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT____Vcellinp__genblk1__BRA__4__KET____DOT__lane__lane_reset_i)) 
           & (0U != (IData)(vlSelf->automata_stage0c1__DOT__automata_ltl0c1__DOT____Vcellinp__ltl0c1_ste_4__income_edges)));
    vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl2c1__DOT__ltl2c1_ste_7__DOT__internal_reg 
        = ((~ (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT____Vcellinp__genblk1__BRA__4__KET____DOT__lane__lane_reset_i)) 
           & (0U != (IData)(vlSelf->automata_stage0c1__DOT__automata_ltl2c1__DOT____Vcellinp__ltl2c1_ste_7__income_edges)));
    vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl1c1__DOT__ltl1c1_ste_4__DOT__internal_reg 
        = ((~ (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT____Vcellinp__genblk1__BRA__4__KET____DOT__lane__lane_reset_i)) 
           & (0U != (IData)(vlSelf->automata_stage0c1__DOT__automata_ltl1c1__DOT____Vcellinp__ltl1c1_ste_4__income_edges)));
    vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl0c1__DOT__ltl0c1_ste_8__DOT__internal_reg 
        = ((~ (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT____Vcellinp__genblk1__BRA__4__KET____DOT__lane__lane_reset_i)) 
           & (0U != (IData)(vlSelf->automata_stage0c1__DOT__automata_ltl0c1__DOT____Vcellinp__ltl0c1_ste_8__income_edges)));
    vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl1c1__DOT__ltl1c1_ste_8__DOT__internal_reg 
        = ((~ (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT____Vcellinp__genblk1__BRA__4__KET____DOT__lane__lane_reset_i)) 
           & (0U != (IData)(vlSelf->automata_stage0c1__DOT__automata_ltl1c1__DOT____Vcellinp__ltl1c1_ste_8__income_edges)));
    vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl2c1__DOT__ltl2c1_ste_8__DOT__internal_reg 
        = ((~ (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT____Vcellinp__genblk1__BRA__4__KET____DOT__lane__lane_reset_i)) 
           & (0U != (IData)(vlSelf->automata_stage0c1__DOT__automata_ltl2c1__DOT____Vcellinp__ltl2c1_ste_8__income_edges)));
    vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl0c1__DOT__ltl0c1_ste_5__DOT__internal_reg 
        = ((~ (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT____Vcellinp__genblk1__BRA__4__KET____DOT__lane__lane_reset_i)) 
           & (0U != (IData)(vlSelf->automata_stage0c1__DOT__automata_ltl0c1__DOT____Vcellinp__ltl0c1_ste_5__income_edges)));
    vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl1c1__DOT__ltl1c1_ste_5__DOT__internal_reg 
        = ((~ (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT____Vcellinp__genblk1__BRA__4__KET____DOT__lane__lane_reset_i)) 
           & (0U != (IData)(vlSelf->automata_stage0c1__DOT__automata_ltl1c1__DOT____Vcellinp__ltl1c1_ste_5__income_edges)));
    vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl2c1__DOT__ltl2c1_ste_4__DOT__internal_reg 
        = ((~ (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT____Vcellinp__genblk1__BRA__4__KET____DOT__lane__lane_reset_i)) 
           & (0U != (IData)(vlSelf->automata_stage0c1__DOT__automata_ltl2c1__DOT____Vcellinp__ltl2c1_ste_4__income_edges)));
    vlSelf->__PVT__automata_stage0c1__DOT__out_symbols 
        = vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__4__KET____DOT__lane__DOT__c3_i;
}

VL_INLINE_OPT void rm_tb_top_routerlinkedlist_Top_ModuleC1___nba_comb__TOP__rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__4__KET____DOT__lane__DOT__I1c1__1(rm_tb_top_routerlinkedlist_Top_ModuleC1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    rm_tb_top_routerlinkedlist__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            rm_tb_top_routerlinkedlist_Top_ModuleC1___nba_comb__TOP__rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__4__KET____DOT__lane__DOT__I1c1__1\n"); );
    // Body
    vlSelf->automata_stage0c1__DOT__automata_ltl0c1__DOT____Vcellinp__ltl0c1_ste_5__income_edges 
        = ((((IData)(vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl0c1__DOT__ltl0c1_ste_3__DOT__internal_reg) 
             & ((8U <= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__4__KET____DOT__lane__DOT__c3_i)) 
                & (0xbU >= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__4__KET____DOT__lane__DOT__c3_i)))) 
            << 1U) | ((IData)(vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl0c1__DOT__ltl0c1_ste_5__DOT__internal_reg) 
                      & (3U >= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__4__KET____DOT__lane__DOT__c3_i))));
    vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl1c1__DOT__lut_match_ltl1c1_1__DOT__match_internal 
        = ((1U >= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__4__KET____DOT__lane__DOT__c3_i)) 
           | ((8U <= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__4__KET____DOT__lane__DOT__c3_i)) 
              & (9U >= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__4__KET____DOT__lane__DOT__c3_i))));
    vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl2c1__DOT__lut_match_ltl2c1_1__DOT__match_internal 
        = ((0U >= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__4__KET____DOT__lane__DOT__c3_i)) 
           | (((2U <= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__4__KET____DOT__lane__DOT__c3_i)) 
               & (2U >= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__4__KET____DOT__lane__DOT__c3_i))) 
              | (((4U <= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__4__KET____DOT__lane__DOT__c3_i)) 
                  & (4U >= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__4__KET____DOT__lane__DOT__c3_i))) 
                 | ((6U <= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__4__KET____DOT__lane__DOT__c3_i)) 
                    & (6U >= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__4__KET____DOT__lane__DOT__c3_i))))));
    vlSelf->__PVT__ltl1c1_w_out_9 = ((IData)(vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl1c1__DOT__ltl1c1_ste_8__DOT__internal_reg) 
                                     & (((2U <= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__4__KET____DOT__lane__DOT__c3_i)) 
                                         & (7U >= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__4__KET____DOT__lane__DOT__c3_i))) 
                                        | (0xaU <= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__4__KET____DOT__lane__DOT__c3_i))));
    vlSelf->__PVT__ltl2c1_w_out_3 = ((IData)(vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl2c1__DOT__ltl2c1_ste_3__DOT__internal_reg) 
                                     & (8U <= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__4__KET____DOT__lane__DOT__c3_i)));
    vlSelf->__PVT__ltl0c1_w_out_7 = ((IData)(vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl0c1__DOT__ltl0c1_ste_5__DOT__internal_reg) 
                                     & (8U <= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__4__KET____DOT__lane__DOT__c3_i)));
    vlSelf->__PVT__ltl0c1_w_out_9 = ((IData)(vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl0c1__DOT__ltl0c1_ste_8__DOT__internal_reg) 
                                     & (4U <= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__4__KET____DOT__lane__DOT__c3_i)));
    vlSelf->__VdfgTmp_hb5b42c0f__0 = ((2U <= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__4__KET____DOT__lane__DOT__c3_i)) 
                                      & (3U >= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__4__KET____DOT__lane__DOT__c3_i)));
    vlSelf->__VdfgTmp_h2aa42c51__0 = ((0xaU <= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__4__KET____DOT__lane__DOT__c3_i)) 
                                      & (0xbU >= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__4__KET____DOT__lane__DOT__c3_i)));
    vlSelf->__VdfgTmp_h8f083f76__0 = ((7U <= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__4__KET____DOT__lane__DOT__c3_i)) 
                                      & (7U >= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__4__KET____DOT__lane__DOT__c3_i)));
    vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl0c1__DOT__lut_match_ltl0c1_6__DOT__match_internal 
        = ((4U <= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__4__KET____DOT__lane__DOT__c3_i)) 
           & (7U >= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__4__KET____DOT__lane__DOT__c3_i)));
    vlSelf->__VdfgTmp_hb30bd723__0 = ((1U <= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__4__KET____DOT__lane__DOT__c3_i)) 
                                      & (1U >= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__4__KET____DOT__lane__DOT__c3_i)));
    vlSelf->__VdfgTmp_he9b10395__0 = ((3U <= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__4__KET____DOT__lane__DOT__c3_i)) 
                                      & (3U >= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__4__KET____DOT__lane__DOT__c3_i)));
    vlSelf->__VdfgTmp_hd3ae48ab__0 = ((5U <= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__4__KET____DOT__lane__DOT__c3_i)) 
                                      & (5U >= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__4__KET____DOT__lane__DOT__c3_i)));
    vlSelf->automata_stage0c1__DOT__automata_ltl1c1__DOT____Vcellinp__ltl1c1_ste_5__income_edges 
        = ((((IData)(vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl1c1__DOT__ltl1c1_ste_3__DOT__internal_reg) 
             & (((4U <= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__4__KET____DOT__lane__DOT__c3_i)) 
                 & (5U >= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__4__KET____DOT__lane__DOT__c3_i))) 
                | ((0xcU <= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__4__KET____DOT__lane__DOT__c3_i)) 
                   & (0xdU >= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__4__KET____DOT__lane__DOT__c3_i))))) 
            << 1U) | ((IData)(vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl1c1__DOT__ltl1c1_ste_5__DOT__internal_reg) 
                      & (IData)(vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl1c1__DOT__lut_match_ltl1c1_1__DOT__match_internal)));
    vlSelf->automata_stage0c1__DOT__automata_ltl2c1__DOT____Vcellinp__ltl2c1_ste_8__income_edges 
        = ((((IData)(vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl2c1__DOT__ltl2c1_ste_8__DOT__internal_reg) 
             & (IData)(vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl2c1__DOT__lut_match_ltl2c1_1__DOT__match_internal)) 
            << 1U) | ((IData)(vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl2c1__DOT__ltl2c1_ste_4__DOT__internal_reg) 
                      & (((8U <= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__4__KET____DOT__lane__DOT__c3_i)) 
                          & (8U >= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__4__KET____DOT__lane__DOT__c3_i))) 
                         | (((0xaU <= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__4__KET____DOT__lane__DOT__c3_i)) 
                             & (0xaU >= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__4__KET____DOT__lane__DOT__c3_i))) 
                            | (((0xcU <= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__4__KET____DOT__lane__DOT__c3_i)) 
                                & (0xcU >= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__4__KET____DOT__lane__DOT__c3_i))) 
                               | ((0xeU <= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__4__KET____DOT__lane__DOT__c3_i)) 
                                  & (0xeU >= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__4__KET____DOT__lane__DOT__c3_i))))))));
    vlSelf->automata_stage0c1__DOT__automata_ltl1c1__DOT____Vcellinp__ltl1c1_ste_8__income_edges 
        = ((((IData)(vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl1c1__DOT__ltl1c1_ste_8__DOT__internal_reg) 
             & (IData)(vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl1c1__DOT__lut_match_ltl1c1_1__DOT__match_internal)) 
            << 1U) | ((IData)(vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl1c1__DOT__ltl1c1_ste_5__DOT__internal_reg) 
                      & ((IData)(vlSelf->__VdfgTmp_hb5b42c0f__0) 
                         | (IData)(vlSelf->__VdfgTmp_h2aa42c51__0))));
    vlSelf->__PVT__ltl1c1_w_out_2 = ((IData)(vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl1c1__DOT__ltl1c1_ste_2__DOT__internal_reg) 
                                     & ((IData)(vlSelf->__VdfgTmp_hb5b42c0f__0) 
                                        | (((6U <= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__4__KET____DOT__lane__DOT__c3_i)) 
                                            & (7U >= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__4__KET____DOT__lane__DOT__c3_i))) 
                                           | ((IData)(vlSelf->__VdfgTmp_h2aa42c51__0) 
                                              | (0xeU 
                                                 <= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__4__KET____DOT__lane__DOT__c3_i))))));
    vlSelf->automata_stage0c1__DOT__automata_ltl0c1__DOT____Vcellinp__ltl0c1_ste_8__income_edges 
        = ((((IData)(vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl0c1__DOT__ltl0c1_ste_8__DOT__internal_reg) 
             & (3U >= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__4__KET____DOT__lane__DOT__c3_i))) 
            << 1U) | ((IData)(vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl0c1__DOT__ltl0c1_ste_5__DOT__internal_reg) 
                      & (IData)(vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl0c1__DOT__lut_match_ltl0c1_6__DOT__match_internal)));
    vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl0c1__DOT__lut_match_ltl0c1_2__DOT__match_internal 
        = ((IData)(vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl0c1__DOT__lut_match_ltl0c1_6__DOT__match_internal) 
           | (0xcU <= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__4__KET____DOT__lane__DOT__c3_i)));
    vlSelf->automata_stage0c1__DOT__automata_ltl2c1__DOT____Vcellinp__ltl2c1_ste_4__income_edges 
        = ((((IData)(vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl2c1__DOT__ltl2c1_ste_2__DOT__internal_reg) 
             & ((IData)(vlSelf->__VdfgTmp_hb30bd723__0) 
                | ((IData)(vlSelf->__VdfgTmp_he9b10395__0) 
                   | ((IData)(vlSelf->__VdfgTmp_hd3ae48ab__0) 
                      | (IData)(vlSelf->__VdfgTmp_h8f083f76__0))))) 
            << 1U) | ((IData)(vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl2c1__DOT__ltl2c1_ste_4__DOT__internal_reg) 
                      & (IData)(vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl2c1__DOT__lut_match_ltl2c1_1__DOT__match_internal)));
    vlSelf->__PVT__ltl2c1_w_out_9 = ((IData)(vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl2c1__DOT__ltl2c1_ste_8__DOT__internal_reg) 
                                     & ((IData)(vlSelf->__VdfgTmp_hb30bd723__0) 
                                        | ((IData)(vlSelf->__VdfgTmp_he9b10395__0) 
                                           | ((IData)(vlSelf->__VdfgTmp_hd3ae48ab__0) 
                                              | (7U 
                                                 <= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__4__KET____DOT__lane__DOT__c3_i))))));
    vlSelf->__PVT__ltl2c1_w_out_5 = ((IData)(vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl2c1__DOT__ltl2c1_ste_4__DOT__internal_reg) 
                                     & ((IData)(vlSelf->__VdfgTmp_hb30bd723__0) 
                                        | ((IData)(vlSelf->__VdfgTmp_he9b10395__0) 
                                           | ((IData)(vlSelf->__VdfgTmp_hd3ae48ab__0) 
                                              | ((IData)(vlSelf->__VdfgTmp_h8f083f76__0) 
                                                 | (((9U 
                                                      <= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__4__KET____DOT__lane__DOT__c3_i)) 
                                                     & (9U 
                                                        >= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__4__KET____DOT__lane__DOT__c3_i))) 
                                                    | (((0xbU 
                                                         <= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__4__KET____DOT__lane__DOT__c3_i)) 
                                                        & (0xbU 
                                                           >= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__4__KET____DOT__lane__DOT__c3_i))) 
                                                       | (((0xdU 
                                                            <= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__4__KET____DOT__lane__DOT__c3_i)) 
                                                           & (0xdU 
                                                              >= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__4__KET____DOT__lane__DOT__c3_i))) 
                                                          | (0xfU 
                                                             <= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__4__KET____DOT__lane__DOT__c3_i))))))))));
    vlSelf->__PVT__ltl1c1_w_out_7 = ((IData)(vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl1c1__DOT__ltl1c1_ste_5__DOT__internal_reg) 
                                     & (IData)(vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl0c1__DOT__lut_match_ltl0c1_2__DOT__match_internal));
    vlSelf->__PVT__ltl0c1_w_out_2 = ((IData)(vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl0c1__DOT__ltl0c1_ste_2__DOT__internal_reg) 
                                     & (IData)(vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl0c1__DOT__lut_match_ltl0c1_2__DOT__match_internal));
    vlSelf->automata_stage0c1__DOT__automata_ltl2c1__DOT____Vcellinp__ltl2c1_ste_7__income_edges 
        = (((IData)(vlSelf->__PVT__ltl2c1_w_out_9) 
            << 3U) | (((IData)(vlSelf->__PVT__ltl2c1_w_out_3) 
                       << 2U) | (((IData)(vlSelf->__PVT__ltl2c1_w_out_5) 
                                  << 1U) | (IData)(vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl2c1__DOT__ltl2c1_ste_7__DOT__internal_reg))));
    vlSelf->automata_stage0c1__DOT__automata_ltl1c1__DOT____Vcellinp__ltl1c1_ste_4__income_edges 
        = (((IData)(vlSelf->__PVT__ltl1c1_w_out_9) 
            << 3U) | (((IData)(vlSelf->__PVT__ltl1c1_w_out_2) 
                       << 2U) | (((IData)(vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl1c1__DOT__ltl1c1_ste_4__DOT__internal_reg) 
                                  << 1U) | (IData)(vlSelf->__PVT__ltl1c1_w_out_7))));
    vlSelf->automata_stage0c1__DOT__automata_ltl0c1__DOT____Vcellinp__ltl0c1_ste_4__income_edges 
        = (((IData)(vlSelf->__PVT__ltl0c1_w_out_9) 
            << 3U) | (((IData)(vlSelf->__PVT__ltl0c1_w_out_2) 
                       << 2U) | (((IData)(vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl0c1__DOT__ltl0c1_ste_4__DOT__internal_reg) 
                                  << 1U) | (IData)(vlSelf->__PVT__ltl0c1_w_out_7))));
}

VL_INLINE_OPT void rm_tb_top_routerlinkedlist_Top_ModuleC1___nba_comb__TOP__rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__4__KET____DOT__lane__DOT__I1c1__2(rm_tb_top_routerlinkedlist_Top_ModuleC1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    rm_tb_top_routerlinkedlist__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            rm_tb_top_routerlinkedlist_Top_ModuleC1___nba_comb__TOP__rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__4__KET____DOT__lane__DOT__I1c1__2\n"); );
    // Body
    vlSelf->automata_stage0c1__DOT__automata_ltl0c1__DOT____Vcellinp__ltl0c1_ste_1__income_edges 
        = (((IData)(vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl2c1__DOT__start_of_data) 
            << 1U) | ((IData)(vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl0c1__DOT__ltl0c1_ste_1__DOT__internal_reg) 
                      & (3U >= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__4__KET____DOT__lane__DOT__c3_i))));
    vlSelf->automata_stage0c1__DOT__automata_ltl1c1__DOT____Vcellinp__ltl1c1_ste_1__income_edges 
        = (((IData)(vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl2c1__DOT__start_of_data) 
            << 1U) | ((IData)(vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl1c1__DOT__ltl1c1_ste_1__DOT__internal_reg) 
                      & (IData)(vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl1c1__DOT__lut_match_ltl1c1_1__DOT__match_internal)));
    vlSelf->automata_stage0c1__DOT__automata_ltl2c1__DOT____Vcellinp__ltl2c1_ste_1__income_edges 
        = (((IData)(vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl2c1__DOT__start_of_data) 
            << 1U) | ((IData)(vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl2c1__DOT__ltl2c1_ste_1__DOT__internal_reg) 
                      & (IData)(vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl2c1__DOT__lut_match_ltl2c1_1__DOT__match_internal)));
}

VL_INLINE_OPT void rm_tb_top_routerlinkedlist_Top_ModuleC1___nba_sequent__TOP__rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__5__KET____DOT__lane__DOT__I0c1__0(rm_tb_top_routerlinkedlist_Top_ModuleC1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    rm_tb_top_routerlinkedlist__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            rm_tb_top_routerlinkedlist_Top_ModuleC1___nba_sequent__TOP__rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__5__KET____DOT__lane__DOT__I0c1__0\n"); );
    // Body
    if (vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__lane__lane_reset_i) {
        vlSelf->__PVT__automata_stage0c1__DOT__out_reset = 1U;
        vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl2c1__DOT__start_of_data_reg = 1U;
        vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl0c1__DOT__ltl0c1_ste_3__DOT__internal_reg = 1U;
        vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl0c1__DOT__ltl0c1_ste_1__DOT__internal_reg = 1U;
        vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl2c1__DOT__ltl2c1_ste_1__DOT__internal_reg = 1U;
        vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl1c1__DOT__ltl1c1_ste_1__DOT__internal_reg = 1U;
        vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl1c1__DOT__ltl1c1_ste_3__DOT__internal_reg = 1U;
        vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl2c1__DOT__ltl2c1_ste_2__DOT__internal_reg = 1U;
        vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl0c1__DOT__ltl0c1_ste_2__DOT__internal_reg = 1U;
        vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl2c1__DOT__ltl2c1_ste_3__DOT__internal_reg = 1U;
        vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl1c1__DOT__ltl1c1_ste_2__DOT__internal_reg = 1U;
    } else {
        vlSelf->__PVT__automata_stage0c1__DOT__out_reset = 0U;
        vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl2c1__DOT__start_of_data_reg = 0U;
        vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl0c1__DOT__ltl0c1_ste_3__DOT__internal_reg 
            = (0U != (IData)(vlSelf->automata_stage0c1__DOT__automata_ltl0c1__DOT____Vcellinp__ltl0c1_ste_1__income_edges));
        vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl0c1__DOT__ltl0c1_ste_1__DOT__internal_reg 
            = (0U != (IData)(vlSelf->automata_stage0c1__DOT__automata_ltl0c1__DOT____Vcellinp__ltl0c1_ste_1__income_edges));
        vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl2c1__DOT__ltl2c1_ste_1__DOT__internal_reg 
            = (0U != (IData)(vlSelf->automata_stage0c1__DOT__automata_ltl2c1__DOT____Vcellinp__ltl2c1_ste_1__income_edges));
        vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl1c1__DOT__ltl1c1_ste_1__DOT__internal_reg 
            = (0U != (IData)(vlSelf->automata_stage0c1__DOT__automata_ltl1c1__DOT____Vcellinp__ltl1c1_ste_1__income_edges));
        vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl1c1__DOT__ltl1c1_ste_3__DOT__internal_reg 
            = (0U != (IData)(vlSelf->automata_stage0c1__DOT__automata_ltl1c1__DOT____Vcellinp__ltl1c1_ste_1__income_edges));
        vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl2c1__DOT__ltl2c1_ste_2__DOT__internal_reg 
            = (0U != (IData)(vlSelf->automata_stage0c1__DOT__automata_ltl2c1__DOT____Vcellinp__ltl2c1_ste_1__income_edges));
        vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl0c1__DOT__ltl0c1_ste_2__DOT__internal_reg 
            = (0U != (IData)(vlSelf->automata_stage0c1__DOT__automata_ltl0c1__DOT____Vcellinp__ltl0c1_ste_1__income_edges));
        vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl2c1__DOT__ltl2c1_ste_3__DOT__internal_reg 
            = (0U != (IData)(vlSelf->automata_stage0c1__DOT__automata_ltl2c1__DOT____Vcellinp__ltl2c1_ste_1__income_edges));
        vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl1c1__DOT__ltl1c1_ste_2__DOT__internal_reg 
            = (0U != (IData)(vlSelf->automata_stage0c1__DOT__automata_ltl1c1__DOT____Vcellinp__ltl1c1_ste_1__income_edges));
        if (vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl2c1__DOT__start_of_data) {
            vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl0c1__DOT__ltl0c1_ste_3__DOT__internal_reg = 1U;
            vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl0c1__DOT__ltl0c1_ste_1__DOT__internal_reg = 1U;
            vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl2c1__DOT__ltl2c1_ste_1__DOT__internal_reg = 1U;
            vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl1c1__DOT__ltl1c1_ste_1__DOT__internal_reg = 1U;
            vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl1c1__DOT__ltl1c1_ste_3__DOT__internal_reg = 1U;
            vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl2c1__DOT__ltl2c1_ste_2__DOT__internal_reg = 1U;
            vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl0c1__DOT__ltl0c1_ste_2__DOT__internal_reg = 1U;
            vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl2c1__DOT__ltl2c1_ste_3__DOT__internal_reg = 1U;
            vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl1c1__DOT__ltl1c1_ste_2__DOT__internal_reg = 1U;
        }
    }
    vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl0c1__DOT__ltl0c1_ste_4__DOT__internal_reg 
        = ((~ (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__lane__lane_reset_i)) 
           & (0U != (IData)(vlSelf->automata_stage0c1__DOT__automata_ltl0c1__DOT____Vcellinp__ltl0c1_ste_4__income_edges)));
    vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl2c1__DOT__ltl2c1_ste_7__DOT__internal_reg 
        = ((~ (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__lane__lane_reset_i)) 
           & (0U != (IData)(vlSelf->automata_stage0c1__DOT__automata_ltl2c1__DOT____Vcellinp__ltl2c1_ste_7__income_edges)));
    vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl1c1__DOT__ltl1c1_ste_4__DOT__internal_reg 
        = ((~ (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__lane__lane_reset_i)) 
           & (0U != (IData)(vlSelf->automata_stage0c1__DOT__automata_ltl1c1__DOT____Vcellinp__ltl1c1_ste_4__income_edges)));
    vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl0c1__DOT__ltl0c1_ste_8__DOT__internal_reg 
        = ((~ (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__lane__lane_reset_i)) 
           & (0U != (IData)(vlSelf->automata_stage0c1__DOT__automata_ltl0c1__DOT____Vcellinp__ltl0c1_ste_8__income_edges)));
    vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl1c1__DOT__ltl1c1_ste_8__DOT__internal_reg 
        = ((~ (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__lane__lane_reset_i)) 
           & (0U != (IData)(vlSelf->automata_stage0c1__DOT__automata_ltl1c1__DOT____Vcellinp__ltl1c1_ste_8__income_edges)));
    vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl2c1__DOT__ltl2c1_ste_8__DOT__internal_reg 
        = ((~ (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__lane__lane_reset_i)) 
           & (0U != (IData)(vlSelf->automata_stage0c1__DOT__automata_ltl2c1__DOT____Vcellinp__ltl2c1_ste_8__income_edges)));
    vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl0c1__DOT__ltl0c1_ste_5__DOT__internal_reg 
        = ((~ (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__lane__lane_reset_i)) 
           & (0U != (IData)(vlSelf->automata_stage0c1__DOT__automata_ltl0c1__DOT____Vcellinp__ltl0c1_ste_5__income_edges)));
    vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl1c1__DOT__ltl1c1_ste_5__DOT__internal_reg 
        = ((~ (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__lane__lane_reset_i)) 
           & (0U != (IData)(vlSelf->automata_stage0c1__DOT__automata_ltl1c1__DOT____Vcellinp__ltl1c1_ste_5__income_edges)));
    vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl2c1__DOT__ltl2c1_ste_4__DOT__internal_reg 
        = ((~ (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__lane__lane_reset_i)) 
           & (0U != (IData)(vlSelf->automata_stage0c1__DOT__automata_ltl2c1__DOT____Vcellinp__ltl2c1_ste_4__income_edges)));
    vlSelf->__PVT__automata_stage0c1__DOT__out_symbols 
        = vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__5__KET____DOT__lane__DOT__c1_i;
}

VL_INLINE_OPT void rm_tb_top_routerlinkedlist_Top_ModuleC1___nba_sequent__TOP__rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__5__KET____DOT__lane__DOT__I0c1__1(rm_tb_top_routerlinkedlist_Top_ModuleC1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    rm_tb_top_routerlinkedlist__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            rm_tb_top_routerlinkedlist_Top_ModuleC1___nba_sequent__TOP__rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__5__KET____DOT__lane__DOT__I0c1__1\n"); );
    // Body
    vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl2c1__DOT__start_of_data_reg_ne 
        = vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__lane__lane_reset_i;
}

VL_INLINE_OPT void rm_tb_top_routerlinkedlist_Top_ModuleC1___nba_comb__TOP__rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__5__KET____DOT__lane__DOT__I0c1__0(rm_tb_top_routerlinkedlist_Top_ModuleC1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    rm_tb_top_routerlinkedlist__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            rm_tb_top_routerlinkedlist_Top_ModuleC1___nba_comb__TOP__rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__5__KET____DOT__lane__DOT__I0c1__0\n"); );
    // Body
    vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl2c1__DOT__start_of_data 
        = ((IData)(vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl2c1__DOT__start_of_data_reg) 
           & ((~ (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__lane__lane_reset_i)) 
              & (IData)(vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl2c1__DOT__start_of_data_reg_ne)));
}

VL_INLINE_OPT void rm_tb_top_routerlinkedlist_Top_ModuleC1___nba_comb__TOP__rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__5__KET____DOT__lane__DOT__I0c1__1(rm_tb_top_routerlinkedlist_Top_ModuleC1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    rm_tb_top_routerlinkedlist__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            rm_tb_top_routerlinkedlist_Top_ModuleC1___nba_comb__TOP__rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__5__KET____DOT__lane__DOT__I0c1__1\n"); );
    // Body
    vlSelf->automata_stage0c1__DOT__automata_ltl0c1__DOT____Vcellinp__ltl0c1_ste_5__income_edges 
        = ((((IData)(vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl0c1__DOT__ltl0c1_ste_3__DOT__internal_reg) 
             & ((8U <= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__5__KET____DOT__lane__DOT__c1_i)) 
                & (0xbU >= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__5__KET____DOT__lane__DOT__c1_i)))) 
            << 1U) | ((IData)(vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl0c1__DOT__ltl0c1_ste_5__DOT__internal_reg) 
                      & (3U >= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__5__KET____DOT__lane__DOT__c1_i))));
    vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl1c1__DOT__lut_match_ltl1c1_1__DOT__match_internal 
        = ((1U >= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__5__KET____DOT__lane__DOT__c1_i)) 
           | ((8U <= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__5__KET____DOT__lane__DOT__c1_i)) 
              & (9U >= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__5__KET____DOT__lane__DOT__c1_i))));
    vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl2c1__DOT__lut_match_ltl2c1_1__DOT__match_internal 
        = ((0U >= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__5__KET____DOT__lane__DOT__c1_i)) 
           | (((2U <= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__5__KET____DOT__lane__DOT__c1_i)) 
               & (2U >= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__5__KET____DOT__lane__DOT__c1_i))) 
              | (((4U <= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__5__KET____DOT__lane__DOT__c1_i)) 
                  & (4U >= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__5__KET____DOT__lane__DOT__c1_i))) 
                 | ((6U <= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__5__KET____DOT__lane__DOT__c1_i)) 
                    & (6U >= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__5__KET____DOT__lane__DOT__c1_i))))));
    vlSelf->__PVT__ltl1c1_w_out_9 = ((IData)(vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl1c1__DOT__ltl1c1_ste_8__DOT__internal_reg) 
                                     & (((2U <= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__5__KET____DOT__lane__DOT__c1_i)) 
                                         & (7U >= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__5__KET____DOT__lane__DOT__c1_i))) 
                                        | (0xaU <= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__5__KET____DOT__lane__DOT__c1_i))));
    vlSelf->__PVT__ltl2c1_w_out_3 = ((IData)(vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl2c1__DOT__ltl2c1_ste_3__DOT__internal_reg) 
                                     & (8U <= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__5__KET____DOT__lane__DOT__c1_i)));
    vlSelf->__PVT__ltl0c1_w_out_7 = ((IData)(vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl0c1__DOT__ltl0c1_ste_5__DOT__internal_reg) 
                                     & (8U <= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__5__KET____DOT__lane__DOT__c1_i)));
    vlSelf->__PVT__ltl0c1_w_out_9 = ((IData)(vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl0c1__DOT__ltl0c1_ste_8__DOT__internal_reg) 
                                     & (4U <= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__5__KET____DOT__lane__DOT__c1_i)));
    vlSelf->__VdfgTmp_hb5b42c0f__0 = ((2U <= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__5__KET____DOT__lane__DOT__c1_i)) 
                                      & (3U >= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__5__KET____DOT__lane__DOT__c1_i)));
    vlSelf->__VdfgTmp_h2aa42c51__0 = ((0xaU <= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__5__KET____DOT__lane__DOT__c1_i)) 
                                      & (0xbU >= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__5__KET____DOT__lane__DOT__c1_i)));
    vlSelf->__VdfgTmp_h8f083f76__0 = ((7U <= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__5__KET____DOT__lane__DOT__c1_i)) 
                                      & (7U >= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__5__KET____DOT__lane__DOT__c1_i)));
    vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl0c1__DOT__lut_match_ltl0c1_6__DOT__match_internal 
        = ((4U <= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__5__KET____DOT__lane__DOT__c1_i)) 
           & (7U >= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__5__KET____DOT__lane__DOT__c1_i)));
    vlSelf->__VdfgTmp_hb30bd723__0 = ((1U <= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__5__KET____DOT__lane__DOT__c1_i)) 
                                      & (1U >= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__5__KET____DOT__lane__DOT__c1_i)));
    vlSelf->__VdfgTmp_he9b10395__0 = ((3U <= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__5__KET____DOT__lane__DOT__c1_i)) 
                                      & (3U >= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__5__KET____DOT__lane__DOT__c1_i)));
    vlSelf->__VdfgTmp_hd3ae48ab__0 = ((5U <= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__5__KET____DOT__lane__DOT__c1_i)) 
                                      & (5U >= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__5__KET____DOT__lane__DOT__c1_i)));
    vlSelf->automata_stage0c1__DOT__automata_ltl1c1__DOT____Vcellinp__ltl1c1_ste_5__income_edges 
        = ((((IData)(vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl1c1__DOT__ltl1c1_ste_3__DOT__internal_reg) 
             & (((4U <= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__5__KET____DOT__lane__DOT__c1_i)) 
                 & (5U >= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__5__KET____DOT__lane__DOT__c1_i))) 
                | ((0xcU <= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__5__KET____DOT__lane__DOT__c1_i)) 
                   & (0xdU >= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__5__KET____DOT__lane__DOT__c1_i))))) 
            << 1U) | ((IData)(vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl1c1__DOT__ltl1c1_ste_5__DOT__internal_reg) 
                      & (IData)(vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl1c1__DOT__lut_match_ltl1c1_1__DOT__match_internal)));
    vlSelf->automata_stage0c1__DOT__automata_ltl2c1__DOT____Vcellinp__ltl2c1_ste_8__income_edges 
        = ((((IData)(vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl2c1__DOT__ltl2c1_ste_8__DOT__internal_reg) 
             & (IData)(vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl2c1__DOT__lut_match_ltl2c1_1__DOT__match_internal)) 
            << 1U) | ((IData)(vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl2c1__DOT__ltl2c1_ste_4__DOT__internal_reg) 
                      & (((8U <= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__5__KET____DOT__lane__DOT__c1_i)) 
                          & (8U >= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__5__KET____DOT__lane__DOT__c1_i))) 
                         | (((0xaU <= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__5__KET____DOT__lane__DOT__c1_i)) 
                             & (0xaU >= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__5__KET____DOT__lane__DOT__c1_i))) 
                            | (((0xcU <= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__5__KET____DOT__lane__DOT__c1_i)) 
                                & (0xcU >= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__5__KET____DOT__lane__DOT__c1_i))) 
                               | ((0xeU <= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__5__KET____DOT__lane__DOT__c1_i)) 
                                  & (0xeU >= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__5__KET____DOT__lane__DOT__c1_i))))))));
    vlSelf->automata_stage0c1__DOT__automata_ltl1c1__DOT____Vcellinp__ltl1c1_ste_8__income_edges 
        = ((((IData)(vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl1c1__DOT__ltl1c1_ste_8__DOT__internal_reg) 
             & (IData)(vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl1c1__DOT__lut_match_ltl1c1_1__DOT__match_internal)) 
            << 1U) | ((IData)(vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl1c1__DOT__ltl1c1_ste_5__DOT__internal_reg) 
                      & ((IData)(vlSelf->__VdfgTmp_hb5b42c0f__0) 
                         | (IData)(vlSelf->__VdfgTmp_h2aa42c51__0))));
    vlSelf->__PVT__ltl1c1_w_out_2 = ((IData)(vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl1c1__DOT__ltl1c1_ste_2__DOT__internal_reg) 
                                     & ((IData)(vlSelf->__VdfgTmp_hb5b42c0f__0) 
                                        | (((6U <= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__5__KET____DOT__lane__DOT__c1_i)) 
                                            & (7U >= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__5__KET____DOT__lane__DOT__c1_i))) 
                                           | ((IData)(vlSelf->__VdfgTmp_h2aa42c51__0) 
                                              | (0xeU 
                                                 <= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__5__KET____DOT__lane__DOT__c1_i))))));
    vlSelf->automata_stage0c1__DOT__automata_ltl0c1__DOT____Vcellinp__ltl0c1_ste_8__income_edges 
        = ((((IData)(vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl0c1__DOT__ltl0c1_ste_8__DOT__internal_reg) 
             & (3U >= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__5__KET____DOT__lane__DOT__c1_i))) 
            << 1U) | ((IData)(vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl0c1__DOT__ltl0c1_ste_5__DOT__internal_reg) 
                      & (IData)(vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl0c1__DOT__lut_match_ltl0c1_6__DOT__match_internal)));
    vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl0c1__DOT__lut_match_ltl0c1_2__DOT__match_internal 
        = ((IData)(vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl0c1__DOT__lut_match_ltl0c1_6__DOT__match_internal) 
           | (0xcU <= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__5__KET____DOT__lane__DOT__c1_i)));
    vlSelf->automata_stage0c1__DOT__automata_ltl2c1__DOT____Vcellinp__ltl2c1_ste_4__income_edges 
        = ((((IData)(vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl2c1__DOT__ltl2c1_ste_2__DOT__internal_reg) 
             & ((IData)(vlSelf->__VdfgTmp_hb30bd723__0) 
                | ((IData)(vlSelf->__VdfgTmp_he9b10395__0) 
                   | ((IData)(vlSelf->__VdfgTmp_hd3ae48ab__0) 
                      | (IData)(vlSelf->__VdfgTmp_h8f083f76__0))))) 
            << 1U) | ((IData)(vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl2c1__DOT__ltl2c1_ste_4__DOT__internal_reg) 
                      & (IData)(vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl2c1__DOT__lut_match_ltl2c1_1__DOT__match_internal)));
    vlSelf->__PVT__ltl2c1_w_out_9 = ((IData)(vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl2c1__DOT__ltl2c1_ste_8__DOT__internal_reg) 
                                     & ((IData)(vlSelf->__VdfgTmp_hb30bd723__0) 
                                        | ((IData)(vlSelf->__VdfgTmp_he9b10395__0) 
                                           | ((IData)(vlSelf->__VdfgTmp_hd3ae48ab__0) 
                                              | (7U 
                                                 <= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__5__KET____DOT__lane__DOT__c1_i))))));
    vlSelf->__PVT__ltl2c1_w_out_5 = ((IData)(vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl2c1__DOT__ltl2c1_ste_4__DOT__internal_reg) 
                                     & ((IData)(vlSelf->__VdfgTmp_hb30bd723__0) 
                                        | ((IData)(vlSelf->__VdfgTmp_he9b10395__0) 
                                           | ((IData)(vlSelf->__VdfgTmp_hd3ae48ab__0) 
                                              | ((IData)(vlSelf->__VdfgTmp_h8f083f76__0) 
                                                 | (((9U 
                                                      <= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__5__KET____DOT__lane__DOT__c1_i)) 
                                                     & (9U 
                                                        >= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__5__KET____DOT__lane__DOT__c1_i))) 
                                                    | (((0xbU 
                                                         <= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__5__KET____DOT__lane__DOT__c1_i)) 
                                                        & (0xbU 
                                                           >= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__5__KET____DOT__lane__DOT__c1_i))) 
                                                       | (((0xdU 
                                                            <= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__5__KET____DOT__lane__DOT__c1_i)) 
                                                           & (0xdU 
                                                              >= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__5__KET____DOT__lane__DOT__c1_i))) 
                                                          | (0xfU 
                                                             <= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__5__KET____DOT__lane__DOT__c1_i))))))))));
    vlSelf->__PVT__ltl1c1_w_out_7 = ((IData)(vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl1c1__DOT__ltl1c1_ste_5__DOT__internal_reg) 
                                     & (IData)(vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl0c1__DOT__lut_match_ltl0c1_2__DOT__match_internal));
    vlSelf->__PVT__ltl0c1_w_out_2 = ((IData)(vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl0c1__DOT__ltl0c1_ste_2__DOT__internal_reg) 
                                     & (IData)(vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl0c1__DOT__lut_match_ltl0c1_2__DOT__match_internal));
    vlSelf->automata_stage0c1__DOT__automata_ltl2c1__DOT____Vcellinp__ltl2c1_ste_7__income_edges 
        = (((IData)(vlSelf->__PVT__ltl2c1_w_out_9) 
            << 3U) | (((IData)(vlSelf->__PVT__ltl2c1_w_out_3) 
                       << 2U) | (((IData)(vlSelf->__PVT__ltl2c1_w_out_5) 
                                  << 1U) | (IData)(vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl2c1__DOT__ltl2c1_ste_7__DOT__internal_reg))));
    vlSelf->automata_stage0c1__DOT__automata_ltl1c1__DOT____Vcellinp__ltl1c1_ste_4__income_edges 
        = (((IData)(vlSelf->__PVT__ltl1c1_w_out_9) 
            << 3U) | (((IData)(vlSelf->__PVT__ltl1c1_w_out_2) 
                       << 2U) | (((IData)(vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl1c1__DOT__ltl1c1_ste_4__DOT__internal_reg) 
                                  << 1U) | (IData)(vlSelf->__PVT__ltl1c1_w_out_7))));
    vlSelf->automata_stage0c1__DOT__automata_ltl0c1__DOT____Vcellinp__ltl0c1_ste_4__income_edges 
        = (((IData)(vlSelf->__PVT__ltl0c1_w_out_9) 
            << 3U) | (((IData)(vlSelf->__PVT__ltl0c1_w_out_2) 
                       << 2U) | (((IData)(vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl0c1__DOT__ltl0c1_ste_4__DOT__internal_reg) 
                                  << 1U) | (IData)(vlSelf->__PVT__ltl0c1_w_out_7))));
}

VL_INLINE_OPT void rm_tb_top_routerlinkedlist_Top_ModuleC1___nba_comb__TOP__rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__5__KET____DOT__lane__DOT__I0c1__2(rm_tb_top_routerlinkedlist_Top_ModuleC1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    rm_tb_top_routerlinkedlist__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            rm_tb_top_routerlinkedlist_Top_ModuleC1___nba_comb__TOP__rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__5__KET____DOT__lane__DOT__I0c1__2\n"); );
    // Body
    vlSelf->automata_stage0c1__DOT__automata_ltl0c1__DOT____Vcellinp__ltl0c1_ste_1__income_edges 
        = (((IData)(vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl2c1__DOT__start_of_data) 
            << 1U) | ((IData)(vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl0c1__DOT__ltl0c1_ste_1__DOT__internal_reg) 
                      & (3U >= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__5__KET____DOT__lane__DOT__c1_i))));
    vlSelf->automata_stage0c1__DOT__automata_ltl1c1__DOT____Vcellinp__ltl1c1_ste_1__income_edges 
        = (((IData)(vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl2c1__DOT__start_of_data) 
            << 1U) | ((IData)(vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl1c1__DOT__ltl1c1_ste_1__DOT__internal_reg) 
                      & (IData)(vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl1c1__DOT__lut_match_ltl1c1_1__DOT__match_internal)));
    vlSelf->automata_stage0c1__DOT__automata_ltl2c1__DOT____Vcellinp__ltl2c1_ste_1__income_edges 
        = (((IData)(vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl2c1__DOT__start_of_data) 
            << 1U) | ((IData)(vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl2c1__DOT__ltl2c1_ste_1__DOT__internal_reg) 
                      & (IData)(vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl2c1__DOT__lut_match_ltl2c1_1__DOT__match_internal)));
}

VL_INLINE_OPT void rm_tb_top_routerlinkedlist_Top_ModuleC1___nba_sequent__TOP__rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__5__KET____DOT__lane__DOT__I1c1__0(rm_tb_top_routerlinkedlist_Top_ModuleC1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    rm_tb_top_routerlinkedlist__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            rm_tb_top_routerlinkedlist_Top_ModuleC1___nba_sequent__TOP__rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__5__KET____DOT__lane__DOT__I1c1__0\n"); );
    // Body
    if (vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__lane__lane_reset_i) {
        vlSelf->__PVT__automata_stage0c1__DOT__out_reset = 1U;
        vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl2c1__DOT__start_of_data_reg = 1U;
        vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl0c1__DOT__ltl0c1_ste_3__DOT__internal_reg = 1U;
        vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl0c1__DOT__ltl0c1_ste_1__DOT__internal_reg = 1U;
        vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl2c1__DOT__ltl2c1_ste_1__DOT__internal_reg = 1U;
        vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl1c1__DOT__ltl1c1_ste_1__DOT__internal_reg = 1U;
        vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl1c1__DOT__ltl1c1_ste_3__DOT__internal_reg = 1U;
        vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl2c1__DOT__ltl2c1_ste_2__DOT__internal_reg = 1U;
        vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl0c1__DOT__ltl0c1_ste_2__DOT__internal_reg = 1U;
        vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl2c1__DOT__ltl2c1_ste_3__DOT__internal_reg = 1U;
        vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl1c1__DOT__ltl1c1_ste_2__DOT__internal_reg = 1U;
    } else {
        vlSelf->__PVT__automata_stage0c1__DOT__out_reset = 0U;
        vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl2c1__DOT__start_of_data_reg = 0U;
        vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl0c1__DOT__ltl0c1_ste_3__DOT__internal_reg 
            = (0U != (IData)(vlSelf->automata_stage0c1__DOT__automata_ltl0c1__DOT____Vcellinp__ltl0c1_ste_1__income_edges));
        vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl0c1__DOT__ltl0c1_ste_1__DOT__internal_reg 
            = (0U != (IData)(vlSelf->automata_stage0c1__DOT__automata_ltl0c1__DOT____Vcellinp__ltl0c1_ste_1__income_edges));
        vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl2c1__DOT__ltl2c1_ste_1__DOT__internal_reg 
            = (0U != (IData)(vlSelf->automata_stage0c1__DOT__automata_ltl2c1__DOT____Vcellinp__ltl2c1_ste_1__income_edges));
        vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl1c1__DOT__ltl1c1_ste_1__DOT__internal_reg 
            = (0U != (IData)(vlSelf->automata_stage0c1__DOT__automata_ltl1c1__DOT____Vcellinp__ltl1c1_ste_1__income_edges));
        vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl1c1__DOT__ltl1c1_ste_3__DOT__internal_reg 
            = (0U != (IData)(vlSelf->automata_stage0c1__DOT__automata_ltl1c1__DOT____Vcellinp__ltl1c1_ste_1__income_edges));
        vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl2c1__DOT__ltl2c1_ste_2__DOT__internal_reg 
            = (0U != (IData)(vlSelf->automata_stage0c1__DOT__automata_ltl2c1__DOT____Vcellinp__ltl2c1_ste_1__income_edges));
        vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl0c1__DOT__ltl0c1_ste_2__DOT__internal_reg 
            = (0U != (IData)(vlSelf->automata_stage0c1__DOT__automata_ltl0c1__DOT____Vcellinp__ltl0c1_ste_1__income_edges));
        vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl2c1__DOT__ltl2c1_ste_3__DOT__internal_reg 
            = (0U != (IData)(vlSelf->automata_stage0c1__DOT__automata_ltl2c1__DOT____Vcellinp__ltl2c1_ste_1__income_edges));
        vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl1c1__DOT__ltl1c1_ste_2__DOT__internal_reg 
            = (0U != (IData)(vlSelf->automata_stage0c1__DOT__automata_ltl1c1__DOT____Vcellinp__ltl1c1_ste_1__income_edges));
        if (vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl2c1__DOT__start_of_data) {
            vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl0c1__DOT__ltl0c1_ste_3__DOT__internal_reg = 1U;
            vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl0c1__DOT__ltl0c1_ste_1__DOT__internal_reg = 1U;
            vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl2c1__DOT__ltl2c1_ste_1__DOT__internal_reg = 1U;
            vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl1c1__DOT__ltl1c1_ste_1__DOT__internal_reg = 1U;
            vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl1c1__DOT__ltl1c1_ste_3__DOT__internal_reg = 1U;
            vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl2c1__DOT__ltl2c1_ste_2__DOT__internal_reg = 1U;
            vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl0c1__DOT__ltl0c1_ste_2__DOT__internal_reg = 1U;
            vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl2c1__DOT__ltl2c1_ste_3__DOT__internal_reg = 1U;
            vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl1c1__DOT__ltl1c1_ste_2__DOT__internal_reg = 1U;
        }
    }
    vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl0c1__DOT__ltl0c1_ste_4__DOT__internal_reg 
        = ((~ (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__lane__lane_reset_i)) 
           & (0U != (IData)(vlSelf->automata_stage0c1__DOT__automata_ltl0c1__DOT____Vcellinp__ltl0c1_ste_4__income_edges)));
    vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl2c1__DOT__ltl2c1_ste_7__DOT__internal_reg 
        = ((~ (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__lane__lane_reset_i)) 
           & (0U != (IData)(vlSelf->automata_stage0c1__DOT__automata_ltl2c1__DOT____Vcellinp__ltl2c1_ste_7__income_edges)));
    vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl1c1__DOT__ltl1c1_ste_4__DOT__internal_reg 
        = ((~ (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__lane__lane_reset_i)) 
           & (0U != (IData)(vlSelf->automata_stage0c1__DOT__automata_ltl1c1__DOT____Vcellinp__ltl1c1_ste_4__income_edges)));
    vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl0c1__DOT__ltl0c1_ste_8__DOT__internal_reg 
        = ((~ (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__lane__lane_reset_i)) 
           & (0U != (IData)(vlSelf->automata_stage0c1__DOT__automata_ltl0c1__DOT____Vcellinp__ltl0c1_ste_8__income_edges)));
    vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl1c1__DOT__ltl1c1_ste_8__DOT__internal_reg 
        = ((~ (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__lane__lane_reset_i)) 
           & (0U != (IData)(vlSelf->automata_stage0c1__DOT__automata_ltl1c1__DOT____Vcellinp__ltl1c1_ste_8__income_edges)));
    vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl2c1__DOT__ltl2c1_ste_8__DOT__internal_reg 
        = ((~ (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__lane__lane_reset_i)) 
           & (0U != (IData)(vlSelf->automata_stage0c1__DOT__automata_ltl2c1__DOT____Vcellinp__ltl2c1_ste_8__income_edges)));
    vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl0c1__DOT__ltl0c1_ste_5__DOT__internal_reg 
        = ((~ (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__lane__lane_reset_i)) 
           & (0U != (IData)(vlSelf->automata_stage0c1__DOT__automata_ltl0c1__DOT____Vcellinp__ltl0c1_ste_5__income_edges)));
    vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl1c1__DOT__ltl1c1_ste_5__DOT__internal_reg 
        = ((~ (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__lane__lane_reset_i)) 
           & (0U != (IData)(vlSelf->automata_stage0c1__DOT__automata_ltl1c1__DOT____Vcellinp__ltl1c1_ste_5__income_edges)));
    vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl2c1__DOT__ltl2c1_ste_4__DOT__internal_reg 
        = ((~ (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__lane__lane_reset_i)) 
           & (0U != (IData)(vlSelf->automata_stage0c1__DOT__automata_ltl2c1__DOT____Vcellinp__ltl2c1_ste_4__income_edges)));
    vlSelf->__PVT__automata_stage0c1__DOT__out_symbols 
        = vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__5__KET____DOT__lane__DOT__c3_i;
}

VL_INLINE_OPT void rm_tb_top_routerlinkedlist_Top_ModuleC1___nba_comb__TOP__rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__5__KET____DOT__lane__DOT__I1c1__1(rm_tb_top_routerlinkedlist_Top_ModuleC1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    rm_tb_top_routerlinkedlist__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            rm_tb_top_routerlinkedlist_Top_ModuleC1___nba_comb__TOP__rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__5__KET____DOT__lane__DOT__I1c1__1\n"); );
    // Body
    vlSelf->automata_stage0c1__DOT__automata_ltl0c1__DOT____Vcellinp__ltl0c1_ste_5__income_edges 
        = ((((IData)(vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl0c1__DOT__ltl0c1_ste_3__DOT__internal_reg) 
             & ((8U <= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__5__KET____DOT__lane__DOT__c3_i)) 
                & (0xbU >= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__5__KET____DOT__lane__DOT__c3_i)))) 
            << 1U) | ((IData)(vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl0c1__DOT__ltl0c1_ste_5__DOT__internal_reg) 
                      & (3U >= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__5__KET____DOT__lane__DOT__c3_i))));
    vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl1c1__DOT__lut_match_ltl1c1_1__DOT__match_internal 
        = ((1U >= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__5__KET____DOT__lane__DOT__c3_i)) 
           | ((8U <= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__5__KET____DOT__lane__DOT__c3_i)) 
              & (9U >= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__5__KET____DOT__lane__DOT__c3_i))));
    vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl2c1__DOT__lut_match_ltl2c1_1__DOT__match_internal 
        = ((0U >= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__5__KET____DOT__lane__DOT__c3_i)) 
           | (((2U <= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__5__KET____DOT__lane__DOT__c3_i)) 
               & (2U >= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__5__KET____DOT__lane__DOT__c3_i))) 
              | (((4U <= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__5__KET____DOT__lane__DOT__c3_i)) 
                  & (4U >= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__5__KET____DOT__lane__DOT__c3_i))) 
                 | ((6U <= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__5__KET____DOT__lane__DOT__c3_i)) 
                    & (6U >= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__5__KET____DOT__lane__DOT__c3_i))))));
    vlSelf->__PVT__ltl1c1_w_out_9 = ((IData)(vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl1c1__DOT__ltl1c1_ste_8__DOT__internal_reg) 
                                     & (((2U <= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__5__KET____DOT__lane__DOT__c3_i)) 
                                         & (7U >= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__5__KET____DOT__lane__DOT__c3_i))) 
                                        | (0xaU <= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__5__KET____DOT__lane__DOT__c3_i))));
    vlSelf->__PVT__ltl2c1_w_out_3 = ((IData)(vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl2c1__DOT__ltl2c1_ste_3__DOT__internal_reg) 
                                     & (8U <= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__5__KET____DOT__lane__DOT__c3_i)));
    vlSelf->__PVT__ltl0c1_w_out_7 = ((IData)(vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl0c1__DOT__ltl0c1_ste_5__DOT__internal_reg) 
                                     & (8U <= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__5__KET____DOT__lane__DOT__c3_i)));
    vlSelf->__PVT__ltl0c1_w_out_9 = ((IData)(vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl0c1__DOT__ltl0c1_ste_8__DOT__internal_reg) 
                                     & (4U <= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__5__KET____DOT__lane__DOT__c3_i)));
    vlSelf->__VdfgTmp_hb5b42c0f__0 = ((2U <= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__5__KET____DOT__lane__DOT__c3_i)) 
                                      & (3U >= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__5__KET____DOT__lane__DOT__c3_i)));
    vlSelf->__VdfgTmp_h2aa42c51__0 = ((0xaU <= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__5__KET____DOT__lane__DOT__c3_i)) 
                                      & (0xbU >= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__5__KET____DOT__lane__DOT__c3_i)));
    vlSelf->__VdfgTmp_h8f083f76__0 = ((7U <= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__5__KET____DOT__lane__DOT__c3_i)) 
                                      & (7U >= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__5__KET____DOT__lane__DOT__c3_i)));
    vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl0c1__DOT__lut_match_ltl0c1_6__DOT__match_internal 
        = ((4U <= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__5__KET____DOT__lane__DOT__c3_i)) 
           & (7U >= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__5__KET____DOT__lane__DOT__c3_i)));
    vlSelf->__VdfgTmp_hb30bd723__0 = ((1U <= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__5__KET____DOT__lane__DOT__c3_i)) 
                                      & (1U >= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__5__KET____DOT__lane__DOT__c3_i)));
    vlSelf->__VdfgTmp_he9b10395__0 = ((3U <= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__5__KET____DOT__lane__DOT__c3_i)) 
                                      & (3U >= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__5__KET____DOT__lane__DOT__c3_i)));
    vlSelf->__VdfgTmp_hd3ae48ab__0 = ((5U <= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__5__KET____DOT__lane__DOT__c3_i)) 
                                      & (5U >= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__5__KET____DOT__lane__DOT__c3_i)));
    vlSelf->automata_stage0c1__DOT__automata_ltl1c1__DOT____Vcellinp__ltl1c1_ste_5__income_edges 
        = ((((IData)(vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl1c1__DOT__ltl1c1_ste_3__DOT__internal_reg) 
             & (((4U <= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__5__KET____DOT__lane__DOT__c3_i)) 
                 & (5U >= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__5__KET____DOT__lane__DOT__c3_i))) 
                | ((0xcU <= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__5__KET____DOT__lane__DOT__c3_i)) 
                   & (0xdU >= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__5__KET____DOT__lane__DOT__c3_i))))) 
            << 1U) | ((IData)(vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl1c1__DOT__ltl1c1_ste_5__DOT__internal_reg) 
                      & (IData)(vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl1c1__DOT__lut_match_ltl1c1_1__DOT__match_internal)));
    vlSelf->automata_stage0c1__DOT__automata_ltl2c1__DOT____Vcellinp__ltl2c1_ste_8__income_edges 
        = ((((IData)(vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl2c1__DOT__ltl2c1_ste_8__DOT__internal_reg) 
             & (IData)(vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl2c1__DOT__lut_match_ltl2c1_1__DOT__match_internal)) 
            << 1U) | ((IData)(vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl2c1__DOT__ltl2c1_ste_4__DOT__internal_reg) 
                      & (((8U <= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__5__KET____DOT__lane__DOT__c3_i)) 
                          & (8U >= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__5__KET____DOT__lane__DOT__c3_i))) 
                         | (((0xaU <= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__5__KET____DOT__lane__DOT__c3_i)) 
                             & (0xaU >= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__5__KET____DOT__lane__DOT__c3_i))) 
                            | (((0xcU <= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__5__KET____DOT__lane__DOT__c3_i)) 
                                & (0xcU >= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__5__KET____DOT__lane__DOT__c3_i))) 
                               | ((0xeU <= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__5__KET____DOT__lane__DOT__c3_i)) 
                                  & (0xeU >= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__5__KET____DOT__lane__DOT__c3_i))))))));
    vlSelf->automata_stage0c1__DOT__automata_ltl1c1__DOT____Vcellinp__ltl1c1_ste_8__income_edges 
        = ((((IData)(vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl1c1__DOT__ltl1c1_ste_8__DOT__internal_reg) 
             & (IData)(vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl1c1__DOT__lut_match_ltl1c1_1__DOT__match_internal)) 
            << 1U) | ((IData)(vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl1c1__DOT__ltl1c1_ste_5__DOT__internal_reg) 
                      & ((IData)(vlSelf->__VdfgTmp_hb5b42c0f__0) 
                         | (IData)(vlSelf->__VdfgTmp_h2aa42c51__0))));
    vlSelf->__PVT__ltl1c1_w_out_2 = ((IData)(vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl1c1__DOT__ltl1c1_ste_2__DOT__internal_reg) 
                                     & ((IData)(vlSelf->__VdfgTmp_hb5b42c0f__0) 
                                        | (((6U <= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__5__KET____DOT__lane__DOT__c3_i)) 
                                            & (7U >= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__5__KET____DOT__lane__DOT__c3_i))) 
                                           | ((IData)(vlSelf->__VdfgTmp_h2aa42c51__0) 
                                              | (0xeU 
                                                 <= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__5__KET____DOT__lane__DOT__c3_i))))));
    vlSelf->automata_stage0c1__DOT__automata_ltl0c1__DOT____Vcellinp__ltl0c1_ste_8__income_edges 
        = ((((IData)(vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl0c1__DOT__ltl0c1_ste_8__DOT__internal_reg) 
             & (3U >= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__5__KET____DOT__lane__DOT__c3_i))) 
            << 1U) | ((IData)(vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl0c1__DOT__ltl0c1_ste_5__DOT__internal_reg) 
                      & (IData)(vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl0c1__DOT__lut_match_ltl0c1_6__DOT__match_internal)));
    vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl0c1__DOT__lut_match_ltl0c1_2__DOT__match_internal 
        = ((IData)(vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl0c1__DOT__lut_match_ltl0c1_6__DOT__match_internal) 
           | (0xcU <= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__5__KET____DOT__lane__DOT__c3_i)));
    vlSelf->automata_stage0c1__DOT__automata_ltl2c1__DOT____Vcellinp__ltl2c1_ste_4__income_edges 
        = ((((IData)(vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl2c1__DOT__ltl2c1_ste_2__DOT__internal_reg) 
             & ((IData)(vlSelf->__VdfgTmp_hb30bd723__0) 
                | ((IData)(vlSelf->__VdfgTmp_he9b10395__0) 
                   | ((IData)(vlSelf->__VdfgTmp_hd3ae48ab__0) 
                      | (IData)(vlSelf->__VdfgTmp_h8f083f76__0))))) 
            << 1U) | ((IData)(vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl2c1__DOT__ltl2c1_ste_4__DOT__internal_reg) 
                      & (IData)(vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl2c1__DOT__lut_match_ltl2c1_1__DOT__match_internal)));
    vlSelf->__PVT__ltl2c1_w_out_9 = ((IData)(vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl2c1__DOT__ltl2c1_ste_8__DOT__internal_reg) 
                                     & ((IData)(vlSelf->__VdfgTmp_hb30bd723__0) 
                                        | ((IData)(vlSelf->__VdfgTmp_he9b10395__0) 
                                           | ((IData)(vlSelf->__VdfgTmp_hd3ae48ab__0) 
                                              | (7U 
                                                 <= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__5__KET____DOT__lane__DOT__c3_i))))));
    vlSelf->__PVT__ltl2c1_w_out_5 = ((IData)(vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl2c1__DOT__ltl2c1_ste_4__DOT__internal_reg) 
                                     & ((IData)(vlSelf->__VdfgTmp_hb30bd723__0) 
                                        | ((IData)(vlSelf->__VdfgTmp_he9b10395__0) 
                                           | ((IData)(vlSelf->__VdfgTmp_hd3ae48ab__0) 
                                              | ((IData)(vlSelf->__VdfgTmp_h8f083f76__0) 
                                                 | (((9U 
                                                      <= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__5__KET____DOT__lane__DOT__c3_i)) 
                                                     & (9U 
                                                        >= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__5__KET____DOT__lane__DOT__c3_i))) 
                                                    | (((0xbU 
                                                         <= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__5__KET____DOT__lane__DOT__c3_i)) 
                                                        & (0xbU 
                                                           >= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__5__KET____DOT__lane__DOT__c3_i))) 
                                                       | (((0xdU 
                                                            <= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__5__KET____DOT__lane__DOT__c3_i)) 
                                                           & (0xdU 
                                                              >= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__5__KET____DOT__lane__DOT__c3_i))) 
                                                          | (0xfU 
                                                             <= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__5__KET____DOT__lane__DOT__c3_i))))))))));
    vlSelf->__PVT__ltl1c1_w_out_7 = ((IData)(vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl1c1__DOT__ltl1c1_ste_5__DOT__internal_reg) 
                                     & (IData)(vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl0c1__DOT__lut_match_ltl0c1_2__DOT__match_internal));
    vlSelf->__PVT__ltl0c1_w_out_2 = ((IData)(vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl0c1__DOT__ltl0c1_ste_2__DOT__internal_reg) 
                                     & (IData)(vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl0c1__DOT__lut_match_ltl0c1_2__DOT__match_internal));
    vlSelf->automata_stage0c1__DOT__automata_ltl2c1__DOT____Vcellinp__ltl2c1_ste_7__income_edges 
        = (((IData)(vlSelf->__PVT__ltl2c1_w_out_9) 
            << 3U) | (((IData)(vlSelf->__PVT__ltl2c1_w_out_3) 
                       << 2U) | (((IData)(vlSelf->__PVT__ltl2c1_w_out_5) 
                                  << 1U) | (IData)(vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl2c1__DOT__ltl2c1_ste_7__DOT__internal_reg))));
    vlSelf->automata_stage0c1__DOT__automata_ltl1c1__DOT____Vcellinp__ltl1c1_ste_4__income_edges 
        = (((IData)(vlSelf->__PVT__ltl1c1_w_out_9) 
            << 3U) | (((IData)(vlSelf->__PVT__ltl1c1_w_out_2) 
                       << 2U) | (((IData)(vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl1c1__DOT__ltl1c1_ste_4__DOT__internal_reg) 
                                  << 1U) | (IData)(vlSelf->__PVT__ltl1c1_w_out_7))));
    vlSelf->automata_stage0c1__DOT__automata_ltl0c1__DOT____Vcellinp__ltl0c1_ste_4__income_edges 
        = (((IData)(vlSelf->__PVT__ltl0c1_w_out_9) 
            << 3U) | (((IData)(vlSelf->__PVT__ltl0c1_w_out_2) 
                       << 2U) | (((IData)(vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl0c1__DOT__ltl0c1_ste_4__DOT__internal_reg) 
                                  << 1U) | (IData)(vlSelf->__PVT__ltl0c1_w_out_7))));
}

VL_INLINE_OPT void rm_tb_top_routerlinkedlist_Top_ModuleC1___nba_comb__TOP__rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__5__KET____DOT__lane__DOT__I1c1__2(rm_tb_top_routerlinkedlist_Top_ModuleC1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    rm_tb_top_routerlinkedlist__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            rm_tb_top_routerlinkedlist_Top_ModuleC1___nba_comb__TOP__rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__5__KET____DOT__lane__DOT__I1c1__2\n"); );
    // Body
    vlSelf->automata_stage0c1__DOT__automata_ltl0c1__DOT____Vcellinp__ltl0c1_ste_1__income_edges 
        = (((IData)(vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl2c1__DOT__start_of_data) 
            << 1U) | ((IData)(vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl0c1__DOT__ltl0c1_ste_1__DOT__internal_reg) 
                      & (3U >= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__5__KET____DOT__lane__DOT__c3_i))));
    vlSelf->automata_stage0c1__DOT__automata_ltl1c1__DOT____Vcellinp__ltl1c1_ste_1__income_edges 
        = (((IData)(vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl2c1__DOT__start_of_data) 
            << 1U) | ((IData)(vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl1c1__DOT__ltl1c1_ste_1__DOT__internal_reg) 
                      & (IData)(vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl1c1__DOT__lut_match_ltl1c1_1__DOT__match_internal)));
    vlSelf->automata_stage0c1__DOT__automata_ltl2c1__DOT____Vcellinp__ltl2c1_ste_1__income_edges 
        = (((IData)(vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl2c1__DOT__start_of_data) 
            << 1U) | ((IData)(vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl2c1__DOT__ltl2c1_ste_1__DOT__internal_reg) 
                      & (IData)(vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl2c1__DOT__lut_match_ltl2c1_1__DOT__match_internal)));
}

VL_INLINE_OPT void rm_tb_top_routerlinkedlist_Top_ModuleC1___nba_sequent__TOP__rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__6__KET____DOT__lane__DOT__I0c1__0(rm_tb_top_routerlinkedlist_Top_ModuleC1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    rm_tb_top_routerlinkedlist__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            rm_tb_top_routerlinkedlist_Top_ModuleC1___nba_sequent__TOP__rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__6__KET____DOT__lane__DOT__I0c1__0\n"); );
    // Body
    if (vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT____Vcellinp__genblk1__BRA__6__KET____DOT__lane__lane_reset_i) {
        vlSelf->__PVT__automata_stage0c1__DOT__out_reset = 1U;
        vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl2c1__DOT__start_of_data_reg = 1U;
        vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl0c1__DOT__ltl0c1_ste_3__DOT__internal_reg = 1U;
        vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl0c1__DOT__ltl0c1_ste_1__DOT__internal_reg = 1U;
        vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl2c1__DOT__ltl2c1_ste_1__DOT__internal_reg = 1U;
        vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl1c1__DOT__ltl1c1_ste_1__DOT__internal_reg = 1U;
        vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl1c1__DOT__ltl1c1_ste_3__DOT__internal_reg = 1U;
        vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl2c1__DOT__ltl2c1_ste_2__DOT__internal_reg = 1U;
        vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl0c1__DOT__ltl0c1_ste_2__DOT__internal_reg = 1U;
        vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl2c1__DOT__ltl2c1_ste_3__DOT__internal_reg = 1U;
        vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl1c1__DOT__ltl1c1_ste_2__DOT__internal_reg = 1U;
    } else {
        vlSelf->__PVT__automata_stage0c1__DOT__out_reset = 0U;
        vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl2c1__DOT__start_of_data_reg = 0U;
        vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl0c1__DOT__ltl0c1_ste_3__DOT__internal_reg 
            = (0U != (IData)(vlSelf->automata_stage0c1__DOT__automata_ltl0c1__DOT____Vcellinp__ltl0c1_ste_1__income_edges));
        vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl0c1__DOT__ltl0c1_ste_1__DOT__internal_reg 
            = (0U != (IData)(vlSelf->automata_stage0c1__DOT__automata_ltl0c1__DOT____Vcellinp__ltl0c1_ste_1__income_edges));
        vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl2c1__DOT__ltl2c1_ste_1__DOT__internal_reg 
            = (0U != (IData)(vlSelf->automata_stage0c1__DOT__automata_ltl2c1__DOT____Vcellinp__ltl2c1_ste_1__income_edges));
        vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl1c1__DOT__ltl1c1_ste_1__DOT__internal_reg 
            = (0U != (IData)(vlSelf->automata_stage0c1__DOT__automata_ltl1c1__DOT____Vcellinp__ltl1c1_ste_1__income_edges));
        vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl1c1__DOT__ltl1c1_ste_3__DOT__internal_reg 
            = (0U != (IData)(vlSelf->automata_stage0c1__DOT__automata_ltl1c1__DOT____Vcellinp__ltl1c1_ste_1__income_edges));
        vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl2c1__DOT__ltl2c1_ste_2__DOT__internal_reg 
            = (0U != (IData)(vlSelf->automata_stage0c1__DOT__automata_ltl2c1__DOT____Vcellinp__ltl2c1_ste_1__income_edges));
        vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl0c1__DOT__ltl0c1_ste_2__DOT__internal_reg 
            = (0U != (IData)(vlSelf->automata_stage0c1__DOT__automata_ltl0c1__DOT____Vcellinp__ltl0c1_ste_1__income_edges));
        vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl2c1__DOT__ltl2c1_ste_3__DOT__internal_reg 
            = (0U != (IData)(vlSelf->automata_stage0c1__DOT__automata_ltl2c1__DOT____Vcellinp__ltl2c1_ste_1__income_edges));
        vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl1c1__DOT__ltl1c1_ste_2__DOT__internal_reg 
            = (0U != (IData)(vlSelf->automata_stage0c1__DOT__automata_ltl1c1__DOT____Vcellinp__ltl1c1_ste_1__income_edges));
        if (vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl2c1__DOT__start_of_data) {
            vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl0c1__DOT__ltl0c1_ste_3__DOT__internal_reg = 1U;
            vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl0c1__DOT__ltl0c1_ste_1__DOT__internal_reg = 1U;
            vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl2c1__DOT__ltl2c1_ste_1__DOT__internal_reg = 1U;
            vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl1c1__DOT__ltl1c1_ste_1__DOT__internal_reg = 1U;
            vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl1c1__DOT__ltl1c1_ste_3__DOT__internal_reg = 1U;
            vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl2c1__DOT__ltl2c1_ste_2__DOT__internal_reg = 1U;
            vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl0c1__DOT__ltl0c1_ste_2__DOT__internal_reg = 1U;
            vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl2c1__DOT__ltl2c1_ste_3__DOT__internal_reg = 1U;
            vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl1c1__DOT__ltl1c1_ste_2__DOT__internal_reg = 1U;
        }
    }
    vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl0c1__DOT__ltl0c1_ste_4__DOT__internal_reg 
        = ((~ (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT____Vcellinp__genblk1__BRA__6__KET____DOT__lane__lane_reset_i)) 
           & (0U != (IData)(vlSelf->automata_stage0c1__DOT__automata_ltl0c1__DOT____Vcellinp__ltl0c1_ste_4__income_edges)));
    vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl2c1__DOT__ltl2c1_ste_7__DOT__internal_reg 
        = ((~ (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT____Vcellinp__genblk1__BRA__6__KET____DOT__lane__lane_reset_i)) 
           & (0U != (IData)(vlSelf->automata_stage0c1__DOT__automata_ltl2c1__DOT____Vcellinp__ltl2c1_ste_7__income_edges)));
    vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl1c1__DOT__ltl1c1_ste_4__DOT__internal_reg 
        = ((~ (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT____Vcellinp__genblk1__BRA__6__KET____DOT__lane__lane_reset_i)) 
           & (0U != (IData)(vlSelf->automata_stage0c1__DOT__automata_ltl1c1__DOT____Vcellinp__ltl1c1_ste_4__income_edges)));
    vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl0c1__DOT__ltl0c1_ste_8__DOT__internal_reg 
        = ((~ (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT____Vcellinp__genblk1__BRA__6__KET____DOT__lane__lane_reset_i)) 
           & (0U != (IData)(vlSelf->automata_stage0c1__DOT__automata_ltl0c1__DOT____Vcellinp__ltl0c1_ste_8__income_edges)));
    vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl1c1__DOT__ltl1c1_ste_8__DOT__internal_reg 
        = ((~ (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT____Vcellinp__genblk1__BRA__6__KET____DOT__lane__lane_reset_i)) 
           & (0U != (IData)(vlSelf->automata_stage0c1__DOT__automata_ltl1c1__DOT____Vcellinp__ltl1c1_ste_8__income_edges)));
    vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl2c1__DOT__ltl2c1_ste_8__DOT__internal_reg 
        = ((~ (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT____Vcellinp__genblk1__BRA__6__KET____DOT__lane__lane_reset_i)) 
           & (0U != (IData)(vlSelf->automata_stage0c1__DOT__automata_ltl2c1__DOT____Vcellinp__ltl2c1_ste_8__income_edges)));
    vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl0c1__DOT__ltl0c1_ste_5__DOT__internal_reg 
        = ((~ (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT____Vcellinp__genblk1__BRA__6__KET____DOT__lane__lane_reset_i)) 
           & (0U != (IData)(vlSelf->automata_stage0c1__DOT__automata_ltl0c1__DOT____Vcellinp__ltl0c1_ste_5__income_edges)));
    vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl1c1__DOT__ltl1c1_ste_5__DOT__internal_reg 
        = ((~ (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT____Vcellinp__genblk1__BRA__6__KET____DOT__lane__lane_reset_i)) 
           & (0U != (IData)(vlSelf->automata_stage0c1__DOT__automata_ltl1c1__DOT____Vcellinp__ltl1c1_ste_5__income_edges)));
    vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl2c1__DOT__ltl2c1_ste_4__DOT__internal_reg 
        = ((~ (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT____Vcellinp__genblk1__BRA__6__KET____DOT__lane__lane_reset_i)) 
           & (0U != (IData)(vlSelf->automata_stage0c1__DOT__automata_ltl2c1__DOT____Vcellinp__ltl2c1_ste_4__income_edges)));
    vlSelf->__PVT__automata_stage0c1__DOT__out_symbols 
        = vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__6__KET____DOT__lane__DOT__c1_i;
}

VL_INLINE_OPT void rm_tb_top_routerlinkedlist_Top_ModuleC1___nba_sequent__TOP__rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__6__KET____DOT__lane__DOT__I0c1__1(rm_tb_top_routerlinkedlist_Top_ModuleC1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    rm_tb_top_routerlinkedlist__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            rm_tb_top_routerlinkedlist_Top_ModuleC1___nba_sequent__TOP__rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__6__KET____DOT__lane__DOT__I0c1__1\n"); );
    // Body
    vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl2c1__DOT__start_of_data_reg_ne 
        = vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT____Vcellinp__genblk1__BRA__6__KET____DOT__lane__lane_reset_i;
}

VL_INLINE_OPT void rm_tb_top_routerlinkedlist_Top_ModuleC1___nba_comb__TOP__rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__6__KET____DOT__lane__DOT__I0c1__0(rm_tb_top_routerlinkedlist_Top_ModuleC1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    rm_tb_top_routerlinkedlist__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            rm_tb_top_routerlinkedlist_Top_ModuleC1___nba_comb__TOP__rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__6__KET____DOT__lane__DOT__I0c1__0\n"); );
    // Body
    vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl2c1__DOT__start_of_data 
        = ((IData)(vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl2c1__DOT__start_of_data_reg) 
           & ((~ (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT____Vcellinp__genblk1__BRA__6__KET____DOT__lane__lane_reset_i)) 
              & (IData)(vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl2c1__DOT__start_of_data_reg_ne)));
}

VL_INLINE_OPT void rm_tb_top_routerlinkedlist_Top_ModuleC1___nba_comb__TOP__rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__6__KET____DOT__lane__DOT__I0c1__1(rm_tb_top_routerlinkedlist_Top_ModuleC1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    rm_tb_top_routerlinkedlist__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            rm_tb_top_routerlinkedlist_Top_ModuleC1___nba_comb__TOP__rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__6__KET____DOT__lane__DOT__I0c1__1\n"); );
    // Body
    vlSelf->automata_stage0c1__DOT__automata_ltl0c1__DOT____Vcellinp__ltl0c1_ste_5__income_edges 
        = ((((IData)(vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl0c1__DOT__ltl0c1_ste_3__DOT__internal_reg) 
             & ((8U <= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__6__KET____DOT__lane__DOT__c1_i)) 
                & (0xbU >= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__6__KET____DOT__lane__DOT__c1_i)))) 
            << 1U) | ((IData)(vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl0c1__DOT__ltl0c1_ste_5__DOT__internal_reg) 
                      & (3U >= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__6__KET____DOT__lane__DOT__c1_i))));
    vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl1c1__DOT__lut_match_ltl1c1_1__DOT__match_internal 
        = ((1U >= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__6__KET____DOT__lane__DOT__c1_i)) 
           | ((8U <= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__6__KET____DOT__lane__DOT__c1_i)) 
              & (9U >= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__6__KET____DOT__lane__DOT__c1_i))));
    vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl2c1__DOT__lut_match_ltl2c1_1__DOT__match_internal 
        = ((0U >= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__6__KET____DOT__lane__DOT__c1_i)) 
           | (((2U <= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__6__KET____DOT__lane__DOT__c1_i)) 
               & (2U >= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__6__KET____DOT__lane__DOT__c1_i))) 
              | (((4U <= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__6__KET____DOT__lane__DOT__c1_i)) 
                  & (4U >= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__6__KET____DOT__lane__DOT__c1_i))) 
                 | ((6U <= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__6__KET____DOT__lane__DOT__c1_i)) 
                    & (6U >= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__6__KET____DOT__lane__DOT__c1_i))))));
    vlSelf->__PVT__ltl1c1_w_out_9 = ((IData)(vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl1c1__DOT__ltl1c1_ste_8__DOT__internal_reg) 
                                     & (((2U <= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__6__KET____DOT__lane__DOT__c1_i)) 
                                         & (7U >= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__6__KET____DOT__lane__DOT__c1_i))) 
                                        | (0xaU <= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__6__KET____DOT__lane__DOT__c1_i))));
    vlSelf->__PVT__ltl2c1_w_out_3 = ((IData)(vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl2c1__DOT__ltl2c1_ste_3__DOT__internal_reg) 
                                     & (8U <= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__6__KET____DOT__lane__DOT__c1_i)));
    vlSelf->__PVT__ltl0c1_w_out_7 = ((IData)(vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl0c1__DOT__ltl0c1_ste_5__DOT__internal_reg) 
                                     & (8U <= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__6__KET____DOT__lane__DOT__c1_i)));
    vlSelf->__PVT__ltl0c1_w_out_9 = ((IData)(vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl0c1__DOT__ltl0c1_ste_8__DOT__internal_reg) 
                                     & (4U <= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__6__KET____DOT__lane__DOT__c1_i)));
    vlSelf->__VdfgTmp_hb5b42c0f__0 = ((2U <= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__6__KET____DOT__lane__DOT__c1_i)) 
                                      & (3U >= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__6__KET____DOT__lane__DOT__c1_i)));
    vlSelf->__VdfgTmp_h2aa42c51__0 = ((0xaU <= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__6__KET____DOT__lane__DOT__c1_i)) 
                                      & (0xbU >= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__6__KET____DOT__lane__DOT__c1_i)));
    vlSelf->__VdfgTmp_h8f083f76__0 = ((7U <= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__6__KET____DOT__lane__DOT__c1_i)) 
                                      & (7U >= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__6__KET____DOT__lane__DOT__c1_i)));
    vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl0c1__DOT__lut_match_ltl0c1_6__DOT__match_internal 
        = ((4U <= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__6__KET____DOT__lane__DOT__c1_i)) 
           & (7U >= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__6__KET____DOT__lane__DOT__c1_i)));
    vlSelf->__VdfgTmp_hb30bd723__0 = ((1U <= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__6__KET____DOT__lane__DOT__c1_i)) 
                                      & (1U >= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__6__KET____DOT__lane__DOT__c1_i)));
    vlSelf->__VdfgTmp_he9b10395__0 = ((3U <= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__6__KET____DOT__lane__DOT__c1_i)) 
                                      & (3U >= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__6__KET____DOT__lane__DOT__c1_i)));
    vlSelf->__VdfgTmp_hd3ae48ab__0 = ((5U <= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__6__KET____DOT__lane__DOT__c1_i)) 
                                      & (5U >= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__6__KET____DOT__lane__DOT__c1_i)));
    vlSelf->automata_stage0c1__DOT__automata_ltl1c1__DOT____Vcellinp__ltl1c1_ste_5__income_edges 
        = ((((IData)(vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl1c1__DOT__ltl1c1_ste_3__DOT__internal_reg) 
             & (((4U <= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__6__KET____DOT__lane__DOT__c1_i)) 
                 & (5U >= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__6__KET____DOT__lane__DOT__c1_i))) 
                | ((0xcU <= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__6__KET____DOT__lane__DOT__c1_i)) 
                   & (0xdU >= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__6__KET____DOT__lane__DOT__c1_i))))) 
            << 1U) | ((IData)(vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl1c1__DOT__ltl1c1_ste_5__DOT__internal_reg) 
                      & (IData)(vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl1c1__DOT__lut_match_ltl1c1_1__DOT__match_internal)));
    vlSelf->automata_stage0c1__DOT__automata_ltl2c1__DOT____Vcellinp__ltl2c1_ste_8__income_edges 
        = ((((IData)(vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl2c1__DOT__ltl2c1_ste_8__DOT__internal_reg) 
             & (IData)(vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl2c1__DOT__lut_match_ltl2c1_1__DOT__match_internal)) 
            << 1U) | ((IData)(vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl2c1__DOT__ltl2c1_ste_4__DOT__internal_reg) 
                      & (((8U <= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__6__KET____DOT__lane__DOT__c1_i)) 
                          & (8U >= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__6__KET____DOT__lane__DOT__c1_i))) 
                         | (((0xaU <= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__6__KET____DOT__lane__DOT__c1_i)) 
                             & (0xaU >= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__6__KET____DOT__lane__DOT__c1_i))) 
                            | (((0xcU <= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__6__KET____DOT__lane__DOT__c1_i)) 
                                & (0xcU >= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__6__KET____DOT__lane__DOT__c1_i))) 
                               | ((0xeU <= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__6__KET____DOT__lane__DOT__c1_i)) 
                                  & (0xeU >= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__6__KET____DOT__lane__DOT__c1_i))))))));
    vlSelf->automata_stage0c1__DOT__automata_ltl1c1__DOT____Vcellinp__ltl1c1_ste_8__income_edges 
        = ((((IData)(vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl1c1__DOT__ltl1c1_ste_8__DOT__internal_reg) 
             & (IData)(vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl1c1__DOT__lut_match_ltl1c1_1__DOT__match_internal)) 
            << 1U) | ((IData)(vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl1c1__DOT__ltl1c1_ste_5__DOT__internal_reg) 
                      & ((IData)(vlSelf->__VdfgTmp_hb5b42c0f__0) 
                         | (IData)(vlSelf->__VdfgTmp_h2aa42c51__0))));
    vlSelf->__PVT__ltl1c1_w_out_2 = ((IData)(vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl1c1__DOT__ltl1c1_ste_2__DOT__internal_reg) 
                                     & ((IData)(vlSelf->__VdfgTmp_hb5b42c0f__0) 
                                        | (((6U <= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__6__KET____DOT__lane__DOT__c1_i)) 
                                            & (7U >= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__6__KET____DOT__lane__DOT__c1_i))) 
                                           | ((IData)(vlSelf->__VdfgTmp_h2aa42c51__0) 
                                              | (0xeU 
                                                 <= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__6__KET____DOT__lane__DOT__c1_i))))));
    vlSelf->automata_stage0c1__DOT__automata_ltl0c1__DOT____Vcellinp__ltl0c1_ste_8__income_edges 
        = ((((IData)(vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl0c1__DOT__ltl0c1_ste_8__DOT__internal_reg) 
             & (3U >= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__6__KET____DOT__lane__DOT__c1_i))) 
            << 1U) | ((IData)(vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl0c1__DOT__ltl0c1_ste_5__DOT__internal_reg) 
                      & (IData)(vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl0c1__DOT__lut_match_ltl0c1_6__DOT__match_internal)));
    vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl0c1__DOT__lut_match_ltl0c1_2__DOT__match_internal 
        = ((IData)(vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl0c1__DOT__lut_match_ltl0c1_6__DOT__match_internal) 
           | (0xcU <= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__6__KET____DOT__lane__DOT__c1_i)));
    vlSelf->automata_stage0c1__DOT__automata_ltl2c1__DOT____Vcellinp__ltl2c1_ste_4__income_edges 
        = ((((IData)(vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl2c1__DOT__ltl2c1_ste_2__DOT__internal_reg) 
             & ((IData)(vlSelf->__VdfgTmp_hb30bd723__0) 
                | ((IData)(vlSelf->__VdfgTmp_he9b10395__0) 
                   | ((IData)(vlSelf->__VdfgTmp_hd3ae48ab__0) 
                      | (IData)(vlSelf->__VdfgTmp_h8f083f76__0))))) 
            << 1U) | ((IData)(vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl2c1__DOT__ltl2c1_ste_4__DOT__internal_reg) 
                      & (IData)(vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl2c1__DOT__lut_match_ltl2c1_1__DOT__match_internal)));
    vlSelf->__PVT__ltl2c1_w_out_9 = ((IData)(vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl2c1__DOT__ltl2c1_ste_8__DOT__internal_reg) 
                                     & ((IData)(vlSelf->__VdfgTmp_hb30bd723__0) 
                                        | ((IData)(vlSelf->__VdfgTmp_he9b10395__0) 
                                           | ((IData)(vlSelf->__VdfgTmp_hd3ae48ab__0) 
                                              | (7U 
                                                 <= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__6__KET____DOT__lane__DOT__c1_i))))));
    vlSelf->__PVT__ltl2c1_w_out_5 = ((IData)(vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl2c1__DOT__ltl2c1_ste_4__DOT__internal_reg) 
                                     & ((IData)(vlSelf->__VdfgTmp_hb30bd723__0) 
                                        | ((IData)(vlSelf->__VdfgTmp_he9b10395__0) 
                                           | ((IData)(vlSelf->__VdfgTmp_hd3ae48ab__0) 
                                              | ((IData)(vlSelf->__VdfgTmp_h8f083f76__0) 
                                                 | (((9U 
                                                      <= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__6__KET____DOT__lane__DOT__c1_i)) 
                                                     & (9U 
                                                        >= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__6__KET____DOT__lane__DOT__c1_i))) 
                                                    | (((0xbU 
                                                         <= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__6__KET____DOT__lane__DOT__c1_i)) 
                                                        & (0xbU 
                                                           >= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__6__KET____DOT__lane__DOT__c1_i))) 
                                                       | (((0xdU 
                                                            <= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__6__KET____DOT__lane__DOT__c1_i)) 
                                                           & (0xdU 
                                                              >= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__6__KET____DOT__lane__DOT__c1_i))) 
                                                          | (0xfU 
                                                             <= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__6__KET____DOT__lane__DOT__c1_i))))))))));
    vlSelf->__PVT__ltl1c1_w_out_7 = ((IData)(vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl1c1__DOT__ltl1c1_ste_5__DOT__internal_reg) 
                                     & (IData)(vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl0c1__DOT__lut_match_ltl0c1_2__DOT__match_internal));
    vlSelf->__PVT__ltl0c1_w_out_2 = ((IData)(vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl0c1__DOT__ltl0c1_ste_2__DOT__internal_reg) 
                                     & (IData)(vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl0c1__DOT__lut_match_ltl0c1_2__DOT__match_internal));
    vlSelf->automata_stage0c1__DOT__automata_ltl2c1__DOT____Vcellinp__ltl2c1_ste_7__income_edges 
        = (((IData)(vlSelf->__PVT__ltl2c1_w_out_9) 
            << 3U) | (((IData)(vlSelf->__PVT__ltl2c1_w_out_3) 
                       << 2U) | (((IData)(vlSelf->__PVT__ltl2c1_w_out_5) 
                                  << 1U) | (IData)(vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl2c1__DOT__ltl2c1_ste_7__DOT__internal_reg))));
    vlSelf->automata_stage0c1__DOT__automata_ltl1c1__DOT____Vcellinp__ltl1c1_ste_4__income_edges 
        = (((IData)(vlSelf->__PVT__ltl1c1_w_out_9) 
            << 3U) | (((IData)(vlSelf->__PVT__ltl1c1_w_out_2) 
                       << 2U) | (((IData)(vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl1c1__DOT__ltl1c1_ste_4__DOT__internal_reg) 
                                  << 1U) | (IData)(vlSelf->__PVT__ltl1c1_w_out_7))));
    vlSelf->automata_stage0c1__DOT__automata_ltl0c1__DOT____Vcellinp__ltl0c1_ste_4__income_edges 
        = (((IData)(vlSelf->__PVT__ltl0c1_w_out_9) 
            << 3U) | (((IData)(vlSelf->__PVT__ltl0c1_w_out_2) 
                       << 2U) | (((IData)(vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl0c1__DOT__ltl0c1_ste_4__DOT__internal_reg) 
                                  << 1U) | (IData)(vlSelf->__PVT__ltl0c1_w_out_7))));
}

VL_INLINE_OPT void rm_tb_top_routerlinkedlist_Top_ModuleC1___nba_comb__TOP__rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__6__KET____DOT__lane__DOT__I0c1__2(rm_tb_top_routerlinkedlist_Top_ModuleC1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    rm_tb_top_routerlinkedlist__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            rm_tb_top_routerlinkedlist_Top_ModuleC1___nba_comb__TOP__rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__6__KET____DOT__lane__DOT__I0c1__2\n"); );
    // Body
    vlSelf->automata_stage0c1__DOT__automata_ltl0c1__DOT____Vcellinp__ltl0c1_ste_1__income_edges 
        = (((IData)(vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl2c1__DOT__start_of_data) 
            << 1U) | ((IData)(vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl0c1__DOT__ltl0c1_ste_1__DOT__internal_reg) 
                      & (3U >= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__6__KET____DOT__lane__DOT__c1_i))));
    vlSelf->automata_stage0c1__DOT__automata_ltl1c1__DOT____Vcellinp__ltl1c1_ste_1__income_edges 
        = (((IData)(vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl2c1__DOT__start_of_data) 
            << 1U) | ((IData)(vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl1c1__DOT__ltl1c1_ste_1__DOT__internal_reg) 
                      & (IData)(vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl1c1__DOT__lut_match_ltl1c1_1__DOT__match_internal)));
    vlSelf->automata_stage0c1__DOT__automata_ltl2c1__DOT____Vcellinp__ltl2c1_ste_1__income_edges 
        = (((IData)(vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl2c1__DOT__start_of_data) 
            << 1U) | ((IData)(vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl2c1__DOT__ltl2c1_ste_1__DOT__internal_reg) 
                      & (IData)(vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl2c1__DOT__lut_match_ltl2c1_1__DOT__match_internal)));
}

VL_INLINE_OPT void rm_tb_top_routerlinkedlist_Top_ModuleC1___nba_sequent__TOP__rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__6__KET____DOT__lane__DOT__I1c1__0(rm_tb_top_routerlinkedlist_Top_ModuleC1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    rm_tb_top_routerlinkedlist__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            rm_tb_top_routerlinkedlist_Top_ModuleC1___nba_sequent__TOP__rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__6__KET____DOT__lane__DOT__I1c1__0\n"); );
    // Body
    if (vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT____Vcellinp__genblk1__BRA__6__KET____DOT__lane__lane_reset_i) {
        vlSelf->__PVT__automata_stage0c1__DOT__out_reset = 1U;
        vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl2c1__DOT__start_of_data_reg = 1U;
        vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl0c1__DOT__ltl0c1_ste_3__DOT__internal_reg = 1U;
        vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl0c1__DOT__ltl0c1_ste_1__DOT__internal_reg = 1U;
        vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl2c1__DOT__ltl2c1_ste_1__DOT__internal_reg = 1U;
        vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl1c1__DOT__ltl1c1_ste_1__DOT__internal_reg = 1U;
        vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl1c1__DOT__ltl1c1_ste_3__DOT__internal_reg = 1U;
        vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl2c1__DOT__ltl2c1_ste_2__DOT__internal_reg = 1U;
        vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl0c1__DOT__ltl0c1_ste_2__DOT__internal_reg = 1U;
        vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl2c1__DOT__ltl2c1_ste_3__DOT__internal_reg = 1U;
        vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl1c1__DOT__ltl1c1_ste_2__DOT__internal_reg = 1U;
    } else {
        vlSelf->__PVT__automata_stage0c1__DOT__out_reset = 0U;
        vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl2c1__DOT__start_of_data_reg = 0U;
        vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl0c1__DOT__ltl0c1_ste_3__DOT__internal_reg 
            = (0U != (IData)(vlSelf->automata_stage0c1__DOT__automata_ltl0c1__DOT____Vcellinp__ltl0c1_ste_1__income_edges));
        vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl0c1__DOT__ltl0c1_ste_1__DOT__internal_reg 
            = (0U != (IData)(vlSelf->automata_stage0c1__DOT__automata_ltl0c1__DOT____Vcellinp__ltl0c1_ste_1__income_edges));
        vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl2c1__DOT__ltl2c1_ste_1__DOT__internal_reg 
            = (0U != (IData)(vlSelf->automata_stage0c1__DOT__automata_ltl2c1__DOT____Vcellinp__ltl2c1_ste_1__income_edges));
        vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl1c1__DOT__ltl1c1_ste_1__DOT__internal_reg 
            = (0U != (IData)(vlSelf->automata_stage0c1__DOT__automata_ltl1c1__DOT____Vcellinp__ltl1c1_ste_1__income_edges));
        vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl1c1__DOT__ltl1c1_ste_3__DOT__internal_reg 
            = (0U != (IData)(vlSelf->automata_stage0c1__DOT__automata_ltl1c1__DOT____Vcellinp__ltl1c1_ste_1__income_edges));
        vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl2c1__DOT__ltl2c1_ste_2__DOT__internal_reg 
            = (0U != (IData)(vlSelf->automata_stage0c1__DOT__automata_ltl2c1__DOT____Vcellinp__ltl2c1_ste_1__income_edges));
        vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl0c1__DOT__ltl0c1_ste_2__DOT__internal_reg 
            = (0U != (IData)(vlSelf->automata_stage0c1__DOT__automata_ltl0c1__DOT____Vcellinp__ltl0c1_ste_1__income_edges));
        vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl2c1__DOT__ltl2c1_ste_3__DOT__internal_reg 
            = (0U != (IData)(vlSelf->automata_stage0c1__DOT__automata_ltl2c1__DOT____Vcellinp__ltl2c1_ste_1__income_edges));
        vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl1c1__DOT__ltl1c1_ste_2__DOT__internal_reg 
            = (0U != (IData)(vlSelf->automata_stage0c1__DOT__automata_ltl1c1__DOT____Vcellinp__ltl1c1_ste_1__income_edges));
        if (vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl2c1__DOT__start_of_data) {
            vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl0c1__DOT__ltl0c1_ste_3__DOT__internal_reg = 1U;
            vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl0c1__DOT__ltl0c1_ste_1__DOT__internal_reg = 1U;
            vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl2c1__DOT__ltl2c1_ste_1__DOT__internal_reg = 1U;
            vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl1c1__DOT__ltl1c1_ste_1__DOT__internal_reg = 1U;
            vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl1c1__DOT__ltl1c1_ste_3__DOT__internal_reg = 1U;
            vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl2c1__DOT__ltl2c1_ste_2__DOT__internal_reg = 1U;
            vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl0c1__DOT__ltl0c1_ste_2__DOT__internal_reg = 1U;
            vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl2c1__DOT__ltl2c1_ste_3__DOT__internal_reg = 1U;
            vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl1c1__DOT__ltl1c1_ste_2__DOT__internal_reg = 1U;
        }
    }
    vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl0c1__DOT__ltl0c1_ste_4__DOT__internal_reg 
        = ((~ (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT____Vcellinp__genblk1__BRA__6__KET____DOT__lane__lane_reset_i)) 
           & (0U != (IData)(vlSelf->automata_stage0c1__DOT__automata_ltl0c1__DOT____Vcellinp__ltl0c1_ste_4__income_edges)));
    vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl2c1__DOT__ltl2c1_ste_7__DOT__internal_reg 
        = ((~ (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT____Vcellinp__genblk1__BRA__6__KET____DOT__lane__lane_reset_i)) 
           & (0U != (IData)(vlSelf->automata_stage0c1__DOT__automata_ltl2c1__DOT____Vcellinp__ltl2c1_ste_7__income_edges)));
    vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl1c1__DOT__ltl1c1_ste_4__DOT__internal_reg 
        = ((~ (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT____Vcellinp__genblk1__BRA__6__KET____DOT__lane__lane_reset_i)) 
           & (0U != (IData)(vlSelf->automata_stage0c1__DOT__automata_ltl1c1__DOT____Vcellinp__ltl1c1_ste_4__income_edges)));
    vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl0c1__DOT__ltl0c1_ste_8__DOT__internal_reg 
        = ((~ (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT____Vcellinp__genblk1__BRA__6__KET____DOT__lane__lane_reset_i)) 
           & (0U != (IData)(vlSelf->automata_stage0c1__DOT__automata_ltl0c1__DOT____Vcellinp__ltl0c1_ste_8__income_edges)));
    vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl1c1__DOT__ltl1c1_ste_8__DOT__internal_reg 
        = ((~ (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT____Vcellinp__genblk1__BRA__6__KET____DOT__lane__lane_reset_i)) 
           & (0U != (IData)(vlSelf->automata_stage0c1__DOT__automata_ltl1c1__DOT____Vcellinp__ltl1c1_ste_8__income_edges)));
    vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl2c1__DOT__ltl2c1_ste_8__DOT__internal_reg 
        = ((~ (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT____Vcellinp__genblk1__BRA__6__KET____DOT__lane__lane_reset_i)) 
           & (0U != (IData)(vlSelf->automata_stage0c1__DOT__automata_ltl2c1__DOT____Vcellinp__ltl2c1_ste_8__income_edges)));
    vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl0c1__DOT__ltl0c1_ste_5__DOT__internal_reg 
        = ((~ (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT____Vcellinp__genblk1__BRA__6__KET____DOT__lane__lane_reset_i)) 
           & (0U != (IData)(vlSelf->automata_stage0c1__DOT__automata_ltl0c1__DOT____Vcellinp__ltl0c1_ste_5__income_edges)));
    vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl1c1__DOT__ltl1c1_ste_5__DOT__internal_reg 
        = ((~ (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT____Vcellinp__genblk1__BRA__6__KET____DOT__lane__lane_reset_i)) 
           & (0U != (IData)(vlSelf->automata_stage0c1__DOT__automata_ltl1c1__DOT____Vcellinp__ltl1c1_ste_5__income_edges)));
    vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl2c1__DOT__ltl2c1_ste_4__DOT__internal_reg 
        = ((~ (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT____Vcellinp__genblk1__BRA__6__KET____DOT__lane__lane_reset_i)) 
           & (0U != (IData)(vlSelf->automata_stage0c1__DOT__automata_ltl2c1__DOT____Vcellinp__ltl2c1_ste_4__income_edges)));
    vlSelf->__PVT__automata_stage0c1__DOT__out_symbols 
        = vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__6__KET____DOT__lane__DOT__c3_i;
}

VL_INLINE_OPT void rm_tb_top_routerlinkedlist_Top_ModuleC1___nba_comb__TOP__rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__6__KET____DOT__lane__DOT__I1c1__1(rm_tb_top_routerlinkedlist_Top_ModuleC1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    rm_tb_top_routerlinkedlist__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            rm_tb_top_routerlinkedlist_Top_ModuleC1___nba_comb__TOP__rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__6__KET____DOT__lane__DOT__I1c1__1\n"); );
    // Body
    vlSelf->automata_stage0c1__DOT__automata_ltl0c1__DOT____Vcellinp__ltl0c1_ste_5__income_edges 
        = ((((IData)(vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl0c1__DOT__ltl0c1_ste_3__DOT__internal_reg) 
             & ((8U <= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__6__KET____DOT__lane__DOT__c3_i)) 
                & (0xbU >= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__6__KET____DOT__lane__DOT__c3_i)))) 
            << 1U) | ((IData)(vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl0c1__DOT__ltl0c1_ste_5__DOT__internal_reg) 
                      & (3U >= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__6__KET____DOT__lane__DOT__c3_i))));
    vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl1c1__DOT__lut_match_ltl1c1_1__DOT__match_internal 
        = ((1U >= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__6__KET____DOT__lane__DOT__c3_i)) 
           | ((8U <= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__6__KET____DOT__lane__DOT__c3_i)) 
              & (9U >= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__6__KET____DOT__lane__DOT__c3_i))));
    vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl2c1__DOT__lut_match_ltl2c1_1__DOT__match_internal 
        = ((0U >= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__6__KET____DOT__lane__DOT__c3_i)) 
           | (((2U <= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__6__KET____DOT__lane__DOT__c3_i)) 
               & (2U >= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__6__KET____DOT__lane__DOT__c3_i))) 
              | (((4U <= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__6__KET____DOT__lane__DOT__c3_i)) 
                  & (4U >= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__6__KET____DOT__lane__DOT__c3_i))) 
                 | ((6U <= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__6__KET____DOT__lane__DOT__c3_i)) 
                    & (6U >= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__6__KET____DOT__lane__DOT__c3_i))))));
    vlSelf->__PVT__ltl1c1_w_out_9 = ((IData)(vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl1c1__DOT__ltl1c1_ste_8__DOT__internal_reg) 
                                     & (((2U <= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__6__KET____DOT__lane__DOT__c3_i)) 
                                         & (7U >= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__6__KET____DOT__lane__DOT__c3_i))) 
                                        | (0xaU <= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__6__KET____DOT__lane__DOT__c3_i))));
    vlSelf->__PVT__ltl2c1_w_out_3 = ((IData)(vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl2c1__DOT__ltl2c1_ste_3__DOT__internal_reg) 
                                     & (8U <= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__6__KET____DOT__lane__DOT__c3_i)));
    vlSelf->__PVT__ltl0c1_w_out_7 = ((IData)(vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl0c1__DOT__ltl0c1_ste_5__DOT__internal_reg) 
                                     & (8U <= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__6__KET____DOT__lane__DOT__c3_i)));
    vlSelf->__PVT__ltl0c1_w_out_9 = ((IData)(vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl0c1__DOT__ltl0c1_ste_8__DOT__internal_reg) 
                                     & (4U <= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__6__KET____DOT__lane__DOT__c3_i)));
    vlSelf->__VdfgTmp_hb5b42c0f__0 = ((2U <= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__6__KET____DOT__lane__DOT__c3_i)) 
                                      & (3U >= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__6__KET____DOT__lane__DOT__c3_i)));
    vlSelf->__VdfgTmp_h2aa42c51__0 = ((0xaU <= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__6__KET____DOT__lane__DOT__c3_i)) 
                                      & (0xbU >= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__6__KET____DOT__lane__DOT__c3_i)));
    vlSelf->__VdfgTmp_h8f083f76__0 = ((7U <= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__6__KET____DOT__lane__DOT__c3_i)) 
                                      & (7U >= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__6__KET____DOT__lane__DOT__c3_i)));
    vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl0c1__DOT__lut_match_ltl0c1_6__DOT__match_internal 
        = ((4U <= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__6__KET____DOT__lane__DOT__c3_i)) 
           & (7U >= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__6__KET____DOT__lane__DOT__c3_i)));
    vlSelf->__VdfgTmp_hb30bd723__0 = ((1U <= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__6__KET____DOT__lane__DOT__c3_i)) 
                                      & (1U >= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__6__KET____DOT__lane__DOT__c3_i)));
    vlSelf->__VdfgTmp_he9b10395__0 = ((3U <= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__6__KET____DOT__lane__DOT__c3_i)) 
                                      & (3U >= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__6__KET____DOT__lane__DOT__c3_i)));
    vlSelf->__VdfgTmp_hd3ae48ab__0 = ((5U <= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__6__KET____DOT__lane__DOT__c3_i)) 
                                      & (5U >= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__6__KET____DOT__lane__DOT__c3_i)));
    vlSelf->automata_stage0c1__DOT__automata_ltl1c1__DOT____Vcellinp__ltl1c1_ste_5__income_edges 
        = ((((IData)(vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl1c1__DOT__ltl1c1_ste_3__DOT__internal_reg) 
             & (((4U <= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__6__KET____DOT__lane__DOT__c3_i)) 
                 & (5U >= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__6__KET____DOT__lane__DOT__c3_i))) 
                | ((0xcU <= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__6__KET____DOT__lane__DOT__c3_i)) 
                   & (0xdU >= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__6__KET____DOT__lane__DOT__c3_i))))) 
            << 1U) | ((IData)(vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl1c1__DOT__ltl1c1_ste_5__DOT__internal_reg) 
                      & (IData)(vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl1c1__DOT__lut_match_ltl1c1_1__DOT__match_internal)));
    vlSelf->automata_stage0c1__DOT__automata_ltl2c1__DOT____Vcellinp__ltl2c1_ste_8__income_edges 
        = ((((IData)(vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl2c1__DOT__ltl2c1_ste_8__DOT__internal_reg) 
             & (IData)(vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl2c1__DOT__lut_match_ltl2c1_1__DOT__match_internal)) 
            << 1U) | ((IData)(vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl2c1__DOT__ltl2c1_ste_4__DOT__internal_reg) 
                      & (((8U <= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__6__KET____DOT__lane__DOT__c3_i)) 
                          & (8U >= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__6__KET____DOT__lane__DOT__c3_i))) 
                         | (((0xaU <= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__6__KET____DOT__lane__DOT__c3_i)) 
                             & (0xaU >= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__6__KET____DOT__lane__DOT__c3_i))) 
                            | (((0xcU <= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__6__KET____DOT__lane__DOT__c3_i)) 
                                & (0xcU >= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__6__KET____DOT__lane__DOT__c3_i))) 
                               | ((0xeU <= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__6__KET____DOT__lane__DOT__c3_i)) 
                                  & (0xeU >= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__6__KET____DOT__lane__DOT__c3_i))))))));
    vlSelf->automata_stage0c1__DOT__automata_ltl1c1__DOT____Vcellinp__ltl1c1_ste_8__income_edges 
        = ((((IData)(vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl1c1__DOT__ltl1c1_ste_8__DOT__internal_reg) 
             & (IData)(vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl1c1__DOT__lut_match_ltl1c1_1__DOT__match_internal)) 
            << 1U) | ((IData)(vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl1c1__DOT__ltl1c1_ste_5__DOT__internal_reg) 
                      & ((IData)(vlSelf->__VdfgTmp_hb5b42c0f__0) 
                         | (IData)(vlSelf->__VdfgTmp_h2aa42c51__0))));
    vlSelf->__PVT__ltl1c1_w_out_2 = ((IData)(vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl1c1__DOT__ltl1c1_ste_2__DOT__internal_reg) 
                                     & ((IData)(vlSelf->__VdfgTmp_hb5b42c0f__0) 
                                        | (((6U <= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__6__KET____DOT__lane__DOT__c3_i)) 
                                            & (7U >= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__6__KET____DOT__lane__DOT__c3_i))) 
                                           | ((IData)(vlSelf->__VdfgTmp_h2aa42c51__0) 
                                              | (0xeU 
                                                 <= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__6__KET____DOT__lane__DOT__c3_i))))));
    vlSelf->automata_stage0c1__DOT__automata_ltl0c1__DOT____Vcellinp__ltl0c1_ste_8__income_edges 
        = ((((IData)(vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl0c1__DOT__ltl0c1_ste_8__DOT__internal_reg) 
             & (3U >= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__6__KET____DOT__lane__DOT__c3_i))) 
            << 1U) | ((IData)(vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl0c1__DOT__ltl0c1_ste_5__DOT__internal_reg) 
                      & (IData)(vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl0c1__DOT__lut_match_ltl0c1_6__DOT__match_internal)));
    vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl0c1__DOT__lut_match_ltl0c1_2__DOT__match_internal 
        = ((IData)(vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl0c1__DOT__lut_match_ltl0c1_6__DOT__match_internal) 
           | (0xcU <= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__6__KET____DOT__lane__DOT__c3_i)));
    vlSelf->automata_stage0c1__DOT__automata_ltl2c1__DOT____Vcellinp__ltl2c1_ste_4__income_edges 
        = ((((IData)(vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl2c1__DOT__ltl2c1_ste_2__DOT__internal_reg) 
             & ((IData)(vlSelf->__VdfgTmp_hb30bd723__0) 
                | ((IData)(vlSelf->__VdfgTmp_he9b10395__0) 
                   | ((IData)(vlSelf->__VdfgTmp_hd3ae48ab__0) 
                      | (IData)(vlSelf->__VdfgTmp_h8f083f76__0))))) 
            << 1U) | ((IData)(vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl2c1__DOT__ltl2c1_ste_4__DOT__internal_reg) 
                      & (IData)(vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl2c1__DOT__lut_match_ltl2c1_1__DOT__match_internal)));
    vlSelf->__PVT__ltl2c1_w_out_9 = ((IData)(vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl2c1__DOT__ltl2c1_ste_8__DOT__internal_reg) 
                                     & ((IData)(vlSelf->__VdfgTmp_hb30bd723__0) 
                                        | ((IData)(vlSelf->__VdfgTmp_he9b10395__0) 
                                           | ((IData)(vlSelf->__VdfgTmp_hd3ae48ab__0) 
                                              | (7U 
                                                 <= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__6__KET____DOT__lane__DOT__c3_i))))));
    vlSelf->__PVT__ltl2c1_w_out_5 = ((IData)(vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl2c1__DOT__ltl2c1_ste_4__DOT__internal_reg) 
                                     & ((IData)(vlSelf->__VdfgTmp_hb30bd723__0) 
                                        | ((IData)(vlSelf->__VdfgTmp_he9b10395__0) 
                                           | ((IData)(vlSelf->__VdfgTmp_hd3ae48ab__0) 
                                              | ((IData)(vlSelf->__VdfgTmp_h8f083f76__0) 
                                                 | (((9U 
                                                      <= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__6__KET____DOT__lane__DOT__c3_i)) 
                                                     & (9U 
                                                        >= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__6__KET____DOT__lane__DOT__c3_i))) 
                                                    | (((0xbU 
                                                         <= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__6__KET____DOT__lane__DOT__c3_i)) 
                                                        & (0xbU 
                                                           >= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__6__KET____DOT__lane__DOT__c3_i))) 
                                                       | (((0xdU 
                                                            <= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__6__KET____DOT__lane__DOT__c3_i)) 
                                                           & (0xdU 
                                                              >= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__6__KET____DOT__lane__DOT__c3_i))) 
                                                          | (0xfU 
                                                             <= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__6__KET____DOT__lane__DOT__c3_i))))))))));
    vlSelf->__PVT__ltl1c1_w_out_7 = ((IData)(vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl1c1__DOT__ltl1c1_ste_5__DOT__internal_reg) 
                                     & (IData)(vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl0c1__DOT__lut_match_ltl0c1_2__DOT__match_internal));
    vlSelf->__PVT__ltl0c1_w_out_2 = ((IData)(vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl0c1__DOT__ltl0c1_ste_2__DOT__internal_reg) 
                                     & (IData)(vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl0c1__DOT__lut_match_ltl0c1_2__DOT__match_internal));
    vlSelf->automata_stage0c1__DOT__automata_ltl2c1__DOT____Vcellinp__ltl2c1_ste_7__income_edges 
        = (((IData)(vlSelf->__PVT__ltl2c1_w_out_9) 
            << 3U) | (((IData)(vlSelf->__PVT__ltl2c1_w_out_3) 
                       << 2U) | (((IData)(vlSelf->__PVT__ltl2c1_w_out_5) 
                                  << 1U) | (IData)(vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl2c1__DOT__ltl2c1_ste_7__DOT__internal_reg))));
    vlSelf->automata_stage0c1__DOT__automata_ltl1c1__DOT____Vcellinp__ltl1c1_ste_4__income_edges 
        = (((IData)(vlSelf->__PVT__ltl1c1_w_out_9) 
            << 3U) | (((IData)(vlSelf->__PVT__ltl1c1_w_out_2) 
                       << 2U) | (((IData)(vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl1c1__DOT__ltl1c1_ste_4__DOT__internal_reg) 
                                  << 1U) | (IData)(vlSelf->__PVT__ltl1c1_w_out_7))));
    vlSelf->automata_stage0c1__DOT__automata_ltl0c1__DOT____Vcellinp__ltl0c1_ste_4__income_edges 
        = (((IData)(vlSelf->__PVT__ltl0c1_w_out_9) 
            << 3U) | (((IData)(vlSelf->__PVT__ltl0c1_w_out_2) 
                       << 2U) | (((IData)(vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl0c1__DOT__ltl0c1_ste_4__DOT__internal_reg) 
                                  << 1U) | (IData)(vlSelf->__PVT__ltl0c1_w_out_7))));
}

VL_INLINE_OPT void rm_tb_top_routerlinkedlist_Top_ModuleC1___nba_comb__TOP__rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__6__KET____DOT__lane__DOT__I1c1__2(rm_tb_top_routerlinkedlist_Top_ModuleC1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    rm_tb_top_routerlinkedlist__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            rm_tb_top_routerlinkedlist_Top_ModuleC1___nba_comb__TOP__rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__6__KET____DOT__lane__DOT__I1c1__2\n"); );
    // Body
    vlSelf->automata_stage0c1__DOT__automata_ltl0c1__DOT____Vcellinp__ltl0c1_ste_1__income_edges 
        = (((IData)(vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl2c1__DOT__start_of_data) 
            << 1U) | ((IData)(vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl0c1__DOT__ltl0c1_ste_1__DOT__internal_reg) 
                      & (3U >= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__6__KET____DOT__lane__DOT__c3_i))));
    vlSelf->automata_stage0c1__DOT__automata_ltl1c1__DOT____Vcellinp__ltl1c1_ste_1__income_edges 
        = (((IData)(vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl2c1__DOT__start_of_data) 
            << 1U) | ((IData)(vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl1c1__DOT__ltl1c1_ste_1__DOT__internal_reg) 
                      & (IData)(vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl1c1__DOT__lut_match_ltl1c1_1__DOT__match_internal)));
    vlSelf->automata_stage0c1__DOT__automata_ltl2c1__DOT____Vcellinp__ltl2c1_ste_1__income_edges 
        = (((IData)(vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl2c1__DOT__start_of_data) 
            << 1U) | ((IData)(vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl2c1__DOT__ltl2c1_ste_1__DOT__internal_reg) 
                      & (IData)(vlSelf->__PVT__automata_stage0c1__DOT__automata_ltl2c1__DOT__lut_match_ltl2c1_1__DOT__match_internal)));
}
