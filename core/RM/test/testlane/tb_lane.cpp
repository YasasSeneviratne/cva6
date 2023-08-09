#include <stdlib.h>
#include <cstdlib>
#include <iostream>
#include <verilated.h>
#include <verilated_vcd_c.h>
#include "rm_tb_lane.h"
#include "rm_tb_lane___024root.h"
//#include "../cpp_model/lane.h"

#define MAX_SIM_TIME 500
vluint64_t sim_time = 0;

using namespace std;

void tick(rm_tb_lane *dut,VerilatedVcdC *m_trace){            
    dut->clk_i = 1;     
    dut->eval();
    m_trace->dump(sim_time);
    sim_time++;
    dut->clk_i = 0;
    dut->eval();
    m_trace->dump(sim_time);
    sim_time++;
}

// lane_vector order FEDCBA
int main(int argc, char** argv, char** env) {
    rm_tb_lane *dut = new rm_tb_lane;

    Verilated::traceEverOn(true);
    VerilatedVcdC *m_trace = new VerilatedVcdC;
    dut->trace(m_trace, 99);
    m_trace->open("waveform.vcd");

    //Initializtion
    tick(dut,m_trace); 
    dut->lane_vector_i = 0;
    dut->lane_reset_i = 1;
    tick(dut,m_trace); 
    dut->lane_reset_i = 0;
//    tick(dut,m_trace); 
//    tick(dut,m_trace); 

    //dut->lane_vector_i = 0b010000;
//    tick(dut,m_trace); 
    dut->lane_vector_i = 0b010000;
    tick(dut,m_trace); 
    dut->lane_vector_i = 0b100000;
    tick(dut,m_trace); 
    dut->lane_vector_i = 0b000000;
    tick(dut,m_trace); 
//    dut->lane_vector_i = 0b001000;
    tick(dut,m_trace); 
//    dut->lane_vector_i = 0b000000;
    tick(dut,m_trace); 
    tick(dut,m_trace); 
    tick(dut,m_trace); 
    tick(dut,m_trace); 
    

    m_trace->close();
    delete dut;
    exit(EXIT_SUCCESS);
}

