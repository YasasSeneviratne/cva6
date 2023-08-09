#include "automata.h"

using namespace std;


int main(int argc, char * argv[]) {

//    string directory_path = "/home/yasas/Research/RTLruntimemonitor/RuntimeAccel/scripts/test/cluster0/anml/";


    Automata ap("/home/yasas/Research/RTLruntimemonitor/RuntimeAccel/scripts/test/cluster0/anml/ltl0c0.anml");

    ap.setDumpState(true, true);  
    ap.setReport(true);
    ap.initializeSimulation();
    ap.simulate(0b0000);
    cout<< ap.getReportVector().size() << endl;
    ap.simulate(0b0100);
    cout<< ap.getReportVector().size() << endl;
    ap.simulate(0b0000);
    cout<< ap.getReportVector().size() << endl;
   // ap.simulate(0b0110);
   // cout<< ap.getReportVector().size() << endl;
   // ap.simulate(0b0100);
   // cout<< ap.getReportVector().size() << endl;
    auto out = ap.getReportVector();
    for(auto i: out){
       cout << i.first <<" " << i.second << " " << ap.getElement(i.second)->getReportCode() << endl;    
    }
    ap.writeReportToFile("report.out");
}
