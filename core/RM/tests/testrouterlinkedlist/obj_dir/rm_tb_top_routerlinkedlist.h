// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Primary model header
//
// This header should be included by all source files instantiating the design.
// The class here is then constructed to instantiate the design.
// See the Verilator manual for examples.

#ifndef VERILATED_RM_TB_TOP_ROUTERLINKEDLIST_H_
#define VERILATED_RM_TB_TOP_ROUTERLINKEDLIST_H_  // guard

#include "verilated.h"

class rm_tb_top_routerlinkedlist__Syms;
class rm_tb_top_routerlinkedlist___024root;
class VerilatedVcdC;
class rm_tb_top_routerlinkedlist_Top_ModuleC0;
class rm_tb_top_routerlinkedlist_Top_ModuleC1;


// This class is the main interface to the Verilated model
class rm_tb_top_routerlinkedlist VL_NOT_FINAL : public VerilatedModel {
  private:
    // Symbol table holding complete model state (owned by this class)
    rm_tb_top_routerlinkedlist__Syms* const vlSymsp;

  public:

    // PORTS
    // The application code writes and reads these signals to
    // propagate new values into/out from the Verilated model.
    VL_IN8(&clk_i,0,0);
    VL_IN8(&rst_ni_tb,0,0);
    VL_IN8(&signal_tb,7,0);
    VL_IN8(&reset_lane_i_tb,7,0);
    VL_IN8(&enque_ins_tb,0,0);
    VL_IN8(&opcode_i_tb,6,0);
    VL_OUTW(&lane_vector,111,0,4);
    VL_OUT8(&lane_reset,6,0);
    VL_OUT8(&itype,6,0);
    VL_OUT(&lane0,20,0);
    VL_OUT(&lane1,20,0);
    VL_OUT16(&lane_mask,13,0);
    VL_OUT(&parent_idx,20,0);
    VL_OUT8(&has_parent,6,0);
    VL_OUT(&child_idx,20,0);
    VL_OUT8(&has_child,6,0);
    VL_OUT8(&valid,6,0);
    VL_OUT8(&list_reset_mask,6,0);
    VL_OUT8(&monitor_ins,0,0);
    VL_OUT8(&next_idx,2,0);
    VL_OUTW(&monitor_o,69,0,3);
    VL_OUT(&num_events,31,0);
    VL_OUT(&num_lanes,31,0);
    VL_OUT(&num_rules,31,0);
    VL_OUT(&test_type,31,0);
    VL_IN64(&pc_i_tb,63,0);

