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
//
//
//uint64_t constexpr mix(char m, uint64_t s){
//    return ((s<<7) + ~(s>>3)) + ~m; 
//}
//
//uint64_t constexpr hash1(const char * m){
//    return (*m) ? mix(*m,hash1(m+1)) : 0;
//}
//
//int idx_lookup(string a){
//    switch(hash1(a.c_str())){
//        case hash1("A"): return 5;
//        case hash1("B"): return 4;
//        case hash1("C"): return 3;
//        case hash1("D"): return 2;
//        case hash1("E"): return 1;
//        case hash1("F"): return 0;
//        default:
//            cout<<"Unknown input symbol!!"<<endl;
//            exit(1);
//     }
//}

class Lane {

protected:
    vector<vector<int>> cluster_sig_order;
    vector<vector<sim_automata>> automata_clusters;
    vector <uint32_t> *cluster_input;
    
private:
    uint32_t reorder_input(uint32_t input,vector <int> ordering);
    bool check_automata_status(Automata *a);
    uint32_t simulate_lane();
    vector <uint32_t> * set_input(uint32_t input); 
    uint32_t current_output = 0;
    
public:

    Lane(string);
    ~Lane();
    void reset_lane();
    uint32_t simulate(uint32_t input);
    uint32_t get_output();
    

};
