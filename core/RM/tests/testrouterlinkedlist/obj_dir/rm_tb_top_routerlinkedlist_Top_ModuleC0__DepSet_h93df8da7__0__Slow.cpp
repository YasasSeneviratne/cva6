// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See rm_tb_top_routerlinkedlist.h for the primary calling header

#include "verilated.h"

#include "rm_tb_top_routerlinkedlist_Top_ModuleC0.h"
#include "rm_tb_top_routerlinkedlist__Syms.h"

VL_ATTR_COLD void rm_tb_top_routerlinkedlist_Top_ModuleC0___stl_sequent__TOP__rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__0__KET____DOT__lane__DOT__I0c0__0(rm_tb_top_routerlinkedlist_Top_ModuleC0* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    rm_tb_top_routerlinkedlist__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            rm_tb_top_routerlinkedlist_Top_ModuleC0___stl_sequent__TOP__rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__0__KET____DOT__lane__DOT__I0c0__0\n"); );
    // Body
    vlSelf->__PVT__automata_stage0__DOT__automata_ltl1c0__DOT__start_of_data 
        = ((IData)(vlSelf->__PVT__automata_stage0__DOT__automata_ltl1c0__DOT__start_of_data_reg) 
           & ((~ (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT____Vcellinp__genblk1__BRA__0__KET____DOT__lane__lane_reset_i)) 
              & (IData)(vlSelf->__PVT__automata_stage0__DOT__automata_ltl1c0__DOT__start_of_data_reg_ne)));
    vlSelf->__PVT__automata_stage0__DOT__automata_ltl0c0__DOT__lut_match_ltl0c0_1__DOT__match_internal 
        = ((1U >= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__0__KET____DOT__lane__DOT__c0_i)) 
           | ((8U <= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__0__KET____DOT__lane__DOT__c0_i)) 
              & (9U >= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__0__KET____DOT__lane__DOT__c0_i))));
    vlSelf->__PVT__automata_stage0__DOT__automata_ltl1c0__DOT__lut_match_ltl1c0_1__DOT__match_internal 
        = ((0U >= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__0__KET____DOT__lane__DOT__c0_i)) 
           | (((2U <= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__0__KET____DOT__lane__DOT__c0_i)) 
               & (2U >= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__0__KET____DOT__lane__DOT__c0_i))) 
              | (((8U <= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__0__KET____DOT__lane__DOT__c0_i)) 
                  & (8U >= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__0__KET____DOT__lane__DOT__c0_i))) 
                 | ((0xaU <= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__0__KET____DOT__lane__DOT__c0_i)) 
                    & (0xaU >= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__0__KET____DOT__lane__DOT__c0_i))))));
    vlSelf->__PVT__ltl0c0_w_out_9 = ((IData)(vlSelf->__PVT__automata_stage0__DOT__automata_ltl0c0__DOT__ltl0c0_ste_8__DOT__internal_reg) 
                                     & (((2U <= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__0__KET____DOT__lane__DOT__c0_i)) 
                                         & (7U >= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__0__KET____DOT__lane__DOT__c0_i))) 
                                        | (0xaU <= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__0__KET____DOT__lane__DOT__c0_i))));
    vlSelf->__VdfgTmp_hb5b42c0f__0 = ((2U <= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__0__KET____DOT__lane__DOT__c0_i)) 
                                      & (3U >= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__0__KET____DOT__lane__DOT__c0_i)));
    vlSelf->__VdfgTmp_h2aa42c51__0 = ((0xaU <= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__0__KET____DOT__lane__DOT__c0_i)) 
                                      & (0xbU >= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__0__KET____DOT__lane__DOT__c0_i)));
    vlSelf->__VdfgTmp_he9b10395__0 = ((3U <= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__0__KET____DOT__lane__DOT__c0_i)) 
                                      & (3U >= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__0__KET____DOT__lane__DOT__c0_i)));
    vlSelf->__VdfgTmp_hc765a5f5__0 = ((0xbU <= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__0__KET____DOT__lane__DOT__c0_i)) 
                                      & (0xbU >= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__0__KET____DOT__lane__DOT__c0_i)));
    vlSelf->__PVT__automata_stage0__DOT__automata_ltl0c0__DOT__lut_match_ltl0c0_7__DOT__match_internal 
        = (((4U <= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__0__KET____DOT__lane__DOT__c0_i)) 
            & (7U >= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__0__KET____DOT__lane__DOT__c0_i))) 
           | (0xcU <= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__0__KET____DOT__lane__DOT__c0_i)));
    vlSelf->__VdfgTmp_hb30bd723__0 = ((1U <= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__0__KET____DOT__lane__DOT__c0_i)) 
                                      & (1U >= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__0__KET____DOT__lane__DOT__c0_i)));
    vlSelf->__VdfgTmp_h2a7bf321__0 = ((9U <= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__0__KET____DOT__lane__DOT__c0_i)) 
                                      & (9U >= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__0__KET____DOT__lane__DOT__c0_i)));
    vlSelf->automata_stage0__DOT__automata_ltl0c0__DOT____Vcellinp__ltl0c0_ste_1__income_edges 
        = (((IData)(vlSelf->__PVT__automata_stage0__DOT__automata_ltl1c0__DOT__start_of_data) 
            << 1U) | ((IData)(vlSelf->__PVT__automata_stage0__DOT__automata_ltl0c0__DOT__ltl0c0_ste_1__DOT__internal_reg) 
                      & (IData)(vlSelf->__PVT__automata_stage0__DOT__automata_ltl0c0__DOT__lut_match_ltl0c0_1__DOT__match_internal)));
    vlSelf->automata_stage0__DOT__automata_ltl0c0__DOT____Vcellinp__ltl0c0_ste_5__income_edges 
        = ((((IData)(vlSelf->__PVT__automata_stage0__DOT__automata_ltl0c0__DOT__ltl0c0_ste_3__DOT__internal_reg) 
             & (((4U <= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__0__KET____DOT__lane__DOT__c0_i)) 
                 & (5U >= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__0__KET____DOT__lane__DOT__c0_i))) 
                | ((0xcU <= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__0__KET____DOT__lane__DOT__c0_i)) 
                   & (0xdU >= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__0__KET____DOT__lane__DOT__c0_i))))) 
            << 1U) | ((IData)(vlSelf->__PVT__automata_stage0__DOT__automata_ltl0c0__DOT__ltl0c0_ste_5__DOT__internal_reg) 
                      & (IData)(vlSelf->__PVT__automata_stage0__DOT__automata_ltl0c0__DOT__lut_match_ltl0c0_1__DOT__match_internal)));
    vlSelf->automata_stage0__DOT__automata_ltl1c0__DOT____Vcellinp__ltl1c0_ste_1__income_edges 
        = (((IData)(vlSelf->__PVT__automata_stage0__DOT__automata_ltl1c0__DOT__start_of_data) 
            << 1U) | ((IData)(vlSelf->__PVT__automata_stage0__DOT__automata_ltl1c0__DOT__ltl1c0_ste_1__DOT__internal_reg) 
                      & (IData)(vlSelf->__PVT__automata_stage0__DOT__automata_ltl1c0__DOT__lut_match_ltl1c0_1__DOT__match_internal)));
    vlSelf->automata_stage0__DOT__automata_ltl1c0__DOT____Vcellinp__ltl1c0_ste_8__income_edges 
        = ((((IData)(vlSelf->__PVT__automata_stage0__DOT__automata_ltl1c0__DOT__ltl1c0_ste_8__DOT__internal_reg) 
             & (IData)(vlSelf->__PVT__automata_stage0__DOT__automata_ltl1c0__DOT__lut_match_ltl1c0_1__DOT__match_internal)) 
            << 1U) | ((IData)(vlSelf->__PVT__automata_stage0__DOT__automata_ltl1c0__DOT__ltl1c0_ste_4__DOT__internal_reg) 
                      & (((4U <= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__0__KET____DOT__lane__DOT__c0_i)) 
                          & (4U >= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__0__KET____DOT__lane__DOT__c0_i))) 
                         | (((6U <= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__0__KET____DOT__lane__DOT__c0_i)) 
                             & (6U >= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__0__KET____DOT__lane__DOT__c0_i))) 
                            | (((0xcU <= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__0__KET____DOT__lane__DOT__c0_i)) 
                                & (0xcU >= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__0__KET____DOT__lane__DOT__c0_i))) 
                               | ((0xeU <= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__0__KET____DOT__lane__DOT__c0_i)) 
                                  & (0xeU >= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__0__KET____DOT__lane__DOT__c0_i))))))));
    vlSelf->automata_stage0__DOT__automata_ltl0c0__DOT____Vcellinp__ltl0c0_ste_8__income_edges 
        = ((((IData)(vlSelf->__PVT__automata_stage0__DOT__automata_ltl0c0__DOT__ltl0c0_ste_8__DOT__internal_reg) 
             & (IData)(vlSelf->__PVT__automata_stage0__DOT__automata_ltl0c0__DOT__lut_match_ltl0c0_1__DOT__match_internal)) 
            << 1U) | ((IData)(vlSelf->__PVT__automata_stage0__DOT__automata_ltl0c0__DOT__ltl0c0_ste_5__DOT__internal_reg) 
                      & ((IData)(vlSelf->__VdfgTmp_hb5b42c0f__0) 
                         | (IData)(vlSelf->__VdfgTmp_h2aa42c51__0))));
    vlSelf->__PVT__ltl0c0_w_out_2 = ((IData)(vlSelf->__PVT__automata_stage0__DOT__automata_ltl0c0__DOT__ltl0c0_ste_2__DOT__internal_reg) 
                                     & ((IData)(vlSelf->__VdfgTmp_hb5b42c0f__0) 
                                        | (((6U <= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__0__KET____DOT__lane__DOT__c0_i)) 
                                            & (7U >= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__0__KET____DOT__lane__DOT__c0_i))) 
                                           | ((IData)(vlSelf->__VdfgTmp_h2aa42c51__0) 
                                              | (0xeU 
                                                 <= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__0__KET____DOT__lane__DOT__c0_i))))));
    vlSelf->__PVT__ltl0c0_w_out_7 = ((IData)(vlSelf->__PVT__automata_stage0__DOT__automata_ltl0c0__DOT__ltl0c0_ste_5__DOT__internal_reg) 
                                     & (IData)(vlSelf->__PVT__automata_stage0__DOT__automata_ltl0c0__DOT__lut_match_ltl0c0_7__DOT__match_internal));
    vlSelf->__PVT__ltl1c0_w_out_3 = ((IData)(vlSelf->__PVT__automata_stage0__DOT__automata_ltl1c0__DOT__ltl1c0_ste_3__DOT__internal_reg) 
                                     & (IData)(vlSelf->__PVT__automata_stage0__DOT__automata_ltl0c0__DOT__lut_match_ltl0c0_7__DOT__match_internal));
    vlSelf->automata_stage0__DOT__automata_ltl1c0__DOT____Vcellinp__ltl1c0_ste_4__income_edges 
        = ((((IData)(vlSelf->__PVT__automata_stage0__DOT__automata_ltl1c0__DOT__ltl1c0_ste_2__DOT__internal_reg) 
             & ((IData)(vlSelf->__VdfgTmp_hb30bd723__0) 
                | ((IData)(vlSelf->__VdfgTmp_he9b10395__0) 
                   | ((IData)(vlSelf->__VdfgTmp_h2a7bf321__0) 
                      | (IData)(vlSelf->__VdfgTmp_hc765a5f5__0))))) 
            << 1U) | ((IData)(vlSelf->__PVT__automata_stage0__DOT__automata_ltl1c0__DOT__ltl1c0_ste_4__DOT__internal_reg) 
                      & (IData)(vlSelf->__PVT__automata_stage0__DOT__automata_ltl1c0__DOT__lut_match_ltl1c0_1__DOT__match_internal)));
    vlSelf->__PVT__ltl1c0_w_out_9 = ((IData)(vlSelf->__PVT__automata_stage0__DOT__automata_ltl1c0__DOT__ltl1c0_ste_8__DOT__internal_reg) 
                                     & ((IData)(vlSelf->__VdfgTmp_hb30bd723__0) 
                                        | (((3U <= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__0__KET____DOT__lane__DOT__c0_i)) 
                                            & (7U >= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__0__KET____DOT__lane__DOT__c0_i))) 
                                           | ((IData)(vlSelf->__VdfgTmp_h2a7bf321__0) 
                                              | (0xbU 
                                                 <= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__0__KET____DOT__lane__DOT__c0_i))))));
    vlSelf->__PVT__ltl1c0_w_out_5 = ((IData)(vlSelf->__PVT__automata_stage0__DOT__automata_ltl1c0__DOT__ltl1c0_ste_4__DOT__internal_reg) 
                                     & ((IData)(vlSelf->__VdfgTmp_hb30bd723__0) 
                                        | ((IData)(vlSelf->__VdfgTmp_he9b10395__0) 
                                           | (((5U 
                                                <= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__0__KET____DOT__lane__DOT__c0_i)) 
                                               & (5U 
                                                  >= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__0__KET____DOT__lane__DOT__c0_i))) 
                                              | (((7U 
                                                   <= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__0__KET____DOT__lane__DOT__c0_i)) 
                                                  & (7U 
                                                     >= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__0__KET____DOT__lane__DOT__c0_i))) 
                                                 | ((IData)(vlSelf->__VdfgTmp_h2a7bf321__0) 
                                                    | ((IData)(vlSelf->__VdfgTmp_hc765a5f5__0) 
                                                       | (((0xdU 
                                                            <= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__0__KET____DOT__lane__DOT__c0_i)) 
                                                           & (0xdU 
                                                              >= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__0__KET____DOT__lane__DOT__c0_i))) 
                                                          | (0xfU 
                                                             <= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__0__KET____DOT__lane__DOT__c0_i))))))))));
    vlSelf->automata_stage0__DOT__automata_ltl0c0__DOT____Vcellinp__ltl0c0_ste_4__income_edges 
        = (((IData)(vlSelf->__PVT__ltl0c0_w_out_9) 
            << 3U) | (((IData)(vlSelf->__PVT__ltl0c0_w_out_2) 
                       << 2U) | (((IData)(vlSelf->__PVT__automata_stage0__DOT__automata_ltl0c0__DOT__ltl0c0_ste_4__DOT__internal_reg) 
                                  << 1U) | (IData)(vlSelf->__PVT__ltl0c0_w_out_7))));
    vlSelf->automata_stage0__DOT__automata_ltl1c0__DOT____Vcellinp__ltl1c0_ste_7__income_edges 
        = (((IData)(vlSelf->__PVT__ltl1c0_w_out_9) 
            << 3U) | (((IData)(vlSelf->__PVT__ltl1c0_w_out_3) 
                       << 2U) | (((IData)(vlSelf->__PVT__ltl1c0_w_out_5) 
                                  << 1U) | (IData)(vlSelf->__PVT__automata_stage0__DOT__automata_ltl1c0__DOT__ltl1c0_ste_7__DOT__internal_reg))));
}

VL_ATTR_COLD void rm_tb_top_routerlinkedlist_Top_ModuleC0___stl_sequent__TOP__rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__0__KET____DOT__lane__DOT__I1c0__0(rm_tb_top_routerlinkedlist_Top_ModuleC0* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    rm_tb_top_routerlinkedlist__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            rm_tb_top_routerlinkedlist_Top_ModuleC0___stl_sequent__TOP__rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__0__KET____DOT__lane__DOT__I1c0__0\n"); );
    // Body
    vlSelf->__PVT__automata_stage0__DOT__automata_ltl1c0__DOT__start_of_data 
        = ((IData)(vlSelf->__PVT__automata_stage0__DOT__automata_ltl1c0__DOT__start_of_data_reg) 
           & ((~ (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT____Vcellinp__genblk1__BRA__0__KET____DOT__lane__lane_reset_i)) 
              & (IData)(vlSelf->__PVT__automata_stage0__DOT__automata_ltl1c0__DOT__start_of_data_reg_ne)));
    vlSelf->__PVT__automata_stage0__DOT__automata_ltl0c0__DOT__lut_match_ltl0c0_1__DOT__match_internal 
        = ((1U >= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__0__KET____DOT__lane__DOT__c2_i)) 
           | ((8U <= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__0__KET____DOT__lane__DOT__c2_i)) 
              & (9U >= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__0__KET____DOT__lane__DOT__c2_i))));
    vlSelf->__PVT__automata_stage0__DOT__automata_ltl1c0__DOT__lut_match_ltl1c0_1__DOT__match_internal 
        = ((0U >= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__0__KET____DOT__lane__DOT__c2_i)) 
           | (((2U <= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__0__KET____DOT__lane__DOT__c2_i)) 
               & (2U >= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__0__KET____DOT__lane__DOT__c2_i))) 
              | (((8U <= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__0__KET____DOT__lane__DOT__c2_i)) 
                  & (8U >= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__0__KET____DOT__lane__DOT__c2_i))) 
                 | ((0xaU <= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__0__KET____DOT__lane__DOT__c2_i)) 
                    & (0xaU >= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__0__KET____DOT__lane__DOT__c2_i))))));
    vlSelf->__PVT__ltl0c0_w_out_9 = ((IData)(vlSelf->__PVT__automata_stage0__DOT__automata_ltl0c0__DOT__ltl0c0_ste_8__DOT__internal_reg) 
                                     & (((2U <= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__0__KET____DOT__lane__DOT__c2_i)) 
                                         & (7U >= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__0__KET____DOT__lane__DOT__c2_i))) 
                                        | (0xaU <= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__0__KET____DOT__lane__DOT__c2_i))));
    vlSelf->__VdfgTmp_hb5b42c0f__0 = ((2U <= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__0__KET____DOT__lane__DOT__c2_i)) 
                                      & (3U >= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__0__KET____DOT__lane__DOT__c2_i)));
    vlSelf->__VdfgTmp_h2aa42c51__0 = ((0xaU <= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__0__KET____DOT__lane__DOT__c2_i)) 
                                      & (0xbU >= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__0__KET____DOT__lane__DOT__c2_i)));
    vlSelf->__VdfgTmp_he9b10395__0 = ((3U <= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__0__KET____DOT__lane__DOT__c2_i)) 
                                      & (3U >= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__0__KET____DOT__lane__DOT__c2_i)));
    vlSelf->__VdfgTmp_hc765a5f5__0 = ((0xbU <= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__0__KET____DOT__lane__DOT__c2_i)) 
                                      & (0xbU >= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__0__KET____DOT__lane__DOT__c2_i)));
    vlSelf->__PVT__automata_stage0__DOT__automata_ltl0c0__DOT__lut_match_ltl0c0_7__DOT__match_internal 
        = (((4U <= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__0__KET____DOT__lane__DOT__c2_i)) 
            & (7U >= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__0__KET____DOT__lane__DOT__c2_i))) 
           | (0xcU <= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__0__KET____DOT__lane__DOT__c2_i)));
    vlSelf->__VdfgTmp_hb30bd723__0 = ((1U <= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__0__KET____DOT__lane__DOT__c2_i)) 
                                      & (1U >= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__0__KET____DOT__lane__DOT__c2_i)));
    vlSelf->__VdfgTmp_h2a7bf321__0 = ((9U <= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__0__KET____DOT__lane__DOT__c2_i)) 
                                      & (9U >= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__0__KET____DOT__lane__DOT__c2_i)));
    vlSelf->automata_stage0__DOT__automata_ltl0c0__DOT____Vcellinp__ltl0c0_ste_1__income_edges 
        = (((IData)(vlSelf->__PVT__automata_stage0__DOT__automata_ltl1c0__DOT__start_of_data) 
            << 1U) | ((IData)(vlSelf->__PVT__automata_stage0__DOT__automata_ltl0c0__DOT__ltl0c0_ste_1__DOT__internal_reg) 
                      & (IData)(vlSelf->__PVT__automata_stage0__DOT__automata_ltl0c0__DOT__lut_match_ltl0c0_1__DOT__match_internal)));
    vlSelf->automata_stage0__DOT__automata_ltl0c0__DOT____Vcellinp__ltl0c0_ste_5__income_edges 
        = ((((IData)(vlSelf->__PVT__automata_stage0__DOT__automata_ltl0c0__DOT__ltl0c0_ste_3__DOT__internal_reg) 
             & (((4U <= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__0__KET____DOT__lane__DOT__c2_i)) 
                 & (5U >= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__0__KET____DOT__lane__DOT__c2_i))) 
                | ((0xcU <= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__0__KET____DOT__lane__DOT__c2_i)) 
                   & (0xdU >= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__0__KET____DOT__lane__DOT__c2_i))))) 
            << 1U) | ((IData)(vlSelf->__PVT__automata_stage0__DOT__automata_ltl0c0__DOT__ltl0c0_ste_5__DOT__internal_reg) 
                      & (IData)(vlSelf->__PVT__automata_stage0__DOT__automata_ltl0c0__DOT__lut_match_ltl0c0_1__DOT__match_internal)));
    vlSelf->automata_stage0__DOT__automata_ltl1c0__DOT____Vcellinp__ltl1c0_ste_1__income_edges 
        = (((IData)(vlSelf->__PVT__automata_stage0__DOT__automata_ltl1c0__DOT__start_of_data) 
            << 1U) | ((IData)(vlSelf->__PVT__automata_stage0__DOT__automata_ltl1c0__DOT__ltl1c0_ste_1__DOT__internal_reg) 
                      & (IData)(vlSelf->__PVT__automata_stage0__DOT__automata_ltl1c0__DOT__lut_match_ltl1c0_1__DOT__match_internal)));
    vlSelf->automata_stage0__DOT__automata_ltl1c0__DOT____Vcellinp__ltl1c0_ste_8__income_edges 
        = ((((IData)(vlSelf->__PVT__automata_stage0__DOT__automata_ltl1c0__DOT__ltl1c0_ste_8__DOT__internal_reg) 
             & (IData)(vlSelf->__PVT__automata_stage0__DOT__automata_ltl1c0__DOT__lut_match_ltl1c0_1__DOT__match_internal)) 
            << 1U) | ((IData)(vlSelf->__PVT__automata_stage0__DOT__automata_ltl1c0__DOT__ltl1c0_ste_4__DOT__internal_reg) 
                      & (((4U <= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__0__KET____DOT__lane__DOT__c2_i)) 
                          & (4U >= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__0__KET____DOT__lane__DOT__c2_i))) 
                         | (((6U <= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__0__KET____DOT__lane__DOT__c2_i)) 
                             & (6U >= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__0__KET____DOT__lane__DOT__c2_i))) 
                            | (((0xcU <= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__0__KET____DOT__lane__DOT__c2_i)) 
                                & (0xcU >= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__0__KET____DOT__lane__DOT__c2_i))) 
                               | ((0xeU <= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__0__KET____DOT__lane__DOT__c2_i)) 
                                  & (0xeU >= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__0__KET____DOT__lane__DOT__c2_i))))))));
    vlSelf->automata_stage0__DOT__automata_ltl0c0__DOT____Vcellinp__ltl0c0_ste_8__income_edges 
        = ((((IData)(vlSelf->__PVT__automata_stage0__DOT__automata_ltl0c0__DOT__ltl0c0_ste_8__DOT__internal_reg) 
             & (IData)(vlSelf->__PVT__automata_stage0__DOT__automata_ltl0c0__DOT__lut_match_ltl0c0_1__DOT__match_internal)) 
            << 1U) | ((IData)(vlSelf->__PVT__automata_stage0__DOT__automata_ltl0c0__DOT__ltl0c0_ste_5__DOT__internal_reg) 
                      & ((IData)(vlSelf->__VdfgTmp_hb5b42c0f__0) 
                         | (IData)(vlSelf->__VdfgTmp_h2aa42c51__0))));
    vlSelf->__PVT__ltl0c0_w_out_2 = ((IData)(vlSelf->__PVT__automata_stage0__DOT__automata_ltl0c0__DOT__ltl0c0_ste_2__DOT__internal_reg) 
                                     & ((IData)(vlSelf->__VdfgTmp_hb5b42c0f__0) 
                                        | (((6U <= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__0__KET____DOT__lane__DOT__c2_i)) 
                                            & (7U >= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__0__KET____DOT__lane__DOT__c2_i))) 
                                           | ((IData)(vlSelf->__VdfgTmp_h2aa42c51__0) 
                                              | (0xeU 
                                                 <= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__0__KET____DOT__lane__DOT__c2_i))))));
    vlSelf->__PVT__ltl0c0_w_out_7 = ((IData)(vlSelf->__PVT__automata_stage0__DOT__automata_ltl0c0__DOT__ltl0c0_ste_5__DOT__internal_reg) 
                                     & (IData)(vlSelf->__PVT__automata_stage0__DOT__automata_ltl0c0__DOT__lut_match_ltl0c0_7__DOT__match_internal));
    vlSelf->__PVT__ltl1c0_w_out_3 = ((IData)(vlSelf->__PVT__automata_stage0__DOT__automata_ltl1c0__DOT__ltl1c0_ste_3__DOT__internal_reg) 
                                     & (IData)(vlSelf->__PVT__automata_stage0__DOT__automata_ltl0c0__DOT__lut_match_ltl0c0_7__DOT__match_internal));
    vlSelf->automata_stage0__DOT__automata_ltl1c0__DOT____Vcellinp__ltl1c0_ste_4__income_edges 
        = ((((IData)(vlSelf->__PVT__automata_stage0__DOT__automata_ltl1c0__DOT__ltl1c0_ste_2__DOT__internal_reg) 
             & ((IData)(vlSelf->__VdfgTmp_hb30bd723__0) 
                | ((IData)(vlSelf->__VdfgTmp_he9b10395__0) 
                   | ((IData)(vlSelf->__VdfgTmp_h2a7bf321__0) 
                      | (IData)(vlSelf->__VdfgTmp_hc765a5f5__0))))) 
            << 1U) | ((IData)(vlSelf->__PVT__automata_stage0__DOT__automata_ltl1c0__DOT__ltl1c0_ste_4__DOT__internal_reg) 
                      & (IData)(vlSelf->__PVT__automata_stage0__DOT__automata_ltl1c0__DOT__lut_match_ltl1c0_1__DOT__match_internal)));
    vlSelf->__PVT__ltl1c0_w_out_9 = ((IData)(vlSelf->__PVT__automata_stage0__DOT__automata_ltl1c0__DOT__ltl1c0_ste_8__DOT__internal_reg) 
                                     & ((IData)(vlSelf->__VdfgTmp_hb30bd723__0) 
                                        | (((3U <= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__0__KET____DOT__lane__DOT__c2_i)) 
                                            & (7U >= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__0__KET____DOT__lane__DOT__c2_i))) 
                                           | ((IData)(vlSelf->__VdfgTmp_h2a7bf321__0) 
                                              | (0xbU 
                                                 <= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__0__KET____DOT__lane__DOT__c2_i))))));
    vlSelf->__PVT__ltl1c0_w_out_5 = ((IData)(vlSelf->__PVT__automata_stage0__DOT__automata_ltl1c0__DOT__ltl1c0_ste_4__DOT__internal_reg) 
                                     & ((IData)(vlSelf->__VdfgTmp_hb30bd723__0) 
                                        | ((IData)(vlSelf->__VdfgTmp_he9b10395__0) 
                                           | (((5U 
                                                <= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__0__KET____DOT__lane__DOT__c2_i)) 
                                               & (5U 
                                                  >= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__0__KET____DOT__lane__DOT__c2_i))) 
                                              | (((7U 
                                                   <= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__0__KET____DOT__lane__DOT__c2_i)) 
                                                  & (7U 
                                                     >= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__0__KET____DOT__lane__DOT__c2_i))) 
                                                 | ((IData)(vlSelf->__VdfgTmp_h2a7bf321__0) 
                                                    | ((IData)(vlSelf->__VdfgTmp_hc765a5f5__0) 
                                                       | (((0xdU 
                                                            <= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__0__KET____DOT__lane__DOT__c2_i)) 
                                                           & (0xdU 
                                                              >= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__0__KET____DOT__lane__DOT__c2_i))) 
                                                          | (0xfU 
                                                             <= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__0__KET____DOT__lane__DOT__c2_i))))))))));
    vlSelf->automata_stage0__DOT__automata_ltl0c0__DOT____Vcellinp__ltl0c0_ste_4__income_edges 
        = (((IData)(vlSelf->__PVT__ltl0c0_w_out_9) 
            << 3U) | (((IData)(vlSelf->__PVT__ltl0c0_w_out_2) 
                       << 2U) | (((IData)(vlSelf->__PVT__automata_stage0__DOT__automata_ltl0c0__DOT__ltl0c0_ste_4__DOT__internal_reg) 
                                  << 1U) | (IData)(vlSelf->__PVT__ltl0c0_w_out_7))));
    vlSelf->automata_stage0__DOT__automata_ltl1c0__DOT____Vcellinp__ltl1c0_ste_7__income_edges 
        = (((IData)(vlSelf->__PVT__ltl1c0_w_out_9) 
            << 3U) | (((IData)(vlSelf->__PVT__ltl1c0_w_out_3) 
                       << 2U) | (((IData)(vlSelf->__PVT__ltl1c0_w_out_5) 
                                  << 1U) | (IData)(vlSelf->__PVT__automata_stage0__DOT__automata_ltl1c0__DOT__ltl1c0_ste_7__DOT__internal_reg))));
}

