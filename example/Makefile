sim:
	verilator -Wall --trace -cc top.v --exe tb_top.cpp
	make -C obj_dir -f Vtop.mk Vtop
	./obj_dir/Vtop
