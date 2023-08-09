#include <stdlib.h>
#include <cstdlib>
#include <iostream>
#include <verilated.h>
#include <verilated_vcd_c.h>
#include "rm_tb_top.h"
#include "rm_tb_top___024root.h"
#include "../cpp_model/lane.h"


#define NUM_LANES 4
#define MAX_SIM_TIME 50000
vluint64_t sim_time = 0;

using namespace std;

void tick(rm_tb_top *dut, VerilatedVcdC *m_trace){
    dut->clk_i = 1;
    dut->eval();
    m_trace->dump(sim_time);
    sim_time++;
    dut->clk_i = 0;
    dut->eval();
    m_trace->dump(sim_time);
    sim_time++;
}


int main(int argc, char** argv, char** env) {
    rm_tb_top *dut = new rm_tb_top;

    Verilated::traceEverOn(true);
    VerilatedVcdC *m_trace = new VerilatedVcdC;
    dut->trace(m_trace, 99);
    m_trace->open("waveform.vcd");

    //cpp model variables
    uint32_t lane_vector[NUM_LANES];
    uint32_t monitor_o[NUM_LANES];
    uint32_t lane_reset;
    uint32_t sim_out[NUM_LANES];
    bool reset_ln[NUM_LANES];

    // C++ model 
    vector <Lane *> cpp_model;
    for(int i=0; i<NUM_LANES; i++) {
         Lane *ln = new Lane("/home/yasas/Research/RTLruntimemonitor/RuntimeAccel/scripts/test/");
         ln->reset_lane();
         cpp_model.push_back(ln);
    }

    Lane ln("/home/yasas/Research/RTLruntimemonitor/RuntimeAccel/scripts/test/");
    ln.reset_lane();


    //Initializtion of hardware model
    tick(dut,m_trace);
    dut->pc_i_tb 		= 0;
    dut->rst_ni_tb 		= 1;
    dut->signal_tb 		= 0;
    dut->reset_lane_i_tb 	= 0;
    dut->enque_ins_tb 		= 0;
    dut->opcode_i_tb 		= 0;
    
    tick(dut,m_trace);  
    dut->rst_ni_tb 		= 0;
    tick(dut,m_trace);  
    dut->rst_ni_tb 		= 1;
    tick(dut,m_trace);  
    tick(dut,m_trace);  
    


    for(int i=0; i<NUM_LANES; i++){
        sim_out[i] = 0;
    }
    //Simulation
    while (sim_time < MAX_SIM_TIME) {
	//Verilog model input randomization
	dut->pc_i_tb 		+= 1;
	dut->signal_tb 		= unsigned(rand());
	dut->reset_lane_i_tb 	= unsigned(rand());//0; 
	dut->enque_ins_tb 	= unsigned(rand() % 2); //1
	dut->opcode_i_tb 	= 3;//unsigned(rand() % 36); //3
	
	//verilog signal value extraction for cpp simulation
	//---------------------------------------------
	lane_vector[0] = dut->lane_vector_0;
	lane_vector[1] = dut->lane_vector_1;
	lane_vector[2] = dut->lane_vector_2;
	lane_vector[3] = dut->lane_vector_3;
     

	monitor_o[0] = dut->monitor_o_0;
	monitor_o[1] = dut->monitor_o_1;
	monitor_o[2] = dut->monitor_o_2;
	monitor_o[3] = dut->monitor_o_3;

	lane_reset = dut->lane_reset;
	//---------------------------------------------

        // cpp model simulation
        for(int i=0; i<NUM_LANES; i++){
            reset_ln[i] = false;
             
            sim_out[i] = cpp_model[i]->simulate(lane_vector[i]); 
	    if ((lane_reset>>i) & 1){
	        cpp_model[i]->reset_lane();
                reset_ln[i] = true;
	    }
            
	    if (sim_out[i] != monitor_o[i])
	    	cout<<reset_ln[i]<<" " <<(sim_out[i] != monitor_o[i]) <<" Lane: "<<i<<" input vector: "<<lane_vector[i] <<" model output: "<< sim_out[i] <<" sim output: "<< monitor_o[i] << endl; 	
        }
	//--------------------------------------------

	tick(dut,m_trace);
	
    }

    m_trace->close();
    delete dut;


    for(auto ln = cpp_model.begin(); ln != cpp_model.end(); ++ln) {
         delete *ln;
    }

    exit(EXIT_SUCCESS);
}

