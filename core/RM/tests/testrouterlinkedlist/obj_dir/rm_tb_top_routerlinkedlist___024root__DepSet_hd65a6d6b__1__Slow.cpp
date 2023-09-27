// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See rm_tb_top_routerlinkedlist.h for the primary calling header

#include "verilated.h"

#include "rm_tb_top_routerlinkedlist___024root.h"

VL_ATTR_COLD void rm_tb_top_routerlinkedlist___024root___stl_sequent__TOP__1(rm_tb_top_routerlinkedlist___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    rm_tb_top_routerlinkedlist__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    rm_tb_top_routerlinkedlist___024root___stl_sequent__TOP__1\n"); );
    // Init
    CData/*2:0*/ rm_tb_top_routerlinkedlist__DOT____Vlvbound_h5e7829c8__0;
    rm_tb_top_routerlinkedlist__DOT____Vlvbound_h5e7829c8__0 = 0;
    CData/*0:0*/ rm_tb_top_routerlinkedlist__DOT____Vlvbound_hde56ca41__0;
    rm_tb_top_routerlinkedlist__DOT____Vlvbound_hde56ca41__0 = 0;
    CData/*2:0*/ rm_tb_top_routerlinkedlist__DOT____Vlvbound_h9736690a__0;
    rm_tb_top_routerlinkedlist__DOT____Vlvbound_h9736690a__0 = 0;
    CData/*0:0*/ rm_tb_top_routerlinkedlist__DOT____Vlvbound_h6fb72181__0;
    rm_tb_top_routerlinkedlist__DOT____Vlvbound_h6fb72181__0 = 0;
    CData/*0:0*/ rm_tb_top_routerlinkedlist__DOT____Vlvbound_h1777353d__0;
    rm_tb_top_routerlinkedlist__DOT____Vlvbound_h1777353d__0 = 0;
    // Body
    rm_tb_top_routerlinkedlist__DOT____Vlvbound_h1777353d__0 
        = (vlSelf->rm_tb_top_routerlinkedlist__DOT__router__DOT__lane_mapping_d[2U] 
           >> 0x1fU);
    vlSelf->valid = ((0x5fU & (IData)(vlSelf->valid)) 
                     | ((IData)(rm_tb_top_routerlinkedlist__DOT____Vlvbound_h1777353d__0) 
                        << 5U));
    rm_tb_top_routerlinkedlist__DOT____Vlvbound_h1777353d__0 
        = (1U & (vlSelf->rm_tb_top_routerlinkedlist__DOT__router__DOT__lane_mapping_d[3U] 
                 >> 0x12U));
    vlSelf->valid = ((0x3fU & (IData)(vlSelf->valid)) 
                     | ((IData)(rm_tb_top_routerlinkedlist__DOT____Vlvbound_h1777353d__0) 
                        << 6U));
    rm_tb_top_routerlinkedlist__DOT____Vlvbound_h5e7829c8__0 
        = (7U & (vlSelf->rm_tb_top_routerlinkedlist__DOT__router__DOT__lane_mapping_d[0U] 
                 >> 0xfU));
    vlSelf->lane0 = ((0x1ffff8U & vlSelf->lane0) | (IData)(rm_tb_top_routerlinkedlist__DOT____Vlvbound_h5e7829c8__0));
    rm_tb_top_routerlinkedlist__DOT____Vlvbound_h5e7829c8__0 
        = (7U & (vlSelf->rm_tb_top_routerlinkedlist__DOT__router__DOT__lane_mapping_d[1U] 
                 >> 2U));
    vlSelf->lane0 = ((0x1fffc7U & vlSelf->lane0) | 
                     ((IData)(rm_tb_top_routerlinkedlist__DOT____Vlvbound_h5e7829c8__0) 
                      << 3U));
    rm_tb_top_routerlinkedlist__DOT____Vlvbound_h5e7829c8__0 
        = (7U & (vlSelf->rm_tb_top_routerlinkedlist__DOT__router__DOT__lane_mapping_d[1U] 
                 >> 0x15U));
    vlSelf->lane0 = ((0x1ffe3fU & vlSelf->lane0) | 
                     ((IData)(rm_tb_top_routerlinkedlist__DOT____Vlvbound_h5e7829c8__0) 
                      << 6U));
    rm_tb_top_routerlinkedlist__DOT____Vlvbound_h5e7829c8__0 
        = (7U & (vlSelf->rm_tb_top_routerlinkedlist__DOT__router__DOT__lane_mapping_d[2U] 
                 >> 8U));
    vlSelf->lane0 = ((0x1ff1ffU & vlSelf->lane0) | 
                     ((IData)(rm_tb_top_routerlinkedlist__DOT____Vlvbound_h5e7829c8__0) 
                      << 9U));
    rm_tb_top_routerlinkedlist__DOT____Vlvbound_h5e7829c8__0 
        = (7U & (vlSelf->rm_tb_top_routerlinkedlist__DOT__router__DOT__lane_mapping_d[2U] 
                 >> 0x1bU));
    vlSelf->lane0 = ((0x1f8fffU & vlSelf->lane0) | 
                     ((IData)(rm_tb_top_routerlinkedlist__DOT____Vlvbound_h5e7829c8__0) 
                      << 0xcU));
    rm_tb_top_routerlinkedlist__DOT____Vlvbound_h5e7829c8__0 
        = (7U & (vlSelf->rm_tb_top_routerlinkedlist__DOT__router__DOT__lane_mapping_d[3U] 
                 >> 0xeU));
    vlSelf->lane0 = ((0x1c7fffU & vlSelf->lane0) | 
                     ((IData)(rm_tb_top_routerlinkedlist__DOT____Vlvbound_h5e7829c8__0) 
                      << 0xfU));
    rm_tb_top_routerlinkedlist__DOT____Vlvbound_h5e7829c8__0 
        = (7U & (vlSelf->rm_tb_top_routerlinkedlist__DOT__router__DOT__lane_mapping_d[4U] 
                 >> 1U));
    vlSelf->lane0 = ((0x3ffffU & vlSelf->lane0) | ((IData)(rm_tb_top_routerlinkedlist__DOT____Vlvbound_h5e7829c8__0) 
                                                   << 0x12U));
    rm_tb_top_routerlinkedlist__DOT____Vlvbound_hde56ca41__0 
        = (1U & (vlSelf->rm_tb_top_routerlinkedlist__DOT__router__DOT__lane_mapping_d[0U] 
                 >> 6U));
    vlSelf->has_parent = ((0x7eU & (IData)(vlSelf->has_parent)) 
                          | (IData)(rm_tb_top_routerlinkedlist__DOT____Vlvbound_hde56ca41__0));
    rm_tb_top_routerlinkedlist__DOT____Vlvbound_hde56ca41__0 
        = (1U & (vlSelf->rm_tb_top_routerlinkedlist__DOT__router__DOT__lane_mapping_d[0U] 
                 >> 0x19U));
    vlSelf->has_parent = ((0x7dU & (IData)(vlSelf->has_parent)) 
                          | ((IData)(rm_tb_top_routerlinkedlist__DOT____Vlvbound_hde56ca41__0) 
                             << 1U));
    rm_tb_top_routerlinkedlist__DOT____Vlvbound_hde56ca41__0 
        = (1U & (vlSelf->rm_tb_top_routerlinkedlist__DOT__router__DOT__lane_mapping_d[1U] 
                 >> 0xcU));
    vlSelf->has_parent = ((0x7bU & (IData)(vlSelf->has_parent)) 
                          | ((IData)(rm_tb_top_routerlinkedlist__DOT____Vlvbound_hde56ca41__0) 
                             << 2U));
    rm_tb_top_routerlinkedlist__DOT____Vlvbound_hde56ca41__0 
        = (vlSelf->rm_tb_top_routerlinkedlist__DOT__router__DOT__lane_mapping_d[1U] 
           >> 0x1fU);
    vlSelf->has_parent = ((0x77U & (IData)(vlSelf->has_parent)) 
                          | ((IData)(rm_tb_top_routerlinkedlist__DOT____Vlvbound_hde56ca41__0) 
                             << 3U));
    rm_tb_top_routerlinkedlist__DOT____Vlvbound_hde56ca41__0 
        = (1U & (vlSelf->rm_tb_top_routerlinkedlist__DOT__router__DOT__lane_mapping_d[2U] 
                 >> 0x12U));
    vlSelf->has_parent = ((0x6fU & (IData)(vlSelf->has_parent)) 
                          | ((IData)(rm_tb_top_routerlinkedlist__DOT____Vlvbound_hde56ca41__0) 
                             << 4U));
    rm_tb_top_routerlinkedlist__DOT____Vlvbound_hde56ca41__0 
        = (1U & (vlSelf->rm_tb_top_routerlinkedlist__DOT__router__DOT__lane_mapping_d[3U] 
                 >> 5U));
    vlSelf->has_parent = ((0x5fU & (IData)(vlSelf->has_parent)) 
                          | ((IData)(rm_tb_top_routerlinkedlist__DOT____Vlvbound_hde56ca41__0) 
                             << 5U));
    rm_tb_top_routerlinkedlist__DOT____Vlvbound_hde56ca41__0 
        = (1U & (vlSelf->rm_tb_top_routerlinkedlist__DOT__router__DOT__lane_mapping_d[3U] 
                 >> 0x18U));
    vlSelf->has_parent = ((0x3fU & (IData)(vlSelf->has_parent)) 
                          | ((IData)(rm_tb_top_routerlinkedlist__DOT____Vlvbound_hde56ca41__0) 
                             << 6U));
    rm_tb_top_routerlinkedlist__DOT____Vlvbound_h9736690a__0 
        = (7U & (vlSelf->rm_tb_top_routerlinkedlist__DOT__router__DOT__lane_mapping_d[0U] 
                 >> 3U));
    vlSelf->child_idx = ((0x1ffff8U & vlSelf->child_idx) 
                         | (IData)(rm_tb_top_routerlinkedlist__DOT____Vlvbound_h9736690a__0));
    rm_tb_top_routerlinkedlist__DOT____Vlvbound_h9736690a__0 
        = (7U & (vlSelf->rm_tb_top_routerlinkedlist__DOT__router__DOT__lane_mapping_d[0U] 
                 >> 0x16U));
    vlSelf->child_idx = ((0x1fffc7U & vlSelf->child_idx) 
                         | ((IData)(rm_tb_top_routerlinkedlist__DOT____Vlvbound_h9736690a__0) 
                            << 3U));
    rm_tb_top_routerlinkedlist__DOT____Vlvbound_h9736690a__0 
        = (7U & (vlSelf->rm_tb_top_routerlinkedlist__DOT__router__DOT__lane_mapping_d[1U] 
                 >> 9U));
    vlSelf->child_idx = ((0x1ffe3fU & vlSelf->child_idx) 
                         | ((IData)(rm_tb_top_routerlinkedlist__DOT____Vlvbound_h9736690a__0) 
                            << 6U));
    rm_tb_top_routerlinkedlist__DOT____Vlvbound_h9736690a__0 
        = (7U & (vlSelf->rm_tb_top_routerlinkedlist__DOT__router__DOT__lane_mapping_d[1U] 
                 >> 0x1cU));
    vlSelf->child_idx = ((0x1ff1ffU & vlSelf->child_idx) 
                         | ((IData)(rm_tb_top_routerlinkedlist__DOT____Vlvbound_h9736690a__0) 
                            << 9U));
    rm_tb_top_routerlinkedlist__DOT____Vlvbound_h9736690a__0 
        = (7U & (vlSelf->rm_tb_top_routerlinkedlist__DOT__router__DOT__lane_mapping_d[2U] 
                 >> 0xfU));
    vlSelf->child_idx = ((0x1f8fffU & vlSelf->child_idx) 
                         | ((IData)(rm_tb_top_routerlinkedlist__DOT____Vlvbound_h9736690a__0) 
                            << 0xcU));
    rm_tb_top_routerlinkedlist__DOT____Vlvbound_h9736690a__0 
        = (7U & (vlSelf->rm_tb_top_routerlinkedlist__DOT__router__DOT__lane_mapping_d[3U] 
                 >> 2U));
    vlSelf->child_idx = ((0x1c7fffU & vlSelf->child_idx) 
                         | ((IData)(rm_tb_top_routerlinkedlist__DOT____Vlvbound_h9736690a__0) 
                            << 0xfU));
    rm_tb_top_routerlinkedlist__DOT____Vlvbound_h9736690a__0 
        = (7U & (vlSelf->rm_tb_top_routerlinkedlist__DOT__router__DOT__lane_mapping_d[3U] 
                 >> 0x15U));
    vlSelf->child_idx = ((0x3ffffU & vlSelf->child_idx) 
                         | ((IData)(rm_tb_top_routerlinkedlist__DOT____Vlvbound_h9736690a__0) 
                            << 0x12U));
    rm_tb_top_routerlinkedlist__DOT____Vlvbound_h6fb72181__0 
        = (1U & (vlSelf->rm_tb_top_routerlinkedlist__DOT__router__DOT__lane_mapping_d[0U] 
                 >> 2U));
    vlSelf->has_child = ((0x7eU & (IData)(vlSelf->has_child)) 
                         | (IData)(rm_tb_top_routerlinkedlist__DOT____Vlvbound_h6fb72181__0));
    rm_tb_top_routerlinkedlist__DOT____Vlvbound_h6fb72181__0 
        = (1U & (vlSelf->rm_tb_top_routerlinkedlist__DOT__router__DOT__lane_mapping_d[0U] 
                 >> 0x15U));
    vlSelf->has_child = ((0x7dU & (IData)(vlSelf->has_child)) 
                         | ((IData)(rm_tb_top_routerlinkedlist__DOT____Vlvbound_h6fb72181__0) 
                            << 1U));
    rm_tb_top_routerlinkedlist__DOT____Vlvbound_h6fb72181__0 
        = (1U & (vlSelf->rm_tb_top_routerlinkedlist__DOT__router__DOT__lane_mapping_d[1U] 
                 >> 8U));
    vlSelf->has_child = ((0x7bU & (IData)(vlSelf->has_child)) 
                         | ((IData)(rm_tb_top_routerlinkedlist__DOT____Vlvbound_h6fb72181__0) 
                            << 2U));
    rm_tb_top_routerlinkedlist__DOT____Vlvbound_h6fb72181__0 
        = (1U & (vlSelf->rm_tb_top_routerlinkedlist__DOT__router__DOT__lane_mapping_d[1U] 
                 >> 0x1bU));
    vlSelf->has_child = ((0x77U & (IData)(vlSelf->has_child)) 
                         | ((IData)(rm_tb_top_routerlinkedlist__DOT____Vlvbound_h6fb72181__0) 
                            << 3U));
    rm_tb_top_routerlinkedlist__DOT____Vlvbound_h6fb72181__0 
        = (1U & (vlSelf->rm_tb_top_routerlinkedlist__DOT__router__DOT__lane_mapping_d[2U] 
                 >> 0xeU));
    vlSelf->has_child = ((0x6fU & (IData)(vlSelf->has_child)) 
                         | ((IData)(rm_tb_top_routerlinkedlist__DOT____Vlvbound_h6fb72181__0) 
                            << 4U));
    rm_tb_top_routerlinkedlist__DOT____Vlvbound_h6fb72181__0 
        = (1U & (vlSelf->rm_tb_top_routerlinkedlist__DOT__router__DOT__lane_mapping_d[3U] 
                 >> 1U));
    vlSelf->has_child = ((0x5fU & (IData)(vlSelf->has_child)) 
                         | ((IData)(rm_tb_top_routerlinkedlist__DOT____Vlvbound_h6fb72181__0) 
                            << 5U));
    rm_tb_top_routerlinkedlist__DOT____Vlvbound_h6fb72181__0 
        = (1U & (vlSelf->rm_tb_top_routerlinkedlist__DOT__router__DOT__lane_mapping_d[3U] 
                 >> 0x14U));
    vlSelf->has_child = ((0x3fU & (IData)(vlSelf->has_child)) 
                         | ((IData)(rm_tb_top_routerlinkedlist__DOT____Vlvbound_h6fb72181__0) 
                            << 6U));
}

