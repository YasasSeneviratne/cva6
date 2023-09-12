#!/usr/bin/python3

import sys
import os

def usage():
    usage = "./analyzeResults.py <generated rm path> <rm results path>"
    return usage



if __name__ == '__main__':
    if len(sys.argv) != 3:
        print(usage())
        exit(-1)

    generated_dir	=sys.argv[1]
    monitor_op_dir	= sys.argv[2]
    if not os.path.exists(generated_dir):
        print(generated_dir+" does not exist!!")
        exit(-1)

    if not os.path.exists(monitor_op_dir):
        print(monitor_op_dir+" does not exist!!")
        exit(-1)
    
    all_rules = []
    iterator = 0
    while True:
        cluster = generated_dir+"/cluster"+str(iterator)
        if not os.path.exists(cluster):
            break;
        
        lines = []
        with open(cluster+"/clusterdetails.txt") as f:
            lines = [((line.strip().split()) + [iterator]) for line in f ]
        all_rules =  all_rules + lines
        iterator= iterator + 1

    result_dic = {}
    iterator = 0
    while True:
        monitor_log = monitor_op_dir+"/monitor"+str(iterator)+".log"
        if not os.path.exists(monitor_log):
            break;
        line_num = 0
        with open(monitor_log) as f:
            lines =  f.readlines() 
            for lval in lines:
                line_num = line_num + 1;
                opval = int(lval.strip(),16)
                opval = opval >> 78
                if(opval == 0):
                    continue
                idx = 0
                #if(opval != 0x00003f100003000010000000 and opval !=0):
                #    print(hex(opval))
                while opval !=0:
                    if(opval & 1):
                        key = (all_rules[idx][0],all_rules[idx][1])
                        if key in result_dic:
                            result_dic[key][0] =  result_dic[key][0] + 1
                        else:
                            result_dic[key] = [1,idx,line_num,iterator]
                    opval = opval >> 1
                    idx = idx + 1
        iterator= iterator + 1
             
    print(result_dic)
    print(len(result_dic))

    with open("report.txt", "w") as f:
        for key in result_dic:
            txt = "{} -> {} = iter {} rule# {} fist clk {} monitor {}\n".format(key[0],key[1],result_dic[key][0],result_dic[key][1],result_dic[key][2],result_dic[key][3])
            f.write(txt)  