VL_ATTR_COLD void rm_tb_top_routerlinkedlist_Top_ModuleC0___stl_sequent__TOP__rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__1__KET____DOT__lane__DOT__I0c0__0(rm_tb_top_routerlinkedlist_Top_ModuleC0* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    rm_tb_top_routerlinkedlist__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            rm_tb_top_routerlinkedlist_Top_ModuleC0___stl_sequent__TOP__rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__1__KET____DOT__lane__DOT__I0c0__0\n"); );
    // Body
    vlSelf->__PVT__automata_stage0__DOT__automata_ltl1c0__DOT__start_of_data 
        = ((IData)(vlSelf->__PVT__automata_stage0__DOT__automata_ltl1c0__DOT__start_of_data_reg) 
           & ((~ (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__lane__lane_reset_i)) 
              & (IData)(vlSelf->__PVT__automata_stage0__DOT__automata_ltl1c0__DOT__start_of_data_reg_ne)));
    vlSelf->__PVT__automata_stage0__DOT__automata_ltl0c0__DOT__lut_match_ltl0c0_1__DOT__match_internal 
        = ((1U >= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__1__KET____DOT__lane__DOT__c0_i)) 
           | ((8U <= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__1__KET____DOT__lane__DOT__c0_i)) 
              & (9U >= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__1__KET____DOT__lane__DOT__c0_i))));
    vlSelf->__PVT__automata_stage0__DOT__automata_ltl1c0__DOT__lut_match_ltl1c0_1__DOT__match_internal 
        = ((0U >= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__1__KET____DOT__lane__DOT__c0_i)) 
           | (((2U <= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__1__KET____DOT__lane__DOT__c0_i)) 
               & (2U >= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__1__KET____DOT__lane__DOT__c0_i))) 
              | (((8U <= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__1__KET____DOT__lane__DOT__c0_i)) 
                  & (8U >= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__1__KET____DOT__lane__DOT__c0_i))) 
                 | ((0xaU <= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__1__KET____DOT__lane__DOT__c0_i)) 
                    & (0xaU >= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__1__KET____DOT__lane__DOT__c0_i))))));
    vlSelf->__PVT__ltl0c0_w_out_9 = ((IData)(vlSelf->__PVT__automata_stage0__DOT__automata_ltl0c0__DOT__ltl0c0_ste_8__DOT__internal_reg) 
                                     & (((2U <= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__1__KET____DOT__lane__DOT__c0_i)) 
                                         & (7U >= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__1__KET____DOT__lane__DOT__c0_i))) 
                                        | (0xaU <= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__1__KET____DOT__lane__DOT__c0_i))));
    vlSelf->__VdfgTmp_hb5b42c0f__0 = ((2U <= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__1__KET____DOT__lane__DOT__c0_i)) 
                                      & (3U >= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__1__KET____DOT__lane__DOT__c0_i)));
    vlSelf->__VdfgTmp_h2aa42c51__0 = ((0xaU <= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__1__KET____DOT__lane__DOT__c0_i)) 
                                      & (0xbU >= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__1__KET____DOT__lane__DOT__c0_i)));
    vlSelf->__VdfgTmp_he9b10395__0 = ((3U <= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__1__KET____DOT__lane__DOT__c0_i)) 
                                      & (3U >= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__1__KET____DOT__lane__DOT__c0_i)));
    vlSelf->__VdfgTmp_hc765a5f5__0 = ((0xbU <= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__1__KET____DOT__lane__DOT__c0_i)) 
                                      & (0xbU >= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__1__KET____DOT__lane__DOT__c0_i)));
    vlSelf->__PVT__automata_stage0__DOT__automata_ltl0c0__DOT__lut_match_ltl0c0_7__DOT__match_internal 
        = (((4U <= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__1__KET____DOT__lane__DOT__c0_i)) 
            & (7U >= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__1__KET____DOT__lane__DOT__c0_i))) 
           | (0xcU <= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__1__KET____DOT__lane__DOT__c0_i)));
    vlSelf->__VdfgTmp_hb30bd723__0 = ((1U <= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__1__KET____DOT__lane__DOT__c0_i)) 
                                      & (1U >= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__1__KET____DOT__lane__DOT__c0_i)));
    vlSelf->__VdfgTmp_h2a7bf321__0 = ((9U <= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__1__KET____DOT__lane__DOT__c0_i)) 
                                      & (9U >= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__1__KET____DOT__lane__DOT__c0_i)));
    vlSelf->automata_stage0__DOT__automata_ltl0c0__DOT____Vcellinp__ltl0c0_ste_1__income_edges 
        = (((IData)(vlSelf->__PVT__automata_stage0__DOT__automata_ltl1c0__DOT__start_of_data) 
            << 1U) | ((IData)(vlSelf->__PVT__automata_stage0__DOT__automata_ltl0c0__DOT__ltl0c0_ste_1__DOT__internal_reg) 
                      & (IData)(vlSelf->__PVT__automata_stage0__DOT__automata_ltl0c0__DOT__lut_match_ltl0c0_1__DOT__match_internal)));
    vlSelf->automata_stage0__DOT__automata_ltl0c0__DOT____Vcellinp__ltl0c0_ste_5__income_edges 
        = ((((IData)(vlSelf->__PVT__automata_stage0__DOT__automata_ltl0c0__DOT__ltl0c0_ste_3__DOT__internal_reg) 
             & (((4U <= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__1__KET____DOT__lane__DOT__c0_i)) 
                 & (5U >= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__1__KET____DOT__lane__DOT__c0_i))) 
                | ((0xcU <= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__1__KET____DOT__lane__DOT__c0_i)) 
                   & (0xdU >= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__1__KET____DOT__lane__DOT__c0_i))))) 
            << 1U) | ((IData)(vlSelf->__PVT__automata_stage0__DOT__automata_ltl0c0__DOT__ltl0c0_ste_5__DOT__internal_reg) 
                      & (IData)(vlSelf->__PVT__automata_stage0__DOT__automata_ltl0c0__DOT__lut_match_ltl0c0_1__DOT__match_internal)));
    vlSelf->automata_stage0__DOT__automata_ltl1c0__DOT____Vcellinp__ltl1c0_ste_1__income_edges 
        = (((IData)(vlSelf->__PVT__automata_stage0__DOT__automata_ltl1c0__DOT__start_of_data) 
            << 1U) | ((IData)(vlSelf->__PVT__automata_stage0__DOT__automata_ltl1c0__DOT__ltl1c0_ste_1__DOT__internal_reg) 
                      & (IData)(vlSelf->__PVT__automata_stage0__DOT__automata_ltl1c0__DOT__lut_match_ltl1c0_1__DOT__match_internal)));
    vlSelf->automata_stage0__DOT__automata_ltl1c0__DOT____Vcellinp__ltl1c0_ste_8__income_edges 
        = ((((IData)(vlSelf->__PVT__automata_stage0__DOT__automata_ltl1c0__DOT__ltl1c0_ste_8__DOT__internal_reg) 
             & (IData)(vlSelf->__PVT__automata_stage0__DOT__automata_ltl1c0__DOT__lut_match_ltl1c0_1__DOT__match_internal)) 
            << 1U) | ((IData)(vlSelf->__PVT__automata_stage0__DOT__automata_ltl1c0__DOT__ltl1c0_ste_4__DOT__internal_reg) 
                      & (((4U <= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__1__KET____DOT__lane__DOT__c0_i)) 
                          & (4U >= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__1__KET____DOT__lane__DOT__c0_i))) 
                         | (((6U <= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__1__KET____DOT__lane__DOT__c0_i)) 
                             & (6U >= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__1__KET____DOT__lane__DOT__c0_i))) 
                            | (((0xcU <= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__1__KET____DOT__lane__DOT__c0_i)) 
                                & (0xcU >= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__1__KET____DOT__lane__DOT__c0_i))) 
                               | ((0xeU <= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__1__KET____DOT__lane__DOT__c0_i)) 
                                  & (0xeU >= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__1__KET____DOT__lane__DOT__c0_i))))))));
    vlSelf->automata_stage0__DOT__automata_ltl0c0__DOT____Vcellinp__ltl0c0_ste_8__income_edges 
        = ((((IData)(vlSelf->__PVT__automata_stage0__DOT__automata_ltl0c0__DOT__ltl0c0_ste_8__DOT__internal_reg) 
             & (IData)(vlSelf->__PVT__automata_stage0__DOT__automata_ltl0c0__DOT__lut_match_ltl0c0_1__DOT__match_internal)) 
            << 1U) | ((IData)(vlSelf->__PVT__automata_stage0__DOT__automata_ltl0c0__DOT__ltl0c0_ste_5__DOT__internal_reg) 
                      & ((IData)(vlSelf->__VdfgTmp_hb5b42c0f__0) 
                         | (IData)(vlSelf->__VdfgTmp_h2aa42c51__0))));
    vlSelf->__PVT__ltl0c0_w_out_2 = ((IData)(vlSelf->__PVT__automata_stage0__DOT__automata_ltl0c0__DOT__ltl0c0_ste_2__DOT__internal_reg) 
                                     & ((IData)(vlSelf->__VdfgTmp_hb5b42c0f__0) 
                                        | (((6U <= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__1__KET____DOT__lane__DOT__c0_i)) 
                                            & (7U >= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__1__KET____DOT__lane__DOT__c0_i))) 
                                           | ((IData)(vlSelf->__VdfgTmp_h2aa42c51__0) 
                                              | (0xeU 
                                                 <= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__1__KET____DOT__lane__DOT__c0_i))))));
    vlSelf->__PVT__ltl0c0_w_out_7 = ((IData)(vlSelf->__PVT__automata_stage0__DOT__automata_ltl0c0__DOT__ltl0c0_ste_5__DOT__internal_reg) 
                                     & (IData)(vlSelf->__PVT__automata_stage0__DOT__automata_ltl0c0__DOT__lut_match_ltl0c0_7__DOT__match_internal));
    vlSelf->__PVT__ltl1c0_w_out_3 = ((IData)(vlSelf->__PVT__automata_stage0__DOT__automata_ltl1c0__DOT__ltl1c0_ste_3__DOT__internal_reg) 
                                     & (IData)(vlSelf->__PVT__automata_stage0__DOT__automata_ltl0c0__DOT__lut_match_ltl0c0_7__DOT__match_internal));
    vlSelf->automata_stage0__DOT__automata_ltl1c0__DOT____Vcellinp__ltl1c0_ste_4__income_edges 
        = ((((IData)(vlSelf->__PVT__automata_stage0__DOT__automata_ltl1c0__DOT__ltl1c0_ste_2__DOT__internal_reg) 
             & ((IData)(vlSelf->__VdfgTmp_hb30bd723__0) 
                | ((IData)(vlSelf->__VdfgTmp_he9b10395__0) 
                   | ((IData)(vlSelf->__VdfgTmp_h2a7bf321__0) 
                      | (IData)(vlSelf->__VdfgTmp_hc765a5f5__0))))) 
            << 1U) | ((IData)(vlSelf->__PVT__automata_stage0__DOT__automata_ltl1c0__DOT__ltl1c0_ste_4__DOT__internal_reg) 
                      & (IData)(vlSelf->__PVT__automata_stage0__DOT__automata_ltl1c0__DOT__lut_match_ltl1c0_1__DOT__match_internal)));
    vlSelf->__PVT__ltl1c0_w_out_9 = ((IData)(vlSelf->__PVT__automata_stage0__DOT__automata_ltl1c0__DOT__ltl1c0_ste_8__DOT__internal_reg) 
                                     & ((IData)(vlSelf->__VdfgTmp_hb30bd723__0) 
                                        | (((3U <= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__1__KET____DOT__lane__DOT__c0_i)) 
                                            & (7U >= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__1__KET____DOT__lane__DOT__c0_i))) 
                                           | ((IData)(vlSelf->__VdfgTmp_h2a7bf321__0) 
                                              | (0xbU 
                                                 <= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__1__KET____DOT__lane__DOT__c0_i))))));
    vlSelf->__PVT__ltl1c0_w_out_5 = ((IData)(vlSelf->__PVT__automata_stage0__DOT__automata_ltl1c0__DOT__ltl1c0_ste_4__DOT__internal_reg) 
                                     & ((IData)(vlSelf->__VdfgTmp_hb30bd723__0) 
                                        | ((IData)(vlSelf->__VdfgTmp_he9b10395__0) 
                                           | (((5U 
                                                <= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__1__KET____DOT__lane__DOT__c0_i)) 
                                               & (5U 
                                                  >= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__1__KET____DOT__lane__DOT__c0_i))) 
                                              | (((7U 
                                                   <= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__1__KET____DOT__lane__DOT__c0_i)) 
                                                  & (7U 
                                                     >= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__1__KET____DOT__lane__DOT__c0_i))) 
                                                 | ((IData)(vlSelf->__VdfgTmp_h2a7bf321__0) 
                                                    | ((IData)(vlSelf->__VdfgTmp_hc765a5f5__0) 
                                                       | (((0xdU 
                                                            <= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__1__KET____DOT__lane__DOT__c0_i)) 
                                                           & (0xdU 
                                                              >= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__1__KET____DOT__lane__DOT__c0_i))) 
                                                          | (0xfU 
                                                             <= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__1__KET____DOT__lane__DOT__c0_i))))))))));
    vlSelf->automata_stage0__DOT__automata_ltl0c0__DOT____Vcellinp__ltl0c0_ste_4__income_edges 
        = (((IData)(vlSelf->__PVT__ltl0c0_w_out_9) 
            << 3U) | (((IData)(vlSelf->__PVT__ltl0c0_w_out_2) 
                       << 2U) | (((IData)(vlSelf->__PVT__automata_stage0__DOT__automata_ltl0c0__DOT__ltl0c0_ste_4__DOT__internal_reg) 
                                  << 1U) | (IData)(vlSelf->__PVT__ltl0c0_w_out_7))));
    vlSelf->automata_stage0__DOT__automata_ltl1c0__DOT____Vcellinp__ltl1c0_ste_7__income_edges 
        = (((IData)(vlSelf->__PVT__ltl1c0_w_out_9) 
            << 3U) | (((IData)(vlSelf->__PVT__ltl1c0_w_out_3) 
                       << 2U) | (((IData)(vlSelf->__PVT__ltl1c0_w_out_5) 
                                  << 1U) | (IData)(vlSelf->__PVT__automata_stage0__DOT__automata_ltl1c0__DOT__ltl1c0_ste_7__DOT__internal_reg))));
}