    // CELLS
    // Public to allow access to /* verilator public */ items.
    // Otherwise the application code can consider these internals.
    rm_tb_top_routerlinkedlist_Top_ModuleC0* const __PVT__rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__0__KET____DOT__lane__DOT__I0c0;
    rm_tb_top_routerlinkedlist_Top_ModuleC1* const __PVT__rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__0__KET____DOT__lane__DOT__I0c1;
    rm_tb_top_routerlinkedlist_Top_ModuleC0* const __PVT__rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__0__KET____DOT__lane__DOT__I1c0;
    rm_tb_top_routerlinkedlist_Top_ModuleC1* const __PVT__rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__0__KET____DOT__lane__DOT__I1c1;
    rm_tb_top_routerlinkedlist_Top_ModuleC0* const __PVT__rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__1__KET____DOT__lane__DOT__I0c0;
    rm_tb_top_routerlinkedlist_Top_ModuleC1* const __PVT__rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__1__KET____DOT__lane__DOT__I0c1;
    rm_tb_top_routerlinkedlist_Top_ModuleC0* const __PVT__rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__1__KET____DOT__lane__DOT__I1c0;
    rm_tb_top_routerlinkedlist_Top_ModuleC1* const __PVT__rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__1__KET____DOT__lane__DOT__I1c1;
    rm_tb_top_routerlinkedlist_Top_ModuleC0* const __PVT__rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__2__KET____DOT__lane__DOT__I0c0;
    rm_tb_top_routerlinkedlist_Top_ModuleC1* const __PVT__rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__2__KET____DOT__lane__DOT__I0c1;
    rm_tb_top_routerlinkedlist_Top_ModuleC0* const __PVT__rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__2__KET____DOT__lane__DOT__I1c0;
    rm_tb_top_routerlinkedlist_Top_ModuleC1* const __PVT__rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__2__KET____DOT__lane__DOT__I1c1;
    rm_tb_top_routerlinkedlist_Top_ModuleC0* const __PVT__rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__3__KET____DOT__lane__DOT__I0c0;
    rm_tb_top_routerlinkedlist_Top_ModuleC1* const __PVT__rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__3__KET____DOT__lane__DOT__I0c1;
    rm_tb_top_routerlinkedlist_Top_ModuleC0* const __PVT__rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__3__KET____DOT__lane__DOT__I1c0;
    rm_tb_top_routerlinkedlist_Top_ModuleC1* const __PVT__rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__3__KET____DOT__lane__DOT__I1c1;
    rm_tb_top_routerlinkedlist_Top_ModuleC0* const __PVT__rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__4__KET____DOT__lane__DOT__I0c0;
    rm_tb_top_routerlinkedlist_Top_ModuleC1* const __PVT__rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__4__KET____DOT__lane__DOT__I0c1;
    rm_tb_top_routerlinkedlist_Top_ModuleC0* const __PVT__rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__4__KET____DOT__lane__DOT__I1c0;
    rm_tb_top_routerlinkedlist_Top_ModuleC1* const __PVT__rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__4__KET____DOT__lane__DOT__I1c1;
    rm_tb_top_routerlinkedlist_Top_ModuleC0* const __PVT__rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__5__KET____DOT__lane__DOT__I0c0;
    rm_tb_top_routerlinkedlist_Top_ModuleC1* const __PVT__rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__5__KET____DOT__lane__DOT__I0c1;
    rm_tb_top_routerlinkedlist_Top_ModuleC0* const __PVT__rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__5__KET____DOT__lane__DOT__I1c0;
    rm_tb_top_routerlinkedlist_Top_ModuleC1* const __PVT__rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__5__KET____DOT__lane__DOT__I1c1;
    rm_tb_top_routerlinkedlist_Top_ModuleC0* const __PVT__rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__6__KET____DOT__lane__DOT__I0c0;
    rm_tb_top_routerlinkedlist_Top_ModuleC1* const __PVT__rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__6__KET____DOT__lane__DOT__I0c1;
    rm_tb_top_routerlinkedlist_Top_ModuleC0* const __PVT__rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__6__KET____DOT__lane__DOT__I1c0;
    rm_tb_top_routerlinkedlist_Top_ModuleC1* const __PVT__rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__6__KET____DOT__lane__DOT__I1c1;

    // Root instance pointer to allow access to model internals,
    // including inlined /* verilator public_flat_* */ items.
    rm_tb_top_routerlinkedlist___024root* const rootp;

    // CONSTRUCTORS
    /// Construct the model; called by application code
    /// If contextp is null, then the model will use the default global context
    /// If name is "", then makes a wrapper with a
    /// single model invisible with respect to DPI scope names.
    explicit rm_tb_top_routerlinkedlist(VerilatedContext* contextp, const char* name = "TOP");
    explicit rm_tb_top_routerlinkedlist(const char* name = "TOP");
    /// Destroy the model; called (often implicitly) by application code
    virtual ~rm_tb_top_routerlinkedlist();
  private:
    VL_UNCOPYABLE(rm_tb_top_routerlinkedlist);  ///< Copying not allowed

  public:
    // API METHODS
    /// Evaluate the model.  Application must call when inputs change.
    void eval() { eval_step(); }
    /// Evaluate when calling multiple units/models per time step.
    void eval_step();
    /// Evaluate at end of a timestep for tracing, when using eval_step().
    /// Application must call after all eval() and before time changes.
    void eval_end_step() {}
    /// Simulation complete, run final blocks.  Application must call on completion.
    void final();
    /// Are there scheduled events to handle?
    bool eventsPending();
    /// Returns time at next time slot. Aborts if !eventsPending()
    uint64_t nextTimeSlot();
    /// Trace signals in the model; called by application code
    void trace(VerilatedVcdC* tfp, int levels, int options = 0);
    /// Retrieve name of this model instance (as passed to constructor).
    const char* name() const;

    // Abstract methods from VerilatedModel
    const char* hierName() const override final;
    const char* modelName() const override final;
    unsigned threads() const override final;
    std::unique_ptr<VerilatedTraceConfig> traceConfig() const override final;
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

#endif  // guard
