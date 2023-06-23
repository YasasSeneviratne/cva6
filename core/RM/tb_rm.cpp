#include <stdlib.h>
#include <cstdlib>
#include <iostream>
#include <verilated.h>
#include <verilated_vcd_c.h>
#include "rm_tb_top.h"
#include "rm_tb_top___024root.h"

#define MAX_SIM_TIME 500
vluint64_t sim_time = 0;

int main(int argc, char** argv, char** env) {
    rm_tb_top *dut = new rm_tb_top;

    Verilated::traceEverOn(true);
    VerilatedVcdC *m_trace = new VerilatedVcdC;
    dut->trace(m_trace, 99);
    m_trace->open("waveform.vcd");

    //Initializtion
    dut->pc_i = 0;
    dut->clk_i = 1;
    dut->rst_ni = 1;
    dut->signal = 0;
    dut->reset_lane_i = 0;
    dut->enque_ins = 0;
    dut->opcode_i =0;
    dut->eval();
    m_trace->dump(sim_time);
    sim_time++; 
    
    dut->clk_i = 0;
    dut->rst_ni = 0;
    dut->eval();
    m_trace->dump(sim_time);
    sim_time++;


    dut->rst_ni = 1;
    
    //Simulation
    while (sim_time < MAX_SIM_TIME) {
        dut->clk_i ^= 1;
	dut->pc_i += 1;
	dut->signal = unsigned(rand());
	dut->reset_lane_i = 0; 
	dut->enque_ins = unsigned(rand() % 2);
	dut->opcode_i = unsigned(rand() % 36);;
        dut->eval();
        m_trace->dump(sim_time);
        sim_time++;

	dut->clk_i ^= 1;
	dut->eval();  
	m_trace->dump(sim_time);
	sim_time++;   
    }

    m_trace->close();
    delete dut;
    exit(EXIT_SUCCESS);
}