VL_ATTR_COLD void rm_tb_top_routerlinkedlist_Top_ModuleC0___stl_sequent__TOP__rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__1__KET____DOT__lane__DOT__I1c0__0(rm_tb_top_routerlinkedlist_Top_ModuleC0* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    rm_tb_top_routerlinkedlist__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            rm_tb_top_routerlinkedlist_Top_ModuleC0___stl_sequent__TOP__rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__1__KET____DOT__lane__DOT__I1c0__0\n"); );
    // Body
    vlSelf->__PVT__automata_stage0__DOT__automata_ltl1c0__DOT__start_of_data 
        = ((IData)(vlSelf->__PVT__automata_stage0__DOT__automata_ltl1c0__DOT__start_of_data_reg) 
           & ((~ (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__lane__lane_reset_i)) 
              & (IData)(vlSelf->__PVT__automata_stage0__DOT__automata_ltl1c0__DOT__start_of_data_reg_ne)));
    vlSelf->__PVT__automata_stage0__DOT__automata_ltl0c0__DOT__lut_match_ltl0c0_1__DOT__match_internal 
        = ((1U >= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__1__KET____DOT__lane__DOT__c2_i)) 
           | ((8U <= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__1__KET____DOT__lane__DOT__c2_i)) 
              & (9U >= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__1__KET____DOT__lane__DOT__c2_i))));
    vlSelf->__PVT__automata_stage0__DOT__automata_ltl1c0__DOT__lut_match_ltl1c0_1__DOT__match_internal 
        = ((0U >= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__1__KET____DOT__lane__DOT__c2_i)) 
           | (((2U <= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__1__KET____DOT__lane__DOT__c2_i)) 
               & (2U >= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__1__KET____DOT__lane__DOT__c2_i))) 
              | (((8U <= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__1__KET____DOT__lane__DOT__c2_i)) 
                  & (8U >= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__1__KET____DOT__lane__DOT__c2_i))) 
                 | ((0xaU <= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__1__KET____DOT__lane__DOT__c2_i)) 
                    & (0xaU >= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__1__KET____DOT__lane__DOT__c2_i))))));
    vlSelf->__PVT__ltl0c0_w_out_9 = ((IData)(vlSelf->__PVT__automata_stage0__DOT__automata_ltl0c0__DOT__ltl0c0_ste_8__DOT__internal_reg) 
                                     & (((2U <= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__1__KET____DOT__lane__DOT__c2_i)) 
                                         & (7U >= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__1__KET____DOT__lane__DOT__c2_i))) 
                                        | (0xaU <= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__1__KET____DOT__lane__DOT__c2_i))));
    vlSelf->__VdfgTmp_hb5b42c0f__0 = ((2U <= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__1__KET____DOT__lane__DOT__c2_i)) 
                                      & (3U >= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__1__KET____DOT__lane__DOT__c2_i)));
    vlSelf->__VdfgTmp_h2aa42c51__0 = ((0xaU <= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__1__KET____DOT__lane__DOT__c2_i)) 
                                      & (0xbU >= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__1__KET____DOT__lane__DOT__c2_i)));
    vlSelf->__VdfgTmp_he9b10395__0 = ((3U <= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__1__KET____DOT__lane__DOT__c2_i)) 
                                      & (3U >= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__1__KET____DOT__lane__DOT__c2_i)));
    vlSelf->__VdfgTmp_hc765a5f5__0 = ((0xbU <= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__1__KET____DOT__lane__DOT__c2_i)) 
                                      & (0xbU >= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__1__KET____DOT__lane__DOT__c2_i)));
    vlSelf->__PVT__automata_stage0__DOT__automata_ltl0c0__DOT__lut_match_ltl0c0_7__DOT__match_internal 
        = (((4U <= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__1__KET____DOT__lane__DOT__c2_i)) 
            & (7U >= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__1__KET____DOT__lane__DOT__c2_i))) 
           | (0xcU <= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__1__KET____DOT__lane__DOT__c2_i)));
    vlSelf->__VdfgTmp_hb30bd723__0 = ((1U <= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__1__KET____DOT__lane__DOT__c2_i)) 
                                      & (1U >= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__1__KET____DOT__lane__DOT__c2_i)));
    vlSelf->__VdfgTmp_h2a7bf321__0 = ((9U <= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__1__KET____DOT__lane__DOT__c2_i)) 
                                      & (9U >= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__1__KET____DOT__lane__DOT__c2_i)));
    vlSelf->automata_stage0__DOT__automata_ltl0c0__DOT____Vcellinp__ltl0c0_ste_1__income_edges 
        = (((IData)(vlSelf->__PVT__automata_stage0__DOT__automata_ltl1c0__DOT__start_of_data) 
            << 1U) | ((IData)(vlSelf->__PVT__automata_stage0__DOT__automata_ltl0c0__DOT__ltl0c0_ste_1__DOT__internal_reg) 
                      & (IData)(vlSelf->__PVT__automata_stage0__DOT__automata_ltl0c0__DOT__lut_match_ltl0c0_1__DOT__match_internal)));
    vlSelf->automata_stage0__DOT__automata_ltl0c0__DOT____Vcellinp__ltl0c0_ste_5__income_edges 
        = ((((IData)(vlSelf->__PVT__automata_stage0__DOT__automata_ltl0c0__DOT__ltl0c0_ste_3__DOT__internal_reg) 
             & (((4U <= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__1__KET____DOT__lane__DOT__c2_i)) 
                 & (5U >= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__1__KET____DOT__lane__DOT__c2_i))) 
                | ((0xcU <= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__1__KET____DOT__lane__DOT__c2_i)) 
                   & (0xdU >= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__1__KET____DOT__lane__DOT__c2_i))))) 
            << 1U) | ((IData)(vlSelf->__PVT__automata_stage0__DOT__automata_ltl0c0__DOT__ltl0c0_ste_5__DOT__internal_reg) 
                      & (IData)(vlSelf->__PVT__automata_stage0__DOT__automata_ltl0c0__DOT__lut_match_ltl0c0_1__DOT__match_internal)));
    vlSelf->automata_stage0__DOT__automata_ltl1c0__DOT____Vcellinp__ltl1c0_ste_1__income_edges 
        = (((IData)(vlSelf->__PVT__automata_stage0__DOT__automata_ltl1c0__DOT__start_of_data) 
            << 1U) | ((IData)(vlSelf->__PVT__automata_stage0__DOT__automata_ltl1c0__DOT__ltl1c0_ste_1__DOT__internal_reg) 
                      & (IData)(vlSelf->__PVT__automata_stage0__DOT__automata_ltl1c0__DOT__lut_match_ltl1c0_1__DOT__match_internal)));
    vlSelf->automata_stage0__DOT__automata_ltl1c0__DOT____Vcellinp__ltl1c0_ste_8__income_edges 
        = ((((IData)(vlSelf->__PVT__automata_stage0__DOT__automata_ltl1c0__DOT__ltl1c0_ste_8__DOT__internal_reg) 
             & (IData)(vlSelf->__PVT__automata_stage0__DOT__automata_ltl1c0__DOT__lut_match_ltl1c0_1__DOT__match_internal)) 
            << 1U) | ((IData)(vlSelf->__PVT__automata_stage0__DOT__automata_ltl1c0__DOT__ltl1c0_ste_4__DOT__internal_reg) 
                      & (((4U <= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__1__KET____DOT__lane__DOT__c2_i)) 
                          & (4U >= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__1__KET____DOT__lane__DOT__c2_i))) 
                         | (((6U <= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__1__KET____DOT__lane__DOT__c2_i)) 
                             & (6U >= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__1__KET____DOT__lane__DOT__c2_i))) 
                            | (((0xcU <= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__1__KET____DOT__lane__DOT__c2_i)) 
                                & (0xcU >= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__1__KET____DOT__lane__DOT__c2_i))) 
                               | ((0xeU <= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__1__KET____DOT__lane__DOT__c2_i)) 
                                  & (0xeU >= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__1__KET____DOT__lane__DOT__c2_i))))))));
    vlSelf->automata_stage0__DOT__automata_ltl0c0__DOT____Vcellinp__ltl0c0_ste_8__income_edges 
        = ((((IData)(vlSelf->__PVT__automata_stage0__DOT__automata_ltl0c0__DOT__ltl0c0_ste_8__DOT__internal_reg) 
             & (IData)(vlSelf->__PVT__automata_stage0__DOT__automata_ltl0c0__DOT__lut_match_ltl0c0_1__DOT__match_internal)) 
            << 1U) | ((IData)(vlSelf->__PVT__automata_stage0__DOT__automata_ltl0c0__DOT__ltl0c0_ste_5__DOT__internal_reg) 
                      & ((IData)(vlSelf->__VdfgTmp_hb5b42c0f__0) 
                         | (IData)(vlSelf->__VdfgTmp_h2aa42c51__0))));
    vlSelf->__PVT__ltl0c0_w_out_2 = ((IData)(vlSelf->__PVT__automata_stage0__DOT__automata_ltl0c0__DOT__ltl0c0_ste_2__DOT__internal_reg) 
                                     & ((IData)(vlSelf->__VdfgTmp_hb5b42c0f__0) 
                                        | (((6U <= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__1__KET____DOT__lane__DOT__c2_i)) 
                                            & (7U >= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__1__KET____DOT__lane__DOT__c2_i))) 
                                           | ((IData)(vlSelf->__VdfgTmp_h2aa42c51__0) 
                                              | (0xeU 
                                                 <= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__1__KET____DOT__lane__DOT__c2_i))))));
    vlSelf->__PVT__ltl0c0_w_out_7 = ((IData)(vlSelf->__PVT__automata_stage0__DOT__automata_ltl0c0__DOT__ltl0c0_ste_5__DOT__internal_reg) 
                                     & (IData)(vlSelf->__PVT__automata_stage0__DOT__automata_ltl0c0__DOT__lut_match_ltl0c0_7__DOT__match_internal));
    vlSelf->__PVT__ltl1c0_w_out_3 = ((IData)(vlSelf->__PVT__automata_stage0__DOT__automata_ltl1c0__DOT__ltl1c0_ste_3__DOT__internal_reg) 
                                     & (IData)(vlSelf->__PVT__automata_stage0__DOT__automata_ltl0c0__DOT__lut_match_ltl0c0_7__DOT__match_internal));
    vlSelf->automata_stage0__DOT__automata_ltl1c0__DOT____Vcellinp__ltl1c0_ste_4__income_edges 
        = ((((IData)(vlSelf->__PVT__automata_stage0__DOT__automata_ltl1c0__DOT__ltl1c0_ste_2__DOT__internal_reg) 
             & ((IData)(vlSelf->__VdfgTmp_hb30bd723__0) 
                | ((IData)(vlSelf->__VdfgTmp_he9b10395__0) 
                   | ((IData)(vlSelf->__VdfgTmp_h2a7bf321__0) 
                      | (IData)(vlSelf->__VdfgTmp_hc765a5f5__0))))) 
            << 1U) | ((IData)(vlSelf->__PVT__automata_stage0__DOT__automata_ltl1c0__DOT__ltl1c0_ste_4__DOT__internal_reg) 
                      & (IData)(vlSelf->__PVT__automata_stage0__DOT__automata_ltl1c0__DOT__lut_match_ltl1c0_1__DOT__match_internal)));
    vlSelf->__PVT__ltl1c0_w_out_9 = ((IData)(vlSelf->__PVT__automata_stage0__DOT__automata_ltl1c0__DOT__ltl1c0_ste_8__DOT__internal_reg) 
                                     & ((IData)(vlSelf->__VdfgTmp_hb30bd723__0) 
                                        | (((3U <= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__1__KET____DOT__lane__DOT__c2_i)) 
                                            & (7U >= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__1__KET____DOT__lane__DOT__c2_i))) 
                                           | ((IData)(vlSelf->__VdfgTmp_h2a7bf321__0) 
                                              | (0xbU 
                                                 <= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__1__KET____DOT__lane__DOT__c2_i))))));
    vlSelf->__PVT__ltl1c0_w_out_5 = ((IData)(vlSelf->__PVT__automata_stage0__DOT__automata_ltl1c0__DOT__ltl1c0_ste_4__DOT__internal_reg) 
                                     & ((IData)(vlSelf->__VdfgTmp_hb30bd723__0) 
                                        | ((IData)(vlSelf->__VdfgTmp_he9b10395__0) 
                                           | (((5U 
                                                <= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__1__KET____DOT__lane__DOT__c2_i)) 
                                               & (5U 
                                                  >= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__1__KET____DOT__lane__DOT__c2_i))) 
                                              | (((7U 
                                                   <= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__1__KET____DOT__lane__DOT__c2_i)) 
                                                  & (7U 
                                                     >= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__1__KET____DOT__lane__DOT__c2_i))) 
                                                 | ((IData)(vlSelf->__VdfgTmp_h2a7bf321__0) 
                                                    | ((IData)(vlSelf->__VdfgTmp_hc765a5f5__0) 
                                                       | (((0xdU 
                                                            <= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__1__KET____DOT__lane__DOT__c2_i)) 
                                                           & (0xdU 
                                                              >= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__1__KET____DOT__lane__DOT__c2_i))) 
                                                          | (0xfU 
                                                             <= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__1__KET____DOT__lane__DOT__c2_i))))))))));
    vlSelf->automata_stage0__DOT__automata_ltl0c0__DOT____Vcellinp__ltl0c0_ste_4__income_edges 
        = (((IData)(vlSelf->__PVT__ltl0c0_w_out_9) 
            << 3U) | (((IData)(vlSelf->__PVT__ltl0c0_w_out_2) 
                       << 2U) | (((IData)(vlSelf->__PVT__automata_stage0__DOT__automata_ltl0c0__DOT__ltl0c0_ste_4__DOT__internal_reg) 
                                  << 1U) | (IData)(vlSelf->__PVT__ltl0c0_w_out_7))));
    vlSelf->automata_stage0__DOT__automata_ltl1c0__DOT____Vcellinp__ltl1c0_ste_7__income_edges 
        = (((IData)(vlSelf->__PVT__ltl1c0_w_out_9) 
            << 3U) | (((IData)(vlSelf->__PVT__ltl1c0_w_out_3) 
                       << 2U) | (((IData)(vlSelf->__PVT__ltl1c0_w_out_5) 
                                  << 1U) | (IData)(vlSelf->__PVT__automata_stage0__DOT__automata_ltl1c0__DOT__ltl1c0_ste_7__DOT__internal_reg))));
}

VL_ATTR_COLD void rm_tb_top_routerlinkedlist_Top_ModuleC0___stl_sequent__TOP__rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__2__KET____DOT__lane__DOT__I0c0__0(rm_tb_top_routerlinkedlist_Top_ModuleC0* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    rm_tb_top_routerlinkedlist__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            rm_tb_top_routerlinkedlist_Top_ModuleC0___stl_sequent__TOP__rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__2__KET____DOT__lane__DOT__I0c0__0\n"); );
    // Body
    vlSelf->__PVT__automata_stage0__DOT__automata_ltl1c0__DOT__start_of_data 
        = ((IData)(vlSelf->__PVT__automata_stage0__DOT__automata_ltl1c0__DOT__start_of_data_reg) 
           & ((~ (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT____Vcellinp__genblk1__BRA__2__KET____DOT__lane__lane_reset_i)) 
              & (IData)(vlSelf->__PVT__automata_stage0__DOT__automata_ltl1c0__DOT__start_of_data_reg_ne)));
    vlSelf->__PVT__automata_stage0__DOT__automata_ltl0c0__DOT__lut_match_ltl0c0_1__DOT__match_internal 
        = ((1U >= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__2__KET____DOT__lane__DOT__c0_i)) 
           | ((8U <= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__2__KET____DOT__lane__DOT__c0_i)) 
              & (9U >= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__2__KET____DOT__lane__DOT__c0_i))));
    vlSelf->__PVT__automata_stage0__DOT__automata_ltl1c0__DOT__lut_match_ltl1c0_1__DOT__match_internal 
        = ((0U >= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__2__KET____DOT__lane__DOT__c0_i)) 
           | (((2U <= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__2__KET____DOT__lane__DOT__c0_i)) 
               & (2U >= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__2__KET____DOT__lane__DOT__c0_i))) 
              | (((8U <= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__2__KET____DOT__lane__DOT__c0_i)) 
                  & (8U >= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__2__KET____DOT__lane__DOT__c0_i))) 
                 | ((0xaU <= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__2__KET____DOT__lane__DOT__c0_i)) 
                    & (0xaU >= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__2__KET____DOT__lane__DOT__c0_i))))));
    vlSelf->__PVT__ltl0c0_w_out_9 = ((IData)(vlSelf->__PVT__automata_stage0__DOT__automata_ltl0c0__DOT__ltl0c0_ste_8__DOT__internal_reg) 
                                     & (((2U <= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__2__KET____DOT__lane__DOT__c0_i)) 
                                         & (7U >= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__2__KET____DOT__lane__DOT__c0_i))) 
                                        | (0xaU <= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__2__KET____DOT__lane__DOT__c0_i))));
    vlSelf->__VdfgTmp_hb5b42c0f__0 = ((2U <= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__2__KET____DOT__lane__DOT__c0_i)) 
                                      & (3U >= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__2__KET____DOT__lane__DOT__c0_i)));
    vlSelf->__VdfgTmp_h2aa42c51__0 = ((0xaU <= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__2__KET____DOT__lane__DOT__c0_i)) 
                                      & (0xbU >= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__2__KET____DOT__lane__DOT__c0_i)));
    vlSelf->__VdfgTmp_he9b10395__0 = ((3U <= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__2__KET____DOT__lane__DOT__c0_i)) 
                                      & (3U >= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__2__KET____DOT__lane__DOT__c0_i)));
    vlSelf->__VdfgTmp_hc765a5f5__0 = ((0xbU <= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__2__KET____DOT__lane__DOT__c0_i)) 
                                      & (0xbU >= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__2__KET____DOT__lane__DOT__c0_i)));
    vlSelf->__PVT__automata_stage0__DOT__automata_ltl0c0__DOT__lut_match_ltl0c0_7__DOT__match_internal 
        = (((4U <= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__2__KET____DOT__lane__DOT__c0_i)) 
            & (7U >= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__2__KET____DOT__lane__DOT__c0_i))) 
           | (0xcU <= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__2__KET____DOT__lane__DOT__c0_i)));
    vlSelf->__VdfgTmp_hb30bd723__0 = ((1U <= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__2__KET____DOT__lane__DOT__c0_i)) 
                                      & (1U >= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__2__KET____DOT__lane__DOT__c0_i)));
    vlSelf->__VdfgTmp_h2a7bf321__0 = ((9U <= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__2__KET____DOT__lane__DOT__c0_i)) 
                                      & (9U >= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__2__KET____DOT__lane__DOT__c0_i)));
    vlSelf->automata_stage0__DOT__automata_ltl0c0__DOT____Vcellinp__ltl0c0_ste_1__income_edges 
        = (((IData)(vlSelf->__PVT__automata_stage0__DOT__automata_ltl1c0__DOT__start_of_data) 
            << 1U) | ((IData)(vlSelf->__PVT__automata_stage0__DOT__automata_ltl0c0__DOT__ltl0c0_ste_1__DOT__internal_reg) 
                      & (IData)(vlSelf->__PVT__automata_stage0__DOT__automata_ltl0c0__DOT__lut_match_ltl0c0_1__DOT__match_internal)));
    vlSelf->automata_stage0__DOT__automata_ltl0c0__DOT____Vcellinp__ltl0c0_ste_5__income_edges 
        = ((((IData)(vlSelf->__PVT__automata_stage0__DOT__automata_ltl0c0__DOT__ltl0c0_ste_3__DOT__internal_reg) 
             & (((4U <= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__2__KET____DOT__lane__DOT__c0_i)) 
                 & (5U >= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__2__KET____DOT__lane__DOT__c0_i))) 
                | ((0xcU <= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__2__KET____DOT__lane__DOT__c0_i)) 
                   & (0xdU >= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__2__KET____DOT__lane__DOT__c0_i))))) 
            << 1U) | ((IData)(vlSelf->__PVT__automata_stage0__DOT__automata_ltl0c0__DOT__ltl0c0_ste_5__DOT__internal_reg) 
                      & (IData)(vlSelf->__PVT__automata_stage0__DOT__automata_ltl0c0__DOT__lut_match_ltl0c0_1__DOT__match_internal)));
    vlSelf->automata_stage0__DOT__automata_ltl1c0__DOT____Vcellinp__ltl1c0_ste_1__income_edges 
        = (((IData)(vlSelf->__PVT__automata_stage0__DOT__automata_ltl1c0__DOT__start_of_data) 
            << 1U) | ((IData)(vlSelf->__PVT__automata_stage0__DOT__automata_ltl1c0__DOT__ltl1c0_ste_1__DOT__internal_reg) 
                      & (IData)(vlSelf->__PVT__automata_stage0__DOT__automata_ltl1c0__DOT__lut_match_ltl1c0_1__DOT__match_internal)));
    vlSelf->automata_stage0__DOT__automata_ltl1c0__DOT____Vcellinp__ltl1c0_ste_8__income_edges 
        = ((((IData)(vlSelf->__PVT__automata_stage0__DOT__automata_ltl1c0__DOT__ltl1c0_ste_8__DOT__internal_reg) 
             & (IData)(vlSelf->__PVT__automata_stage0__DOT__automata_ltl1c0__DOT__lut_match_ltl1c0_1__DOT__match_internal)) 
            << 1U) | ((IData)(vlSelf->__PVT__automata_stage0__DOT__automata_ltl1c0__DOT__ltl1c0_ste_4__DOT__internal_reg) 
                      & (((4U <= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__2__KET____DOT__lane__DOT__c0_i)) 
                          & (4U >= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__2__KET____DOT__lane__DOT__c0_i))) 
                         | (((6U <= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__2__KET____DOT__lane__DOT__c0_i)) 
                             & (6U >= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__2__KET____DOT__lane__DOT__c0_i))) 
                            | (((0xcU <= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__2__KET____DOT__lane__DOT__c0_i)) 
                                & (0xcU >= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__2__KET____DOT__lane__DOT__c0_i))) 
                               | ((0xeU <= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__2__KET____DOT__lane__DOT__c0_i)) 
                                  & (0xeU >= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__2__KET____DOT__lane__DOT__c0_i))))))));
    vlSelf->automata_stage0__DOT__automata_ltl0c0__DOT____Vcellinp__ltl0c0_ste_8__income_edges 
        = ((((IData)(vlSelf->__PVT__automata_stage0__DOT__automata_ltl0c0__DOT__ltl0c0_ste_8__DOT__internal_reg) 
             & (IData)(vlSelf->__PVT__automata_stage0__DOT__automata_ltl0c0__DOT__lut_match_ltl0c0_1__DOT__match_internal)) 
            << 1U) | ((IData)(vlSelf->__PVT__automata_stage0__DOT__automata_ltl0c0__DOT__ltl0c0_ste_5__DOT__internal_reg) 
                      & ((IData)(vlSelf->__VdfgTmp_hb5b42c0f__0) 
                         | (IData)(vlSelf->__VdfgTmp_h2aa42c51__0))));
    vlSelf->__PVT__ltl0c0_w_out_2 = ((IData)(vlSelf->__PVT__automata_stage0__DOT__automata_ltl0c0__DOT__ltl0c0_ste_2__DOT__internal_reg) 
                                     & ((IData)(vlSelf->__VdfgTmp_hb5b42c0f__0) 
                                        | (((6U <= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__2__KET____DOT__lane__DOT__c0_i)) 
                                            & (7U >= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__2__KET____DOT__lane__DOT__c0_i))) 
                                           | ((IData)(vlSelf->__VdfgTmp_h2aa42c51__0) 
                                              | (0xeU 
                                                 <= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__2__KET____DOT__lane__DOT__c0_i))))));
    vlSelf->__PVT__ltl0c0_w_out_7 = ((IData)(vlSelf->__PVT__automata_stage0__DOT__automata_ltl0c0__DOT__ltl0c0_ste_5__DOT__internal_reg) 
                                     & (IData)(vlSelf->__PVT__automata_stage0__DOT__automata_ltl0c0__DOT__lut_match_ltl0c0_7__DOT__match_internal));
    vlSelf->__PVT__ltl1c0_w_out_3 = ((IData)(vlSelf->__PVT__automata_stage0__DOT__automata_ltl1c0__DOT__ltl1c0_ste_3__DOT__internal_reg) 
                                     & (IData)(vlSelf->__PVT__automata_stage0__DOT__automata_ltl0c0__DOT__lut_match_ltl0c0_7__DOT__match_internal));
    vlSelf->automata_stage0__DOT__automata_ltl1c0__DOT____Vcellinp__ltl1c0_ste_4__income_edges 
        = ((((IData)(vlSelf->__PVT__automata_stage0__DOT__automata_ltl1c0__DOT__ltl1c0_ste_2__DOT__internal_reg) 
             & ((IData)(vlSelf->__VdfgTmp_hb30bd723__0) 
                | ((IData)(vlSelf->__VdfgTmp_he9b10395__0) 
                   | ((IData)(vlSelf->__VdfgTmp_h2a7bf321__0) 
                      | (IData)(vlSelf->__VdfgTmp_hc765a5f5__0))))) 
            << 1U) | ((IData)(vlSelf->__PVT__automata_stage0__DOT__automata_ltl1c0__DOT__ltl1c0_ste_4__DOT__internal_reg) 
                      & (IData)(vlSelf->__PVT__automata_stage0__DOT__automata_ltl1c0__DOT__lut_match_ltl1c0_1__DOT__match_internal)));
    vlSelf->__PVT__ltl1c0_w_out_9 = ((IData)(vlSelf->__PVT__automata_stage0__DOT__automata_ltl1c0__DOT__ltl1c0_ste_8__DOT__internal_reg) 
                                     & ((IData)(vlSelf->__VdfgTmp_hb30bd723__0) 
                                        | (((3U <= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__2__KET____DOT__lane__DOT__c0_i)) 
                                            & (7U >= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__2__KET____DOT__lane__DOT__c0_i))) 
                                           | ((IData)(vlSelf->__VdfgTmp_h2a7bf321__0) 
                                              | (0xbU 
                                                 <= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__2__KET____DOT__lane__DOT__c0_i))))));
    vlSelf->__PVT__ltl1c0_w_out_5 = ((IData)(vlSelf->__PVT__automata_stage0__DOT__automata_ltl1c0__DOT__ltl1c0_ste_4__DOT__internal_reg) 
                                     & ((IData)(vlSelf->__VdfgTmp_hb30bd723__0) 
                                        | ((IData)(vlSelf->__VdfgTmp_he9b10395__0) 
                                           | (((5U 
                                                <= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__2__KET____DOT__lane__DOT__c0_i)) 
                                               & (5U 
                                                  >= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__2__KET____DOT__lane__DOT__c0_i))) 
                                              | (((7U 
                                                   <= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__2__KET____DOT__lane__DOT__c0_i)) 
                                                  & (7U 
                                                     >= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__2__KET____DOT__lane__DOT__c0_i))) 
                                                 | ((IData)(vlSelf->__VdfgTmp_h2a7bf321__0) 
                                                    | ((IData)(vlSelf->__VdfgTmp_hc765a5f5__0) 
                                                       | (((0xdU 
                                                            <= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__2__KET____DOT__lane__DOT__c0_i)) 
                                                           & (0xdU 
                                                              >= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__2__KET____DOT__lane__DOT__c0_i))) 
                                                          | (0xfU 
                                                             <= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__2__KET____DOT__lane__DOT__c0_i))))))))));
    vlSelf->automata_stage0__DOT__automata_ltl0c0__DOT____Vcellinp__ltl0c0_ste_4__income_edges 
        = (((IData)(vlSelf->__PVT__ltl0c0_w_out_9) 
            << 3U) | (((IData)(vlSelf->__PVT__ltl0c0_w_out_2) 
                       << 2U) | (((IData)(vlSelf->__PVT__automata_stage0__DOT__automata_ltl0c0__DOT__ltl0c0_ste_4__DOT__internal_reg) 
                                  << 1U) | (IData)(vlSelf->__PVT__ltl0c0_w_out_7))));
    vlSelf->automata_stage0__DOT__automata_ltl1c0__DOT____Vcellinp__ltl1c0_ste_7__income_edges 
        = (((IData)(vlSelf->__PVT__ltl1c0_w_out_9) 
            << 3U) | (((IData)(vlSelf->__PVT__ltl1c0_w_out_3) 
                       << 2U) | (((IData)(vlSelf->__PVT__ltl1c0_w_out_5) 
                                  << 1U) | (IData)(vlSelf->__PVT__automata_stage0__DOT__automata_ltl1c0__DOT__ltl1c0_ste_7__DOT__internal_reg))));
}