#ifdef VL_DEBUG
VL_ATTR_COLD void rm_tb_top_routerlinkedlist___024root___dump_triggers__act(rm_tb_top_routerlinkedlist___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    rm_tb_top_routerlinkedlist__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    rm_tb_top_routerlinkedlist___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VactTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if (vlSelf->__VactTriggered.at(0U)) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge clk_i)\n");
    }
    if (vlSelf->__VactTriggered.at(1U)) {
        VL_DBG_MSGF("         'act' region trigger index 1 is active: @(posedge clk_i or negedge rm_tb_top_routerlinkedlist.rst_ni)\n");
    }
    if (vlSelf->__VactTriggered.at(2U)) {
        VL_DBG_MSGF("         'act' region trigger index 2 is active: @(posedge rm_tb_top_routerlinkedlist.edA.clk_i or negedge rm_tb_top_routerlinkedlist.edA.rst_ni)\n");
    }
    if (vlSelf->__VactTriggered.at(3U)) {
        VL_DBG_MSGF("         'act' region trigger index 3 is active: @(posedge rm_tb_top_routerlinkedlist.edB.clk_i or negedge rm_tb_top_routerlinkedlist.edB.rst_ni)\n");
    }
    if (vlSelf->__VactTriggered.at(4U)) {
        VL_DBG_MSGF("         'act' region trigger index 4 is active: @(posedge rm_tb_top_routerlinkedlist.edC.clk_i or negedge rm_tb_top_routerlinkedlist.edC.rst_ni)\n");
    }
    if (vlSelf->__VactTriggered.at(5U)) {
        VL_DBG_MSGF("         'act' region trigger index 5 is active: @(posedge rm_tb_top_routerlinkedlist.edD.clk_i or negedge rm_tb_top_routerlinkedlist.edD.rst_ni)\n");
    }
    if (vlSelf->__VactTriggered.at(6U)) {
        VL_DBG_MSGF("         'act' region trigger index 6 is active: @(posedge rm_tb_top_routerlinkedlist.edE.clk_i or negedge rm_tb_top_routerlinkedlist.edE.rst_ni)\n");
    }
    if (vlSelf->__VactTriggered.at(7U)) {
        VL_DBG_MSGF("         'act' region trigger index 7 is active: @(posedge rm_tb_top_routerlinkedlist.edF.clk_i or negedge rm_tb_top_routerlinkedlist.edF.rst_ni)\n");
    }
    if (vlSelf->__VactTriggered.at(8U)) {
        VL_DBG_MSGF("         'act' region trigger index 8 is active: @(posedge rm_tb_top_routerlinkedlist.edG.clk_i or negedge rm_tb_top_routerlinkedlist.edG.rst_ni)\n");
    }
    if (vlSelf->__VactTriggered.at(9U)) {
        VL_DBG_MSGF("         'act' region trigger index 9 is active: @(posedge rm_tb_top_routerlinkedlist.edH.clk_i or negedge rm_tb_top_routerlinkedlist.edH.rst_ni)\n");
    }
    if (vlSelf->__VactTriggered.at(0xaU)) {
        VL_DBG_MSGF("         'act' region trigger index 10 is active: @(negedge clk_i)\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void rm_tb_top_routerlinkedlist___024root___dump_triggers__nba(rm_tb_top_routerlinkedlist___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    rm_tb_top_routerlinkedlist__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    rm_tb_top_routerlinkedlist___024root___dump_triggers__nba\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VnbaTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if (vlSelf->__VnbaTriggered.at(0U)) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge clk_i)\n");
    }
    if (vlSelf->__VnbaTriggered.at(1U)) {
        VL_DBG_MSGF("         'nba' region trigger index 1 is active: @(posedge clk_i or negedge rm_tb_top_routerlinkedlist.rst_ni)\n");
    }
    if (vlSelf->__VnbaTriggered.at(2U)) {
        VL_DBG_MSGF("         'nba' region trigger index 2 is active: @(posedge rm_tb_top_routerlinkedlist.edA.clk_i or negedge rm_tb_top_routerlinkedlist.edA.rst_ni)\n");
    }
    if (vlSelf->__VnbaTriggered.at(3U)) {
        VL_DBG_MSGF("         'nba' region trigger index 3 is active: @(posedge rm_tb_top_routerlinkedlist.edB.clk_i or negedge rm_tb_top_routerlinkedlist.edB.rst_ni)\n");
    }
    if (vlSelf->__VnbaTriggered.at(4U)) {
        VL_DBG_MSGF("         'nba' region trigger index 4 is active: @(posedge rm_tb_top_routerlinkedlist.edC.clk_i or negedge rm_tb_top_routerlinkedlist.edC.rst_ni)\n");
    }
    if (vlSelf->__VnbaTriggered.at(5U)) {
        VL_DBG_MSGF("         'nba' region trigger index 5 is active: @(posedge rm_tb_top_routerlinkedlist.edD.clk_i or negedge rm_tb_top_routerlinkedlist.edD.rst_ni)\n");
    }
    if (vlSelf->__VnbaTriggered.at(6U)) {
        VL_DBG_MSGF("         'nba' region trigger index 6 is active: @(posedge rm_tb_top_routerlinkedlist.edE.clk_i or negedge rm_tb_top_routerlinkedlist.edE.rst_ni)\n");
    }
    if (vlSelf->__VnbaTriggered.at(7U)) {
        VL_DBG_MSGF("         'nba' region trigger index 7 is active: @(posedge rm_tb_top_routerlinkedlist.edF.clk_i or negedge rm_tb_top_routerlinkedlist.edF.rst_ni)\n");
    }
    if (vlSelf->__VnbaTriggered.at(8U)) {
        VL_DBG_MSGF("         'nba' region trigger index 8 is active: @(posedge rm_tb_top_routerlinkedlist.edG.clk_i or negedge rm_tb_top_routerlinkedlist.edG.rst_ni)\n");
    }
    if (vlSelf->__VnbaTriggered.at(9U)) {
        VL_DBG_MSGF("         'nba' region trigger index 9 is active: @(posedge rm_tb_top_routerlinkedlist.edH.clk_i or negedge rm_tb_top_routerlinkedlist.edH.rst_ni)\n");
    }
    if (vlSelf->__VnbaTriggered.at(0xaU)) {
        VL_DBG_MSGF("         'nba' region trigger index 10 is active: @(negedge clk_i)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void rm_tb_top_routerlinkedlist___024root___ctor_var_reset(rm_tb_top_routerlinkedlist___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    rm_tb_top_routerlinkedlist__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    rm_tb_top_routerlinkedlist___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->clk_i = VL_RAND_RESET_I(1);
    vlSelf->rst_ni_tb = VL_RAND_RESET_I(1);
    vlSelf->signal_tb = VL_RAND_RESET_I(8);
    vlSelf->reset_lane_i_tb = VL_RAND_RESET_I(8);
    vlSelf->pc_i_tb = VL_RAND_RESET_Q(64);
    vlSelf->enque_ins_tb = VL_RAND_RESET_I(1);
    vlSelf->opcode_i_tb = VL_RAND_RESET_I(7);
    VL_RAND_RESET_W(112, vlSelf->lane_vector);
    VL_RAND_RESET_W(70, vlSelf->monitor_o);
    vlSelf->lane_reset = VL_RAND_RESET_I(7);
    vlSelf->itype = VL_RAND_RESET_I(7);
    vlSelf->lane0 = VL_RAND_RESET_I(21);
    vlSelf->lane1 = VL_RAND_RESET_I(21);
    vlSelf->lane_mask = VL_RAND_RESET_I(14);
    vlSelf->parent_idx = VL_RAND_RESET_I(21);
    vlSelf->has_parent = VL_RAND_RESET_I(7);
    vlSelf->child_idx = VL_RAND_RESET_I(21);
    vlSelf->has_child = VL_RAND_RESET_I(7);
    vlSelf->valid = VL_RAND_RESET_I(7);
    vlSelf->list_reset_mask = VL_RAND_RESET_I(7);
    vlSelf->monitor_ins = VL_RAND_RESET_I(1);
    vlSelf->next_idx = VL_RAND_RESET_I(3);
    vlSelf->num_events = 0;
    vlSelf->num_lanes = 0;
    vlSelf->num_rules = 0;
    vlSelf->test_type = 0;
    VL_RAND_RESET_W(904, vlSelf->rm_tb_top_routerlinkedlist__DOT__rm_cnt);
    VL_RAND_RESET_W(113, vlSelf->rm_tb_top_routerlinkedlist__DOT__rm_cnt_o);
    vlSelf->rm_tb_top_routerlinkedlist__DOT__rst_ni = VL_RAND_RESET_I(1);
    vlSelf->rm_tb_top_routerlinkedlist__DOT__signal = VL_RAND_RESET_I(8);
    vlSelf->rm_tb_top_routerlinkedlist__DOT__reset_lane_i = VL_RAND_RESET_I(8);
    vlSelf->rm_tb_top_routerlinkedlist__DOT__pc_i = VL_RAND_RESET_Q(64);
    vlSelf->rm_tb_top_routerlinkedlist__DOT__enque_ins = VL_RAND_RESET_I(1);
    vlSelf->rm_tb_top_routerlinkedlist__DOT__opcode_i = VL_RAND_RESET_I(7);
    VL_RAND_RESET_W(112, vlSelf->rm_tb_top_routerlinkedlist__DOT____Vcellout__router__lane_vector_o);
    VL_RAND_RESET_W(112, vlSelf->rm_tb_top_routerlinkedlist__DOT____Vcellinp__router__events_i);
    vlSelf->rm_tb_top_routerlinkedlist__DOT__unnamedblk2__DOT__i = 0;
    VL_RAND_RESET_W(113, vlSelf->rm_tb_top_routerlinkedlist__DOT____Vlvbound_hd7800ecb__0);
    vlSelf->rm_tb_top_routerlinkedlist__DOT__edA__DOT__clk_i = VL_RAND_RESET_I(1);
    vlSelf->rm_tb_top_routerlinkedlist__DOT__edA__DOT__rst_ni = VL_RAND_RESET_I(1);
    vlSelf->rm_tb_top_routerlinkedlist__DOT__edA__DOT__lane_probe_reg = VL_RAND_RESET_I(7);
    vlSelf->rm_tb_top_routerlinkedlist__DOT__edA__DOT__probe_val = VL_RAND_RESET_I(1);
    vlSelf->rm_tb_top_routerlinkedlist__DOT__edA__DOT__reset_o_reg = VL_RAND_RESET_I(1);
    vlSelf->rm_tb_top_routerlinkedlist__DOT__edA__DOT__reset_val = VL_RAND_RESET_I(1);
    vlSelf->rm_tb_top_routerlinkedlist__DOT__edA__DOT__unnamedblk1__DOT__i = 0;
    vlSelf->rm_tb_top_routerlinkedlist__DOT__edA__DOT__regval__DOT__unnamedblk3__DOT__i = 0;
    vlSelf->rm_tb_top_routerlinkedlist__DOT__edA__DOT____Vlvbound_h031c579d__0 = VL_RAND_RESET_I(1);
    vlSelf->rm_tb_top_routerlinkedlist__DOT__edB__DOT__clk_i = VL_RAND_RESET_I(1);
    vlSelf->rm_tb_top_routerlinkedlist__DOT__edB__DOT__rst_ni = VL_RAND_RESET_I(1);
    vlSelf->rm_tb_top_routerlinkedlist__DOT__edB__DOT__lane_probe_reg = VL_RAND_RESET_I(7);
    vlSelf->rm_tb_top_routerlinkedlist__DOT__edB__DOT__probe_val = VL_RAND_RESET_I(1);
    vlSelf->rm_tb_top_routerlinkedlist__DOT__edB__DOT__reset_o_reg = VL_RAND_RESET_I(1);
    vlSelf->rm_tb_top_routerlinkedlist__DOT__edB__DOT__unnamedblk1__DOT__i = 0;
    vlSelf->rm_tb_top_routerlinkedlist__DOT__edB__DOT__regval__DOT__unnamedblk3__DOT__i = 0;
    vlSelf->rm_tb_top_routerlinkedlist__DOT__edB__DOT____Vlvbound_h031c579d__0 = VL_RAND_RESET_I(1);
    vlSelf->rm_tb_top_routerlinkedlist__DOT__edC__DOT__clk_i = VL_RAND_RESET_I(1);
    vlSelf->rm_tb_top_routerlinkedlist__DOT__edC__DOT__rst_ni = VL_RAND_RESET_I(1);
    vlSelf->rm_tb_top_routerlinkedlist__DOT__edC__DOT__lane_probe_reg = VL_RAND_RESET_I(7);
    vlSelf->rm_tb_top_routerlinkedlist__DOT__edC__DOT__probe_val = VL_RAND_RESET_I(1);
    vlSelf->rm_tb_top_routerlinkedlist__DOT__edC__DOT__reset_o_reg = VL_RAND_RESET_I(1);
    vlSelf->rm_tb_top_routerlinkedlist__DOT__edC__DOT__reset_val = VL_RAND_RESET_I(1);
    vlSelf->rm_tb_top_routerlinkedlist__DOT__edC__DOT__unnamedblk1__DOT__i = 0;
    vlSelf->rm_tb_top_routerlinkedlist__DOT__edC__DOT__regval__DOT__unnamedblk3__DOT__i = 0;
    vlSelf->rm_tb_top_routerlinkedlist__DOT__edC__DOT____Vlvbound_h031c579d__0 = VL_RAND_RESET_I(1);
    vlSelf->rm_tb_top_routerlinkedlist__DOT__edD__DOT__clk_i = VL_RAND_RESET_I(1);
    vlSelf->rm_tb_top_routerlinkedlist__DOT__edD__DOT__rst_ni = VL_RAND_RESET_I(1);
    vlSelf->rm_tb_top_routerlinkedlist__DOT__edD__DOT__lane_probe_reg = VL_RAND_RESET_I(7);
    vlSelf->rm_tb_top_routerlinkedlist__DOT__edD__DOT__probe_val = VL_RAND_RESET_I(1);
    vlSelf->rm_tb_top_routerlinkedlist__DOT__edD__DOT__reset_o_reg = VL_RAND_RESET_I(1);
    vlSelf->rm_tb_top_routerlinkedlist__DOT__edD__DOT__reset_val = VL_RAND_RESET_I(1);
    vlSelf->rm_tb_top_routerlinkedlist__DOT__edD__DOT__unnamedblk1__DOT__i = 0;
    vlSelf->rm_tb_top_routerlinkedlist__DOT__edD__DOT__regval__DOT__unnamedblk3__DOT__i = 0;
    vlSelf->rm_tb_top_routerlinkedlist__DOT__edD__DOT____Vlvbound_h031c579d__0 = VL_RAND_RESET_I(1);
    vlSelf->rm_tb_top_routerlinkedlist__DOT__edE__DOT__clk_i = VL_RAND_RESET_I(1);
    vlSelf->rm_tb_top_routerlinkedlist__DOT__edE__DOT__rst_ni = VL_RAND_RESET_I(1);
    vlSelf->rm_tb_top_routerlinkedlist__DOT__edE__DOT__lane_probe_reg = VL_RAND_RESET_I(7);
    vlSelf->rm_tb_top_routerlinkedlist__DOT__edE__DOT__probe_val = VL_RAND_RESET_I(1);
    vlSelf->rm_tb_top_routerlinkedlist__DOT__edE__DOT__reset_o_reg = VL_RAND_RESET_I(1);
    vlSelf->rm_tb_top_routerlinkedlist__DOT__edE__DOT__unnamedblk1__DOT__i = 0;
    vlSelf->rm_tb_top_routerlinkedlist__DOT__edE__DOT__regval__DOT__unnamedblk3__DOT__i = 0;
    vlSelf->rm_tb_top_routerlinkedlist__DOT__edE__DOT____Vlvbound_h031c579d__0 = VL_RAND_RESET_I(1);
    vlSelf->rm_tb_top_routerlinkedlist__DOT__edF__DOT__clk_i = VL_RAND_RESET_I(1);
    vlSelf->rm_tb_top_routerlinkedlist__DOT__edF__DOT__rst_ni = VL_RAND_RESET_I(1);
    vlSelf->rm_tb_top_routerlinkedlist__DOT__edF__DOT__lane_probe_reg = VL_RAND_RESET_I(7);
    vlSelf->rm_tb_top_routerlinkedlist__DOT__edF__DOT__probe_val = VL_RAND_RESET_I(1);
    vlSelf->rm_tb_top_routerlinkedlist__DOT__edF__DOT__reset_o_reg = VL_RAND_RESET_I(1);
    vlSelf->rm_tb_top_routerlinkedlist__DOT__edF__DOT__unnamedblk1__DOT__i = 0;
    vlSelf->rm_tb_top_routerlinkedlist__DOT__edF__DOT__regval__DOT__unnamedblk3__DOT__i = 0;
    vlSelf->rm_tb_top_routerlinkedlist__DOT__edF__DOT____Vlvbound_h031c579d__0 = VL_RAND_RESET_I(1);
    vlSelf->rm_tb_top_routerlinkedlist__DOT__edF__DOT____VdfgTmp_hedd0e2b4__0 = 0;
    vlSelf->rm_tb_top_routerlinkedlist__DOT__edG__DOT__clk_i = VL_RAND_RESET_I(1);
    vlSelf->rm_tb_top_routerlinkedlist__DOT__edG__DOT__rst_ni = VL_RAND_RESET_I(1);
    vlSelf->rm_tb_top_routerlinkedlist__DOT__edG__DOT__lane_probe_reg = VL_RAND_RESET_I(7);
    vlSelf->rm_tb_top_routerlinkedlist__DOT__edG__DOT__probe_val = VL_RAND_RESET_I(1);
    vlSelf->rm_tb_top_routerlinkedlist__DOT__edG__DOT__reset_o_reg = VL_RAND_RESET_I(1);
    vlSelf->rm_tb_top_routerlinkedlist__DOT__edG__DOT__reset_val = VL_RAND_RESET_I(1);
    vlSelf->rm_tb_top_routerlinkedlist__DOT__edG__DOT__valid_leaf_event = VL_RAND_RESET_I(1);
    vlSelf->rm_tb_top_routerlinkedlist__DOT__edG__DOT__unnamedblk1__DOT__i = 0;
    vlSelf->rm_tb_top_routerlinkedlist__DOT__edG__DOT__regval__DOT__unnamedblk3__DOT__i = 0;
    vlSelf->rm_tb_top_routerlinkedlist__DOT__edG__DOT____Vlvbound_h031c579d__0 = VL_RAND_RESET_I(1);
    vlSelf->rm_tb_top_routerlinkedlist__DOT__edG__DOT____VdfgTmp_hedd0e2b4__0 = 0;
    vlSelf->rm_tb_top_routerlinkedlist__DOT__edH__DOT__clk_i = VL_RAND_RESET_I(1);
    vlSelf->rm_tb_top_routerlinkedlist__DOT__edH__DOT__rst_ni = VL_RAND_RESET_I(1);
    vlSelf->rm_tb_top_routerlinkedlist__DOT__edH__DOT__lane_probe_reg = VL_RAND_RESET_I(7);
    vlSelf->rm_tb_top_routerlinkedlist__DOT__edH__DOT__probe_val = VL_RAND_RESET_I(1);
    vlSelf->rm_tb_top_routerlinkedlist__DOT__edH__DOT__reset_o_reg = VL_RAND_RESET_I(1);
    vlSelf->rm_tb_top_routerlinkedlist__DOT__edH__DOT__reset_val = VL_RAND_RESET_I(1);
    vlSelf->rm_tb_top_routerlinkedlist__DOT__edH__DOT__valid_leaf_event = VL_RAND_RESET_I(1);
    vlSelf->rm_tb_top_routerlinkedlist__DOT__edH__DOT__unnamedblk1__DOT__i = 0;
    vlSelf->rm_tb_top_routerlinkedlist__DOT__edH__DOT__regval__DOT__unnamedblk3__DOT__i = 0;
    vlSelf->rm_tb_top_routerlinkedlist__DOT__edH__DOT____Vlvbound_h031c579d__0 = VL_RAND_RESET_I(1);
    vlSelf->rm_tb_top_routerlinkedlist__DOT__edH__DOT____VdfgTmp_hedd0e2b4__0 = 0;
    vlSelf->rm_tb_top_routerlinkedlist__DOT__rm_alloc__DOT__lane_reset_i = VL_RAND_RESET_I(7);
    vlSelf->rm_tb_top_routerlinkedlist__DOT__rm_alloc__DOT__flush_i = VL_RAND_RESET_I(1);
    vlSelf->rm_tb_top_routerlinkedlist__DOT__rm_alloc__DOT__itype_o = VL_RAND_RESET_I(1);
    vlSelf->rm_tb_top_routerlinkedlist__DOT__rm_alloc__DOT__monitor = VL_RAND_RESET_I(1);
    vlSelf->rm_tb_top_routerlinkedlist__DOT__rm_alloc__DOT__lane0_o = VL_RAND_RESET_I(3);
    vlSelf->rm_tb_top_routerlinkedlist__DOT__rm_alloc__DOT__lane_o_00 = VL_RAND_RESET_I(3);
    vlSelf->rm_tb_top_routerlinkedlist__DOT__rm_alloc__DOT__lane_o_01 = VL_RAND_RESET_I(3);
    vlSelf->rm_tb_top_routerlinkedlist__DOT__rm_alloc__DOT__has_01_lane = VL_RAND_RESET_I(1);
    vlSelf->rm_tb_top_routerlinkedlist__DOT__rm_alloc__DOT__two_lane_o = VL_RAND_RESET_I(1);
    vlSelf->rm_tb_top_routerlinkedlist__DOT__rm_alloc__DOT__alloc_mem = VL_RAND_RESET_I(14);
    VL_RAND_RESET_W(896, vlSelf->rm_tb_top_routerlinkedlist__DOT__rm_alloc__DOT__pc_mem);
    vlSelf->rm_tb_top_routerlinkedlist__DOT__rm_alloc__DOT__nxt_reset_lane = VL_RAND_RESET_I(3);
    vlSelf->rm_tb_top_routerlinkedlist__DOT__rm_alloc__DOT__all_lanes_occupied = VL_RAND_RESET_I(1);
    vlSelf->rm_tb_top_routerlinkedlist__DOT__rm_alloc__DOT__tmp_cnt = VL_RAND_RESET_I(32);
    vlSelf->rm_tb_top_routerlinkedlist__DOT__rm_alloc__DOT__unnamedblk1__DOT__i = 0;
    vlSelf->rm_tb_top_routerlinkedlist__DOT__rm_alloc__DOT__unnamedblk2__DOT__i = 0;
    vlSelf->rm_tb_top_routerlinkedlist__DOT__rm_alloc__DOT__unnamedblk3__DOT__i = 0;
    vlSelf->rm_tb_top_routerlinkedlist__DOT__rm_alloc__DOT__unnamedblk4__DOT__i = 0;
    vlSelf->rm_tb_top_routerlinkedlist__DOT__rm_alloc__DOT__set_alloc__DOT__unnamedblk6__DOT__i = 0;
    vlSelf->rm_tb_top_routerlinkedlist__DOT__rm_alloc__DOT__set_alloc__DOT__unnamedblk5__DOT__i = 0;
    vlSelf->rm_tb_top_routerlinkedlist__DOT__rm_alloc__DOT____Vlvbound_h6ca5d110__0 = VL_RAND_RESET_I(1);
    vlSelf->rm_tb_top_routerlinkedlist__DOT__rm_alloc__DOT____Vlvbound_h8e73882e__0 = VL_RAND_RESET_Q(64);
    vlSelf->rm_tb_top_routerlinkedlist__DOT__rm_alloc__DOT____Vlvbound_hfb11cf53__0 = VL_RAND_RESET_I(1);
    vlSelf->rm_tb_top_routerlinkedlist__DOT__rm_alloc__DOT____Vlvbound_h580f53b7__0 = VL_RAND_RESET_Q(64);
    vlSelf->rm_tb_top_routerlinkedlist__DOT__rm_alloc__DOT____Vlvbound_h77d24b89__0 = VL_RAND_RESET_I(1);
    vlSelf->rm_tb_top_routerlinkedlist__DOT__rm_alloc__DOT____Vlvbound_h2d985dc2__0 = VL_RAND_RESET_Q(64);
    vlSelf->rm_tb_top_routerlinkedlist__DOT__rm_alloc__DOT____Vlvbound_h77d24b89__1 = VL_RAND_RESET_I(1);
    vlSelf->rm_tb_top_routerlinkedlist__DOT__rm_alloc__DOT____Vlvbound_h2d985dc2__1 = VL_RAND_RESET_Q(64);
    vlSelf->rm_tb_top_routerlinkedlist__DOT__rm_alloc__DOT____Vlvbound_hfb11cf53__1 = VL_RAND_RESET_I(1);
    vlSelf->rm_tb_top_routerlinkedlist__DOT__rm_alloc__DOT____Vlvbound_h580f53b7__1 = VL_RAND_RESET_Q(64);
    vlSelf->rm_tb_top_routerlinkedlist__DOT__rm_alloc__DOT____Vlvbound_h064cc084__0 = VL_RAND_RESET_I(1);
    vlSelf->rm_tb_top_routerlinkedlist__DOT__rm_alloc__DOT____Vlvbound_hb3ac4d13__0 = VL_RAND_RESET_Q(64);
    VL_RAND_RESET_W(133, vlSelf->rm_tb_top_routerlinkedlist__DOT__router__DOT__lane_mapping_q);
    VL_RAND_RESET_W(133, vlSelf->rm_tb_top_routerlinkedlist__DOT__router__DOT__lane_mapping_d);
    vlSelf->rm_tb_top_routerlinkedlist__DOT__router__DOT__lane_reset_q = VL_RAND_RESET_I(14);
    vlSelf->rm_tb_top_routerlinkedlist__DOT__router__DOT__lane_reset_d = VL_RAND_RESET_I(14);
    vlSelf->rm_tb_top_routerlinkedlist__DOT__router__DOT__lane_mask_q = VL_RAND_RESET_I(14);
    vlSelf->rm_tb_top_routerlinkedlist__DOT__router__DOT__lane_mask_d = VL_RAND_RESET_I(14);
    vlSelf->rm_tb_top_routerlinkedlist__DOT__router__DOT__next_parent = VL_RAND_RESET_I(21);
    vlSelf->rm_tb_top_routerlinkedlist__DOT__router__DOT__queue_tail_q = VL_RAND_RESET_I(3);
    vlSelf->rm_tb_top_routerlinkedlist__DOT__router__DOT__queue_tail_d = VL_RAND_RESET_I(3);
    vlSelf->rm_tb_top_routerlinkedlist__DOT__router__DOT__queue_head = VL_RAND_RESET_I(3);
    vlSelf->rm_tb_top_routerlinkedlist__DOT__router__DOT__next_parent_valid = VL_RAND_RESET_I(7);
    vlSelf->rm_tb_top_routerlinkedlist__DOT__router__DOT__next_child = VL_RAND_RESET_I(21);
    vlSelf->rm_tb_top_routerlinkedlist__DOT__router__DOT__next_child_valid = VL_RAND_RESET_I(7);
    vlSelf->rm_tb_top_routerlinkedlist__DOT__router__DOT__reset_mask = VL_RAND_RESET_I(7);
    vlSelf->rm_tb_top_routerlinkedlist__DOT__router__DOT__unnamedblk1__DOT__i = 0;
    vlSelf->rm_tb_top_routerlinkedlist__DOT__router__DOT__unnamedblk2__DOT__i = 0;
    vlSelf->rm_tb_top_routerlinkedlist__DOT__router__DOT__unnamedblk2__DOT__unnamedblk3__DOT__c_parent = VL_RAND_RESET_I(3);
    vlSelf->rm_tb_top_routerlinkedlist__DOT__router__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__j = 0;
    vlSelf->rm_tb_top_routerlinkedlist__DOT__router__DOT__unnamedblk2__DOT__unnamedblk5__DOT__c_child = VL_RAND_RESET_I(3);
    vlSelf->rm_tb_top_routerlinkedlist__DOT__router__DOT__unnamedblk2__DOT__unnamedblk5__DOT__unnamedblk6__DOT__j = 0;
    vlSelf->rm_tb_top_routerlinkedlist__DOT__router__DOT__unnamedblk7__DOT__i = 0;
    vlSelf->rm_tb_top_routerlinkedlist__DOT__router__DOT__unnamedblk8__DOT__i = 0;
    vlSelf->rm_tb_top_routerlinkedlist__DOT__router__DOT__unnamedblk9__DOT__i = 0;
    vlSelf->rm_tb_top_routerlinkedlist__DOT__router__DOT__unnamedblk10__DOT__i = 0;
    vlSelf->rm_tb_top_routerlinkedlist__DOT__router__DOT____Vlvbound_h53f86517__0 = VL_RAND_RESET_I(1);
    vlSelf->rm_tb_top_routerlinkedlist__DOT__router__DOT____Vlvbound_h10c7bce4__0 = VL_RAND_RESET_I(1);
    vlSelf->rm_tb_top_routerlinkedlist__DOT__router__DOT____Vlvbound_h8d62c852__0 = VL_RAND_RESET_I(3);
    vlSelf->rm_tb_top_routerlinkedlist__DOT__router__DOT____Vlvbound_h28f314e8__0 = VL_RAND_RESET_I(1);
    vlSelf->rm_tb_top_routerlinkedlist__DOT__router__DOT____Vlvbound_h3455dccd__0 = VL_RAND_RESET_I(3);
    vlSelf->rm_tb_top_routerlinkedlist__DOT__router__DOT____Vlvbound_hd007c83d__0 = VL_RAND_RESET_I(1);
    vlSelf->rm_tb_top_routerlinkedlist__DOT__router__DOT____Vlvbound_hdf991483__0 = VL_RAND_RESET_I(1);
    vlSelf->rm_tb_top_routerlinkedlist__DOT__router__DOT____Vlvbound_hd007c83d__1 = VL_RAND_RESET_I(1);
    vlSelf->rm_tb_top_routerlinkedlist__DOT__router__DOT____Vlvbound_hc16e5030__0 = VL_RAND_RESET_I(1);
    vlSelf->rm_tb_top_routerlinkedlist__DOT__router__DOT____Vlvbound_hdc3092a1__0 = VL_RAND_RESET_I(3);
    vlSelf->rm_tb_top_routerlinkedlist__DOT__router__DOT____Vlvbound_h948239d2__0 = VL_RAND_RESET_I(1);
    vlSelf->rm_tb_top_routerlinkedlist__DOT__router__DOT____Vlvbound_h529c8a97__0 = VL_RAND_RESET_I(3);
    vlSelf->rm_tb_top_routerlinkedlist__DOT__router__DOT____Vlvbound_h161306d5__0 = VL_RAND_RESET_I(1);
    vlSelf->rm_tb_top_routerlinkedlist__DOT__router__DOT____Vlvbound_h86b51445__0 = VL_RAND_RESET_I(1);
    vlSelf->rm_tb_top_routerlinkedlist__DOT__router__DOT____Vlvbound_h45218219__0 = VL_RAND_RESET_I(3);
    vlSelf->rm_tb_top_routerlinkedlist__DOT__router__DOT____Vlvbound_h161306d5__1 = VL_RAND_RESET_I(1);
    vlSelf->rm_tb_top_routerlinkedlist__DOT__router__DOT____Vlvbound_h388eb005__0 = VL_RAND_RESET_I(1);
    vlSelf->rm_tb_top_routerlinkedlist__DOT__router__DOT____Vlvbound_h45218219__1 = VL_RAND_RESET_I(3);
    vlSelf->rm_tb_top_routerlinkedlist__DOT__router__DOT____Vlvbound_hc16e5030__1 = VL_RAND_RESET_I(1);
    vlSelf->rm_tb_top_routerlinkedlist__DOT__router__DOT____Vlvbound_hdc3092a1__1 = VL_RAND_RESET_I(3);
    vlSelf->rm_tb_top_routerlinkedlist__DOT__router__DOT____Vlvbound_hc1424041__0 = VL_RAND_RESET_I(1);
    vlSelf->rm_tb_top_routerlinkedlist__DOT__router__DOT____Vlvbound_h6c44a9e6__0 = VL_RAND_RESET_I(3);
    vlSelf->rm_tb_top_routerlinkedlist__DOT__router__DOT____Vlvbound_h948239d2__1 = VL_RAND_RESET_I(1);
    vlSelf->rm_tb_top_routerlinkedlist__DOT__router__DOT____Vlvbound_h529c8a97__1 = VL_RAND_RESET_I(3);
    vlSelf->rm_tb_top_routerlinkedlist__DOT__router__DOT____Vlvbound_h45218219__2 = VL_RAND_RESET_I(3);
    vlSelf->rm_tb_top_routerlinkedlist__DOT__router__DOT____Vlvbound_h549db542__0 = VL_RAND_RESET_I(3);
    vlSelf->rm_tb_top_routerlinkedlist__DOT__router__DOT____Vlvbound_h944eea1e__0 = VL_RAND_RESET_I(1);
    vlSelf->rm_tb_top_routerlinkedlist__DOT__router__DOT____Vlvbound_hb1225b1d__0 = VL_RAND_RESET_I(1);
    vlSelf->rm_tb_top_routerlinkedlist__DOT__router__DOT____Vlvbound_h862e5f1c__0 = VL_RAND_RESET_I(3);
    vlSelf->rm_tb_top_routerlinkedlist__DOT__router__DOT____Vlvbound_h85b9fd7b__0 = VL_RAND_RESET_I(3);
    vlSelf->rm_tb_top_routerlinkedlist__DOT__router__DOT____Vlvbound_hb2025c4f__0 = VL_RAND_RESET_I(1);
    vlSelf->rm_tb_top_routerlinkedlist__DOT__router__DOT____Vlvbound_hbff1194e__0 = VL_RAND_RESET_I(2);
    vlSelf->rm_tb_top_routerlinkedlist__DOT__router__DOT____Vlvbound_hb1de1c7a__0 = VL_RAND_RESET_I(1);
    vlSelf->rm_tb_top_routerlinkedlist__DOT__router__DOT____Vlvbound_hbbab519b__0 = VL_RAND_RESET_I(1);
    vlSelf->rm_tb_top_routerlinkedlist__DOT__router__DOT____Vlvbound_h7cdb3fb6__0 = VL_RAND_RESET_I(3);
    vlSelf->rm_tb_top_routerlinkedlist__DOT__router__DOT____Vlvbound_hcbc02661__0 = VL_RAND_RESET_I(3);
    vlSelf->rm_tb_top_routerlinkedlist__DOT__router__DOT____Vlvbound_h8b5da8f0__0 = VL_RAND_RESET_I(1);
    vlSelf->rm_tb_top_routerlinkedlist__DOT__router__DOT____Vlvbound_h47c8fadd__0 = VL_RAND_RESET_I(2);
    vlSelf->rm_tb_top_routerlinkedlist__DOT__router__DOT____Vlvbound_h99dd1804__0 = VL_RAND_RESET_I(2);
    vlSelf->rm_tb_top_routerlinkedlist__DOT__router__DOT____Vlvbound_hbff1194e__1 = VL_RAND_RESET_I(2);
    vlSelf->rm_tb_top_routerlinkedlist__DOT__router__DOT____Vlvbound_h7cdb3fb6__1 = VL_RAND_RESET_I(3);
    vlSelf->rm_tb_top_routerlinkedlist__DOT__router__DOT____Vlvbound_hbbab519b__1 = VL_RAND_RESET_I(1);
    vlSelf->rm_tb_top_routerlinkedlist__DOT__router__DOT____Vlvbound_hb1de1c7a__1 = VL_RAND_RESET_I(1);
    vlSelf->rm_tb_top_routerlinkedlist__DOT__router__DOT____Vlvbound_h5653da11__0 = VL_RAND_RESET_I(1);
    vlSelf->rm_tb_top_routerlinkedlist__DOT__router__DOT____Vlvbound_h1a13cbf9__0 = VL_RAND_RESET_I(3);
    vlSelf->rm_tb_top_routerlinkedlist__DOT__router__DOT____Vlvbound_h47c8fadd__1 = VL_RAND_RESET_I(2);
    vlSelf->rm_tb_top_routerlinkedlist__DOT__router__DOT____Vlvbound_hbff1194e__2 = VL_RAND_RESET_I(2);
    vlSelf->rm_tb_top_routerlinkedlist__DOT__router__DOT____Vlvbound_hb1de1c7a__2 = VL_RAND_RESET_I(1);
    vlSelf->rm_tb_top_routerlinkedlist__DOT__router__DOT____Vlvbound_hbbab519b__2 = VL_RAND_RESET_I(1);
    vlSelf->rm_tb_top_routerlinkedlist__DOT__router__DOT____Vlvbound_h47c8fadd__2 = VL_RAND_RESET_I(2);
    vlSelf->rm_tb_top_routerlinkedlist__DOT__router__DOT____Vlvbound_h68026627__0 = VL_RAND_RESET_I(1);
    vlSelf->rm_tb_top_routerlinkedlist__DOT__router__DOT____Vlvbound_h92d7c236__0 = VL_RAND_RESET_I(1);
    vlSelf->rm_tb_top_routerlinkedlist__DOT__router__DOT____Vlvbound_hc4bf4af7__0 = VL_RAND_RESET_I(1);
    vlSelf->rm_tb_top_routerlinkedlist__DOT__router__DOT____Vlvbound_h92d7c236__1 = VL_RAND_RESET_I(1);
    vlSelf->rm_tb_top_routerlinkedlist__DOT__rm__DOT____Vcellinp__genblk1__BRA__0__KET____DOT__lane__lane_reset_i = VL_RAND_RESET_I(1);
    vlSelf->rm_tb_top_routerlinkedlist__DOT__rm__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__lane__lane_reset_i = VL_RAND_RESET_I(1);
    vlSelf->rm_tb_top_routerlinkedlist__DOT__rm__DOT____Vcellinp__genblk1__BRA__2__KET____DOT__lane__lane_reset_i = VL_RAND_RESET_I(1);
    vlSelf->rm_tb_top_routerlinkedlist__DOT__rm__DOT____Vcellinp__genblk1__BRA__3__KET____DOT__lane__lane_reset_i = VL_RAND_RESET_I(1);
    vlSelf->rm_tb_top_routerlinkedlist__DOT__rm__DOT____Vcellinp__genblk1__BRA__4__KET____DOT__lane__lane_reset_i = VL_RAND_RESET_I(1);
    vlSelf->rm_tb_top_routerlinkedlist__DOT__rm__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__lane__lane_reset_i = VL_RAND_RESET_I(1);
    vlSelf->rm_tb_top_routerlinkedlist__DOT__rm__DOT____Vcellinp__genblk1__BRA__6__KET____DOT__lane__lane_reset_i = VL_RAND_RESET_I(1);
    vlSelf->rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__0__KET____DOT__lane__DOT__c0_i = VL_RAND_RESET_I(4);
    vlSelf->rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__0__KET____DOT__lane__DOT__c1_i = VL_RAND_RESET_I(4);
    vlSelf->rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__0__KET____DOT__lane__DOT__c2_i = VL_RAND_RESET_I(4);
    vlSelf->rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__0__KET____DOT__lane__DOT__c3_i = VL_RAND_RESET_I(4);
    vlSelf->rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__1__KET____DOT__lane__DOT__c0_i = VL_RAND_RESET_I(4);
    vlSelf->rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__1__KET____DOT__lane__DOT__c1_i = VL_RAND_RESET_I(4);
    vlSelf->rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__1__KET____DOT__lane__DOT__c2_i = VL_RAND_RESET_I(4);
    vlSelf->rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__1__KET____DOT__lane__DOT__c3_i = VL_RAND_RESET_I(4);
    vlSelf->rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__2__KET____DOT__lane__DOT__c0_i = VL_RAND_RESET_I(4);
    vlSelf->rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__2__KET____DOT__lane__DOT__c1_i = VL_RAND_RESET_I(4);
    vlSelf->rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__2__KET____DOT__lane__DOT__c2_i = VL_RAND_RESET_I(4);
    vlSelf->rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__2__KET____DOT__lane__DOT__c3_i = VL_RAND_RESET_I(4);
    vlSelf->rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__3__KET____DOT__lane__DOT__c0_i = VL_RAND_RESET_I(4);
    vlSelf->rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__3__KET____DOT__lane__DOT__c1_i = VL_RAND_RESET_I(4);
    vlSelf->rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__3__KET____DOT__lane__DOT__c2_i = VL_RAND_RESET_I(4);
    vlSelf->rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__3__KET____DOT__lane__DOT__c3_i = VL_RAND_RESET_I(4);
    vlSelf->rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__4__KET____DOT__lane__DOT__c0_i = VL_RAND_RESET_I(4);
    vlSelf->rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__4__KET____DOT__lane__DOT__c1_i = VL_RAND_RESET_I(4);
    vlSelf->rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__4__KET____DOT__lane__DOT__c2_i = VL_RAND_RESET_I(4);
    vlSelf->rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__4__KET____DOT__lane__DOT__c3_i = VL_RAND_RESET_I(4);
    vlSelf->rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__5__KET____DOT__lane__DOT__c0_i = VL_RAND_RESET_I(4);
    vlSelf->rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__5__KET____DOT__lane__DOT__c1_i = VL_RAND_RESET_I(4);
    vlSelf->rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__5__KET____DOT__lane__DOT__c2_i = VL_RAND_RESET_I(4);
    vlSelf->rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__5__KET____DOT__lane__DOT__c3_i = VL_RAND_RESET_I(4);
    vlSelf->rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__6__KET____DOT__lane__DOT__c0_i = VL_RAND_RESET_I(4);
    vlSelf->rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__6__KET____DOT__lane__DOT__c1_i = VL_RAND_RESET_I(4);
    vlSelf->rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__6__KET____DOT__lane__DOT__c2_i = VL_RAND_RESET_I(4);
    vlSelf->rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__6__KET____DOT__lane__DOT__c3_i = VL_RAND_RESET_I(4);
    vlSelf->__VdfgTmp_hd96324f3__0 = 0;
    vlSelf->__VdfgTmp_h3da4fa7d__0 = 0;
    VL_RAND_RESET_W(904, vlSelf->__Vdly__rm_tb_top_routerlinkedlist__DOT__rm_cnt);
    vlSelf->__Vtrigrprev__TOP__clk_i = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigrprev__TOP__rm_tb_top_routerlinkedlist__DOT__rst_ni = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigrprev__TOP__rm_tb_top_routerlinkedlist__DOT__edA__DOT__clk_i = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigrprev__TOP__rm_tb_top_routerlinkedlist__DOT__edA__DOT__rst_ni = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigrprev__TOP__rm_tb_top_routerlinkedlist__DOT__edB__DOT__clk_i = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigrprev__TOP__rm_tb_top_routerlinkedlist__DOT__edB__DOT__rst_ni = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigrprev__TOP__rm_tb_top_routerlinkedlist__DOT__edC__DOT__clk_i = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigrprev__TOP__rm_tb_top_routerlinkedlist__DOT__edC__DOT__rst_ni = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigrprev__TOP__rm_tb_top_routerlinkedlist__DOT__edD__DOT__clk_i = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigrprev__TOP__rm_tb_top_routerlinkedlist__DOT__edD__DOT__rst_ni = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigrprev__TOP__rm_tb_top_routerlinkedlist__DOT__edE__DOT__clk_i = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigrprev__TOP__rm_tb_top_routerlinkedlist__DOT__edE__DOT__rst_ni = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigrprev__TOP__rm_tb_top_routerlinkedlist__DOT__edF__DOT__clk_i = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigrprev__TOP__rm_tb_top_routerlinkedlist__DOT__edF__DOT__rst_ni = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigrprev__TOP__rm_tb_top_routerlinkedlist__DOT__edG__DOT__clk_i = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigrprev__TOP__rm_tb_top_routerlinkedlist__DOT__edG__DOT__rst_ni = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigrprev__TOP__rm_tb_top_routerlinkedlist__DOT__edH__DOT__clk_i = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigrprev__TOP__rm_tb_top_routerlinkedlist__DOT__edH__DOT__rst_ni = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 18; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
