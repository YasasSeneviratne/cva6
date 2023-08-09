// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See rm_tb_lane.h for the primary calling header

#include "verilated.h"

#include "rm_tb_lane___024root.h"

VL_ATTR_COLD void rm_tb_lane___024root___eval_static(rm_tb_lane___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    rm_tb_lane__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    rm_tb_lane___024root___eval_static\n"); );
}

VL_ATTR_COLD void rm_tb_lane___024root___eval_initial(rm_tb_lane___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    rm_tb_lane__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    rm_tb_lane___024root___eval_initial\n"); );
    // Body
    vlSelf->__Vtrigrprev__TOP__clk_i = vlSelf->clk_i;
}

VL_ATTR_COLD void rm_tb_lane___024root___eval_final(rm_tb_lane___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    rm_tb_lane__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    rm_tb_lane___024root___eval_final\n"); );
}

VL_ATTR_COLD void rm_tb_lane___024root___eval_triggers__stl(rm_tb_lane___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void rm_tb_lane___024root___dump_triggers__stl(rm_tb_lane___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD void rm_tb_lane___024root___eval_stl(rm_tb_lane___024root* vlSelf);

VL_ATTR_COLD void rm_tb_lane___024root___eval_settle(rm_tb_lane___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    rm_tb_lane__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    rm_tb_lane___024root___eval_settle\n"); );
    // Init
    CData/*0:0*/ __VstlContinue;
    // Body
    vlSelf->__VstlIterCount = 0U;
    __VstlContinue = 1U;
    while (__VstlContinue) {
        __VstlContinue = 0U;
        rm_tb_lane___024root___eval_triggers__stl(vlSelf);
        if (vlSelf->__VstlTriggered.any()) {
            __VstlContinue = 1U;
            if (VL_UNLIKELY((0x64U < vlSelf->__VstlIterCount))) {
#ifdef VL_DEBUG
                rm_tb_lane___024root___dump_triggers__stl(vlSelf);
#endif
                VL_FATAL_MT("tb_top_lane.sv", 1, "", "Settle region did not converge.");
            }
            vlSelf->__VstlIterCount = ((IData)(1U) 
                                       + vlSelf->__VstlIterCount);
            rm_tb_lane___024root___eval_stl(vlSelf);
        }
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void rm_tb_lane___024root___dump_triggers__stl(rm_tb_lane___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    rm_tb_lane__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    rm_tb_lane___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VstlTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if (vlSelf->__VstlTriggered.at(0U)) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void rm_tb_lane___024root___stl_sequent__TOP__0(rm_tb_lane___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    rm_tb_lane__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    rm_tb_lane___024root___stl_sequent__TOP__0\n"); );
    // Body
    vlSelf->lanewrap__DOT__dut__DOT__c0__DOT__automata_stage0C0__DOT__automata_ltl0c0__DOT__start_of_data 
        = ((IData)(vlSelf->lanewrap__DOT__dut__DOT__c0__DOT__automata_stage0C0__DOT__automata_ltl0c0__DOT__start_of_data_reg) 
           & ((~ (IData)(vlSelf->lanewrap__DOT__lane_reset_reg)) 
              & (IData)(vlSelf->lanewrap__DOT__dut__DOT__c0__DOT__automata_stage0C0__DOT__automata_ltl0c0__DOT__start_of_data_reg_ne)));
    vlSelf->lanewrap__DOT__dut__DOT__c0__DOT__automata_stage0C0__DOT__automata_ltl1c0__DOT__start_of_data 
        = ((~ (IData)(vlSelf->lanewrap__DOT__lane_reset_reg)) 
           & (IData)(vlSelf->lanewrap__DOT__dut__DOT__c0__DOT__automata_stage0C0__DOT__automata_ltl0c0__DOT__start_of_data_reg));
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
    vlSelf->lanewrap__DOT__dut__DOT__c1__DOT__automata_stage0c1__DOT__automata_ltl0c1__DOT____Vcellinp__ltl0c1_ste_1__income_edges 
        = (((IData)(vlSelf->lanewrap__DOT__dut__DOT__c0__DOT__automata_stage0C0__DOT__automata_ltl1c0__DOT__start_of_data) 
            << 1U) | ((IData)(vlSelf->lanewrap__DOT__dut__DOT__c1__DOT__automata_stage0c1__DOT__automata_ltl0c1__DOT__ltl0c1_ste_1__DOT__internal_reg) 
                      & (3U >= (IData)(vlSelf->lanewrap__DOT__dut__DOT__c1_i))));
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
    vlSelf->lanewrap__DOT__dut__DOT__c0__DOT__automata_stage0C0__DOT__automata_ltl0c0__DOT____Vcellinp__ltl0c0_ste_1__income_edges 
        = (((IData)(vlSelf->lanewrap__DOT__dut__DOT__c0__DOT__automata_stage0C0__DOT__automata_ltl0c0__DOT__start_of_data) 
            << 1U) | ((IData)(vlSelf->lanewrap__DOT__dut__DOT__c0__DOT__automata_stage0C0__DOT__automata_ltl0c0__DOT__ltl0c0_ste_1__DOT__internal_reg) 
                      & (IData)(vlSelf->lanewrap__DOT__dut__DOT__c0__DOT__automata_stage0C0__DOT__automata_ltl0c0__DOT__lut_match_ltl0c0_1__DOT__match_internal)));
    vlSelf->lanewrap__DOT__dut__DOT__c0__DOT__automata_stage0C0__DOT__automata_ltl0c0__DOT____Vcellinp__ltl0c0_ste_5__income_edges 
        = ((((IData)(vlSelf->lanewrap__DOT__dut__DOT__c0__DOT__automata_stage0C0__DOT__automata_ltl0c0__DOT__ltl0c0_ste_3__DOT__internal_reg) 
             & (((4U <= (IData)(vlSelf->lanewrap__DOT__dut__DOT__c0_i)) 
                 & (5U >= (IData)(vlSelf->lanewrap__DOT__dut__DOT__c0_i))) 
                | ((0xcU <= (IData)(vlSelf->lanewrap__DOT__dut__DOT__c0_i)) 
                   & (0xdU >= (IData)(vlSelf->lanewrap__DOT__dut__DOT__c0_i))))) 
            << 1U) | ((IData)(vlSelf->lanewrap__DOT__dut__DOT__c0__DOT__automata_stage0C0__DOT__automata_ltl0c0__DOT__ltl0c0_ste_5__DOT__internal_reg) 
                      & (IData)(vlSelf->lanewrap__DOT__dut__DOT__c0__DOT__automata_stage0C0__DOT__automata_ltl0c0__DOT__lut_match_ltl0c0_1__DOT__match_internal)));
    vlSelf->lanewrap__DOT__dut__DOT__c0__DOT__automata_stage0C0__DOT__automata_ltl1c0__DOT____Vcellinp__ltl1c0_ste_1__income_edges 
        = (((IData)(vlSelf->lanewrap__DOT__dut__DOT__c0__DOT__automata_stage0C0__DOT__automata_ltl1c0__DOT__start_of_data) 
            << 1U) | ((IData)(vlSelf->lanewrap__DOT__dut__DOT__c0__DOT__automata_stage0C0__DOT__automata_ltl1c0__DOT__ltl1c0_ste_1__DOT__internal_reg) 
                      & (IData)(vlSelf->lanewrap__DOT__dut__DOT__c0__DOT__automata_stage0C0__DOT__automata_ltl1c0__DOT__lut_match_ltl1c0_1__DOT__match_internal)));
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
    vlSelf->lanewrap__DOT__dut__DOT__c1__DOT__automata_stage0c1__DOT__automata_ltl1c1__DOT____Vcellinp__ltl1c1_ste_1__income_edges 
        = (((IData)(vlSelf->lanewrap__DOT__dut__DOT__c0__DOT__automata_stage0C0__DOT__automata_ltl1c0__DOT__start_of_data) 
            << 1U) | ((IData)(vlSelf->lanewrap__DOT__dut__DOT__c1__DOT__automata_stage0c1__DOT__automata_ltl1c1__DOT__ltl1c1_ste_1__DOT__internal_reg) 
                      & (IData)(vlSelf->lanewrap__DOT__dut__DOT__c1__DOT__automata_stage0c1__DOT__automata_ltl1c1__DOT__lut_match_ltl1c1_1__DOT__match_internal)));
    vlSelf->lanewrap__DOT__dut__DOT__c1__DOT__automata_stage0c1__DOT__automata_ltl1c1__DOT____Vcellinp__ltl1c1_ste_5__income_edges 
        = ((((IData)(vlSelf->lanewrap__DOT__dut__DOT__c1__DOT__automata_stage0c1__DOT__automata_ltl1c1__DOT__ltl1c1_ste_3__DOT__internal_reg) 
             & (((4U <= (IData)(vlSelf->lanewrap__DOT__dut__DOT__c1_i)) 
                 & (5U >= (IData)(vlSelf->lanewrap__DOT__dut__DOT__c1_i))) 
                | ((0xcU <= (IData)(vlSelf->lanewrap__DOT__dut__DOT__c1_i)) 
                   & (0xdU >= (IData)(vlSelf->lanewrap__DOT__dut__DOT__c1_i))))) 
            << 1U) | ((IData)(vlSelf->lanewrap__DOT__dut__DOT__c1__DOT__automata_stage0c1__DOT__automata_ltl1c1__DOT__ltl1c1_ste_5__DOT__internal_reg) 
                      & (IData)(vlSelf->lanewrap__DOT__dut__DOT__c1__DOT__automata_stage0c1__DOT__automata_ltl1c1__DOT__lut_match_ltl1c1_1__DOT__match_internal)));
    vlSelf->lanewrap__DOT__dut__DOT__c1__DOT__automata_stage0c1__DOT__automata_ltl2c1__DOT____Vcellinp__ltl2c1_ste_1__income_edges 
        = (((IData)(vlSelf->lanewrap__DOT__dut__DOT__c0__DOT__automata_stage0C0__DOT__automata_ltl1c0__DOT__start_of_data) 
            << 1U) | ((IData)(vlSelf->lanewrap__DOT__dut__DOT__c1__DOT__automata_stage0c1__DOT__automata_ltl2c1__DOT__ltl2c1_ste_1__DOT__internal_reg) 
                      & (IData)(vlSelf->lanewrap__DOT__dut__DOT__c1__DOT__automata_stage0c1__DOT__automata_ltl2c1__DOT__lut_match_ltl2c1_1__DOT__match_internal)));
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

VL_ATTR_COLD void rm_tb_lane___024root___eval_stl(rm_tb_lane___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    rm_tb_lane__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    rm_tb_lane___024root___eval_stl\n"); );
    // Body
    if (vlSelf->__VstlTriggered.at(0U)) {
        rm_tb_lane___024root___stl_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[1U] = 1U;
        vlSelf->__Vm_traceActivity[0U] = 1U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void rm_tb_lane___024root___dump_triggers__act(rm_tb_lane___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    rm_tb_lane__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    rm_tb_lane___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VactTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if (vlSelf->__VactTriggered.at(0U)) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge clk_i)\n");
    }
    if (vlSelf->__VactTriggered.at(1U)) {
        VL_DBG_MSGF("         'act' region trigger index 1 is active: @(negedge clk_i)\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void rm_tb_lane___024root___dump_triggers__nba(rm_tb_lane___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    rm_tb_lane__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    rm_tb_lane___024root___dump_triggers__nba\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VnbaTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if (vlSelf->__VnbaTriggered.at(0U)) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge clk_i)\n");
    }
    if (vlSelf->__VnbaTriggered.at(1U)) {
        VL_DBG_MSGF("         'nba' region trigger index 1 is active: @(negedge clk_i)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void rm_tb_lane___024root___ctor_var_reset(rm_tb_lane___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    rm_tb_lane__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    rm_tb_lane___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->clk_i = VL_RAND_RESET_I(1);
    vlSelf->lane_vector_i = VL_RAND_RESET_I(6);
    vlSelf->lane_reset_i = VL_RAND_RESET_I(1);
    vlSelf->monitor_o = VL_RAND_RESET_I(5);
    vlSelf->lanewrap__DOT__lane_vector_reg = VL_RAND_RESET_I(6);
    vlSelf->lanewrap__DOT__lane_reset_reg = VL_RAND_RESET_I(1);
    vlSelf->lanewrap__DOT__dut__DOT__c0_i = VL_RAND_RESET_I(4);
    vlSelf->lanewrap__DOT__dut__DOT__c1_i = VL_RAND_RESET_I(4);
    vlSelf->lanewrap__DOT__dut__DOT__c0__DOT__ltl0c0_w_out_2 = VL_RAND_RESET_I(1);
    vlSelf->lanewrap__DOT__dut__DOT__c0__DOT__ltl0c0_w_out_7 = VL_RAND_RESET_I(1);
    vlSelf->lanewrap__DOT__dut__DOT__c0__DOT__ltl0c0_w_out_9 = VL_RAND_RESET_I(1);
    vlSelf->lanewrap__DOT__dut__DOT__c0__DOT__ltl1c0_w_out_3 = VL_RAND_RESET_I(1);
    vlSelf->lanewrap__DOT__dut__DOT__c0__DOT__ltl1c0_w_out_5 = VL_RAND_RESET_I(1);
    vlSelf->lanewrap__DOT__dut__DOT__c0__DOT__ltl1c0_w_out_9 = VL_RAND_RESET_I(1);
    vlSelf->lanewrap__DOT__dut__DOT__c0__DOT__automata_stage0C0__DOT__out_symbols = VL_RAND_RESET_I(8);
    vlSelf->lanewrap__DOT__dut__DOT__c0__DOT__automata_stage0C0__DOT__out_reset = VL_RAND_RESET_I(1);
    vlSelf->lanewrap__DOT__dut__DOT__c0__DOT__automata_stage0C0__DOT__automata_ltl0c0__DOT__start_of_data = VL_RAND_RESET_I(1);
    vlSelf->lanewrap__DOT__dut__DOT__c0__DOT__automata_stage0C0__DOT__automata_ltl0c0__DOT__start_of_data_reg = VL_RAND_RESET_I(1);
    vlSelf->lanewrap__DOT__dut__DOT__c0__DOT__automata_stage0C0__DOT__automata_ltl0c0__DOT__start_of_data_reg_ne = VL_RAND_RESET_I(1);
    vlSelf->lanewrap__DOT__dut__DOT__c0__DOT__automata_stage0C0__DOT__automata_ltl0c0__DOT____Vcellinp__ltl0c0_ste_1__income_edges = VL_RAND_RESET_I(2);
    vlSelf->lanewrap__DOT__dut__DOT__c0__DOT__automata_stage0C0__DOT__automata_ltl0c0__DOT____Vcellinp__ltl0c0_ste_4__income_edges = VL_RAND_RESET_I(4);
    vlSelf->lanewrap__DOT__dut__DOT__c0__DOT__automata_stage0C0__DOT__automata_ltl0c0__DOT____Vcellinp__ltl0c0_ste_5__income_edges = VL_RAND_RESET_I(2);
    vlSelf->lanewrap__DOT__dut__DOT__c0__DOT__automata_stage0C0__DOT__automata_ltl0c0__DOT____Vcellinp__ltl0c0_ste_8__income_edges = VL_RAND_RESET_I(2);
    vlSelf->lanewrap__DOT__dut__DOT__c0__DOT__automata_stage0C0__DOT__automata_ltl0c0__DOT__lut_match_ltl0c0_1__DOT__match_internal = VL_RAND_RESET_I(1);
    vlSelf->lanewrap__DOT__dut__DOT__c0__DOT__automata_stage0C0__DOT__automata_ltl0c0__DOT__ltl0c0_ste_1__DOT__internal_reg = VL_RAND_RESET_I(1);
    vlSelf->lanewrap__DOT__dut__DOT__c0__DOT__automata_stage0C0__DOT__automata_ltl0c0__DOT__ltl0c0_ste_2__DOT__internal_reg = VL_RAND_RESET_I(1);
    vlSelf->lanewrap__DOT__dut__DOT__c0__DOT__automata_stage0C0__DOT__automata_ltl0c0__DOT__ltl0c0_ste_3__DOT__internal_reg = VL_RAND_RESET_I(1);
    vlSelf->lanewrap__DOT__dut__DOT__c0__DOT__automata_stage0C0__DOT__automata_ltl0c0__DOT__ltl0c0_ste_4__DOT__internal_reg = VL_RAND_RESET_I(1);
    vlSelf->lanewrap__DOT__dut__DOT__c0__DOT__automata_stage0C0__DOT__automata_ltl0c0__DOT__ltl0c0_ste_5__DOT__internal_reg = VL_RAND_RESET_I(1);
    vlSelf->lanewrap__DOT__dut__DOT__c0__DOT__automata_stage0C0__DOT__automata_ltl0c0__DOT__lut_match_ltl0c0_7__DOT__match_internal = VL_RAND_RESET_I(1);
    vlSelf->lanewrap__DOT__dut__DOT__c0__DOT__automata_stage0C0__DOT__automata_ltl0c0__DOT__ltl0c0_ste_8__DOT__internal_reg = VL_RAND_RESET_I(1);
    vlSelf->lanewrap__DOT__dut__DOT__c0__DOT__automata_stage0C0__DOT__automata_ltl1c0__DOT__start_of_data = VL_RAND_RESET_I(1);
    vlSelf->lanewrap__DOT__dut__DOT__c0__DOT__automata_stage0C0__DOT__automata_ltl1c0__DOT____Vcellinp__ltl1c0_ste_1__income_edges = VL_RAND_RESET_I(2);
    vlSelf->lanewrap__DOT__dut__DOT__c0__DOT__automata_stage0C0__DOT__automata_ltl1c0__DOT____Vcellinp__ltl1c0_ste_4__income_edges = VL_RAND_RESET_I(2);
    vlSelf->lanewrap__DOT__dut__DOT__c0__DOT__automata_stage0C0__DOT__automata_ltl1c0__DOT____Vcellinp__ltl1c0_ste_7__income_edges = VL_RAND_RESET_I(4);
    vlSelf->lanewrap__DOT__dut__DOT__c0__DOT__automata_stage0C0__DOT__automata_ltl1c0__DOT____Vcellinp__ltl1c0_ste_8__income_edges = VL_RAND_RESET_I(2);
    vlSelf->lanewrap__DOT__dut__DOT__c0__DOT__automata_stage0C0__DOT__automata_ltl1c0__DOT__lut_match_ltl1c0_1__DOT__match_internal = VL_RAND_RESET_I(1);
    vlSelf->lanewrap__DOT__dut__DOT__c0__DOT__automata_stage0C0__DOT__automata_ltl1c0__DOT__ltl1c0_ste_1__DOT__internal_reg = VL_RAND_RESET_I(1);
    vlSelf->lanewrap__DOT__dut__DOT__c0__DOT__automata_stage0C0__DOT__automata_ltl1c0__DOT__ltl1c0_ste_2__DOT__internal_reg = VL_RAND_RESET_I(1);
    vlSelf->lanewrap__DOT__dut__DOT__c0__DOT__automata_stage0C0__DOT__automata_ltl1c0__DOT__ltl1c0_ste_3__DOT__internal_reg = VL_RAND_RESET_I(1);
    vlSelf->lanewrap__DOT__dut__DOT__c0__DOT__automata_stage0C0__DOT__automata_ltl1c0__DOT__ltl1c0_ste_4__DOT__internal_reg = VL_RAND_RESET_I(1);
    vlSelf->lanewrap__DOT__dut__DOT__c0__DOT__automata_stage0C0__DOT__automata_ltl1c0__DOT__ltl1c0_ste_7__DOT__internal_reg = VL_RAND_RESET_I(1);
    vlSelf->lanewrap__DOT__dut__DOT__c0__DOT__automata_stage0C0__DOT__automata_ltl1c0__DOT__ltl1c0_ste_8__DOT__internal_reg = VL_RAND_RESET_I(1);
    vlSelf->lanewrap__DOT__dut__DOT__c1__DOT__ltl1c1_w_out_2 = VL_RAND_RESET_I(1);
    vlSelf->lanewrap__DOT__dut__DOT__c1__DOT__ltl1c1_w_out_7 = VL_RAND_RESET_I(1);
    vlSelf->lanewrap__DOT__dut__DOT__c1__DOT__ltl1c1_w_out_9 = VL_RAND_RESET_I(1);
    vlSelf->lanewrap__DOT__dut__DOT__c1__DOT__ltl2c1_w_out_3 = VL_RAND_RESET_I(1);
    vlSelf->lanewrap__DOT__dut__DOT__c1__DOT__ltl2c1_w_out_5 = VL_RAND_RESET_I(1);
    vlSelf->lanewrap__DOT__dut__DOT__c1__DOT__ltl2c1_w_out_9 = VL_RAND_RESET_I(1);
    vlSelf->lanewrap__DOT__dut__DOT__c1__DOT__ltl0c1_w_out_2 = VL_RAND_RESET_I(1);
    vlSelf->lanewrap__DOT__dut__DOT__c1__DOT__ltl0c1_w_out_7 = VL_RAND_RESET_I(1);
    vlSelf->lanewrap__DOT__dut__DOT__c1__DOT__ltl0c1_w_out_9 = VL_RAND_RESET_I(1);
    vlSelf->lanewrap__DOT__dut__DOT__c1__DOT__automata_stage0c1__DOT__out_symbols = VL_RAND_RESET_I(8);
    vlSelf->lanewrap__DOT__dut__DOT__c1__DOT__automata_stage0c1__DOT__out_reset = VL_RAND_RESET_I(1);
    vlSelf->lanewrap__DOT__dut__DOT__c1__DOT__automata_stage0c1__DOT__automata_ltl1c1__DOT____Vcellinp__ltl1c1_ste_1__income_edges = VL_RAND_RESET_I(2);
    vlSelf->lanewrap__DOT__dut__DOT__c1__DOT__automata_stage0c1__DOT__automata_ltl1c1__DOT____Vcellinp__ltl1c1_ste_4__income_edges = VL_RAND_RESET_I(4);
    vlSelf->lanewrap__DOT__dut__DOT__c1__DOT__automata_stage0c1__DOT__automata_ltl1c1__DOT____Vcellinp__ltl1c1_ste_5__income_edges = VL_RAND_RESET_I(2);
    vlSelf->lanewrap__DOT__dut__DOT__c1__DOT__automata_stage0c1__DOT__automata_ltl1c1__DOT____Vcellinp__ltl1c1_ste_8__income_edges = VL_RAND_RESET_I(2);
    vlSelf->lanewrap__DOT__dut__DOT__c1__DOT__automata_stage0c1__DOT__automata_ltl1c1__DOT__lut_match_ltl1c1_1__DOT__match_internal = VL_RAND_RESET_I(1);
    vlSelf->lanewrap__DOT__dut__DOT__c1__DOT__automata_stage0c1__DOT__automata_ltl1c1__DOT__ltl1c1_ste_1__DOT__internal_reg = VL_RAND_RESET_I(1);
    vlSelf->lanewrap__DOT__dut__DOT__c1__DOT__automata_stage0c1__DOT__automata_ltl1c1__DOT__ltl1c1_ste_2__DOT__internal_reg = VL_RAND_RESET_I(1);
    vlSelf->lanewrap__DOT__dut__DOT__c1__DOT__automata_stage0c1__DOT__automata_ltl1c1__DOT__ltl1c1_ste_3__DOT__internal_reg = VL_RAND_RESET_I(1);
    vlSelf->lanewrap__DOT__dut__DOT__c1__DOT__automata_stage0c1__DOT__automata_ltl1c1__DOT__ltl1c1_ste_4__DOT__internal_reg = VL_RAND_RESET_I(1);
    vlSelf->lanewrap__DOT__dut__DOT__c1__DOT__automata_stage0c1__DOT__automata_ltl1c1__DOT__ltl1c1_ste_5__DOT__internal_reg = VL_RAND_RESET_I(1);
    vlSelf->lanewrap__DOT__dut__DOT__c1__DOT__automata_stage0c1__DOT__automata_ltl1c1__DOT__ltl1c1_ste_8__DOT__internal_reg = VL_RAND_RESET_I(1);
    vlSelf->lanewrap__DOT__dut__DOT__c1__DOT__automata_stage0c1__DOT__automata_ltl2c1__DOT____Vcellinp__ltl2c1_ste_1__income_edges = VL_RAND_RESET_I(2);
    vlSelf->lanewrap__DOT__dut__DOT__c1__DOT__automata_stage0c1__DOT__automata_ltl2c1__DOT____Vcellinp__ltl2c1_ste_4__income_edges = VL_RAND_RESET_I(2);
    vlSelf->lanewrap__DOT__dut__DOT__c1__DOT__automata_stage0c1__DOT__automata_ltl2c1__DOT____Vcellinp__ltl2c1_ste_7__income_edges = VL_RAND_RESET_I(4);
    vlSelf->lanewrap__DOT__dut__DOT__c1__DOT__automata_stage0c1__DOT__automata_ltl2c1__DOT____Vcellinp__ltl2c1_ste_8__income_edges = VL_RAND_RESET_I(2);
    vlSelf->lanewrap__DOT__dut__DOT__c1__DOT__automata_stage0c1__DOT__automata_ltl2c1__DOT__lut_match_ltl2c1_1__DOT__match_internal = VL_RAND_RESET_I(1);
    vlSelf->lanewrap__DOT__dut__DOT__c1__DOT__automata_stage0c1__DOT__automata_ltl2c1__DOT__ltl2c1_ste_1__DOT__internal_reg = VL_RAND_RESET_I(1);
    vlSelf->lanewrap__DOT__dut__DOT__c1__DOT__automata_stage0c1__DOT__automata_ltl2c1__DOT__ltl2c1_ste_2__DOT__internal_reg = VL_RAND_RESET_I(1);
    vlSelf->lanewrap__DOT__dut__DOT__c1__DOT__automata_stage0c1__DOT__automata_ltl2c1__DOT__ltl2c1_ste_3__DOT__internal_reg = VL_RAND_RESET_I(1);
    vlSelf->lanewrap__DOT__dut__DOT__c1__DOT__automata_stage0c1__DOT__automata_ltl2c1__DOT__ltl2c1_ste_4__DOT__internal_reg = VL_RAND_RESET_I(1);
    vlSelf->lanewrap__DOT__dut__DOT__c1__DOT__automata_stage0c1__DOT__automata_ltl2c1__DOT__ltl2c1_ste_7__DOT__internal_reg = VL_RAND_RESET_I(1);
    vlSelf->lanewrap__DOT__dut__DOT__c1__DOT__automata_stage0c1__DOT__automata_ltl2c1__DOT__ltl2c1_ste_8__DOT__internal_reg = VL_RAND_RESET_I(1);
    vlSelf->lanewrap__DOT__dut__DOT__c1__DOT__automata_stage0c1__DOT__automata_ltl0c1__DOT____Vcellinp__ltl0c1_ste_1__income_edges = VL_RAND_RESET_I(2);
    vlSelf->lanewrap__DOT__dut__DOT__c1__DOT__automata_stage0c1__DOT__automata_ltl0c1__DOT____Vcellinp__ltl0c1_ste_4__income_edges = VL_RAND_RESET_I(4);
    vlSelf->lanewrap__DOT__dut__DOT__c1__DOT__automata_stage0c1__DOT__automata_ltl0c1__DOT____Vcellinp__ltl0c1_ste_5__income_edges = VL_RAND_RESET_I(2);
    vlSelf->lanewrap__DOT__dut__DOT__c1__DOT__automata_stage0c1__DOT__automata_ltl0c1__DOT____Vcellinp__ltl0c1_ste_8__income_edges = VL_RAND_RESET_I(2);
    vlSelf->lanewrap__DOT__dut__DOT__c1__DOT__automata_stage0c1__DOT__automata_ltl0c1__DOT__ltl0c1_ste_1__DOT__internal_reg = VL_RAND_RESET_I(1);
    vlSelf->lanewrap__DOT__dut__DOT__c1__DOT__automata_stage0c1__DOT__automata_ltl0c1__DOT__lut_match_ltl0c1_2__DOT__match_internal = VL_RAND_RESET_I(1);
    vlSelf->lanewrap__DOT__dut__DOT__c1__DOT__automata_stage0c1__DOT__automata_ltl0c1__DOT__ltl0c1_ste_2__DOT__internal_reg = VL_RAND_RESET_I(1);
    vlSelf->lanewrap__DOT__dut__DOT__c1__DOT__automata_stage0c1__DOT__automata_ltl0c1__DOT__ltl0c1_ste_3__DOT__internal_reg = VL_RAND_RESET_I(1);
    vlSelf->lanewrap__DOT__dut__DOT__c1__DOT__automata_stage0c1__DOT__automata_ltl0c1__DOT__ltl0c1_ste_4__DOT__internal_reg = VL_RAND_RESET_I(1);
    vlSelf->lanewrap__DOT__dut__DOT__c1__DOT__automata_stage0c1__DOT__automata_ltl0c1__DOT__ltl0c1_ste_5__DOT__internal_reg = VL_RAND_RESET_I(1);
    vlSelf->lanewrap__DOT__dut__DOT__c1__DOT__automata_stage0c1__DOT__automata_ltl0c1__DOT__lut_match_ltl0c1_6__DOT__match_internal = VL_RAND_RESET_I(1);
    vlSelf->lanewrap__DOT__dut__DOT__c1__DOT__automata_stage0c1__DOT__automata_ltl0c1__DOT__ltl0c1_ste_8__DOT__internal_reg = VL_RAND_RESET_I(1);
    vlSelf->__VdfgTmp_h7a557b80__0 = 0;
    vlSelf->__VdfgTmp_h5ee6e828__0 = 0;
    vlSelf->__VdfgTmp_h6dd2d5bc__0 = 0;
    vlSelf->__VdfgTmp_h1f7eb2d3__0 = 0;
    vlSelf->__VdfgTmp_had61064c__0 = 0;
    vlSelf->__VdfgTmp_hf8f9c47f__0 = 0;
    vlSelf->__VdfgTmp_h175d29ab__0 = 0;
    vlSelf->__VdfgTmp_h21aa8855__0 = 0;
    vlSelf->__VdfgTmp_h1a33c7a9__0 = 0;
    vlSelf->__VdfgTmp_h477da5fc__0 = 0;
    vlSelf->__VdfgTmp_hbc9ec8b7__0 = 0;
    vlSelf->__VdfgTmp_h2a84069a__0 = 0;
    vlSelf->__Vtrigrprev__TOP__clk_i = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
