#include <stdlib.h>
#include <cstdlib>
#include <iostream>
#include <verilated.h>
#include <verilated_vcd_c.h>
#include "rm_tb_ltl.h"
#include "rm_tb_ltl___024root.h"
//#include "../cpp_model/lane.h"

#define MAX_SIM_TIME 500
vluint64_t sim_time = 0;

using namespace std;


void tick(rm_tb_ltl *dut,VerilatedVcdC *m_trace){
	//dut->eval();
	//m_trace->dump(sim_time);
	//sim_time++;
	dut->clk = 1;
	dut->eval();
	m_trace->dump(sim_time); 
	sim_time++;
	dut->clk = 0;
	dut->eval();
	m_trace->dump(sim_time);
	sim_time++;
}

int main(int argc, char** argv, char** env) {
    rm_tb_ltl *dut = new rm_tb_ltl;

    Verilated::traceEverOn(true);
    VerilatedVcdC *m_trace = new VerilatedVcdC;
    dut->trace(m_trace, 99);
    m_trace->open("waveform.vcd");

    //Initializtion
    tick(dut,m_trace);   
 
    dut->run = 1;
    dut->symbols = 0;
    dut->reset = 0;
    tick(dut,m_trace); 

    dut->reset = 1;
    tick(dut,m_trace);   

    dut->reset = 0;
    dut->symbols = 0b0100;
    tick(dut,m_trace);  
    dut->symbols = 0b0010;            
    tick(dut,m_trace);       
    dut->symbols = 0b0000;  
    tick(dut,m_trace); 
    dut->symbols = 0b0000;        
    tick(dut,m_trace);  
    tick(dut,m_trace);

//    tick(dut,m_trace);  
//    tick(dut,m_trace);  
    
//    //Correct ordering
//    dut->symbols = 0b0100;
//    tick(dut,m_trace);  
//    dut->symbols = 0b000;            
//    tick(dut,m_trace);       
//    dut->symbols = 0b0010;  
//    tick(dut,m_trace); 
//    dut->symbols = 0b0000;        
//    tick(dut,m_trace);  
//    tick(dut,m_trace);
//    dut->reset = 1;  
//    tick(dut,m_trace);  
//    dut->reset = 0;   
//    tick(dut,m_trace); 
//
//    //Violation 
//    dut->symbols = 0b0100;
//    tick(dut,m_trace);  
//    tick(dut,m_trace);       
//    dut->symbols = 0b0110;  
//    tick(dut,m_trace); 
//    dut->symbols = 0b0000;        
//    tick(dut,m_trace);         
//    dut->symbols = 0b0000;        
//    tick(dut,m_trace);         
//    tick(dut,m_trace);         
//    tick(dut,m_trace);         
//    tick(dut,m_trace);         

    m_trace->close();
    delete dut;
    exit(EXIT_SUCCESS);
}