VL_ATTR_COLD void rm_tb_top_routerlinkedlist_Top_ModuleC0___stl_sequent__TOP__rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__2__KET____DOT__lane__DOT__I1c0__0(rm_tb_top_routerlinkedlist_Top_ModuleC0* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    rm_tb_top_routerlinkedlist__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            rm_tb_top_routerlinkedlist_Top_ModuleC0___stl_sequent__TOP__rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__2__KET____DOT__lane__DOT__I1c0__0\n"); );
    // Body
    vlSelf->__PVT__automata_stage0__DOT__automata_ltl1c0__DOT__start_of_data 
        = ((IData)(vlSelf->__PVT__automata_stage0__DOT__automata_ltl1c0__DOT__start_of_data_reg) 
           & ((~ (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT____Vcellinp__genblk1__BRA__2__KET____DOT__lane__lane_reset_i)) 
              & (IData)(vlSelf->__PVT__automata_stage0__DOT__automata_ltl1c0__DOT__start_of_data_reg_ne)));
    vlSelf->__PVT__automata_stage0__DOT__automata_ltl0c0__DOT__lut_match_ltl0c0_1__DOT__match_internal 
        = ((1U >= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__2__KET____DOT__lane__DOT__c2_i)) 
           | ((8U <= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__2__KET____DOT__lane__DOT__c2_i)) 
              & (9U >= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__2__KET____DOT__lane__DOT__c2_i))));
    vlSelf->__PVT__automata_stage0__DOT__automata_ltl1c0__DOT__lut_match_ltl1c0_1__DOT__match_internal 
        = ((0U >= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__2__KET____DOT__lane__DOT__c2_i)) 
           | (((2U <= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__2__KET____DOT__lane__DOT__c2_i)) 
               & (2U >= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__2__KET____DOT__lane__DOT__c2_i))) 
              | (((8U <= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__2__KET____DOT__lane__DOT__c2_i)) 
                  & (8U >= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__2__KET____DOT__lane__DOT__c2_i))) 
                 | ((0xaU <= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__2__KET____DOT__lane__DOT__c2_i)) 
                    & (0xaU >= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__2__KET____DOT__lane__DOT__c2_i))))));
    vlSelf->__PVT__ltl0c0_w_out_9 = ((IData)(vlSelf->__PVT__automata_stage0__DOT__automata_ltl0c0__DOT__ltl0c0_ste_8__DOT__internal_reg) 
                                     & (((2U <= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__2__KET____DOT__lane__DOT__c2_i)) 
                                         & (7U >= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__2__KET____DOT__lane__DOT__c2_i))) 
                                        | (0xaU <= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__2__KET____DOT__lane__DOT__c2_i))));
    vlSelf->__VdfgTmp_hb5b42c0f__0 = ((2U <= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__2__KET____DOT__lane__DOT__c2_i)) 
                                      & (3U >= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__2__KET____DOT__lane__DOT__c2_i)));
    vlSelf->__VdfgTmp_h2aa42c51__0 = ((0xaU <= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__2__KET____DOT__lane__DOT__c2_i)) 
                                      & (0xbU >= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__2__KET____DOT__lane__DOT__c2_i)));
    vlSelf->__VdfgTmp_he9b10395__0 = ((3U <= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__2__KET____DOT__lane__DOT__c2_i)) 
                                      & (3U >= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__2__KET____DOT__lane__DOT__c2_i)));
    vlSelf->__VdfgTmp_hc765a5f5__0 = ((0xbU <= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__2__KET____DOT__lane__DOT__c2_i)) 
                                      & (0xbU >= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__2__KET____DOT__lane__DOT__c2_i)));
    vlSelf->__PVT__automata_stage0__DOT__automata_ltl0c0__DOT__lut_match_ltl0c0_7__DOT__match_internal 
        = (((4U <= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__2__KET____DOT__lane__DOT__c2_i)) 
            & (7U >= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__2__KET____DOT__lane__DOT__c2_i))) 
           | (0xcU <= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__2__KET____DOT__lane__DOT__c2_i)));
    vlSelf->__VdfgTmp_hb30bd723__0 = ((1U <= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__2__KET____DOT__lane__DOT__c2_i)) 
                                      & (1U >= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__2__KET____DOT__lane__DOT__c2_i)));
    vlSelf->__VdfgTmp_h2a7bf321__0 = ((9U <= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__2__KET____DOT__lane__DOT__c2_i)) 
                                      & (9U >= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__2__KET____DOT__lane__DOT__c2_i)));
    vlSelf->automata_stage0__DOT__automata_ltl0c0__DOT____Vcellinp__ltl0c0_ste_1__income_edges 
        = (((IData)(vlSelf->__PVT__automata_stage0__DOT__automata_ltl1c0__DOT__start_of_data) 
            << 1U) | ((IData)(vlSelf->__PVT__automata_stage0__DOT__automata_ltl0c0__DOT__ltl0c0_ste_1__DOT__internal_reg) 
                      & (IData)(vlSelf->__PVT__automata_stage0__DOT__automata_ltl0c0__DOT__lut_match_ltl0c0_1__DOT__match_internal)));
    vlSelf->automata_stage0__DOT__automata_ltl0c0__DOT____Vcellinp__ltl0c0_ste_5__income_edges 
        = ((((IData)(vlSelf->__PVT__automata_stage0__DOT__automata_ltl0c0__DOT__ltl0c0_ste_3__DOT__internal_reg) 
             & (((4U <= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__2__KET____DOT__lane__DOT__c2_i)) 
                 & (5U >= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__2__KET____DOT__lane__DOT__c2_i))) 
                | ((0xcU <= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__2__KET____DOT__lane__DOT__c2_i)) 
                   & (0xdU >= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__2__KET____DOT__lane__DOT__c2_i))))) 
            << 1U) | ((IData)(vlSelf->__PVT__automata_stage0__DOT__automata_ltl0c0__DOT__ltl0c0_ste_5__DOT__internal_reg) 
                      & (IData)(vlSelf->__PVT__automata_stage0__DOT__automata_ltl0c0__DOT__lut_match_ltl0c0_1__DOT__match_internal)));
    vlSelf->automata_stage0__DOT__automata_ltl1c0__DOT____Vcellinp__ltl1c0_ste_1__income_edges 
        = (((IData)(vlSelf->__PVT__automata_stage0__DOT__automata_ltl1c0__DOT__start_of_data) 
            << 1U) | ((IData)(vlSelf->__PVT__automata_stage0__DOT__automata_ltl1c0__DOT__ltl1c0_ste_1__DOT__internal_reg) 
                      & (IData)(vlSelf->__PVT__automata_stage0__DOT__automata_ltl1c0__DOT__lut_match_ltl1c0_1__DOT__match_internal)));
    vlSelf->automata_stage0__DOT__automata_ltl1c0__DOT____Vcellinp__ltl1c0_ste_8__income_edges 
        = ((((IData)(vlSelf->__PVT__automata_stage0__DOT__automata_ltl1c0__DOT__ltl1c0_ste_8__DOT__internal_reg) 
             & (IData)(vlSelf->__PVT__automata_stage0__DOT__automata_ltl1c0__DOT__lut_match_ltl1c0_1__DOT__match_internal)) 
            << 1U) | ((IData)(vlSelf->__PVT__automata_stage0__DOT__automata_ltl1c0__DOT__ltl1c0_ste_4__DOT__internal_reg) 
                      & (((4U <= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__2__KET____DOT__lane__DOT__c2_i)) 
                          & (4U >= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__2__KET____DOT__lane__DOT__c2_i))) 
                         | (((6U <= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__2__KET____DOT__lane__DOT__c2_i)) 
                             & (6U >= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__2__KET____DOT__lane__DOT__c2_i))) 
                            | (((0xcU <= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__2__KET____DOT__lane__DOT__c2_i)) 
                                & (0xcU >= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__2__KET____DOT__lane__DOT__c2_i))) 
                               | ((0xeU <= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__2__KET____DOT__lane__DOT__c2_i)) 
                                  & (0xeU >= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__2__KET____DOT__lane__DOT__c2_i))))))));
    vlSelf->automata_stage0__DOT__automata_ltl0c0__DOT____Vcellinp__ltl0c0_ste_8__income_edges 
        = ((((IData)(vlSelf->__PVT__automata_stage0__DOT__automata_ltl0c0__DOT__ltl0c0_ste_8__DOT__internal_reg) 
             & (IData)(vlSelf->__PVT__automata_stage0__DOT__automata_ltl0c0__DOT__lut_match_ltl0c0_1__DOT__match_internal)) 
            << 1U) | ((IData)(vlSelf->__PVT__automata_stage0__DOT__automata_ltl0c0__DOT__ltl0c0_ste_5__DOT__internal_reg) 
                      & ((IData)(vlSelf->__VdfgTmp_hb5b42c0f__0) 
                         | (IData)(vlSelf->__VdfgTmp_h2aa42c51__0))));
    vlSelf->__PVT__ltl0c0_w_out_2 = ((IData)(vlSelf->__PVT__automata_stage0__DOT__automata_ltl0c0__DOT__ltl0c0_ste_2__DOT__internal_reg) 
                                     & ((IData)(vlSelf->__VdfgTmp_hb5b42c0f__0) 
                                        | (((6U <= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__2__KET____DOT__lane__DOT__c2_i)) 
                                            & (7U >= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__2__KET____DOT__lane__DOT__c2_i))) 
                                           | ((IData)(vlSelf->__VdfgTmp_h2aa42c51__0) 
                                              | (0xeU 
                                                 <= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__2__KET____DOT__lane__DOT__c2_i))))));
    vlSelf->__PVT__ltl0c0_w_out_7 = ((IData)(vlSelf->__PVT__automata_stage0__DOT__automata_ltl0c0__DOT__ltl0c0_ste_5__DOT__internal_reg) 
                                     & (IData)(vlSelf->__PVT__automata_stage0__DOT__automata_ltl0c0__DOT__lut_match_ltl0c0_7__DOT__match_internal));
    vlSelf->__PVT__ltl1c0_w_out_3 = ((IData)(vlSelf->__PVT__automata_stage0__DOT__automata_ltl1c0__DOT__ltl1c0_ste_3__DOT__internal_reg) 
                                     & (IData)(vlSelf->__PVT__automata_stage0__DOT__automata_ltl0c0__DOT__lut_match_ltl0c0_7__DOT__match_internal));
    vlSelf->automata_stage0__DOT__automata_ltl1c0__DOT____Vcellinp__ltl1c0_ste_4__income_edges 
        = ((((IData)(vlSelf->__PVT__automata_stage0__DOT__automata_ltl1c0__DOT__ltl1c0_ste_2__DOT__internal_reg) 
             & ((IData)(vlSelf->__VdfgTmp_hb30bd723__0) 
                | ((IData)(vlSelf->__VdfgTmp_he9b10395__0) 
                   | ((IData)(vlSelf->__VdfgTmp_h2a7bf321__0) 
                      | (IData)(vlSelf->__VdfgTmp_hc765a5f5__0))))) 
            << 1U) | ((IData)(vlSelf->__PVT__automata_stage0__DOT__automata_ltl1c0__DOT__ltl1c0_ste_4__DOT__internal_reg) 
                      & (IData)(vlSelf->__PVT__automata_stage0__DOT__automata_ltl1c0__DOT__lut_match_ltl1c0_1__DOT__match_internal)));
    vlSelf->__PVT__ltl1c0_w_out_9 = ((IData)(vlSelf->__PVT__automata_stage0__DOT__automata_ltl1c0__DOT__ltl1c0_ste_8__DOT__internal_reg) 
                                     & ((IData)(vlSelf->__VdfgTmp_hb30bd723__0) 
                                        | (((3U <= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__2__KET____DOT__lane__DOT__c2_i)) 
                                            & (7U >= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__2__KET____DOT__lane__DOT__c2_i))) 
                                           | ((IData)(vlSelf->__VdfgTmp_h2a7bf321__0) 
                                              | (0xbU 
                                                 <= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__2__KET____DOT__lane__DOT__c2_i))))));
    vlSelf->__PVT__ltl1c0_w_out_5 = ((IData)(vlSelf->__PVT__automata_stage0__DOT__automata_ltl1c0__DOT__ltl1c0_ste_4__DOT__internal_reg) 
                                     & ((IData)(vlSelf->__VdfgTmp_hb30bd723__0) 
                                        | ((IData)(vlSelf->__VdfgTmp_he9b10395__0) 
                                           | (((5U 
                                                <= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__2__KET____DOT__lane__DOT__c2_i)) 
                                               & (5U 
                                                  >= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__2__KET____DOT__lane__DOT__c2_i))) 
                                              | (((7U 
                                                   <= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__2__KET____DOT__lane__DOT__c2_i)) 
                                                  & (7U 
                                                     >= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__2__KET____DOT__lane__DOT__c2_i))) 
                                                 | ((IData)(vlSelf->__VdfgTmp_h2a7bf321__0) 
                                                    | ((IData)(vlSelf->__VdfgTmp_hc765a5f5__0) 
                                                       | (((0xdU 
                                                            <= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__2__KET____DOT__lane__DOT__c2_i)) 
                                                           & (0xdU 
                                                              >= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__2__KET____DOT__lane__DOT__c2_i))) 
                                                          | (0xfU 
                                                             <= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__2__KET____DOT__lane__DOT__c2_i))))))))));
    vlSelf->automata_stage0__DOT__automata_ltl0c0__DOT____Vcellinp__ltl0c0_ste_4__income_edges 
        = (((IData)(vlSelf->__PVT__ltl0c0_w_out_9) 
            << 3U) | (((IData)(vlSelf->__PVT__ltl0c0_w_out_2) 
                       << 2U) | (((IData)(vlSelf->__PVT__automata_stage0__DOT__automata_ltl0c0__DOT__ltl0c0_ste_4__DOT__internal_reg) 
                                  << 1U) | (IData)(vlSelf->__PVT__ltl0c0_w_out_7))));
    vlSelf->automata_stage0__DOT__automata_ltl1c0__DOT____Vcellinp__ltl1c0_ste_7__income_edges 
        = (((IData)(vlSelf->__PVT__ltl1c0_w_out_9) 
            << 3U) | (((IData)(vlSelf->__PVT__ltl1c0_w_out_3) 
                       << 2U) | (((IData)(vlSelf->__PVT__ltl1c0_w_out_5) 
                                  << 1U) | (IData)(vlSelf->__PVT__automata_stage0__DOT__automata_ltl1c0__DOT__ltl1c0_ste_7__DOT__internal_reg))));
}

VL_ATTR_COLD void rm_tb_top_routerlinkedlist_Top_ModuleC0___stl_sequent__TOP__rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__3__KET____DOT__lane__DOT__I0c0__0(rm_tb_top_routerlinkedlist_Top_ModuleC0* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    rm_tb_top_routerlinkedlist__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            rm_tb_top_routerlinkedlist_Top_ModuleC0___stl_sequent__TOP__rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__3__KET____DOT__lane__DOT__I0c0__0\n"); );
    // Body
    vlSelf->__PVT__automata_stage0__DOT__automata_ltl1c0__DOT__start_of_data 
        = ((IData)(vlSelf->__PVT__automata_stage0__DOT__automata_ltl1c0__DOT__start_of_data_reg) 
           & ((~ (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT____Vcellinp__genblk1__BRA__3__KET____DOT__lane__lane_reset_i)) 
              & (IData)(vlSelf->__PVT__automata_stage0__DOT__automata_ltl1c0__DOT__start_of_data_reg_ne)));
    vlSelf->__PVT__automata_stage0__DOT__automata_ltl0c0__DOT__lut_match_ltl0c0_1__DOT__match_internal 
        = ((1U >= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__3__KET____DOT__lane__DOT__c0_i)) 
           | ((8U <= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__3__KET____DOT__lane__DOT__c0_i)) 
              & (9U >= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__3__KET____DOT__lane__DOT__c0_i))));
    vlSelf->__PVT__automata_stage0__DOT__automata_ltl1c0__DOT__lut_match_ltl1c0_1__DOT__match_internal 
        = ((0U >= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__3__KET____DOT__lane__DOT__c0_i)) 
           | (((2U <= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__3__KET____DOT__lane__DOT__c0_i)) 
               & (2U >= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__3__KET____DOT__lane__DOT__c0_i))) 
              | (((8U <= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__3__KET____DOT__lane__DOT__c0_i)) 
                  & (8U >= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__3__KET____DOT__lane__DOT__c0_i))) 
                 | ((0xaU <= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__3__KET____DOT__lane__DOT__c0_i)) 
                    & (0xaU >= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__3__KET____DOT__lane__DOT__c0_i))))));
    vlSelf->__PVT__ltl0c0_w_out_9 = ((IData)(vlSelf->__PVT__automata_stage0__DOT__automata_ltl0c0__DOT__ltl0c0_ste_8__DOT__internal_reg) 
                                     & (((2U <= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__3__KET____DOT__lane__DOT__c0_i)) 
                                         & (7U >= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__3__KET____DOT__lane__DOT__c0_i))) 
                                        | (0xaU <= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__3__KET____DOT__lane__DOT__c0_i))));
    vlSelf->__VdfgTmp_hb5b42c0f__0 = ((2U <= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__3__KET____DOT__lane__DOT__c0_i)) 
                                      & (3U >= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__3__KET____DOT__lane__DOT__c0_i)));
    vlSelf->__VdfgTmp_h2aa42c51__0 = ((0xaU <= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__3__KET____DOT__lane__DOT__c0_i)) 
                                      & (0xbU >= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__3__KET____DOT__lane__DOT__c0_i)));
    vlSelf->__VdfgTmp_he9b10395__0 = ((3U <= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__3__KET____DOT__lane__DOT__c0_i)) 
                                      & (3U >= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__3__KET____DOT__lane__DOT__c0_i)));
    vlSelf->__VdfgTmp_hc765a5f5__0 = ((0xbU <= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__3__KET____DOT__lane__DOT__c0_i)) 
                                      & (0xbU >= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__3__KET____DOT__lane__DOT__c0_i)));
    vlSelf->__PVT__automata_stage0__DOT__automata_ltl0c0__DOT__lut_match_ltl0c0_7__DOT__match_internal 
        = (((4U <= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__3__KET____DOT__lane__DOT__c0_i)) 
            & (7U >= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__3__KET____DOT__lane__DOT__c0_i))) 
           | (0xcU <= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__3__KET____DOT__lane__DOT__c0_i)));
    vlSelf->__VdfgTmp_hb30bd723__0 = ((1U <= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__3__KET____DOT__lane__DOT__c0_i)) 
                                      & (1U >= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__3__KET____DOT__lane__DOT__c0_i)));
    vlSelf->__VdfgTmp_h2a7bf321__0 = ((9U <= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__3__KET____DOT__lane__DOT__c0_i)) 
                                      & (9U >= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__3__KET____DOT__lane__DOT__c0_i)));
    vlSelf->automata_stage0__DOT__automata_ltl0c0__DOT____Vcellinp__ltl0c0_ste_1__income_edges 
        = (((IData)(vlSelf->__PVT__automata_stage0__DOT__automata_ltl1c0__DOT__start_of_data) 
            << 1U) | ((IData)(vlSelf->__PVT__automata_stage0__DOT__automata_ltl0c0__DOT__ltl0c0_ste_1__DOT__internal_reg) 
                      & (IData)(vlSelf->__PVT__automata_stage0__DOT__automata_ltl0c0__DOT__lut_match_ltl0c0_1__DOT__match_internal)));
    vlSelf->automata_stage0__DOT__automata_ltl0c0__DOT____Vcellinp__ltl0c0_ste_5__income_edges 
        = ((((IData)(vlSelf->__PVT__automata_stage0__DOT__automata_ltl0c0__DOT__ltl0c0_ste_3__DOT__internal_reg) 
             & (((4U <= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__3__KET____DOT__lane__DOT__c0_i)) 
                 & (5U >= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__3__KET____DOT__lane__DOT__c0_i))) 
                | ((0xcU <= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__3__KET____DOT__lane__DOT__c0_i)) 
                   & (0xdU >= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__3__KET____DOT__lane__DOT__c0_i))))) 
            << 1U) | ((IData)(vlSelf->__PVT__automata_stage0__DOT__automata_ltl0c0__DOT__ltl0c0_ste_5__DOT__internal_reg) 
                      & (IData)(vlSelf->__PVT__automata_stage0__DOT__automata_ltl0c0__DOT__lut_match_ltl0c0_1__DOT__match_internal)));
    vlSelf->automata_stage0__DOT__automata_ltl1c0__DOT____Vcellinp__ltl1c0_ste_1__income_edges 
        = (((IData)(vlSelf->__PVT__automata_stage0__DOT__automata_ltl1c0__DOT__start_of_data) 
            << 1U) | ((IData)(vlSelf->__PVT__automata_stage0__DOT__automata_ltl1c0__DOT__ltl1c0_ste_1__DOT__internal_reg) 
                      & (IData)(vlSelf->__PVT__automata_stage0__DOT__automata_ltl1c0__DOT__lut_match_ltl1c0_1__DOT__match_internal)));
    vlSelf->automata_stage0__DOT__automata_ltl1c0__DOT____Vcellinp__ltl1c0_ste_8__income_edges 
        = ((((IData)(vlSelf->__PVT__automata_stage0__DOT__automata_ltl1c0__DOT__ltl1c0_ste_8__DOT__internal_reg) 
             & (IData)(vlSelf->__PVT__automata_stage0__DOT__automata_ltl1c0__DOT__lut_match_ltl1c0_1__DOT__match_internal)) 
            << 1U) | ((IData)(vlSelf->__PVT__automata_stage0__DOT__automata_ltl1c0__DOT__ltl1c0_ste_4__DOT__internal_reg) 
                      & (((4U <= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__3__KET____DOT__lane__DOT__c0_i)) 
                          & (4U >= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__3__KET____DOT__lane__DOT__c0_i))) 
                         | (((6U <= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__3__KET____DOT__lane__DOT__c0_i)) 
                             & (6U >= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__3__KET____DOT__lane__DOT__c0_i))) 
                            | (((0xcU <= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__3__KET____DOT__lane__DOT__c0_i)) 
                                & (0xcU >= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__3__KET____DOT__lane__DOT__c0_i))) 
                               | ((0xeU <= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__3__KET____DOT__lane__DOT__c0_i)) 
                                  & (0xeU >= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__3__KET____DOT__lane__DOT__c0_i))))))));
    vlSelf->automata_stage0__DOT__automata_ltl0c0__DOT____Vcellinp__ltl0c0_ste_8__income_edges 
        = ((((IData)(vlSelf->__PVT__automata_stage0__DOT__automata_ltl0c0__DOT__ltl0c0_ste_8__DOT__internal_reg) 
             & (IData)(vlSelf->__PVT__automata_stage0__DOT__automata_ltl0c0__DOT__lut_match_ltl0c0_1__DOT__match_internal)) 
            << 1U) | ((IData)(vlSelf->__PVT__automata_stage0__DOT__automata_ltl0c0__DOT__ltl0c0_ste_5__DOT__internal_reg) 
                      & ((IData)(vlSelf->__VdfgTmp_hb5b42c0f__0) 
                         | (IData)(vlSelf->__VdfgTmp_h2aa42c51__0))));
    vlSelf->__PVT__ltl0c0_w_out_2 = ((IData)(vlSelf->__PVT__automata_stage0__DOT__automata_ltl0c0__DOT__ltl0c0_ste_2__DOT__internal_reg) 
                                     & ((IData)(vlSelf->__VdfgTmp_hb5b42c0f__0) 
                                        | (((6U <= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__3__KET____DOT__lane__DOT__c0_i)) 
                                            & (7U >= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__3__KET____DOT__lane__DOT__c0_i))) 
                                           | ((IData)(vlSelf->__VdfgTmp_h2aa42c51__0) 
                                              | (0xeU 
                                                 <= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__3__KET____DOT__lane__DOT__c0_i))))));
    vlSelf->__PVT__ltl0c0_w_out_7 = ((IData)(vlSelf->__PVT__automata_stage0__DOT__automata_ltl0c0__DOT__ltl0c0_ste_5__DOT__internal_reg) 
                                     & (IData)(vlSelf->__PVT__automata_stage0__DOT__automata_ltl0c0__DOT__lut_match_ltl0c0_7__DOT__match_internal));
    vlSelf->__PVT__ltl1c0_w_out_3 = ((IData)(vlSelf->__PVT__automata_stage0__DOT__automata_ltl1c0__DOT__ltl1c0_ste_3__DOT__internal_reg) 
                                     & (IData)(vlSelf->__PVT__automata_stage0__DOT__automata_ltl0c0__DOT__lut_match_ltl0c0_7__DOT__match_internal));
    vlSelf->automata_stage0__DOT__automata_ltl1c0__DOT____Vcellinp__ltl1c0_ste_4__income_edges 
        = ((((IData)(vlSelf->__PVT__automata_stage0__DOT__automata_ltl1c0__DOT__ltl1c0_ste_2__DOT__internal_reg) 
             & ((IData)(vlSelf->__VdfgTmp_hb30bd723__0) 
                | ((IData)(vlSelf->__VdfgTmp_he9b10395__0) 
                   | ((IData)(vlSelf->__VdfgTmp_h2a7bf321__0) 
                      | (IData)(vlSelf->__VdfgTmp_hc765a5f5__0))))) 
            << 1U) | ((IData)(vlSelf->__PVT__automata_stage0__DOT__automata_ltl1c0__DOT__ltl1c0_ste_4__DOT__internal_reg) 
                      & (IData)(vlSelf->__PVT__automata_stage0__DOT__automata_ltl1c0__DOT__lut_match_ltl1c0_1__DOT__match_internal)));
    vlSelf->__PVT__ltl1c0_w_out_9 = ((IData)(vlSelf->__PVT__automata_stage0__DOT__automata_ltl1c0__DOT__ltl1c0_ste_8__DOT__internal_reg) 
                                     & ((IData)(vlSelf->__VdfgTmp_hb30bd723__0) 
                                        | (((3U <= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__3__KET____DOT__lane__DOT__c0_i)) 
                                            & (7U >= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__3__KET____DOT__lane__DOT__c0_i))) 
                                           | ((IData)(vlSelf->__VdfgTmp_h2a7bf321__0) 
                                              | (0xbU 
                                                 <= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__3__KET____DOT__lane__DOT__c0_i))))));
    vlSelf->__PVT__ltl1c0_w_out_5 = ((IData)(vlSelf->__PVT__automata_stage0__DOT__automata_ltl1c0__DOT__ltl1c0_ste_4__DOT__internal_reg) 
                                     & ((IData)(vlSelf->__VdfgTmp_hb30bd723__0) 
                                        | ((IData)(vlSelf->__VdfgTmp_he9b10395__0) 
                                           | (((5U 
                                                <= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__3__KET____DOT__lane__DOT__c0_i)) 
                                               & (5U 
                                                  >= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__3__KET____DOT__lane__DOT__c0_i))) 
                                              | (((7U 
                                                   <= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__3__KET____DOT__lane__DOT__c0_i)) 
                                                  & (7U 
                                                     >= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__3__KET____DOT__lane__DOT__c0_i))) 
                                                 | ((IData)(vlSelf->__VdfgTmp_h2a7bf321__0) 
                                                    | ((IData)(vlSelf->__VdfgTmp_hc765a5f5__0) 
                                                       | (((0xdU 
                                                            <= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__3__KET____DOT__lane__DOT__c0_i)) 
                                                           & (0xdU 
                                                              >= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__3__KET____DOT__lane__DOT__c0_i))) 
                                                          | (0xfU 
                                                             <= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__3__KET____DOT__lane__DOT__c0_i))))))))));
    vlSelf->automata_stage0__DOT__automata_ltl0c0__DOT____Vcellinp__ltl0c0_ste_4__income_edges 
        = (((IData)(vlSelf->__PVT__ltl0c0_w_out_9) 
            << 3U) | (((IData)(vlSelf->__PVT__ltl0c0_w_out_2) 
                       << 2U) | (((IData)(vlSelf->__PVT__automata_stage0__DOT__automata_ltl0c0__DOT__ltl0c0_ste_4__DOT__internal_reg) 
                                  << 1U) | (IData)(vlSelf->__PVT__ltl0c0_w_out_7))));
    vlSelf->automata_stage0__DOT__automata_ltl1c0__DOT____Vcellinp__ltl1c0_ste_7__income_edges 
        = (((IData)(vlSelf->__PVT__ltl1c0_w_out_9) 
            << 3U) | (((IData)(vlSelf->__PVT__ltl1c0_w_out_3) 
                       << 2U) | (((IData)(vlSelf->__PVT__ltl1c0_w_out_5) 
                                  << 1U) | (IData)(vlSelf->__PVT__automata_stage0__DOT__automata_ltl1c0__DOT__ltl1c0_ste_7__DOT__internal_reg))));
}

