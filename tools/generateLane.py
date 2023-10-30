#!/usr/bin/python3

import sys
import os

def usage():
    usage = "./generateLane.py <generated rm path> <clustered?: 1 or 0> <filename suffix>"
    return usage

def getidx(symbol):
    if symbol == "id_stage_s1":
        return 0
    elif symbol == "issue_s16":
        return 1
    elif symbol == "lsq_enq_0_s1":
        return 2
    elif symbol == "lsq_enq_1_s1":
        return 3
    elif symbol == "scb_0_s12":
        return 4
    elif symbol == "scb_0_s13":
        return 5
    elif symbol == "scb_0_s14":
        return 6
    elif symbol == "scb_0_s8":
        return 7
    elif symbol == "scb_1_s12":
        return 8
    elif symbol == "scb_1_s13":
        return 9
    elif symbol == "scb_1_s14":
        return 10
    elif symbol == "scb_1_s8":
        return 11
    elif symbol == "scb_2_s12":
        return 12
    elif symbol == "scb_2_s13":
        return 13
    elif symbol == "scb_2_s14":
        return 14
    elif symbol == "scb_2_s8":
        return 15
    elif symbol == "scb_3_s12":
        return 16
    elif symbol == "scb_3_s13":
        return 17
    elif symbol == "scb_3_s14":
        return 18
    elif symbol == "scb_3_s8":
        return 19
    elif symbol == "stb_com_0_s1":
        return 20
    elif symbol == "stb_com_1_s1":
        return 21
    elif symbol == "stb_spec_0_s1":
        return 22
    elif symbol == "stb_spec_1_s1":
        return 23
    elif symbol == "load_unit_s1":
        return 24
    elif symbol == "store_unit_s1":
        return 25
    elif symbol == "store_unit_s3":
        return 26
    elif symbol == "load_unit_buff_s1":
        return 27
    elif symbol == "load_unit_op_s1":
        return 28
    elif symbol == "load_unit_op_s2":
        return 29
    elif symbol == "load_unit_op_s3":
        return 30
    else:
        print("Unmapped symbol " + symbol)
        exit(-1)
    return 0


if __name__ == '__main__':
    if len(sys.argv) != 4:
        print(usage())
        exit(-1)

    generated_folder=sys.argv[1]
    clustered = int(sys.argv[2])
    filename_suff = sys.argv[3]
    if not os.path.exists(generated_folder):
        print(generated_folder+" does not exist!!")
        exit(-1)
    iterator = 0
    if clustered:
        while True:
            cluster = generated_folder+"/cluster"+str(iterator)
            if not os.path.exists(cluster):
                print(cluster+" does not exist!!")
                break;

            with open(cluster+"/ltl0c"+str(iterator)+filename_suff+".out") as f:
                content = f.readlines()
                free_variables = []
                for line in content:
                    if 'DFA for formula with free variables' in line:
                        free_variables = line.split(':')[1].strip().split()
                        break;
   
            op_string = "assign c"+str(iterator)+"_i = {"
            for var in free_variables:
                label = var.split("_",1)[1]
                getidx(var)   
                op_string = op_string +"lane_vector_i["+str(getidx(var))+"],"
            op_string = op_string.rstrip(op_string[-1])+"};" 
            print(op_string)
            iterator= iterator + 1
    else:
        while True:
            file_name = generated_folder+"/ltl0c"+str(iterator)+filename_suff+".out"
            if not os.path.exists(file_name):
                print(file_name+" does not exist!!") 
                break;

            with open(file_name) as f:
                content = f.readlines()
                free_variables = []
                for line in content:
                    if 'DFA for formula with free variables' in line:
                        free_variables = line.split(':')[1].strip().split()
                        break;
   
            op_string = "assign c"+str(iterator)+"_i = {"
            op_varname_order = "// "
            for var in free_variables:
                label = var.split("_",1)[1]
                op_string = op_string +"lane_vector_i["+str(getidx(label))+"],"
                op_varname_order = op_varname_order + var + ", "
            op_string = op_string.rstrip(op_string[-1])+"};" 
            print(op_string)
            print(op_varname_order)
            iterator= iterator + 1
