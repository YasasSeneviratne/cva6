// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "rm_tb_ltl.h"
#include "rm_tb_ltl__Syms.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

rm_tb_ltl::rm_tb_ltl(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new rm_tb_ltl__Syms(contextp(), _vcname__, this)}
    , clk{vlSymsp->TOP.clk}
    , run{vlSymsp->TOP.run}
    , reset{vlSymsp->TOP.reset}
    , symbols{vlSymsp->TOP.symbols}
    , ltl0c0_w_out_2{vlSymsp->TOP.ltl0c0_w_out_2}
    , ltl0c0_w_out_4{vlSymsp->TOP.ltl0c0_w_out_4}
    , ltl0c0_w_out_7{vlSymsp->TOP.ltl0c0_w_out_7}
    , ltl0c0_w_out_9{vlSymsp->TOP.ltl0c0_w_out_9}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

rm_tb_ltl::rm_tb_ltl(const char* _vcname__)
    : rm_tb_ltl(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

rm_tb_ltl::~rm_tb_ltl() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void rm_tb_ltl___024root___eval_debug_assertions(rm_tb_ltl___024root* vlSelf);
#endif  // VL_DEBUG
void rm_tb_ltl___024root___eval_static(rm_tb_ltl___024root* vlSelf);
void rm_tb_ltl___024root___eval_initial(rm_tb_ltl___024root* vlSelf);
void rm_tb_ltl___024root___eval_settle(rm_tb_ltl___024root* vlSelf);
void rm_tb_ltl___024root___eval(rm_tb_ltl___024root* vlSelf);

void rm_tb_ltl::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate rm_tb_ltl::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    rm_tb_ltl___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_activity = true;
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        rm_tb_ltl___024root___eval_static(&(vlSymsp->TOP));
        rm_tb_ltl___024root___eval_initial(&(vlSymsp->TOP));
        rm_tb_ltl___024root___eval_settle(&(vlSymsp->TOP));
    }
    // MTask 0 start
    VL_DEBUG_IF(VL_DBG_MSGF("MTask0 starting\n"););
    Verilated::mtaskId(0);
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    rm_tb_ltl___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool rm_tb_ltl::eventsPending() { return false; }

uint64_t rm_tb_ltl::nextTimeSlot() {
    VL_FATAL_MT(__FILE__, __LINE__, "", "%Error: No delays in the design");
    return 0;
}

//============================================================
// Utilities

const char* rm_tb_ltl::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void rm_tb_ltl___024root___eval_final(rm_tb_ltl___024root* vlSelf);

VL_ATTR_COLD void rm_tb_ltl::final() {
    rm_tb_ltl___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* rm_tb_ltl::hierName() const { return vlSymsp->name(); }
const char* rm_tb_ltl::modelName() const { return "rm_tb_ltl"; }
unsigned rm_tb_ltl::threads() const { return 1; }
std::unique_ptr<VerilatedTraceConfig> rm_tb_ltl::traceConfig() const {
    return std::unique_ptr<VerilatedTraceConfig>{new VerilatedTraceConfig{false, false, false}};
};

//============================================================
// Trace configuration

void rm_tb_ltl___024root__trace_init_top(rm_tb_ltl___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    rm_tb_ltl___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<rm_tb_ltl___024root*>(voidSelf);
    rm_tb_ltl__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->scopeEscape(' ');
    tracep->pushNamePrefix(std::string{vlSymsp->name()} + ' ');
    rm_tb_ltl___024root__trace_init_top(vlSelf, tracep);
    tracep->popNamePrefix();
    tracep->scopeEscape('.');
}

VL_ATTR_COLD void rm_tb_ltl___024root__trace_register(rm_tb_ltl___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void rm_tb_ltl::trace(VerilatedVcdC* tfp, int levels, int options) {
    if (tfp->isOpen()) {
        vl_fatal(__FILE__, __LINE__, __FILE__,"'rm_tb_ltl::trace()' shall not be called after 'VerilatedVcdC::open()'.");
    }
    if (false && levels && options) {}  // Prevent unused
    tfp->spTrace()->addModel(this);
    tfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    rm_tb_ltl___024root__trace_register(&(vlSymsp->TOP), tfp->spTrace());
}