VL_ATTR_COLD void rm_tb_top_routerlinkedlist_Top_ModuleC0___stl_sequent__TOP__rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__3__KET____DOT__lane__DOT__I1c0__0(rm_tb_top_routerlinkedlist_Top_ModuleC0* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    rm_tb_top_routerlinkedlist__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            rm_tb_top_routerlinkedlist_Top_ModuleC0___stl_sequent__TOP__rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__3__KET____DOT__lane__DOT__I1c0__0\n"); );
    // Body
    vlSelf->__PVT__automata_stage0__DOT__automata_ltl1c0__DOT__start_of_data 
        = ((IData)(vlSelf->__PVT__automata_stage0__DOT__automata_ltl1c0__DOT__start_of_data_reg) 
           & ((~ (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT____Vcellinp__genblk1__BRA__3__KET____DOT__lane__lane_reset_i)) 
              & (IData)(vlSelf->__PVT__automata_stage0__DOT__automata_ltl1c0__DOT__start_of_data_reg_ne)));
    vlSelf->__PVT__automata_stage0__DOT__automata_ltl0c0__DOT__lut_match_ltl0c0_1__DOT__match_internal 
        = ((1U >= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__3__KET____DOT__lane__DOT__c2_i)) 
           | ((8U <= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__3__KET____DOT__lane__DOT__c2_i)) 
              & (9U >= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__3__KET____DOT__lane__DOT__c2_i))));
    vlSelf->__PVT__automata_stage0__DOT__automata_ltl1c0__DOT__lut_match_ltl1c0_1__DOT__match_internal 
        = ((0U >= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__3__KET____DOT__lane__DOT__c2_i)) 
           | (((2U <= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__3__KET____DOT__lane__DOT__c2_i)) 
               & (2U >= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__3__KET____DOT__lane__DOT__c2_i))) 
              | (((8U <= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__3__KET____DOT__lane__DOT__c2_i)) 
                  & (8U >= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__3__KET____DOT__lane__DOT__c2_i))) 
                 | ((0xaU <= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__3__KET____DOT__lane__DOT__c2_i)) 
                    & (0xaU >= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__3__KET____DOT__lane__DOT__c2_i))))));
    vlSelf->__PVT__ltl0c0_w_out_9 = ((IData)(vlSelf->__PVT__automata_stage0__DOT__automata_ltl0c0__DOT__ltl0c0_ste_8__DOT__internal_reg) 
                                     & (((2U <= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__3__KET____DOT__lane__DOT__c2_i)) 
                                         & (7U >= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__3__KET____DOT__lane__DOT__c2_i))) 
                                        | (0xaU <= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__3__KET____DOT__lane__DOT__c2_i))));
    vlSelf->__VdfgTmp_hb5b42c0f__0 = ((2U <= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__3__KET____DOT__lane__DOT__c2_i)) 
                                      & (3U >= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__3__KET____DOT__lane__DOT__c2_i)));
    vlSelf->__VdfgTmp_h2aa42c51__0 = ((0xaU <= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__3__KET____DOT__lane__DOT__c2_i)) 
                                      & (0xbU >= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__3__KET____DOT__lane__DOT__c2_i)));
    vlSelf->__VdfgTmp_he9b10395__0 = ((3U <= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__3__KET____DOT__lane__DOT__c2_i)) 
                                      & (3U >= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__3__KET____DOT__lane__DOT__c2_i)));
    vlSelf->__VdfgTmp_hc765a5f5__0 = ((0xbU <= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__3__KET____DOT__lane__DOT__c2_i)) 
                                      & (0xbU >= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__3__KET____DOT__lane__DOT__c2_i)));
    vlSelf->__PVT__automata_stage0__DOT__automata_ltl0c0__DOT__lut_match_ltl0c0_7__DOT__match_internal 
        = (((4U <= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__3__KET____DOT__lane__DOT__c2_i)) 
            & (7U >= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__3__KET____DOT__lane__DOT__c2_i))) 
           | (0xcU <= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__3__KET____DOT__lane__DOT__c2_i)));
    vlSelf->__VdfgTmp_hb30bd723__0 = ((1U <= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__3__KET____DOT__lane__DOT__c2_i)) 
                                      & (1U >= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__3__KET____DOT__lane__DOT__c2_i)));
    vlSelf->__VdfgTmp_h2a7bf321__0 = ((9U <= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__3__KET____DOT__lane__DOT__c2_i)) 
                                      & (9U >= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__3__KET____DOT__lane__DOT__c2_i)));
    vlSelf->automata_stage0__DOT__automata_ltl0c0__DOT____Vcellinp__ltl0c0_ste_1__income_edges 
        = (((IData)(vlSelf->__PVT__automata_stage0__DOT__automata_ltl1c0__DOT__start_of_data) 
            << 1U) | ((IData)(vlSelf->__PVT__automata_stage0__DOT__automata_ltl0c0__DOT__ltl0c0_ste_1__DOT__internal_reg) 
                      & (IData)(vlSelf->__PVT__automata_stage0__DOT__automata_ltl0c0__DOT__lut_match_ltl0c0_1__DOT__match_internal)));
    vlSelf->automata_stage0__DOT__automata_ltl0c0__DOT____Vcellinp__ltl0c0_ste_5__income_edges 
        = ((((IData)(vlSelf->__PVT__automata_stage0__DOT__automata_ltl0c0__DOT__ltl0c0_ste_3__DOT__internal_reg) 
             & (((4U <= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__3__KET____DOT__lane__DOT__c2_i)) 
                 & (5U >= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__3__KET____DOT__lane__DOT__c2_i))) 
                | ((0xcU <= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__3__KET____DOT__lane__DOT__c2_i)) 
                   & (0xdU >= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__3__KET____DOT__lane__DOT__c2_i))))) 
            << 1U) | ((IData)(vlSelf->__PVT__automata_stage0__DOT__automata_ltl0c0__DOT__ltl0c0_ste_5__DOT__internal_reg) 
                      & (IData)(vlSelf->__PVT__automata_stage0__DOT__automata_ltl0c0__DOT__lut_match_ltl0c0_1__DOT__match_internal)));
    vlSelf->automata_stage0__DOT__automata_ltl1c0__DOT____Vcellinp__ltl1c0_ste_1__income_edges 
        = (((IData)(vlSelf->__PVT__automata_stage0__DOT__automata_ltl1c0__DOT__start_of_data) 
            << 1U) | ((IData)(vlSelf->__PVT__automata_stage0__DOT__automata_ltl1c0__DOT__ltl1c0_ste_1__DOT__internal_reg) 
                      & (IData)(vlSelf->__PVT__automata_stage0__DOT__automata_ltl1c0__DOT__lut_match_ltl1c0_1__DOT__match_internal)));
    vlSelf->automata_stage0__DOT__automata_ltl1c0__DOT____Vcellinp__ltl1c0_ste_8__income_edges 
        = ((((IData)(vlSelf->__PVT__automata_stage0__DOT__automata_ltl1c0__DOT__ltl1c0_ste_8__DOT__internal_reg) 
             & (IData)(vlSelf->__PVT__automata_stage0__DOT__automata_ltl1c0__DOT__lut_match_ltl1c0_1__DOT__match_internal)) 
            << 1U) | ((IData)(vlSelf->__PVT__automata_stage0__DOT__automata_ltl1c0__DOT__ltl1c0_ste_4__DOT__internal_reg) 
                      & (((4U <= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__3__KET____DOT__lane__DOT__c2_i)) 
                          & (4U >= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__3__KET____DOT__lane__DOT__c2_i))) 
                         | (((6U <= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__3__KET____DOT__lane__DOT__c2_i)) 
                             & (6U >= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__3__KET____DOT__lane__DOT__c2_i))) 
                            | (((0xcU <= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__3__KET____DOT__lane__DOT__c2_i)) 
                                & (0xcU >= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__3__KET____DOT__lane__DOT__c2_i))) 
                               | ((0xeU <= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__3__KET____DOT__lane__DOT__c2_i)) 
                                  & (0xeU >= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__3__KET____DOT__lane__DOT__c2_i))))))));
    vlSelf->automata_stage0__DOT__automata_ltl0c0__DOT____Vcellinp__ltl0c0_ste_8__income_edges 
        = ((((IData)(vlSelf->__PVT__automata_stage0__DOT__automata_ltl0c0__DOT__ltl0c0_ste_8__DOT__internal_reg) 
             & (IData)(vlSelf->__PVT__automata_stage0__DOT__automata_ltl0c0__DOT__lut_match_ltl0c0_1__DOT__match_internal)) 
            << 1U) | ((IData)(vlSelf->__PVT__automata_stage0__DOT__automata_ltl0c0__DOT__ltl0c0_ste_5__DOT__internal_reg) 
                      & ((IData)(vlSelf->__VdfgTmp_hb5b42c0f__0) 
                         | (IData)(vlSelf->__VdfgTmp_h2aa42c51__0))));
    vlSelf->__PVT__ltl0c0_w_out_2 = ((IData)(vlSelf->__PVT__automata_stage0__DOT__automata_ltl0c0__DOT__ltl0c0_ste_2__DOT__internal_reg) 
                                     & ((IData)(vlSelf->__VdfgTmp_hb5b42c0f__0) 
                                        | (((6U <= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__3__KET____DOT__lane__DOT__c2_i)) 
                                            & (7U >= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__3__KET____DOT__lane__DOT__c2_i))) 
                                           | ((IData)(vlSelf->__VdfgTmp_h2aa42c51__0) 
                                              | (0xeU 
                                                 <= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__3__KET____DOT__lane__DOT__c2_i))))));
    vlSelf->__PVT__ltl0c0_w_out_7 = ((IData)(vlSelf->__PVT__automata_stage0__DOT__automata_ltl0c0__DOT__ltl0c0_ste_5__DOT__internal_reg) 
                                     & (IData)(vlSelf->__PVT__automata_stage0__DOT__automata_ltl0c0__DOT__lut_match_ltl0c0_7__DOT__match_internal));
    vlSelf->__PVT__ltl1c0_w_out_3 = ((IData)(vlSelf->__PVT__automata_stage0__DOT__automata_ltl1c0__DOT__ltl1c0_ste_3__DOT__internal_reg) 
                                     & (IData)(vlSelf->__PVT__automata_stage0__DOT__automata_ltl0c0__DOT__lut_match_ltl0c0_7__DOT__match_internal));
    vlSelf->automata_stage0__DOT__automata_ltl1c0__DOT____Vcellinp__ltl1c0_ste_4__income_edges 
        = ((((IData)(vlSelf->__PVT__automata_stage0__DOT__automata_ltl1c0__DOT__ltl1c0_ste_2__DOT__internal_reg) 
             & ((IData)(vlSelf->__VdfgTmp_hb30bd723__0) 
                | ((IData)(vlSelf->__VdfgTmp_he9b10395__0) 
                   | ((IData)(vlSelf->__VdfgTmp_h2a7bf321__0) 
                      | (IData)(vlSelf->__VdfgTmp_hc765a5f5__0))))) 
            << 1U) | ((IData)(vlSelf->__PVT__automata_stage0__DOT__automata_ltl1c0__DOT__ltl1c0_ste_4__DOT__internal_reg) 
                      & (IData)(vlSelf->__PVT__automata_stage0__DOT__automata_ltl1c0__DOT__lut_match_ltl1c0_1__DOT__match_internal)));
    vlSelf->__PVT__ltl1c0_w_out_9 = ((IData)(vlSelf->__PVT__automata_stage0__DOT__automata_ltl1c0__DOT__ltl1c0_ste_8__DOT__internal_reg) 
                                     & ((IData)(vlSelf->__VdfgTmp_hb30bd723__0) 
                                        | (((3U <= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__3__KET____DOT__lane__DOT__c2_i)) 
                                            & (7U >= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__3__KET____DOT__lane__DOT__c2_i))) 
                                           | ((IData)(vlSelf->__VdfgTmp_h2a7bf321__0) 
                                              | (0xbU 
                                                 <= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__3__KET____DOT__lane__DOT__c2_i))))));
    vlSelf->__PVT__ltl1c0_w_out_5 = ((IData)(vlSelf->__PVT__automata_stage0__DOT__automata_ltl1c0__DOT__ltl1c0_ste_4__DOT__internal_reg) 
                                     & ((IData)(vlSelf->__VdfgTmp_hb30bd723__0) 
                                        | ((IData)(vlSelf->__VdfgTmp_he9b10395__0) 
                                           | (((5U 
                                                <= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__3__KET____DOT__lane__DOT__c2_i)) 
                                               & (5U 
                                                  >= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__3__KET____DOT__lane__DOT__c2_i))) 
                                              | (((7U 
                                                   <= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__3__KET____DOT__lane__DOT__c2_i)) 
                                                  & (7U 
                                                     >= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__3__KET____DOT__lane__DOT__c2_i))) 
                                                 | ((IData)(vlSelf->__VdfgTmp_h2a7bf321__0) 
                                                    | ((IData)(vlSelf->__VdfgTmp_hc765a5f5__0) 
                                                       | (((0xdU 
                                                            <= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__3__KET____DOT__lane__DOT__c2_i)) 
                                                           & (0xdU 
                                                              >= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__3__KET____DOT__lane__DOT__c2_i))) 
                                                          | (0xfU 
                                                             <= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__3__KET____DOT__lane__DOT__c2_i))))))))));
    vlSelf->automata_stage0__DOT__automata_ltl0c0__DOT____Vcellinp__ltl0c0_ste_4__income_edges 
        = (((IData)(vlSelf->__PVT__ltl0c0_w_out_9) 
            << 3U) | (((IData)(vlSelf->__PVT__ltl0c0_w_out_2) 
                       << 2U) | (((IData)(vlSelf->__PVT__automata_stage0__DOT__automata_ltl0c0__DOT__ltl0c0_ste_4__DOT__internal_reg) 
                                  << 1U) | (IData)(vlSelf->__PVT__ltl0c0_w_out_7))));
    vlSelf->automata_stage0__DOT__automata_ltl1c0__DOT____Vcellinp__ltl1c0_ste_7__income_edges 
        = (((IData)(vlSelf->__PVT__ltl1c0_w_out_9) 
            << 3U) | (((IData)(vlSelf->__PVT__ltl1c0_w_out_3) 
                       << 2U) | (((IData)(vlSelf->__PVT__ltl1c0_w_out_5) 
                                  << 1U) | (IData)(vlSelf->__PVT__automata_stage0__DOT__automata_ltl1c0__DOT__ltl1c0_ste_7__DOT__internal_reg))));
}

VL_ATTR_COLD void rm_tb_top_routerlinkedlist_Top_ModuleC0___stl_sequent__TOP__rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__4__KET____DOT__lane__DOT__I0c0__0(rm_tb_top_routerlinkedlist_Top_ModuleC0* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    rm_tb_top_routerlinkedlist__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            rm_tb_top_routerlinkedlist_Top_ModuleC0___stl_sequent__TOP__rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__4__KET____DOT__lane__DOT__I0c0__0\n"); );
    // Body
    vlSelf->__PVT__automata_stage0__DOT__automata_ltl1c0__DOT__start_of_data 
        = ((IData)(vlSelf->__PVT__automata_stage0__DOT__automata_ltl1c0__DOT__start_of_data_reg) 
           & ((~ (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT____Vcellinp__genblk1__BRA__4__KET____DOT__lane__lane_reset_i)) 
              & (IData)(vlSelf->__PVT__automata_stage0__DOT__automata_ltl1c0__DOT__start_of_data_reg_ne)));
    vlSelf->__PVT__automata_stage0__DOT__automata_ltl0c0__DOT__lut_match_ltl0c0_1__DOT__match_internal 
        = ((1U >= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__4__KET____DOT__lane__DOT__c0_i)) 
           | ((8U <= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__4__KET____DOT__lane__DOT__c0_i)) 
              & (9U >= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__4__KET____DOT__lane__DOT__c0_i))));
    vlSelf->__PVT__automata_stage0__DOT__automata_ltl1c0__DOT__lut_match_ltl1c0_1__DOT__match_internal 
        = ((0U >= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__4__KET____DOT__lane__DOT__c0_i)) 
           | (((2U <= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__4__KET____DOT__lane__DOT__c0_i)) 
               & (2U >= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__4__KET____DOT__lane__DOT__c0_i))) 
              | (((8U <= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__4__KET____DOT__lane__DOT__c0_i)) 
                  & (8U >= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__4__KET____DOT__lane__DOT__c0_i))) 
                 | ((0xaU <= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__4__KET____DOT__lane__DOT__c0_i)) 
                    & (0xaU >= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__4__KET____DOT__lane__DOT__c0_i))))));
    vlSelf->__PVT__ltl0c0_w_out_9 = ((IData)(vlSelf->__PVT__automata_stage0__DOT__automata_ltl0c0__DOT__ltl0c0_ste_8__DOT__internal_reg) 
                                     & (((2U <= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__4__KET____DOT__lane__DOT__c0_i)) 
                                         & (7U >= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__4__KET____DOT__lane__DOT__c0_i))) 
                                        | (0xaU <= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__4__KET____DOT__lane__DOT__c0_i))));
    vlSelf->__VdfgTmp_hb5b42c0f__0 = ((2U <= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__4__KET____DOT__lane__DOT__c0_i)) 
                                      & (3U >= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__4__KET____DOT__lane__DOT__c0_i)));
    vlSelf->__VdfgTmp_h2aa42c51__0 = ((0xaU <= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__4__KET____DOT__lane__DOT__c0_i)) 
                                      & (0xbU >= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__4__KET____DOT__lane__DOT__c0_i)));
    vlSelf->__VdfgTmp_he9b10395__0 = ((3U <= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__4__KET____DOT__lane__DOT__c0_i)) 
                                      & (3U >= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__4__KET____DOT__lane__DOT__c0_i)));
    vlSelf->__VdfgTmp_hc765a5f5__0 = ((0xbU <= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__4__KET____DOT__lane__DOT__c0_i)) 
                                      & (0xbU >= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__4__KET____DOT__lane__DOT__c0_i)));
    vlSelf->__PVT__automata_stage0__DOT__automata_ltl0c0__DOT__lut_match_ltl0c0_7__DOT__match_internal 
        = (((4U <= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__4__KET____DOT__lane__DOT__c0_i)) 
            & (7U >= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__4__KET____DOT__lane__DOT__c0_i))) 
           | (0xcU <= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__4__KET____DOT__lane__DOT__c0_i)));
    vlSelf->__VdfgTmp_hb30bd723__0 = ((1U <= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__4__KET____DOT__lane__DOT__c0_i)) 
                                      & (1U >= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__4__KET____DOT__lane__DOT__c0_i)));
    vlSelf->__VdfgTmp_h2a7bf321__0 = ((9U <= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__4__KET____DOT__lane__DOT__c0_i)) 
                                      & (9U >= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__4__KET____DOT__lane__DOT__c0_i)));
    vlSelf->automata_stage0__DOT__automata_ltl0c0__DOT____Vcellinp__ltl0c0_ste_1__income_edges 
        = (((IData)(vlSelf->__PVT__automata_stage0__DOT__automata_ltl1c0__DOT__start_of_data) 
            << 1U) | ((IData)(vlSelf->__PVT__automata_stage0__DOT__automata_ltl0c0__DOT__ltl0c0_ste_1__DOT__internal_reg) 
                      & (IData)(vlSelf->__PVT__automata_stage0__DOT__automata_ltl0c0__DOT__lut_match_ltl0c0_1__DOT__match_internal)));
    vlSelf->automata_stage0__DOT__automata_ltl0c0__DOT____Vcellinp__ltl0c0_ste_5__income_edges 
        = ((((IData)(vlSelf->__PVT__automata_stage0__DOT__automata_ltl0c0__DOT__ltl0c0_ste_3__DOT__internal_reg) 
             & (((4U <= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__4__KET____DOT__lane__DOT__c0_i)) 
                 & (5U >= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__4__KET____DOT__lane__DOT__c0_i))) 
                | ((0xcU <= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__4__KET____DOT__lane__DOT__c0_i)) 
                   & (0xdU >= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__4__KET____DOT__lane__DOT__c0_i))))) 
            << 1U) | ((IData)(vlSelf->__PVT__automata_stage0__DOT__automata_ltl0c0__DOT__ltl0c0_ste_5__DOT__internal_reg) 
                      & (IData)(vlSelf->__PVT__automata_stage0__DOT__automata_ltl0c0__DOT__lut_match_ltl0c0_1__DOT__match_internal)));
    vlSelf->automata_stage0__DOT__automata_ltl1c0__DOT____Vcellinp__ltl1c0_ste_1__income_edges 
        = (((IData)(vlSelf->__PVT__automata_stage0__DOT__automata_ltl1c0__DOT__start_of_data) 
            << 1U) | ((IData)(vlSelf->__PVT__automata_stage0__DOT__automata_ltl1c0__DOT__ltl1c0_ste_1__DOT__internal_reg) 
                      & (IData)(vlSelf->__PVT__automata_stage0__DOT__automata_ltl1c0__DOT__lut_match_ltl1c0_1__DOT__match_internal)));
    vlSelf->automata_stage0__DOT__automata_ltl1c0__DOT____Vcellinp__ltl1c0_ste_8__income_edges 
        = ((((IData)(vlSelf->__PVT__automata_stage0__DOT__automata_ltl1c0__DOT__ltl1c0_ste_8__DOT__internal_reg) 
             & (IData)(vlSelf->__PVT__automata_stage0__DOT__automata_ltl1c0__DOT__lut_match_ltl1c0_1__DOT__match_internal)) 
            << 1U) | ((IData)(vlSelf->__PVT__automata_stage0__DOT__automata_ltl1c0__DOT__ltl1c0_ste_4__DOT__internal_reg) 
                      & (((4U <= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__4__KET____DOT__lane__DOT__c0_i)) 
                          & (4U >= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__4__KET____DOT__lane__DOT__c0_i))) 
                         | (((6U <= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__4__KET____DOT__lane__DOT__c0_i)) 
                             & (6U >= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__4__KET____DOT__lane__DOT__c0_i))) 
                            | (((0xcU <= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__4__KET____DOT__lane__DOT__c0_i)) 
                                & (0xcU >= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__4__KET____DOT__lane__DOT__c0_i))) 
                               | ((0xeU <= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__4__KET____DOT__lane__DOT__c0_i)) 
                                  & (0xeU >= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__4__KET____DOT__lane__DOT__c0_i))))))));
    vlSelf->automata_stage0__DOT__automata_ltl0c0__DOT____Vcellinp__ltl0c0_ste_8__income_edges 
        = ((((IData)(vlSelf->__PVT__automata_stage0__DOT__automata_ltl0c0__DOT__ltl0c0_ste_8__DOT__internal_reg) 
             & (IData)(vlSelf->__PVT__automata_stage0__DOT__automata_ltl0c0__DOT__lut_match_ltl0c0_1__DOT__match_internal)) 
            << 1U) | ((IData)(vlSelf->__PVT__automata_stage0__DOT__automata_ltl0c0__DOT__ltl0c0_ste_5__DOT__internal_reg) 
                      & ((IData)(vlSelf->__VdfgTmp_hb5b42c0f__0) 
                         | (IData)(vlSelf->__VdfgTmp_h2aa42c51__0))));
    vlSelf->__PVT__ltl0c0_w_out_2 = ((IData)(vlSelf->__PVT__automata_stage0__DOT__automata_ltl0c0__DOT__ltl0c0_ste_2__DOT__internal_reg) 
                                     & ((IData)(vlSelf->__VdfgTmp_hb5b42c0f__0) 
                                        | (((6U <= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__4__KET____DOT__lane__DOT__c0_i)) 
                                            & (7U >= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__4__KET____DOT__lane__DOT__c0_i))) 
                                           | ((IData)(vlSelf->__VdfgTmp_h2aa42c51__0) 
                                              | (0xeU 
                                                 <= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__4__KET____DOT__lane__DOT__c0_i))))));
    vlSelf->__PVT__ltl0c0_w_out_7 = ((IData)(vlSelf->__PVT__automata_stage0__DOT__automata_ltl0c0__DOT__ltl0c0_ste_5__DOT__internal_reg) 
                                     & (IData)(vlSelf->__PVT__automata_stage0__DOT__automata_ltl0c0__DOT__lut_match_ltl0c0_7__DOT__match_internal));
    vlSelf->__PVT__ltl1c0_w_out_3 = ((IData)(vlSelf->__PVT__automata_stage0__DOT__automata_ltl1c0__DOT__ltl1c0_ste_3__DOT__internal_reg) 
                                     & (IData)(vlSelf->__PVT__automata_stage0__DOT__automata_ltl0c0__DOT__lut_match_ltl0c0_7__DOT__match_internal));
    vlSelf->automata_stage0__DOT__automata_ltl1c0__DOT____Vcellinp__ltl1c0_ste_4__income_edges 
        = ((((IData)(vlSelf->__PVT__automata_stage0__DOT__automata_ltl1c0__DOT__ltl1c0_ste_2__DOT__internal_reg) 
             & ((IData)(vlSelf->__VdfgTmp_hb30bd723__0) 
                | ((IData)(vlSelf->__VdfgTmp_he9b10395__0) 
                   | ((IData)(vlSelf->__VdfgTmp_h2a7bf321__0) 
                      | (IData)(vlSelf->__VdfgTmp_hc765a5f5__0))))) 
            << 1U) | ((IData)(vlSelf->__PVT__automata_stage0__DOT__automata_ltl1c0__DOT__ltl1c0_ste_4__DOT__internal_reg) 
                      & (IData)(vlSelf->__PVT__automata_stage0__DOT__automata_ltl1c0__DOT__lut_match_ltl1c0_1__DOT__match_internal)));
    vlSelf->__PVT__ltl1c0_w_out_9 = ((IData)(vlSelf->__PVT__automata_stage0__DOT__automata_ltl1c0__DOT__ltl1c0_ste_8__DOT__internal_reg) 
                                     & ((IData)(vlSelf->__VdfgTmp_hb30bd723__0) 
                                        | (((3U <= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__4__KET____DOT__lane__DOT__c0_i)) 
                                            & (7U >= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__4__KET____DOT__lane__DOT__c0_i))) 
                                           | ((IData)(vlSelf->__VdfgTmp_h2a7bf321__0) 
                                              | (0xbU 
                                                 <= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__4__KET____DOT__lane__DOT__c0_i))))));
    vlSelf->__PVT__ltl1c0_w_out_5 = ((IData)(vlSelf->__PVT__automata_stage0__DOT__automata_ltl1c0__DOT__ltl1c0_ste_4__DOT__internal_reg) 
                                     & ((IData)(vlSelf->__VdfgTmp_hb30bd723__0) 
                                        | ((IData)(vlSelf->__VdfgTmp_he9b10395__0) 
                                           | (((5U 
                                                <= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__4__KET____DOT__lane__DOT__c0_i)) 
                                               & (5U 
                                                  >= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__4__KET____DOT__lane__DOT__c0_i))) 
                                              | (((7U 
                                                   <= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__4__KET____DOT__lane__DOT__c0_i)) 
                                                  & (7U 
                                                     >= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__4__KET____DOT__lane__DOT__c0_i))) 
                                                 | ((IData)(vlSelf->__VdfgTmp_h2a7bf321__0) 
                                                    | ((IData)(vlSelf->__VdfgTmp_hc765a5f5__0) 
                                                       | (((0xdU 
                                                            <= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__4__KET____DOT__lane__DOT__c0_i)) 
                                                           & (0xdU 
                                                              >= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__4__KET____DOT__lane__DOT__c0_i))) 
                                                          | (0xfU 
                                                             <= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__4__KET____DOT__lane__DOT__c0_i))))))))));
    vlSelf->automata_stage0__DOT__automata_ltl0c0__DOT____Vcellinp__ltl0c0_ste_4__income_edges 
        = (((IData)(vlSelf->__PVT__ltl0c0_w_out_9) 
            << 3U) | (((IData)(vlSelf->__PVT__ltl0c0_w_out_2) 
                       << 2U) | (((IData)(vlSelf->__PVT__automata_stage0__DOT__automata_ltl0c0__DOT__ltl0c0_ste_4__DOT__internal_reg) 
                                  << 1U) | (IData)(vlSelf->__PVT__ltl0c0_w_out_7))));
    vlSelf->automata_stage0__DOT__automata_ltl1c0__DOT____Vcellinp__ltl1c0_ste_7__income_edges 
        = (((IData)(vlSelf->__PVT__ltl1c0_w_out_9) 
            << 3U) | (((IData)(vlSelf->__PVT__ltl1c0_w_out_3) 
                       << 2U) | (((IData)(vlSelf->__PVT__ltl1c0_w_out_5) 
                                  << 1U) | (IData)(vlSelf->__PVT__automata_stage0__DOT__automata_ltl1c0__DOT__ltl1c0_ste_7__DOT__internal_reg))));
}

