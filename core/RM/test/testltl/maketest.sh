verilator -Wno-lint --timing  --trace-structs  --trace --x-initial-edge -cc ./tb_top_ltl.sv ../monitor/cluster0/ltl0c0.sv ../monitor/cluster0/ste.v   -prefix rm_tb_ltl --exe tb_ltl.cpp
make -C obj_dir -f rm_tb_ltl.mk rm_tb_ltl
./obj_dir/rm_tb_ltl
