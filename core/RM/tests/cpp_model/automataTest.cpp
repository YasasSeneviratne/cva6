#include "automata.h"
#include <iostream>
#include <fstream>
#include <utility>
#include <sstream>

using namespace std;

struct sim_automata{
    Automata *a;
    bool result;
    string rule;
};

uint64_t constexpr mix(char m, uint64_t s){
  return ((s<<7) + ~(s>>3)) + ~m;
}
 
uint64_t constexpr hash1(const char * m){
  return (*m) ? mix(*m,hash1(m+1)) : 0;
}

int idx_lookup(string a){
    switch(hash1(a.c_str())){
        case hash1("A"): return 5;
        case hash1("B"): return 4;
        case hash1("C"): return 3;
        case hash1("D"): return 2;
        case hash1("E"): return 1;
        case hash1("F"): return 0;
        default: 
                  cout<<"Unknown input symbol!!"<<endl;
                  exit(1);
    }
}

uint32_t reorder_input(uint32_t input,vector <int> ordering){
    int i=0;
    uint32_t output = 0;
    for(auto idx=ordering.rbegin(); idx != ordering.rend(); ++idx){
        //cout<<input<<" "<<*idx<<endl;
        output = (((input>>*idx) & 1) << i) | output ;
        i++;
    }
    return output;
}

bool check_automata_status(Automata *a){
    if(a->getReportVector().size()>0)
	return true;
    else
        return false;
}


void reset_lane(vector<vector<sim_automata>> *lane) {
    for(auto cluster: *lane){
        for(auto sim: cluster){ 
            sim.a->reset();
            //1sim.a->setDumpState(true, true); 
            sim.a->setReport(true); 
            sim.a->initializeSimulation();  
            sim.result = false;
        }
    }
}

uint32_t simulate_lane(vector <uint32_t> *input, vector <vector<sim_automata>> *lane){
    uint32_t op = 0;
    int i=0,j=0;
    
    for(auto cluster: *lane){
        for(auto sim: cluster){ 
            //cout<<"sim input "+to_string((*input)[i])<<endl;
            sim.a->simulate((*input)[i]);
            if(check_automata_status(sim.a)){
                sim.result = true;
                cout<<sim.rule+" failed!"<<endl;
                op = op | (1<<j);
            }
            j++;
        }
        i++;
    }    
    delete input;
    return op;
} 

vector <uint32_t> * set_input(uint32_t input, vector <vector<int>> *cluster_sig_order){
    vector <uint32_t> *out = new vector <uint32_t>;
    for(auto elm: *cluster_sig_order){
        //cluster_input.push_back(reorder_input( randinput, elm));
        out->push_back(reorder_input( input, elm));
        //cout<<"out "+to_string(reorder_input( randinput,elm))<<endl;
    }
    return out;
}

int main(int argc, char * argv[]) {

//    string directory_path = "/home/yasas/Research/RTLruntimemonitor/RuntimeAccel/scripts/test/cluster0/anml/";

    string input_dir = "/home/yasas/Research/RTLruntimemonitor/RuntimeAccel/scripts/test/";
    ifstream input_conf;
    input_conf.open(input_dir +"SWsimspec",ios::in);

    if(!input_conf){
        cout<<"ERROR: Input configuration file cannot be found!!"<<endl;
        exit(1);
    }

    //Read generated cluster configuration from simulation configuration file
    vector <pair<string,int>> cluster_list;
    pair<string,int> tmp;
    while(input_conf>>skipws>>tmp.first>>skipws>>tmp.second){
        cluster_list.push_back(tmp);
        //cout<<tmp.first<<" "<<tmp.second<<endl;
    }

    //Read input signal ordering for each cluster and initialize automaton
    //Note: all rules within a cluster has the same input ordering
    vector <vector<int>> cluster_sig_order;
    vector <vector<sim_automata>> automata_clusters;
    for(auto i=cluster_list.begin(); i !=cluster_list.end(); ++i){
        string rule = "ltl0c"+i->first;
    	string mona_op = input_dir+"cluster"+i->first+"/"+rule+".out";
        ifstream mona_op_file(mona_op);
	if(!mona_op_file){
            cout<<"Cant read file "<<mona_op<<endl;
            exit(1);
        }
	
        string vars;
        while(vars.find("DFA for formula with free variables:"))
	    getline(mona_op_file, vars);
        vars.erase(0,37);
        //cout<<vars<<endl;            
 
        istringstream iss(vars);
        vector <int> order;
        string name;
        while(iss>>skipws>>name){
            order.push_back(idx_lookup(name));
        }
        cluster_sig_order.push_back(order);
       
        vector <sim_automata>  cluster;
        for(int j=0; j < i->second; j++){                      
            //cout<<input_dir<<"cluster"+i->first+"/ltl"+to_string(j)+"c"+i->first<<endl;
            Automata *a = new Automata(input_dir+"cluster"+i->first+"/anml/ltl"+to_string(j)+"c"+i->first+".anml");
            sim_automata sim;
            sim.a = a;
            sim.result = false;
            sim.rule = "ltl"+to_string(j)+"c"+i->first;
            cluster.push_back(sim);
        }
        automata_clusters.push_back(cluster);
    }
//    for(auto elm: cluster_sig_order){
//         for(auto elm1: elm)
//              cout<< elm1<<" "<<endl;
//         cout<<endl;
//    }

    //input mapping
    uint32_t randinput = rand();
    vector <uint32_t> *cluster_input;


    reset_lane(&automata_clusters);
    cluster_input = set_input(0b100000, &cluster_sig_order);    
    cout<<simulate_lane(cluster_input, &automata_clusters)<<endl; 

    cluster_input = set_input(0b010000, &cluster_sig_order);    
    cout<<simulate_lane(cluster_input, &automata_clusters)<<endl; 

    cluster_input = set_input(0b000100, &cluster_sig_order);    
    cout<<simulate_lane(cluster_input, &automata_clusters)<<endl; 
//    set_input(0b100000, &cluster_sig_order, &cluster_input);    
//    cout<<simulate_lane(&cluster_input, &automata_clusters)<<endl; 
//    Automata ap("/home/yasas/Research/RTLruntimemonitor/RuntimeAccel/scripts/test/cluster0/anml/ltl0c0.anml");
//
//    //ap.setDumpState(true, true);  
//    ap.setReport(true);
//    ap.initializeSimulation();
//    ap.simulate(0b0000);
//    cout<<check_automata_status(&ap)<<endl;
//    ap.simulate(0b0010);
//    cout<<check_automata_status(&ap)<<endl;
//    ap.reset();
//    //ap.setDumpState(true, true); 
//    ap.setReport(true); 
//    ap.initializeSimulation();  
//    ap.simulate(0b0100);
//    cout<<check_automata_status(&ap)<<endl;
//    ap.simulate(0b0100);
//    cout<<check_automata_status(&ap)<<endl;
//   // ap.simulate(0b0110);
//   // cout<< ap.getReportVector().size() << endl;
//   // ap.simulate(0b0100);
//   // cout<< ap.getReportVector().size() << endl;
//    auto out = ap.getReportVector();
//    for(auto i: out){
//       cout << i.first <<" " << i.second << " " << ap.getElement(i.second)->getReportCode() << endl;    
//    }
//    ap.writeReportToFile("report.out");
//
//    // delete dynamic allocations
    
    for(auto cluster: automata_clusters){
        for(auto a: cluster){                      
            delete a.a;
        }
    }
}