VL_ATTR_COLD void rm_tb_top_routerlinkedlist_Top_ModuleC0___stl_sequent__TOP__rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__4__KET____DOT__lane__DOT__I1c0__0(rm_tb_top_routerlinkedlist_Top_ModuleC0* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    rm_tb_top_routerlinkedlist__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            rm_tb_top_routerlinkedlist_Top_ModuleC0___stl_sequent__TOP__rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__4__KET____DOT__lane__DOT__I1c0__0\n"); );
    // Body
    vlSelf->__PVT__automata_stage0__DOT__automata_ltl1c0__DOT__start_of_data 
        = ((IData)(vlSelf->__PVT__automata_stage0__DOT__automata_ltl1c0__DOT__start_of_data_reg) 
           & ((~ (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT____Vcellinp__genblk1__BRA__4__KET____DOT__lane__lane_reset_i)) 
              & (IData)(vlSelf->__PVT__automata_stage0__DOT__automata_ltl1c0__DOT__start_of_data_reg_ne)));
    vlSelf->__PVT__automata_stage0__DOT__automata_ltl0c0__DOT__lut_match_ltl0c0_1__DOT__match_internal 
        = ((1U >= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__4__KET____DOT__lane__DOT__c2_i)) 
           | ((8U <= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__4__KET____DOT__lane__DOT__c2_i)) 
              & (9U >= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__4__KET____DOT__lane__DOT__c2_i))));
    vlSelf->__PVT__automata_stage0__DOT__automata_ltl1c0__DOT__lut_match_ltl1c0_1__DOT__match_internal 
        = ((0U >= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__4__KET____DOT__lane__DOT__c2_i)) 
           | (((2U <= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__4__KET____DOT__lane__DOT__c2_i)) 
               & (2U >= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__4__KET____DOT__lane__DOT__c2_i))) 
              | (((8U <= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__4__KET____DOT__lane__DOT__c2_i)) 
                  & (8U >= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__4__KET____DOT__lane__DOT__c2_i))) 
                 | ((0xaU <= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__4__KET____DOT__lane__DOT__c2_i)) 
                    & (0xaU >= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__4__KET____DOT__lane__DOT__c2_i))))));
    vlSelf->__PVT__ltl0c0_w_out_9 = ((IData)(vlSelf->__PVT__automata_stage0__DOT__automata_ltl0c0__DOT__ltl0c0_ste_8__DOT__internal_reg) 
                                     & (((2U <= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__4__KET____DOT__lane__DOT__c2_i)) 
                                         & (7U >= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__4__KET____DOT__lane__DOT__c2_i))) 
                                        | (0xaU <= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__4__KET____DOT__lane__DOT__c2_i))));
    vlSelf->__VdfgTmp_hb5b42c0f__0 = ((2U <= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__4__KET____DOT__lane__DOT__c2_i)) 
                                      & (3U >= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__4__KET____DOT__lane__DOT__c2_i)));
    vlSelf->__VdfgTmp_h2aa42c51__0 = ((0xaU <= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__4__KET____DOT__lane__DOT__c2_i)) 
                                      & (0xbU >= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__4__KET____DOT__lane__DOT__c2_i)));
    vlSelf->__VdfgTmp_he9b10395__0 = ((3U <= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__4__KET____DOT__lane__DOT__c2_i)) 
                                      & (3U >= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__4__KET____DOT__lane__DOT__c2_i)));
    vlSelf->__VdfgTmp_hc765a5f5__0 = ((0xbU <= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__4__KET____DOT__lane__DOT__c2_i)) 
                                      & (0xbU >= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__4__KET____DOT__lane__DOT__c2_i)));
    vlSelf->__PVT__automata_stage0__DOT__automata_ltl0c0__DOT__lut_match_ltl0c0_7__DOT__match_internal 
        = (((4U <= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__4__KET____DOT__lane__DOT__c2_i)) 
            & (7U >= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__4__KET____DOT__lane__DOT__c2_i))) 
           | (0xcU <= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__4__KET____DOT__lane__DOT__c2_i)));
    vlSelf->__VdfgTmp_hb30bd723__0 = ((1U <= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__4__KET____DOT__lane__DOT__c2_i)) 
                                      & (1U >= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__4__KET____DOT__lane__DOT__c2_i)));
    vlSelf->__VdfgTmp_h2a7bf321__0 = ((9U <= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__4__KET____DOT__lane__DOT__c2_i)) 
                                      & (9U >= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__4__KET____DOT__lane__DOT__c2_i)));
    vlSelf->automata_stage0__DOT__automata_ltl0c0__DOT____Vcellinp__ltl0c0_ste_1__income_edges 
        = (((IData)(vlSelf->__PVT__automata_stage0__DOT__automata_ltl1c0__DOT__start_of_data) 
            << 1U) | ((IData)(vlSelf->__PVT__automata_stage0__DOT__automata_ltl0c0__DOT__ltl0c0_ste_1__DOT__internal_reg) 
                      & (IData)(vlSelf->__PVT__automata_stage0__DOT__automata_ltl0c0__DOT__lut_match_ltl0c0_1__DOT__match_internal)));
    vlSelf->automata_stage0__DOT__automata_ltl0c0__DOT____Vcellinp__ltl0c0_ste_5__income_edges 
        = ((((IData)(vlSelf->__PVT__automata_stage0__DOT__automata_ltl0c0__DOT__ltl0c0_ste_3__DOT__internal_reg) 
             & (((4U <= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__4__KET____DOT__lane__DOT__c2_i)) 
                 & (5U >= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__4__KET____DOT__lane__DOT__c2_i))) 
                | ((0xcU <= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__4__KET____DOT__lane__DOT__c2_i)) 
                   & (0xdU >= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__4__KET____DOT__lane__DOT__c2_i))))) 
            << 1U) | ((IData)(vlSelf->__PVT__automata_stage0__DOT__automata_ltl0c0__DOT__ltl0c0_ste_5__DOT__internal_reg) 
                      & (IData)(vlSelf->__PVT__automata_stage0__DOT__automata_ltl0c0__DOT__lut_match_ltl0c0_1__DOT__match_internal)));
    vlSelf->automata_stage0__DOT__automata_ltl1c0__DOT____Vcellinp__ltl1c0_ste_1__income_edges 
        = (((IData)(vlSelf->__PVT__automata_stage0__DOT__automata_ltl1c0__DOT__start_of_data) 
            << 1U) | ((IData)(vlSelf->__PVT__automata_stage0__DOT__automata_ltl1c0__DOT__ltl1c0_ste_1__DOT__internal_reg) 
                      & (IData)(vlSelf->__PVT__automata_stage0__DOT__automata_ltl1c0__DOT__lut_match_ltl1c0_1__DOT__match_internal)));
    vlSelf->automata_stage0__DOT__automata_ltl1c0__DOT____Vcellinp__ltl1c0_ste_8__income_edges 
        = ((((IData)(vlSelf->__PVT__automata_stage0__DOT__automata_ltl1c0__DOT__ltl1c0_ste_8__DOT__internal_reg) 
             & (IData)(vlSelf->__PVT__automata_stage0__DOT__automata_ltl1c0__DOT__lut_match_ltl1c0_1__DOT__match_internal)) 
            << 1U) | ((IData)(vlSelf->__PVT__automata_stage0__DOT__automata_ltl1c0__DOT__ltl1c0_ste_4__DOT__internal_reg) 
                      & (((4U <= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__4__KET____DOT__lane__DOT__c2_i)) 
                          & (4U >= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__4__KET____DOT__lane__DOT__c2_i))) 
                         | (((6U <= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__4__KET____DOT__lane__DOT__c2_i)) 
                             & (6U >= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__4__KET____DOT__lane__DOT__c2_i))) 
                            | (((0xcU <= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__4__KET____DOT__lane__DOT__c2_i)) 
                                & (0xcU >= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__4__KET____DOT__lane__DOT__c2_i))) 
                               | ((0xeU <= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__4__KET____DOT__lane__DOT__c2_i)) 
                                  & (0xeU >= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__4__KET____DOT__lane__DOT__c2_i))))))));
    vlSelf->automata_stage0__DOT__automata_ltl0c0__DOT____Vcellinp__ltl0c0_ste_8__income_edges 
        = ((((IData)(vlSelf->__PVT__automata_stage0__DOT__automata_ltl0c0__DOT__ltl0c0_ste_8__DOT__internal_reg) 
             & (IData)(vlSelf->__PVT__automata_stage0__DOT__automata_ltl0c0__DOT__lut_match_ltl0c0_1__DOT__match_internal)) 
            << 1U) | ((IData)(vlSelf->__PVT__automata_stage0__DOT__automata_ltl0c0__DOT__ltl0c0_ste_5__DOT__internal_reg) 
                      & ((IData)(vlSelf->__VdfgTmp_hb5b42c0f__0) 
                         | (IData)(vlSelf->__VdfgTmp_h2aa42c51__0))));
    vlSelf->__PVT__ltl0c0_w_out_2 = ((IData)(vlSelf->__PVT__automata_stage0__DOT__automata_ltl0c0__DOT__ltl0c0_ste_2__DOT__internal_reg) 
                                     & ((IData)(vlSelf->__VdfgTmp_hb5b42c0f__0) 
                                        | (((6U <= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__4__KET____DOT__lane__DOT__c2_i)) 
                                            & (7U >= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__4__KET____DOT__lane__DOT__c2_i))) 
                                           | ((IData)(vlSelf->__VdfgTmp_h2aa42c51__0) 
                                              | (0xeU 
                                                 <= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__4__KET____DOT__lane__DOT__c2_i))))));
    vlSelf->__PVT__ltl0c0_w_out_7 = ((IData)(vlSelf->__PVT__automata_stage0__DOT__automata_ltl0c0__DOT__ltl0c0_ste_5__DOT__internal_reg) 
                                     & (IData)(vlSelf->__PVT__automata_stage0__DOT__automata_ltl0c0__DOT__lut_match_ltl0c0_7__DOT__match_internal));
    vlSelf->__PVT__ltl1c0_w_out_3 = ((IData)(vlSelf->__PVT__automata_stage0__DOT__automata_ltl1c0__DOT__ltl1c0_ste_3__DOT__internal_reg) 
                                     & (IData)(vlSelf->__PVT__automata_stage0__DOT__automata_ltl0c0__DOT__lut_match_ltl0c0_7__DOT__match_internal));
    vlSelf->automata_stage0__DOT__automata_ltl1c0__DOT____Vcellinp__ltl1c0_ste_4__income_edges 
        = ((((IData)(vlSelf->__PVT__automata_stage0__DOT__automata_ltl1c0__DOT__ltl1c0_ste_2__DOT__internal_reg) 
             & ((IData)(vlSelf->__VdfgTmp_hb30bd723__0) 
                | ((IData)(vlSelf->__VdfgTmp_he9b10395__0) 
                   | ((IData)(vlSelf->__VdfgTmp_h2a7bf321__0) 
                      | (IData)(vlSelf->__VdfgTmp_hc765a5f5__0))))) 
            << 1U) | ((IData)(vlSelf->__PVT__automata_stage0__DOT__automata_ltl1c0__DOT__ltl1c0_ste_4__DOT__internal_reg) 
                      & (IData)(vlSelf->__PVT__automata_stage0__DOT__automata_ltl1c0__DOT__lut_match_ltl1c0_1__DOT__match_internal)));
    vlSelf->__PVT__ltl1c0_w_out_9 = ((IData)(vlSelf->__PVT__automata_stage0__DOT__automata_ltl1c0__DOT__ltl1c0_ste_8__DOT__internal_reg) 
                                     & ((IData)(vlSelf->__VdfgTmp_hb30bd723__0) 
                                        | (((3U <= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__4__KET____DOT__lane__DOT__c2_i)) 
                                            & (7U >= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__4__KET____DOT__lane__DOT__c2_i))) 
                                           | ((IData)(vlSelf->__VdfgTmp_h2a7bf321__0) 
                                              | (0xbU 
                                                 <= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__4__KET____DOT__lane__DOT__c2_i))))));
    vlSelf->__PVT__ltl1c0_w_out_5 = ((IData)(vlSelf->__PVT__automata_stage0__DOT__automata_ltl1c0__DOT__ltl1c0_ste_4__DOT__internal_reg) 
                                     & ((IData)(vlSelf->__VdfgTmp_hb30bd723__0) 
                                        | ((IData)(vlSelf->__VdfgTmp_he9b10395__0) 
                                           | (((5U 
                                                <= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__4__KET____DOT__lane__DOT__c2_i)) 
                                               & (5U 
                                                  >= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__4__KET____DOT__lane__DOT__c2_i))) 
                                              | (((7U 
                                                   <= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__4__KET____DOT__lane__DOT__c2_i)) 
                                                  & (7U 
                                                     >= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__4__KET____DOT__lane__DOT__c2_i))) 
                                                 | ((IData)(vlSelf->__VdfgTmp_h2a7bf321__0) 
                                                    | ((IData)(vlSelf->__VdfgTmp_hc765a5f5__0) 
                                                       | (((0xdU 
                                                            <= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__4__KET____DOT__lane__DOT__c2_i)) 
                                                           & (0xdU 
                                                              >= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__4__KET____DOT__lane__DOT__c2_i))) 
                                                          | (0xfU 
                                                             <= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__4__KET____DOT__lane__DOT__c2_i))))))))));
    vlSelf->automata_stage0__DOT__automata_ltl0c0__DOT____Vcellinp__ltl0c0_ste_4__income_edges 
        = (((IData)(vlSelf->__PVT__ltl0c0_w_out_9) 
            << 3U) | (((IData)(vlSelf->__PVT__ltl0c0_w_out_2) 
                       << 2U) | (((IData)(vlSelf->__PVT__automata_stage0__DOT__automata_ltl0c0__DOT__ltl0c0_ste_4__DOT__internal_reg) 
                                  << 1U) | (IData)(vlSelf->__PVT__ltl0c0_w_out_7))));
    vlSelf->automata_stage0__DOT__automata_ltl1c0__DOT____Vcellinp__ltl1c0_ste_7__income_edges 
        = (((IData)(vlSelf->__PVT__ltl1c0_w_out_9) 
            << 3U) | (((IData)(vlSelf->__PVT__ltl1c0_w_out_3) 
                       << 2U) | (((IData)(vlSelf->__PVT__ltl1c0_w_out_5) 
                                  << 1U) | (IData)(vlSelf->__PVT__automata_stage0__DOT__automata_ltl1c0__DOT__ltl1c0_ste_7__DOT__internal_reg))));
}

