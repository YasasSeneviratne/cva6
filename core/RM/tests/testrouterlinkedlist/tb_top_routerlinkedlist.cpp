#include <stdlib.h>
#include <cstdlib>
#include <iostream>
#include <verilated.h>
#include <verilated_vcd_c.h>
#include "rm_tb_top_routerlinkedlist.h"
#include "rm_tb_top_routerlinkedlist___024root.h"
#include "../cpp_model/lane.h"
#include "./cpp_router_model.h"


#define MAX_SIM_TIME 50000
vluint64_t sim_time = 0;

using namespace std;

void tick(rm_tb_top_routerlinkedlist *dut, VerilatedVcdC *m_trace){
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
    rm_tb_top_routerlinkedlist *dut = new rm_tb_top_routerlinkedlist;

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

    // C++ model
    // two separate models for two instructions 
    // Rather than having a functional model for two instructions 
    // we can use two separate models
    
    // ROUTER MODEL
    RouterLinkedList cpp_router(NUM_LANES);

    uint32_t itype = 0;
    uint32_t lane0 = 0;
    uint32_t lane1 = 0;
    uint32_t lane_mask = 0;
    uint32_t parent_idx = 0;
    uint32_t has_parent = 0;
    uint32_t child_idx = 0;
    uint32_t has_child = 0;
    uint32_t valid = 0;

    uint32_t monitor_ins = 0;
    uint32_t reset_mask = 0; 
    uint32_t next_idx = 0; 

    // RUNTIME MONITOR MODEL
    // Runtime monitor masks for signal extraction
    uint32_t lane_vec_mask = (1<<NUM_EVENTS) -1;
    uint32_t monitor_o_mask = (1<<NUM_RULES) -1;
     
    //Runtime monitor cpp model variable initialization
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


    // Runtime monitor model instentiation
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
        if(sim_time < 100)
        //if(!(sim_time%(rand()%(19-4+1) +4 )))
	dut->reset_lane_i_tb 	= unsigned(rand());//0; 
        else
	dut->reset_lane_i_tb 	= 0;//unsigned(rand());//0; 
	dut->enque_ins_tb 	= unsigned(rand() % 2); //1
	dut->opcode_i_tb 	= 3;//unsigned(rand() % 36); //3
	
	//verilog signal value extraction for cpp simulation
	//---------------------------------------------

        // Read  router outputs        
        itype 		= dut->itype;
        lane0 		= dut->lane0;
        lane1 		= dut->lane1;
        lane_mask 	= dut->lane_mask;
        parent_idx 	= dut->parent_idx;
        has_parent 	= dut->has_parent;
        child_idx 	= dut->child_idx;
        has_child 	= dut->has_child;
        valid 		= dut->valid;

	monitor_ins 	= dut->monitor_ins;
        reset_mask	= dut->list_reset_mask;
        next_idx	= dut->next_idx;

        if(monitor_ins){
            cpp_router.add_instruction(next_idx);
        }
   
        cpp_router.reset_instructions(reset_mask);
        cpp_router.print_current_list();
              

        bool diff= false;
        for(int i=0; i<NUM_LANES; i++){
            //if((valid>>i)&1){
            //                    
            //    cout<<i<<" has parent:"<<((has_parent>>i) & 1)<<" parent:"<<((parent_idx >> 3*i) & 0b111)      
            //           <<" has child:"<<((has_child>>i) & 1)<<" child:"<<((child_idx >> 3*i) & 0b111)<<endl;      
            //        
            //}
            //else
            //    continue;
            if(cpp_router.list[i]->has_parent != ((has_parent>>i) & 1)){
                cout<<"diff hasparent"<<endl;
                diff = true;
            }
            if(cpp_router.list[i]->parent != ((parent_idx >> 3*i) & 0b111)){
                cout<<"diff parent"<<endl;
                diff = true;
            }
            if(cpp_router.list[i]->has_child != ((has_child>>i) & 1)){
                cout<<"diff haschild"<<endl;
                diff = true;
            }
            if(cpp_router.list[i]->child != ((child_idx >> 3*i) & 0b111)){
                cout<<"diff child"<<endl;
                diff = true;
            }

        }
        //if(diff){
            
            for(int i=0; i<NUM_LANES; i++){
               
                cout<<i<<" valid:"<<((valid>>i)&1)<<" has parent:"<<((has_parent>>i) & 1)<<" parent:"<<((parent_idx >> 3*i) & 0b111)
                       <<" has child:"<<((has_child>>i) & 1)<<" child:"<<((child_idx >> 3*i) & 0b111)<<endl;
            }  
        if(diff){
            cout<<endl;
            for(int i=0; i<NUM_LANES; i++){
               
                cout<<i<<" valid:"<<cpp_router.list[i]->valid<<" has parent:"<<cpp_router.list[i]->has_parent<<" parent:"<<cpp_router.list[i]->parent
                       <<" has child:"<<cpp_router.list[i]->has_child<<" child:"<<cpp_router.list[i]->child<<endl;
            } 
	    tick(dut,m_trace);
      
            break;
        }
        //Read runtime monitor outputs
        monitor_o[0] = (dut->monitor_o[0]  & monitor_o_mask);
        monitor_o[1] = (dut->monitor_o[0] >> NUM_RULES) & monitor_o_mask;
        monitor_o[2] = (dut->monitor_o[0] >> (2*NUM_RULES) & monitor_o_mask);
        monitor_o[3] = ((dut->monitor_o[1]  & 0b11111111) << 2) | (dut->monitor_o[0] >> 30);
        monitor_o[4] = (dut->monitor_o[1] >> (8) & monitor_o_mask);
        monitor_o[5] = (dut->monitor_o[1] >> (NUM_RULES+8) & monitor_o_mask);
        monitor_o[6] = ((dut->monitor_o[2] & 0b111111) << 4) | (dut->monitor_o[1] >> (2*NUM_RULES+8));

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

