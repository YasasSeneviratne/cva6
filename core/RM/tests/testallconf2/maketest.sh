#./obj_dir/rm_tb_top
verilator -Wno-lint --trace-structs  --trace -cc ../../../include/cv64a6_imafdc_sv39_RM_config_pkg.sv ../../../include/riscv_pkg.sv ../../../include/ariane_dm_pkg.sv ../../../../common/local/rvfi/rvfi_pkg.sv ../../../include/ariane_pkg.sv ../../rm_event_detector.sv ../../rm_event_router.sv ../../rm_lane_allocator.sv ../../rm_monitor.sv rm_tb_top_conf2.sv ../monitor/rm_lane.sv ../monitor/cluster0/*.v ../monitor/cluster0/*.sv ../monitor/cluster1/*.v ../monitor/cluster1/*.sv  --prefix rm_tb_top --exe ../tb_rm.cpp
cp ../rm_tb_top.mk obj_dir/
make -C obj_dir -f rm_tb_top.mk rm_tb_top 