VL_ATTR_COLD void rm_tb_top_routerlinkedlist_Top_ModuleC0___stl_sequent__TOP__rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__5__KET____DOT__lane__DOT__I0c0__0(rm_tb_top_routerlinkedlist_Top_ModuleC0* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    rm_tb_top_routerlinkedlist__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            rm_tb_top_routerlinkedlist_Top_ModuleC0___stl_sequent__TOP__rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__5__KET____DOT__lane__DOT__I0c0__0\n"); );
    // Body
    vlSelf->__PVT__automata_stage0__DOT__automata_ltl1c0__DOT__start_of_data 
        = ((IData)(vlSelf->__PVT__automata_stage0__DOT__automata_ltl1c0__DOT__start_of_data_reg) 
           & ((~ (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__lane__lane_reset_i)) 
              & (IData)(vlSelf->__PVT__automata_stage0__DOT__automata_ltl1c0__DOT__start_of_data_reg_ne)));
    vlSelf->__PVT__automata_stage0__DOT__automata_ltl0c0__DOT__lut_match_ltl0c0_1__DOT__match_internal 
        = ((1U >= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__5__KET____DOT__lane__DOT__c0_i)) 
           | ((8U <= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__5__KET____DOT__lane__DOT__c0_i)) 
              & (9U >= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__5__KET____DOT__lane__DOT__c0_i))));
    vlSelf->__PVT__automata_stage0__DOT__automata_ltl1c0__DOT__lut_match_ltl1c0_1__DOT__match_internal 
        = ((0U >= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__5__KET____DOT__lane__DOT__c0_i)) 
           | (((2U <= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__5__KET____DOT__lane__DOT__c0_i)) 
               & (2U >= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__5__KET____DOT__lane__DOT__c0_i))) 
              | (((8U <= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__5__KET____DOT__lane__DOT__c0_i)) 
                  & (8U >= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__5__KET____DOT__lane__DOT__c0_i))) 
                 | ((0xaU <= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__5__KET____DOT__lane__DOT__c0_i)) 
                    & (0xaU >= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__5__KET____DOT__lane__DOT__c0_i))))));
    vlSelf->__PVT__ltl0c0_w_out_9 = ((IData)(vlSelf->__PVT__automata_stage0__DOT__automata_ltl0c0__DOT__ltl0c0_ste_8__DOT__internal_reg) 
                                     & (((2U <= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__5__KET____DOT__lane__DOT__c0_i)) 
                                         & (7U >= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__5__KET____DOT__lane__DOT__c0_i))) 
                                        | (0xaU <= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__5__KET____DOT__lane__DOT__c0_i))));
    vlSelf->__VdfgTmp_hb5b42c0f__0 = ((2U <= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__5__KET____DOT__lane__DOT__c0_i)) 
                                      & (3U >= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__5__KET____DOT__lane__DOT__c0_i)));
    vlSelf->__VdfgTmp_h2aa42c51__0 = ((0xaU <= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__5__KET____DOT__lane__DOT__c0_i)) 
                                      & (0xbU >= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__5__KET____DOT__lane__DOT__c0_i)));
    vlSelf->__VdfgTmp_he9b10395__0 = ((3U <= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__5__KET____DOT__lane__DOT__c0_i)) 
                                      & (3U >= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__5__KET____DOT__lane__DOT__c0_i)));
    vlSelf->__VdfgTmp_hc765a5f5__0 = ((0xbU <= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__5__KET____DOT__lane__DOT__c0_i)) 
                                      & (0xbU >= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__5__KET____DOT__lane__DOT__c0_i)));
    vlSelf->__PVT__automata_stage0__DOT__automata_ltl0c0__DOT__lut_match_ltl0c0_7__DOT__match_internal 
        = (((4U <= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__5__KET____DOT__lane__DOT__c0_i)) 
            & (7U >= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__5__KET____DOT__lane__DOT__c0_i))) 
           | (0xcU <= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__5__KET____DOT__lane__DOT__c0_i)));
    vlSelf->__VdfgTmp_hb30bd723__0 = ((1U <= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__5__KET____DOT__lane__DOT__c0_i)) 
                                      & (1U >= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__5__KET____DOT__lane__DOT__c0_i)));
    vlSelf->__VdfgTmp_h2a7bf321__0 = ((9U <= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__5__KET____DOT__lane__DOT__c0_i)) 
                                      & (9U >= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__5__KET____DOT__lane__DOT__c0_i)));
    vlSelf->automata_stage0__DOT__automata_ltl0c0__DOT____Vcellinp__ltl0c0_ste_1__income_edges 
        = (((IData)(vlSelf->__PVT__automata_stage0__DOT__automata_ltl1c0__DOT__start_of_data) 
            << 1U) | ((IData)(vlSelf->__PVT__automata_stage0__DOT__automata_ltl0c0__DOT__ltl0c0_ste_1__DOT__internal_reg) 
                      & (IData)(vlSelf->__PVT__automata_stage0__DOT__automata_ltl0c0__DOT__lut_match_ltl0c0_1__DOT__match_internal)));
    vlSelf->automata_stage0__DOT__automata_ltl0c0__DOT____Vcellinp__ltl0c0_ste_5__income_edges 
        = ((((IData)(vlSelf->__PVT__automata_stage0__DOT__automata_ltl0c0__DOT__ltl0c0_ste_3__DOT__internal_reg) 
             & (((4U <= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__5__KET____DOT__lane__DOT__c0_i)) 
                 & (5U >= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__5__KET____DOT__lane__DOT__c0_i))) 
                | ((0xcU <= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__5__KET____DOT__lane__DOT__c0_i)) 
                   & (0xdU >= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__5__KET____DOT__lane__DOT__c0_i))))) 
            << 1U) | ((IData)(vlSelf->__PVT__automata_stage0__DOT__automata_ltl0c0__DOT__ltl0c0_ste_5__DOT__internal_reg) 
                      & (IData)(vlSelf->__PVT__automata_stage0__DOT__automata_ltl0c0__DOT__lut_match_ltl0c0_1__DOT__match_internal)));
    vlSelf->automata_stage0__DOT__automata_ltl1c0__DOT____Vcellinp__ltl1c0_ste_1__income_edges 
        = (((IData)(vlSelf->__PVT__automata_stage0__DOT__automata_ltl1c0__DOT__start_of_data) 
            << 1U) | ((IData)(vlSelf->__PVT__automata_stage0__DOT__automata_ltl1c0__DOT__ltl1c0_ste_1__DOT__internal_reg) 
                      & (IData)(vlSelf->__PVT__automata_stage0__DOT__automata_ltl1c0__DOT__lut_match_ltl1c0_1__DOT__match_internal)));
    vlSelf->automata_stage0__DOT__automata_ltl1c0__DOT____Vcellinp__ltl1c0_ste_8__income_edges 
        = ((((IData)(vlSelf->__PVT__automata_stage0__DOT__automata_ltl1c0__DOT__ltl1c0_ste_8__DOT__internal_reg) 
             & (IData)(vlSelf->__PVT__automata_stage0__DOT__automata_ltl1c0__DOT__lut_match_ltl1c0_1__DOT__match_internal)) 
            << 1U) | ((IData)(vlSelf->__PVT__automata_stage0__DOT__automata_ltl1c0__DOT__ltl1c0_ste_4__DOT__internal_reg) 
                      & (((4U <= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__5__KET____DOT__lane__DOT__c0_i)) 
                          & (4U >= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__5__KET____DOT__lane__DOT__c0_i))) 
                         | (((6U <= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__5__KET____DOT__lane__DOT__c0_i)) 
                             & (6U >= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__5__KET____DOT__lane__DOT__c0_i))) 
                            | (((0xcU <= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__5__KET____DOT__lane__DOT__c0_i)) 
                                & (0xcU >= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__5__KET____DOT__lane__DOT__c0_i))) 
                               | ((0xeU <= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__5__KET____DOT__lane__DOT__c0_i)) 
                                  & (0xeU >= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__5__KET____DOT__lane__DOT__c0_i))))))));
    vlSelf->automata_stage0__DOT__automata_ltl0c0__DOT____Vcellinp__ltl0c0_ste_8__income_edges 
        = ((((IData)(vlSelf->__PVT__automata_stage0__DOT__automata_ltl0c0__DOT__ltl0c0_ste_8__DOT__internal_reg) 
             & (IData)(vlSelf->__PVT__automata_stage0__DOT__automata_ltl0c0__DOT__lut_match_ltl0c0_1__DOT__match_internal)) 
            << 1U) | ((IData)(vlSelf->__PVT__automata_stage0__DOT__automata_ltl0c0__DOT__ltl0c0_ste_5__DOT__internal_reg) 
                      & ((IData)(vlSelf->__VdfgTmp_hb5b42c0f__0) 
                         | (IData)(vlSelf->__VdfgTmp_h2aa42c51__0))));
    vlSelf->__PVT__ltl0c0_w_out_2 = ((IData)(vlSelf->__PVT__automata_stage0__DOT__automata_ltl0c0__DOT__ltl0c0_ste_2__DOT__internal_reg) 
                                     & ((IData)(vlSelf->__VdfgTmp_hb5b42c0f__0) 
                                        | (((6U <= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__5__KET____DOT__lane__DOT__c0_i)) 
                                            & (7U >= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__5__KET____DOT__lane__DOT__c0_i))) 
                                           | ((IData)(vlSelf->__VdfgTmp_h2aa42c51__0) 
                                              | (0xeU 
                                                 <= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__5__KET____DOT__lane__DOT__c0_i))))));
    vlSelf->__PVT__ltl0c0_w_out_7 = ((IData)(vlSelf->__PVT__automata_stage0__DOT__automata_ltl0c0__DOT__ltl0c0_ste_5__DOT__internal_reg) 
                                     & (IData)(vlSelf->__PVT__automata_stage0__DOT__automata_ltl0c0__DOT__lut_match_ltl0c0_7__DOT__match_internal));
    vlSelf->__PVT__ltl1c0_w_out_3 = ((IData)(vlSelf->__PVT__automata_stage0__DOT__automata_ltl1c0__DOT__ltl1c0_ste_3__DOT__internal_reg) 
                                     & (IData)(vlSelf->__PVT__automata_stage0__DOT__automata_ltl0c0__DOT__lut_match_ltl0c0_7__DOT__match_internal));
    vlSelf->automata_stage0__DOT__automata_ltl1c0__DOT____Vcellinp__ltl1c0_ste_4__income_edges 
        = ((((IData)(vlSelf->__PVT__automata_stage0__DOT__automata_ltl1c0__DOT__ltl1c0_ste_2__DOT__internal_reg) 
             & ((IData)(vlSelf->__VdfgTmp_hb30bd723__0) 
                | ((IData)(vlSelf->__VdfgTmp_he9b10395__0) 
                   | ((IData)(vlSelf->__VdfgTmp_h2a7bf321__0) 
                      | (IData)(vlSelf->__VdfgTmp_hc765a5f5__0))))) 
            << 1U) | ((IData)(vlSelf->__PVT__automata_stage0__DOT__automata_ltl1c0__DOT__ltl1c0_ste_4__DOT__internal_reg) 
                      & (IData)(vlSelf->__PVT__automata_stage0__DOT__automata_ltl1c0__DOT__lut_match_ltl1c0_1__DOT__match_internal)));
    vlSelf->__PVT__ltl1c0_w_out_9 = ((IData)(vlSelf->__PVT__automata_stage0__DOT__automata_ltl1c0__DOT__ltl1c0_ste_8__DOT__internal_reg) 
                                     & ((IData)(vlSelf->__VdfgTmp_hb30bd723__0) 
                                        | (((3U <= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__5__KET____DOT__lane__DOT__c0_i)) 
                                            & (7U >= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__5__KET____DOT__lane__DOT__c0_i))) 
                                           | ((IData)(vlSelf->__VdfgTmp_h2a7bf321__0) 
                                              | (0xbU 
                                                 <= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__5__KET____DOT__lane__DOT__c0_i))))));
    vlSelf->__PVT__ltl1c0_w_out_5 = ((IData)(vlSelf->__PVT__automata_stage0__DOT__automata_ltl1c0__DOT__ltl1c0_ste_4__DOT__internal_reg) 
                                     & ((IData)(vlSelf->__VdfgTmp_hb30bd723__0) 
                                        | ((IData)(vlSelf->__VdfgTmp_he9b10395__0) 
                                           | (((5U 
                                                <= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__5__KET____DOT__lane__DOT__c0_i)) 
                                               & (5U 
                                                  >= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__5__KET____DOT__lane__DOT__c0_i))) 
                                              | (((7U 
                                                   <= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__5__KET____DOT__lane__DOT__c0_i)) 
                                                  & (7U 
                                                     >= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__5__KET____DOT__lane__DOT__c0_i))) 
                                                 | ((IData)(vlSelf->__VdfgTmp_h2a7bf321__0) 
                                                    | ((IData)(vlSelf->__VdfgTmp_hc765a5f5__0) 
                                                       | (((0xdU 
                                                            <= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__5__KET____DOT__lane__DOT__c0_i)) 
                                                           & (0xdU 
                                                              >= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__5__KET____DOT__lane__DOT__c0_i))) 
                                                          | (0xfU 
                                                             <= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__5__KET____DOT__lane__DOT__c0_i))))))))));
    vlSelf->automata_stage0__DOT__automata_ltl0c0__DOT____Vcellinp__ltl0c0_ste_4__income_edges 
        = (((IData)(vlSelf->__PVT__ltl0c0_w_out_9) 
            << 3U) | (((IData)(vlSelf->__PVT__ltl0c0_w_out_2) 
                       << 2U) | (((IData)(vlSelf->__PVT__automata_stage0__DOT__automata_ltl0c0__DOT__ltl0c0_ste_4__DOT__internal_reg) 
                                  << 1U) | (IData)(vlSelf->__PVT__ltl0c0_w_out_7))));
    vlSelf->automata_stage0__DOT__automata_ltl1c0__DOT____Vcellinp__ltl1c0_ste_7__income_edges 
        = (((IData)(vlSelf->__PVT__ltl1c0_w_out_9) 
            << 3U) | (((IData)(vlSelf->__PVT__ltl1c0_w_out_3) 
                       << 2U) | (((IData)(vlSelf->__PVT__ltl1c0_w_out_5) 
                                  << 1U) | (IData)(vlSelf->__PVT__automata_stage0__DOT__automata_ltl1c0__DOT__ltl1c0_ste_7__DOT__internal_reg))));
}

VL_ATTR_COLD void rm_tb_top_routerlinkedlist_Top_ModuleC0___stl_sequent__TOP__rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__5__KET____DOT__lane__DOT__I1c0__0(rm_tb_top_routerlinkedlist_Top_ModuleC0* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    rm_tb_top_routerlinkedlist__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            rm_tb_top_routerlinkedlist_Top_ModuleC0___stl_sequent__TOP__rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__5__KET____DOT__lane__DOT__I1c0__0\n"); );
    // Body
    vlSelf->__PVT__automata_stage0__DOT__automata_ltl1c0__DOT__start_of_data 
        = ((IData)(vlSelf->__PVT__automata_stage0__DOT__automata_ltl1c0__DOT__start_of_data_reg) 
           & ((~ (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__lane__lane_reset_i)) 
              & (IData)(vlSelf->__PVT__automata_stage0__DOT__automata_ltl1c0__DOT__start_of_data_reg_ne)));
    vlSelf->__PVT__automata_stage0__DOT__automata_ltl0c0__DOT__lut_match_ltl0c0_1__DOT__match_internal 
        = ((1U >= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__5__KET____DOT__lane__DOT__c2_i)) 
           | ((8U <= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__5__KET____DOT__lane__DOT__c2_i)) 
              & (9U >= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__5__KET____DOT__lane__DOT__c2_i))));
    vlSelf->__PVT__automata_stage0__DOT__automata_ltl1c0__DOT__lut_match_ltl1c0_1__DOT__match_internal 
        = ((0U >= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__5__KET____DOT__lane__DOT__c2_i)) 
           | (((2U <= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__5__KET____DOT__lane__DOT__c2_i)) 
               & (2U >= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__5__KET____DOT__lane__DOT__c2_i))) 
              | (((8U <= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__5__KET____DOT__lane__DOT__c2_i)) 
                  & (8U >= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__5__KET____DOT__lane__DOT__c2_i))) 
                 | ((0xaU <= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__5__KET____DOT__lane__DOT__c2_i)) 
                    & (0xaU >= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__5__KET____DOT__lane__DOT__c2_i))))));
    vlSelf->__PVT__ltl0c0_w_out_9 = ((IData)(vlSelf->__PVT__automata_stage0__DOT__automata_ltl0c0__DOT__ltl0c0_ste_8__DOT__internal_reg) 
                                     & (((2U <= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__5__KET____DOT__lane__DOT__c2_i)) 
                                         & (7U >= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__5__KET____DOT__lane__DOT__c2_i))) 
                                        | (0xaU <= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__5__KET____DOT__lane__DOT__c2_i))));
    vlSelf->__VdfgTmp_hb5b42c0f__0 = ((2U <= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__5__KET____DOT__lane__DOT__c2_i)) 
                                      & (3U >= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__5__KET____DOT__lane__DOT__c2_i)));
    vlSelf->__VdfgTmp_h2aa42c51__0 = ((0xaU <= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__5__KET____DOT__lane__DOT__c2_i)) 
                                      & (0xbU >= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__5__KET____DOT__lane__DOT__c2_i)));
    vlSelf->__VdfgTmp_he9b10395__0 = ((3U <= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__5__KET____DOT__lane__DOT__c2_i)) 
                                      & (3U >= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__5__KET____DOT__lane__DOT__c2_i)));
    vlSelf->__VdfgTmp_hc765a5f5__0 = ((0xbU <= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__5__KET____DOT__lane__DOT__c2_i)) 
                                      & (0xbU >= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__5__KET____DOT__lane__DOT__c2_i)));
    vlSelf->__PVT__automata_stage0__DOT__automata_ltl0c0__DOT__lut_match_ltl0c0_7__DOT__match_internal 
        = (((4U <= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__5__KET____DOT__lane__DOT__c2_i)) 
            & (7U >= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__5__KET____DOT__lane__DOT__c2_i))) 
           | (0xcU <= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__5__KET____DOT__lane__DOT__c2_i)));
    vlSelf->__VdfgTmp_hb30bd723__0 = ((1U <= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__5__KET____DOT__lane__DOT__c2_i)) 
                                      & (1U >= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__5__KET____DOT__lane__DOT__c2_i)));
    vlSelf->__VdfgTmp_h2a7bf321__0 = ((9U <= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__5__KET____DOT__lane__DOT__c2_i)) 
                                      & (9U >= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__5__KET____DOT__lane__DOT__c2_i)));
    vlSelf->automata_stage0__DOT__automata_ltl0c0__DOT____Vcellinp__ltl0c0_ste_1__income_edges 
        = (((IData)(vlSelf->__PVT__automata_stage0__DOT__automata_ltl1c0__DOT__start_of_data) 
            << 1U) | ((IData)(vlSelf->__PVT__automata_stage0__DOT__automata_ltl0c0__DOT__ltl0c0_ste_1__DOT__internal_reg) 
                      & (IData)(vlSelf->__PVT__automata_stage0__DOT__automata_ltl0c0__DOT__lut_match_ltl0c0_1__DOT__match_internal)));
    vlSelf->automata_stage0__DOT__automata_ltl0c0__DOT____Vcellinp__ltl0c0_ste_5__income_edges 
        = ((((IData)(vlSelf->__PVT__automata_stage0__DOT__automata_ltl0c0__DOT__ltl0c0_ste_3__DOT__internal_reg) 
             & (((4U <= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__5__KET____DOT__lane__DOT__c2_i)) 
                 & (5U >= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__5__KET____DOT__lane__DOT__c2_i))) 
                | ((0xcU <= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__5__KET____DOT__lane__DOT__c2_i)) 
                   & (0xdU >= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__5__KET____DOT__lane__DOT__c2_i))))) 
            << 1U) | ((IData)(vlSelf->__PVT__automata_stage0__DOT__automata_ltl0c0__DOT__ltl0c0_ste_5__DOT__internal_reg) 
                      & (IData)(vlSelf->__PVT__automata_stage0__DOT__automata_ltl0c0__DOT__lut_match_ltl0c0_1__DOT__match_internal)));
    vlSelf->automata_stage0__DOT__automata_ltl1c0__DOT____Vcellinp__ltl1c0_ste_1__income_edges 
        = (((IData)(vlSelf->__PVT__automata_stage0__DOT__automata_ltl1c0__DOT__start_of_data) 
            << 1U) | ((IData)(vlSelf->__PVT__automata_stage0__DOT__automata_ltl1c0__DOT__ltl1c0_ste_1__DOT__internal_reg) 
                      & (IData)(vlSelf->__PVT__automata_stage0__DOT__automata_ltl1c0__DOT__lut_match_ltl1c0_1__DOT__match_internal)));
    vlSelf->automata_stage0__DOT__automata_ltl1c0__DOT____Vcellinp__ltl1c0_ste_8__income_edges 
        = ((((IData)(vlSelf->__PVT__automata_stage0__DOT__automata_ltl1c0__DOT__ltl1c0_ste_8__DOT__internal_reg) 
             & (IData)(vlSelf->__PVT__automata_stage0__DOT__automata_ltl1c0__DOT__lut_match_ltl1c0_1__DOT__match_internal)) 
            << 1U) | ((IData)(vlSelf->__PVT__automata_stage0__DOT__automata_ltl1c0__DOT__ltl1c0_ste_4__DOT__internal_reg) 
                      & (((4U <= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__5__KET____DOT__lane__DOT__c2_i)) 
                          & (4U >= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__5__KET____DOT__lane__DOT__c2_i))) 
                         | (((6U <= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__5__KET____DOT__lane__DOT__c2_i)) 
                             & (6U >= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__5__KET____DOT__lane__DOT__c2_i))) 
                            | (((0xcU <= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__5__KET____DOT__lane__DOT__c2_i)) 
                                & (0xcU >= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__5__KET____DOT__lane__DOT__c2_i))) 
                               | ((0xeU <= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__5__KET____DOT__lane__DOT__c2_i)) 
                                  & (0xeU >= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__5__KET____DOT__lane__DOT__c2_i))))))));
    vlSelf->automata_stage0__DOT__automata_ltl0c0__DOT____Vcellinp__ltl0c0_ste_8__income_edges 
        = ((((IData)(vlSelf->__PVT__automata_stage0__DOT__automata_ltl0c0__DOT__ltl0c0_ste_8__DOT__internal_reg) 
             & (IData)(vlSelf->__PVT__automata_stage0__DOT__automata_ltl0c0__DOT__lut_match_ltl0c0_1__DOT__match_internal)) 
            << 1U) | ((IData)(vlSelf->__PVT__automata_stage0__DOT__automata_ltl0c0__DOT__ltl0c0_ste_5__DOT__internal_reg) 
                      & ((IData)(vlSelf->__VdfgTmp_hb5b42c0f__0) 
                         | (IData)(vlSelf->__VdfgTmp_h2aa42c51__0))));
    vlSelf->__PVT__ltl0c0_w_out_2 = ((IData)(vlSelf->__PVT__automata_stage0__DOT__automata_ltl0c0__DOT__ltl0c0_ste_2__DOT__internal_reg) 
                                     & ((IData)(vlSelf->__VdfgTmp_hb5b42c0f__0) 
                                        | (((6U <= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__5__KET____DOT__lane__DOT__c2_i)) 
                                            & (7U >= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__5__KET____DOT__lane__DOT__c2_i))) 
                                           | ((IData)(vlSelf->__VdfgTmp_h2aa42c51__0) 
                                              | (0xeU 
                                                 <= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__5__KET____DOT__lane__DOT__c2_i))))));
    vlSelf->__PVT__ltl0c0_w_out_7 = ((IData)(vlSelf->__PVT__automata_stage0__DOT__automata_ltl0c0__DOT__ltl0c0_ste_5__DOT__internal_reg) 
                                     & (IData)(vlSelf->__PVT__automata_stage0__DOT__automata_ltl0c0__DOT__lut_match_ltl0c0_7__DOT__match_internal));
    vlSelf->__PVT__ltl1c0_w_out_3 = ((IData)(vlSelf->__PVT__automata_stage0__DOT__automata_ltl1c0__DOT__ltl1c0_ste_3__DOT__internal_reg) 
                                     & (IData)(vlSelf->__PVT__automata_stage0__DOT__automata_ltl0c0__DOT__lut_match_ltl0c0_7__DOT__match_internal));
    vlSelf->automata_stage0__DOT__automata_ltl1c0__DOT____Vcellinp__ltl1c0_ste_4__income_edges 
        = ((((IData)(vlSelf->__PVT__automata_stage0__DOT__automata_ltl1c0__DOT__ltl1c0_ste_2__DOT__internal_reg) 
             & ((IData)(vlSelf->__VdfgTmp_hb30bd723__0) 
                | ((IData)(vlSelf->__VdfgTmp_he9b10395__0) 
                   | ((IData)(vlSelf->__VdfgTmp_h2a7bf321__0) 
                      | (IData)(vlSelf->__VdfgTmp_hc765a5f5__0))))) 
            << 1U) | ((IData)(vlSelf->__PVT__automata_stage0__DOT__automata_ltl1c0__DOT__ltl1c0_ste_4__DOT__internal_reg) 
                      & (IData)(vlSelf->__PVT__automata_stage0__DOT__automata_ltl1c0__DOT__lut_match_ltl1c0_1__DOT__match_internal)));
    vlSelf->__PVT__ltl1c0_w_out_9 = ((IData)(vlSelf->__PVT__automata_stage0__DOT__automata_ltl1c0__DOT__ltl1c0_ste_8__DOT__internal_reg) 
                                     & ((IData)(vlSelf->__VdfgTmp_hb30bd723__0) 
                                        | (((3U <= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__5__KET____DOT__lane__DOT__c2_i)) 
                                            & (7U >= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__5__KET____DOT__lane__DOT__c2_i))) 
                                           | ((IData)(vlSelf->__VdfgTmp_h2a7bf321__0) 
                                              | (0xbU 
                                                 <= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__5__KET____DOT__lane__DOT__c2_i))))));
    vlSelf->__PVT__ltl1c0_w_out_5 = ((IData)(vlSelf->__PVT__automata_stage0__DOT__automata_ltl1c0__DOT__ltl1c0_ste_4__DOT__internal_reg) 
                                     & ((IData)(vlSelf->__VdfgTmp_hb30bd723__0) 
                                        | ((IData)(vlSelf->__VdfgTmp_he9b10395__0) 
                                           | (((5U 
                                                <= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__5__KET____DOT__lane__DOT__c2_i)) 
                                               & (5U 
                                                  >= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__5__KET____DOT__lane__DOT__c2_i))) 
                                              | (((7U 
                                                   <= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__5__KET____DOT__lane__DOT__c2_i)) 
                                                  & (7U 
                                                     >= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__5__KET____DOT__lane__DOT__c2_i))) 
                                                 | ((IData)(vlSelf->__VdfgTmp_h2a7bf321__0) 
                                                    | ((IData)(vlSelf->__VdfgTmp_hc765a5f5__0) 
                                                       | (((0xdU 
                                                            <= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__5__KET____DOT__lane__DOT__c2_i)) 
                                                           & (0xdU 
                                                              >= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__5__KET____DOT__lane__DOT__c2_i))) 
                                                          | (0xfU 
                                                             <= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__5__KET____DOT__lane__DOT__c2_i))))))))));
    vlSelf->automata_stage0__DOT__automata_ltl0c0__DOT____Vcellinp__ltl0c0_ste_4__income_edges 
        = (((IData)(vlSelf->__PVT__ltl0c0_w_out_9) 
            << 3U) | (((IData)(vlSelf->__PVT__ltl0c0_w_out_2) 
                       << 2U) | (((IData)(vlSelf->__PVT__automata_stage0__DOT__automata_ltl0c0__DOT__ltl0c0_ste_4__DOT__internal_reg) 
                                  << 1U) | (IData)(vlSelf->__PVT__ltl0c0_w_out_7))));
    vlSelf->automata_stage0__DOT__automata_ltl1c0__DOT____Vcellinp__ltl1c0_ste_7__income_edges 
        = (((IData)(vlSelf->__PVT__ltl1c0_w_out_9) 
            << 3U) | (((IData)(vlSelf->__PVT__ltl1c0_w_out_3) 
                       << 2U) | (((IData)(vlSelf->__PVT__ltl1c0_w_out_5) 
                                  << 1U) | (IData)(vlSelf->__PVT__automata_stage0__DOT__automata_ltl1c0__DOT__ltl1c0_ste_7__DOT__internal_reg))));
}

