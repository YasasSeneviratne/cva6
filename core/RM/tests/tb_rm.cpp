#include <stdlib.h>
#include <cstdlib>
#include <iostream>
#include <verilated.h>
#include <verilated_vcd_c.h>
#include "rm_tb_top.h"
#include "rm_tb_top___024root.h"
#include "cpp_model/lane.h"


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
    

    //reading verilog desing parameters
    uint32_t NUM_LANES = dut->num_lanes;
    uint32_t NUM_RULES = dut->num_rules;
    uint32_t NUM_EVENTS = dut->num_events;
    uint32_t TEST_TYPE = dut->test_type;

    //masks for signal extraction
    uint32_t lane_vec_mask = (1<<NUM_EVENTS) -1;
    uint32_t monitor_o_mask = (1<<NUM_RULES) -1;
     
    //cpp model variable initialization
    uint32_t lane_reset;
    vector <uint32_t> lane_vector_I0;
    vector <uint32_t> lane_vector_I1;
    vector <uint32_t> monitor_o;
    vector <uint32_t> sim_out_I0;
    vector <uint32_t> sim_out_I1;
    vector <bool> reset_ln;

    for(int i=0; i<NUM_LANES; i++) {
         lane_vector_I0.push_back(0);
         lane_vector_I1.push_back(0);
         monitor_o.push_back(0);
         sim_out_I0.push_back(0);
         sim_out_I1.push_back(0);
         reset_ln.push_back(0);
    }

   

    // C++ model
    // two separate models for two instructions 
    // Rather than having a functional model for two instructions 
    // we can use two separate models
    vector <Lane *> cpp_model_I0;
    vector <Lane *> cpp_model_I1;
    for(int i=0; i<NUM_LANES; i++) {
         Lane *ln_I0 = new Lane("../monitor/rulespec/");
         ln_I0->reset_lane();
         cpp_model_I0.push_back(ln_I0);
         
         Lane *ln_I1 = new Lane("../monitor/rulespec/");
         ln_I1->reset_lane();
         cpp_model_I1.push_back(ln_I1);
    }


    for(int i=0; i<NUM_LANES; i++){
        sim_out_I0[i] = 0;
        sim_out_I1[i] = 0;
    }
    //Simulation
    while (sim_time < MAX_SIM_TIME) {
	//Verilog model input randomization
	dut->pc_i_tb 		+= 1;
	dut->signal_tb 		= unsigned(rand());
	dut->reset_lane_i_tb 	= unsigned(rand());//0; 
	dut->enque_ins_tb 	= unsigned(rand() % 2); //1
	dut->opcode_i_tb 	= unsigned(rand() % 36); //3
	
	//verilog signal value extraction for cpp simulation
	//---------------------------------------------
        //for(int i=0; i<NUM_LANES; i++) {
        //    monitor_o[i] = (dut->monitor_o >> (i*NUM_RULES) & monitor_o_mask);
        //}
	
        monitor_o[0] = (dut->monitor_o[0]  & monitor_o_mask);
        monitor_o[1] = (dut->monitor_o[0] >> NUM_RULES) & monitor_o_mask;
        monitor_o[2] = (dut->monitor_o[0] >> (2*NUM_RULES) & monitor_o_mask);
        monitor_o[3] = ((dut->monitor_o[1]  & 0b11111111) << 2) | (dut->monitor_o[0] >> 30);
        monitor_o[4] = (dut->monitor_o[1] >> (8) & monitor_o_mask);
        monitor_o[5] = (dut->monitor_o[1] >> (NUM_RULES+8) & monitor_o_mask);
        monitor_o[6] = ((dut->monitor_o[2] & 0b111111) << 4) | (dut->monitor_o[1] >> (2*NUM_RULES+8));

	if (TEST_TYPE){
	lane_vector_I0[0] = dut->lane_vector[0] & lane_vec_mask;
	lane_vector_I0[1] = ((dut->lane_vector[0] >> (2*NUM_EVENTS)) & lane_vec_mask);
	lane_vector_I0[2] = dut->lane_vector[1] & lane_vec_mask;
	lane_vector_I0[3] = ((dut->lane_vector[1] >> (2*NUM_EVENTS)) & lane_vec_mask);
	lane_vector_I0[4] = dut->lane_vector[2] & lane_vec_mask;
	lane_vector_I0[5] = ((dut->lane_vector[2] >> (2*NUM_EVENTS)) & lane_vec_mask);
	lane_vector_I0[6] = dut->lane_vector[3] & lane_vec_mask;
     

	lane_vector_I1[0] = (dut->lane_vector[0] >> NUM_EVENTS) & lane_vec_mask;
	lane_vector_I1[1] = ((dut->lane_vector[0] >> (3*NUM_EVENTS)) & lane_vec_mask);
	lane_vector_I1[2] = (dut->lane_vector[1] >> NUM_EVENTS) & lane_vec_mask;
	lane_vector_I1[3] = ((dut->lane_vector[1] >> (3*NUM_EVENTS)) & lane_vec_mask);
	lane_vector_I1[4] = (dut->lane_vector[2] >> NUM_EVENTS) & lane_vec_mask;
	lane_vector_I1[5] = ((dut->lane_vector[2] >> (3*NUM_EVENTS)) & lane_vec_mask);
	lane_vector_I1[6] = (dut->lane_vector[3] >> NUM_EVENTS) & lane_vec_mask;
	}
	else {
	
        lane_vector_I0[0] = dut->lane_vector[0] & lane_vec_mask;
	lane_vector_I0[1] = ((dut->lane_vector[0] >> (2*NUM_EVENTS)) & lane_vec_mask);
	lane_vector_I0[2] = ((dut->lane_vector[0] >> (4*NUM_EVENTS)) & lane_vec_mask);
	lane_vector_I0[3] = (dut->lane_vector[1] >> 4) & lane_vec_mask;
        lane_vector_I0[4] = ((dut->lane_vector[1] >> (2*NUM_EVENTS+4)) & lane_vec_mask);
	lane_vector_I0[5] = (((dut->lane_vector[1] >> (4*NUM_EVENTS+4)) & 0b1111 ) | ((dut->lane_vector[2] & 0b11) << 4) );
        lane_vector_I0[6] = ((dut->lane_vector[2] >> (NUM_EVENTS+2)) & lane_vec_mask);
     

	lane_vector_I1[0] = (dut->lane_vector[0] >> NUM_EVENTS) & lane_vec_mask;
	lane_vector_I1[1] = ((dut->lane_vector[0] >> (3*NUM_EVENTS)) & lane_vec_mask);
	lane_vector_I1[2] = ((dut->lane_vector[1]  & 0b1111) << 2) | ((dut->lane_vector[0] >> (5*NUM_EVENTS)) & 0b11);
	lane_vector_I1[3] = (dut->lane_vector[1] >> (NUM_EVENTS+4)) & lane_vec_mask;
        lane_vector_I1[4] = ((dut->lane_vector[1] >> (3*NUM_EVENTS+4)) & lane_vec_mask);
	lane_vector_I1[5] = (dut->lane_vector[2] >> 2) & lane_vec_mask;
        lane_vector_I1[6] = ((dut->lane_vector[2] >> (2*NUM_EVENTS+2)) & lane_vec_mask);
	}

	lane_reset = dut->lane_reset;
	//---------------------------------------------

        // cpp model simulation
        for(int i=0; i<NUM_LANES; i++){
            reset_ln[i] = false;
             
            sim_out_I0[i] = cpp_model_I0[i]->simulate(lane_vector_I0[i]); 
            sim_out_I1[i] = cpp_model_I1[i]->simulate(lane_vector_I1[i]); 
	    if ((lane_reset>>i) & 1){
	        cpp_model_I0[i]->reset_lane();
	        cpp_model_I1[i]->reset_lane();
                reset_ln[i] = true;
	    }
            
            uint32_t monitor_o_I0 = monitor_o[i] & 0b11111;
	    if (sim_out_I0[i] != monitor_o_I0)
	    	cout<<reset_ln[i]<<" " <<(sim_out_I0[i] != monitor_o[i]) <<" I0 monitor Lane: "<<i<<" input vector: "<<lane_vector_I0[i] 
                   <<" model output: "<< sim_out_I0[i] <<" sim output: "<< monitor_o_I0 << endl; 	
	    
            uint32_t monitor_o_I1 = monitor_o[i] >> 5;
            if (sim_out_I1[i] != monitor_o_I1)
	    	cout<<reset_ln[i]<<" " <<(sim_out_I0[i] != monitor_o[i]) <<" I1 monitor Lane: "<<i<<" input vector: "<<lane_vector_I1[i] 
                  <<" model output: "<< sim_out_I1[i] <<" sim output: "<< monitor_o_I1 << endl; 	
        }
	//--------------------------------------------

	tick(dut,m_trace);
	
    }

    m_trace->close();
    delete dut;


    for(auto ln = cpp_model_I0.begin(); ln != cpp_model_I0.end(); ++ln) {
         delete *ln;
    }
    
    for(auto ln = cpp_model_I1.begin(); ln != cpp_model_I1.end(); ++ln) {
         delete *ln;
    }

    exit(EXIT_SUCCESS);
}