VL_ATTR_COLD void rm_tb_top_routerlinkedlist_Top_ModuleC0___stl_sequent__TOP__rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__6__KET____DOT__lane__DOT__I0c0__0(rm_tb_top_routerlinkedlist_Top_ModuleC0* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    rm_tb_top_routerlinkedlist__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            rm_tb_top_routerlinkedlist_Top_ModuleC0___stl_sequent__TOP__rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__6__KET____DOT__lane__DOT__I0c0__0\n"); );
    // Body
    vlSelf->__PVT__automata_stage0__DOT__automata_ltl1c0__DOT__start_of_data 
        = ((IData)(vlSelf->__PVT__automata_stage0__DOT__automata_ltl1c0__DOT__start_of_data_reg) 
           & ((~ (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT____Vcellinp__genblk1__BRA__6__KET____DOT__lane__lane_reset_i)) 
              & (IData)(vlSelf->__PVT__automata_stage0__DOT__automata_ltl1c0__DOT__start_of_data_reg_ne)));
    vlSelf->__PVT__automata_stage0__DOT__automata_ltl0c0__DOT__lut_match_ltl0c0_1__DOT__match_internal 
        = ((1U >= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__6__KET____DOT__lane__DOT__c0_i)) 
           | ((8U <= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__6__KET____DOT__lane__DOT__c0_i)) 
              & (9U >= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__6__KET____DOT__lane__DOT__c0_i))));
    vlSelf->__PVT__automata_stage0__DOT__automata_ltl1c0__DOT__lut_match_ltl1c0_1__DOT__match_internal 
        = ((0U >= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__6__KET____DOT__lane__DOT__c0_i)) 
           | (((2U <= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__6__KET____DOT__lane__DOT__c0_i)) 
               & (2U >= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__6__KET____DOT__lane__DOT__c0_i))) 
              | (((8U <= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__6__KET____DOT__lane__DOT__c0_i)) 
                  & (8U >= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__6__KET____DOT__lane__DOT__c0_i))) 
                 | ((0xaU <= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__6__KET____DOT__lane__DOT__c0_i)) 
                    & (0xaU >= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__6__KET____DOT__lane__DOT__c0_i))))));
    vlSelf->__PVT__ltl0c0_w_out_9 = ((IData)(vlSelf->__PVT__automata_stage0__DOT__automata_ltl0c0__DOT__ltl0c0_ste_8__DOT__internal_reg) 
                                     & (((2U <= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__6__KET____DOT__lane__DOT__c0_i)) 
                                         & (7U >= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__6__KET____DOT__lane__DOT__c0_i))) 
                                        | (0xaU <= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__6__KET____DOT__lane__DOT__c0_i))));
    vlSelf->__VdfgTmp_hb5b42c0f__0 = ((2U <= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__6__KET____DOT__lane__DOT__c0_i)) 
                                      & (3U >= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__6__KET____DOT__lane__DOT__c0_i)));
    vlSelf->__VdfgTmp_h2aa42c51__0 = ((0xaU <= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__6__KET____DOT__lane__DOT__c0_i)) 
                                      & (0xbU >= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__6__KET____DOT__lane__DOT__c0_i)));
    vlSelf->__VdfgTmp_he9b10395__0 = ((3U <= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__6__KET____DOT__lane__DOT__c0_i)) 
                                      & (3U >= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__6__KET____DOT__lane__DOT__c0_i)));
    vlSelf->__VdfgTmp_hc765a5f5__0 = ((0xbU <= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__6__KET____DOT__lane__DOT__c0_i)) 
                                      & (0xbU >= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__6__KET____DOT__lane__DOT__c0_i)));
    vlSelf->__PVT__automata_stage0__DOT__automata_ltl0c0__DOT__lut_match_ltl0c0_7__DOT__match_internal 
        = (((4U <= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__6__KET____DOT__lane__DOT__c0_i)) 
            & (7U >= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__6__KET____DOT__lane__DOT__c0_i))) 
           | (0xcU <= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__6__KET____DOT__lane__DOT__c0_i)));
    vlSelf->__VdfgTmp_hb30bd723__0 = ((1U <= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__6__KET____DOT__lane__DOT__c0_i)) 
                                      & (1U >= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__6__KET____DOT__lane__DOT__c0_i)));
    vlSelf->__VdfgTmp_h2a7bf321__0 = ((9U <= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__6__KET____DOT__lane__DOT__c0_i)) 
                                      & (9U >= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__6__KET____DOT__lane__DOT__c0_i)));
    vlSelf->automata_stage0__DOT__automata_ltl0c0__DOT____Vcellinp__ltl0c0_ste_1__income_edges 
        = (((IData)(vlSelf->__PVT__automata_stage0__DOT__automata_ltl1c0__DOT__start_of_data) 
            << 1U) | ((IData)(vlSelf->__PVT__automata_stage0__DOT__automata_ltl0c0__DOT__ltl0c0_ste_1__DOT__internal_reg) 
                      & (IData)(vlSelf->__PVT__automata_stage0__DOT__automata_ltl0c0__DOT__lut_match_ltl0c0_1__DOT__match_internal)));
    vlSelf->automata_stage0__DOT__automata_ltl0c0__DOT____Vcellinp__ltl0c0_ste_5__income_edges 
        = ((((IData)(vlSelf->__PVT__automata_stage0__DOT__automata_ltl0c0__DOT__ltl0c0_ste_3__DOT__internal_reg) 
             & (((4U <= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__6__KET____DOT__lane__DOT__c0_i)) 
                 & (5U >= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__6__KET____DOT__lane__DOT__c0_i))) 
                | ((0xcU <= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__6__KET____DOT__lane__DOT__c0_i)) 
                   & (0xdU >= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__6__KET____DOT__lane__DOT__c0_i))))) 
            << 1U) | ((IData)(vlSelf->__PVT__automata_stage0__DOT__automata_ltl0c0__DOT__ltl0c0_ste_5__DOT__internal_reg) 
                      & (IData)(vlSelf->__PVT__automata_stage0__DOT__automata_ltl0c0__DOT__lut_match_ltl0c0_1__DOT__match_internal)));
    vlSelf->automata_stage0__DOT__automata_ltl1c0__DOT____Vcellinp__ltl1c0_ste_1__income_edges 
        = (((IData)(vlSelf->__PVT__automata_stage0__DOT__automata_ltl1c0__DOT__start_of_data) 
            << 1U) | ((IData)(vlSelf->__PVT__automata_stage0__DOT__automata_ltl1c0__DOT__ltl1c0_ste_1__DOT__internal_reg) 
                      & (IData)(vlSelf->__PVT__automata_stage0__DOT__automata_ltl1c0__DOT__lut_match_ltl1c0_1__DOT__match_internal)));
    vlSelf->automata_stage0__DOT__automata_ltl1c0__DOT____Vcellinp__ltl1c0_ste_8__income_edges 
        = ((((IData)(vlSelf->__PVT__automata_stage0__DOT__automata_ltl1c0__DOT__ltl1c0_ste_8__DOT__internal_reg) 
             & (IData)(vlSelf->__PVT__automata_stage0__DOT__automata_ltl1c0__DOT__lut_match_ltl1c0_1__DOT__match_internal)) 
            << 1U) | ((IData)(vlSelf->__PVT__automata_stage0__DOT__automata_ltl1c0__DOT__ltl1c0_ste_4__DOT__internal_reg) 
                      & (((4U <= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__6__KET____DOT__lane__DOT__c0_i)) 
                          & (4U >= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__6__KET____DOT__lane__DOT__c0_i))) 
                         | (((6U <= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__6__KET____DOT__lane__DOT__c0_i)) 
                             & (6U >= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__6__KET____DOT__lane__DOT__c0_i))) 
                            | (((0xcU <= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__6__KET____DOT__lane__DOT__c0_i)) 
                                & (0xcU >= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__6__KET____DOT__lane__DOT__c0_i))) 
                               | ((0xeU <= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__6__KET____DOT__lane__DOT__c0_i)) 
                                  & (0xeU >= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__6__KET____DOT__lane__DOT__c0_i))))))));
    vlSelf->automata_stage0__DOT__automata_ltl0c0__DOT____Vcellinp__ltl0c0_ste_8__income_edges 
        = ((((IData)(vlSelf->__PVT__automata_stage0__DOT__automata_ltl0c0__DOT__ltl0c0_ste_8__DOT__internal_reg) 
             & (IData)(vlSelf->__PVT__automata_stage0__DOT__automata_ltl0c0__DOT__lut_match_ltl0c0_1__DOT__match_internal)) 
            << 1U) | ((IData)(vlSelf->__PVT__automata_stage0__DOT__automata_ltl0c0__DOT__ltl0c0_ste_5__DOT__internal_reg) 
                      & ((IData)(vlSelf->__VdfgTmp_hb5b42c0f__0) 
                         | (IData)(vlSelf->__VdfgTmp_h2aa42c51__0))));
    vlSelf->__PVT__ltl0c0_w_out_2 = ((IData)(vlSelf->__PVT__automata_stage0__DOT__automata_ltl0c0__DOT__ltl0c0_ste_2__DOT__internal_reg) 
                                     & ((IData)(vlSelf->__VdfgTmp_hb5b42c0f__0) 
                                        | (((6U <= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__6__KET____DOT__lane__DOT__c0_i)) 
                                            & (7U >= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__6__KET____DOT__lane__DOT__c0_i))) 
                                           | ((IData)(vlSelf->__VdfgTmp_h2aa42c51__0) 
                                              | (0xeU 
                                                 <= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__6__KET____DOT__lane__DOT__c0_i))))));
    vlSelf->__PVT__ltl0c0_w_out_7 = ((IData)(vlSelf->__PVT__automata_stage0__DOT__automata_ltl0c0__DOT__ltl0c0_ste_5__DOT__internal_reg) 
                                     & (IData)(vlSelf->__PVT__automata_stage0__DOT__automata_ltl0c0__DOT__lut_match_ltl0c0_7__DOT__match_internal));
    vlSelf->__PVT__ltl1c0_w_out_3 = ((IData)(vlSelf->__PVT__automata_stage0__DOT__automata_ltl1c0__DOT__ltl1c0_ste_3__DOT__internal_reg) 
                                     & (IData)(vlSelf->__PVT__automata_stage0__DOT__automata_ltl0c0__DOT__lut_match_ltl0c0_7__DOT__match_internal));
    vlSelf->automata_stage0__DOT__automata_ltl1c0__DOT____Vcellinp__ltl1c0_ste_4__income_edges 
        = ((((IData)(vlSelf->__PVT__automata_stage0__DOT__automata_ltl1c0__DOT__ltl1c0_ste_2__DOT__internal_reg) 
             & ((IData)(vlSelf->__VdfgTmp_hb30bd723__0) 
                | ((IData)(vlSelf->__VdfgTmp_he9b10395__0) 
                   | ((IData)(vlSelf->__VdfgTmp_h2a7bf321__0) 
                      | (IData)(vlSelf->__VdfgTmp_hc765a5f5__0))))) 
            << 1U) | ((IData)(vlSelf->__PVT__automata_stage0__DOT__automata_ltl1c0__DOT__ltl1c0_ste_4__DOT__internal_reg) 
                      & (IData)(vlSelf->__PVT__automata_stage0__DOT__automata_ltl1c0__DOT__lut_match_ltl1c0_1__DOT__match_internal)));
    vlSelf->__PVT__ltl1c0_w_out_9 = ((IData)(vlSelf->__PVT__automata_stage0__DOT__automata_ltl1c0__DOT__ltl1c0_ste_8__DOT__internal_reg) 
                                     & ((IData)(vlSelf->__VdfgTmp_hb30bd723__0) 
                                        | (((3U <= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__6__KET____DOT__lane__DOT__c0_i)) 
                                            & (7U >= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__6__KET____DOT__lane__DOT__c0_i))) 
                                           | ((IData)(vlSelf->__VdfgTmp_h2a7bf321__0) 
                                              | (0xbU 
                                                 <= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__6__KET____DOT__lane__DOT__c0_i))))));
    vlSelf->__PVT__ltl1c0_w_out_5 = ((IData)(vlSelf->__PVT__automata_stage0__DOT__automata_ltl1c0__DOT__ltl1c0_ste_4__DOT__internal_reg) 
                                     & ((IData)(vlSelf->__VdfgTmp_hb30bd723__0) 
                                        | ((IData)(vlSelf->__VdfgTmp_he9b10395__0) 
                                           | (((5U 
                                                <= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__6__KET____DOT__lane__DOT__c0_i)) 
                                               & (5U 
                                                  >= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__6__KET____DOT__lane__DOT__c0_i))) 
                                              | (((7U 
                                                   <= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__6__KET____DOT__lane__DOT__c0_i)) 
                                                  & (7U 
                                                     >= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__6__KET____DOT__lane__DOT__c0_i))) 
                                                 | ((IData)(vlSelf->__VdfgTmp_h2a7bf321__0) 
                                                    | ((IData)(vlSelf->__VdfgTmp_hc765a5f5__0) 
                                                       | (((0xdU 
                                                            <= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__6__KET____DOT__lane__DOT__c0_i)) 
                                                           & (0xdU 
                                                              >= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__6__KET____DOT__lane__DOT__c0_i))) 
                                                          | (0xfU 
                                                             <= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__6__KET____DOT__lane__DOT__c0_i))))))))));
    vlSelf->automata_stage0__DOT__automata_ltl0c0__DOT____Vcellinp__ltl0c0_ste_4__income_edges 
        = (((IData)(vlSelf->__PVT__ltl0c0_w_out_9) 
            << 3U) | (((IData)(vlSelf->__PVT__ltl0c0_w_out_2) 
                       << 2U) | (((IData)(vlSelf->__PVT__automata_stage0__DOT__automata_ltl0c0__DOT__ltl0c0_ste_4__DOT__internal_reg) 
                                  << 1U) | (IData)(vlSelf->__PVT__ltl0c0_w_out_7))));
    vlSelf->automata_stage0__DOT__automata_ltl1c0__DOT____Vcellinp__ltl1c0_ste_7__income_edges 
        = (((IData)(vlSelf->__PVT__ltl1c0_w_out_9) 
            << 3U) | (((IData)(vlSelf->__PVT__ltl1c0_w_out_3) 
                       << 2U) | (((IData)(vlSelf->__PVT__ltl1c0_w_out_5) 
                                  << 1U) | (IData)(vlSelf->__PVT__automata_stage0__DOT__automata_ltl1c0__DOT__ltl1c0_ste_7__DOT__internal_reg))));
}

VL_ATTR_COLD void rm_tb_top_routerlinkedlist_Top_ModuleC0___stl_sequent__TOP__rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__6__KET____DOT__lane__DOT__I1c0__0(rm_tb_top_routerlinkedlist_Top_ModuleC0* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    rm_tb_top_routerlinkedlist__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            rm_tb_top_routerlinkedlist_Top_ModuleC0___stl_sequent__TOP__rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__6__KET____DOT__lane__DOT__I1c0__0\n"); );
    // Body
    vlSelf->__PVT__automata_stage0__DOT__automata_ltl1c0__DOT__start_of_data 
        = ((IData)(vlSelf->__PVT__automata_stage0__DOT__automata_ltl1c0__DOT__start_of_data_reg) 
           & ((~ (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT____Vcellinp__genblk1__BRA__6__KET____DOT__lane__lane_reset_i)) 
              & (IData)(vlSelf->__PVT__automata_stage0__DOT__automata_ltl1c0__DOT__start_of_data_reg_ne)));
    vlSelf->__PVT__automata_stage0__DOT__automata_ltl0c0__DOT__lut_match_ltl0c0_1__DOT__match_internal 
        = ((1U >= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__6__KET____DOT__lane__DOT__c2_i)) 
           | ((8U <= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__6__KET____DOT__lane__DOT__c2_i)) 
              & (9U >= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__6__KET____DOT__lane__DOT__c2_i))));
    vlSelf->__PVT__automata_stage0__DOT__automata_ltl1c0__DOT__lut_match_ltl1c0_1__DOT__match_internal 
        = ((0U >= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__6__KET____DOT__lane__DOT__c2_i)) 
           | (((2U <= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__6__KET____DOT__lane__DOT__c2_i)) 
               & (2U >= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__6__KET____DOT__lane__DOT__c2_i))) 
              | (((8U <= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__6__KET____DOT__lane__DOT__c2_i)) 
                  & (8U >= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__6__KET____DOT__lane__DOT__c2_i))) 
                 | ((0xaU <= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__6__KET____DOT__lane__DOT__c2_i)) 
                    & (0xaU >= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__6__KET____DOT__lane__DOT__c2_i))))));
    vlSelf->__PVT__ltl0c0_w_out_9 = ((IData)(vlSelf->__PVT__automata_stage0__DOT__automata_ltl0c0__DOT__ltl0c0_ste_8__DOT__internal_reg) 
                                     & (((2U <= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__6__KET____DOT__lane__DOT__c2_i)) 
                                         & (7U >= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__6__KET____DOT__lane__DOT__c2_i))) 
                                        | (0xaU <= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__6__KET____DOT__lane__DOT__c2_i))));
    vlSelf->__VdfgTmp_hb5b42c0f__0 = ((2U <= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__6__KET____DOT__lane__DOT__c2_i)) 
                                      & (3U >= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__6__KET____DOT__lane__DOT__c2_i)));
    vlSelf->__VdfgTmp_h2aa42c51__0 = ((0xaU <= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__6__KET____DOT__lane__DOT__c2_i)) 
                                      & (0xbU >= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__6__KET____DOT__lane__DOT__c2_i)));
    vlSelf->__VdfgTmp_he9b10395__0 = ((3U <= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__6__KET____DOT__lane__DOT__c2_i)) 
                                      & (3U >= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__6__KET____DOT__lane__DOT__c2_i)));
    vlSelf->__VdfgTmp_hc765a5f5__0 = ((0xbU <= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__6__KET____DOT__lane__DOT__c2_i)) 
                                      & (0xbU >= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__6__KET____DOT__lane__DOT__c2_i)));
    vlSelf->__PVT__automata_stage0__DOT__automata_ltl0c0__DOT__lut_match_ltl0c0_7__DOT__match_internal 
        = (((4U <= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__6__KET____DOT__lane__DOT__c2_i)) 
            & (7U >= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__6__KET____DOT__lane__DOT__c2_i))) 
           | (0xcU <= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__6__KET____DOT__lane__DOT__c2_i)));
    vlSelf->__VdfgTmp_hb30bd723__0 = ((1U <= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__6__KET____DOT__lane__DOT__c2_i)) 
                                      & (1U >= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__6__KET____DOT__lane__DOT__c2_i)));
    vlSelf->__VdfgTmp_h2a7bf321__0 = ((9U <= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__6__KET____DOT__lane__DOT__c2_i)) 
                                      & (9U >= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__6__KET____DOT__lane__DOT__c2_i)));
    vlSelf->automata_stage0__DOT__automata_ltl0c0__DOT____Vcellinp__ltl0c0_ste_1__income_edges 
        = (((IData)(vlSelf->__PVT__automata_stage0__DOT__automata_ltl1c0__DOT__start_of_data) 
            << 1U) | ((IData)(vlSelf->__PVT__automata_stage0__DOT__automata_ltl0c0__DOT__ltl0c0_ste_1__DOT__internal_reg) 
                      & (IData)(vlSelf->__PVT__automata_stage0__DOT__automata_ltl0c0__DOT__lut_match_ltl0c0_1__DOT__match_internal)));
    vlSelf->automata_stage0__DOT__automata_ltl0c0__DOT____Vcellinp__ltl0c0_ste_5__income_edges 
        = ((((IData)(vlSelf->__PVT__automata_stage0__DOT__automata_ltl0c0__DOT__ltl0c0_ste_3__DOT__internal_reg) 
             & (((4U <= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__6__KET____DOT__lane__DOT__c2_i)) 
                 & (5U >= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__6__KET____DOT__lane__DOT__c2_i))) 
                | ((0xcU <= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__6__KET____DOT__lane__DOT__c2_i)) 
                   & (0xdU >= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__6__KET____DOT__lane__DOT__c2_i))))) 
            << 1U) | ((IData)(vlSelf->__PVT__automata_stage0__DOT__automata_ltl0c0__DOT__ltl0c0_ste_5__DOT__internal_reg) 
                      & (IData)(vlSelf->__PVT__automata_stage0__DOT__automata_ltl0c0__DOT__lut_match_ltl0c0_1__DOT__match_internal)));
    vlSelf->automata_stage0__DOT__automata_ltl1c0__DOT____Vcellinp__ltl1c0_ste_1__income_edges 
        = (((IData)(vlSelf->__PVT__automata_stage0__DOT__automata_ltl1c0__DOT__start_of_data) 
            << 1U) | ((IData)(vlSelf->__PVT__automata_stage0__DOT__automata_ltl1c0__DOT__ltl1c0_ste_1__DOT__internal_reg) 
                      & (IData)(vlSelf->__PVT__automata_stage0__DOT__automata_ltl1c0__DOT__lut_match_ltl1c0_1__DOT__match_internal)));
    vlSelf->automata_stage0__DOT__automata_ltl1c0__DOT____Vcellinp__ltl1c0_ste_8__income_edges 
        = ((((IData)(vlSelf->__PVT__automata_stage0__DOT__automata_ltl1c0__DOT__ltl1c0_ste_8__DOT__internal_reg) 
             & (IData)(vlSelf->__PVT__automata_stage0__DOT__automata_ltl1c0__DOT__lut_match_ltl1c0_1__DOT__match_internal)) 
            << 1U) | ((IData)(vlSelf->__PVT__automata_stage0__DOT__automata_ltl1c0__DOT__ltl1c0_ste_4__DOT__internal_reg) 
                      & (((4U <= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__6__KET____DOT__lane__DOT__c2_i)) 
                          & (4U >= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__6__KET____DOT__lane__DOT__c2_i))) 
                         | (((6U <= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__6__KET____DOT__lane__DOT__c2_i)) 
                             & (6U >= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__6__KET____DOT__lane__DOT__c2_i))) 
                            | (((0xcU <= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__6__KET____DOT__lane__DOT__c2_i)) 
                                & (0xcU >= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__6__KET____DOT__lane__DOT__c2_i))) 
                               | ((0xeU <= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__6__KET____DOT__lane__DOT__c2_i)) 
                                  & (0xeU >= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__6__KET____DOT__lane__DOT__c2_i))))))));
    vlSelf->automata_stage0__DOT__automata_ltl0c0__DOT____Vcellinp__ltl0c0_ste_8__income_edges 
        = ((((IData)(vlSelf->__PVT__automata_stage0__DOT__automata_ltl0c0__DOT__ltl0c0_ste_8__DOT__internal_reg) 
             & (IData)(vlSelf->__PVT__automata_stage0__DOT__automata_ltl0c0__DOT__lut_match_ltl0c0_1__DOT__match_internal)) 
            << 1U) | ((IData)(vlSelf->__PVT__automata_stage0__DOT__automata_ltl0c0__DOT__ltl0c0_ste_5__DOT__internal_reg) 
                      & ((IData)(vlSelf->__VdfgTmp_hb5b42c0f__0) 
                         | (IData)(vlSelf->__VdfgTmp_h2aa42c51__0))));
    vlSelf->__PVT__ltl0c0_w_out_2 = ((IData)(vlSelf->__PVT__automata_stage0__DOT__automata_ltl0c0__DOT__ltl0c0_ste_2__DOT__internal_reg) 
                                     & ((IData)(vlSelf->__VdfgTmp_hb5b42c0f__0) 
                                        | (((6U <= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__6__KET____DOT__lane__DOT__c2_i)) 
                                            & (7U >= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__6__KET____DOT__lane__DOT__c2_i))) 
                                           | ((IData)(vlSelf->__VdfgTmp_h2aa42c51__0) 
                                              | (0xeU 
                                                 <= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__6__KET____DOT__lane__DOT__c2_i))))));
    vlSelf->__PVT__ltl0c0_w_out_7 = ((IData)(vlSelf->__PVT__automata_stage0__DOT__automata_ltl0c0__DOT__ltl0c0_ste_5__DOT__internal_reg) 
                                     & (IData)(vlSelf->__PVT__automata_stage0__DOT__automata_ltl0c0__DOT__lut_match_ltl0c0_7__DOT__match_internal));
    vlSelf->__PVT__ltl1c0_w_out_3 = ((IData)(vlSelf->__PVT__automata_stage0__DOT__automata_ltl1c0__DOT__ltl1c0_ste_3__DOT__internal_reg) 
                                     & (IData)(vlSelf->__PVT__automata_stage0__DOT__automata_ltl0c0__DOT__lut_match_ltl0c0_7__DOT__match_internal));
    vlSelf->automata_stage0__DOT__automata_ltl1c0__DOT____Vcellinp__ltl1c0_ste_4__income_edges 
        = ((((IData)(vlSelf->__PVT__automata_stage0__DOT__automata_ltl1c0__DOT__ltl1c0_ste_2__DOT__internal_reg) 
             & ((IData)(vlSelf->__VdfgTmp_hb30bd723__0) 
                | ((IData)(vlSelf->__VdfgTmp_he9b10395__0) 
                   | ((IData)(vlSelf->__VdfgTmp_h2a7bf321__0) 
                      | (IData)(vlSelf->__VdfgTmp_hc765a5f5__0))))) 
            << 1U) | ((IData)(vlSelf->__PVT__automata_stage0__DOT__automata_ltl1c0__DOT__ltl1c0_ste_4__DOT__internal_reg) 
                      & (IData)(vlSelf->__PVT__automata_stage0__DOT__automata_ltl1c0__DOT__lut_match_ltl1c0_1__DOT__match_internal)));
    vlSelf->__PVT__ltl1c0_w_out_9 = ((IData)(vlSelf->__PVT__automata_stage0__DOT__automata_ltl1c0__DOT__ltl1c0_ste_8__DOT__internal_reg) 
                                     & ((IData)(vlSelf->__VdfgTmp_hb30bd723__0) 
                                        | (((3U <= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__6__KET____DOT__lane__DOT__c2_i)) 
                                            & (7U >= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__6__KET____DOT__lane__DOT__c2_i))) 
                                           | ((IData)(vlSelf->__VdfgTmp_h2a7bf321__0) 
                                              | (0xbU 
                                                 <= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__6__KET____DOT__lane__DOT__c2_i))))));
    vlSelf->__PVT__ltl1c0_w_out_5 = ((IData)(vlSelf->__PVT__automata_stage0__DOT__automata_ltl1c0__DOT__ltl1c0_ste_4__DOT__internal_reg) 
                                     & ((IData)(vlSelf->__VdfgTmp_hb30bd723__0) 
                                        | ((IData)(vlSelf->__VdfgTmp_he9b10395__0) 
                                           | (((5U 
                                                <= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__6__KET____DOT__lane__DOT__c2_i)) 
                                               & (5U 
                                                  >= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__6__KET____DOT__lane__DOT__c2_i))) 
                                              | (((7U 
                                                   <= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__6__KET____DOT__lane__DOT__c2_i)) 
                                                  & (7U 
                                                     >= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__6__KET____DOT__lane__DOT__c2_i))) 
                                                 | ((IData)(vlSelf->__VdfgTmp_h2a7bf321__0) 
                                                    | ((IData)(vlSelf->__VdfgTmp_hc765a5f5__0) 
                                                       | (((0xdU 
                                                            <= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__6__KET____DOT__lane__DOT__c2_i)) 
                                                           & (0xdU 
                                                              >= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__6__KET____DOT__lane__DOT__c2_i))) 
                                                          | (0xfU 
                                                             <= (IData)(vlSymsp->TOP.rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__6__KET____DOT__lane__DOT__c2_i))))))))));
    vlSelf->automata_stage0__DOT__automata_ltl0c0__DOT____Vcellinp__ltl0c0_ste_4__income_edges 
        = (((IData)(vlSelf->__PVT__ltl0c0_w_out_9) 
            << 3U) | (((IData)(vlSelf->__PVT__ltl0c0_w_out_2) 
                       << 2U) | (((IData)(vlSelf->__PVT__automata_stage0__DOT__automata_ltl0c0__DOT__ltl0c0_ste_4__DOT__internal_reg) 
                                  << 1U) | (IData)(vlSelf->__PVT__ltl0c0_w_out_7))));
    vlSelf->automata_stage0__DOT__automata_ltl1c0__DOT____Vcellinp__ltl1c0_ste_7__income_edges 
        = (((IData)(vlSelf->__PVT__ltl1c0_w_out_9) 
            << 3U) | (((IData)(vlSelf->__PVT__ltl1c0_w_out_3) 
                       << 2U) | (((IData)(vlSelf->__PVT__ltl1c0_w_out_5) 
                                  << 1U) | (IData)(vlSelf->__PVT__automata_stage0__DOT__automata_ltl1c0__DOT__ltl1c0_ste_7__DOT__internal_reg))));
}
