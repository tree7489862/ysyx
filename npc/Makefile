VSRC = $(wildcard ../example/top.v)
CSRC = $(wildcard ../example/top_main.cpp)
all:
	@echo "Write this Makefile by your self."
 
sim:
	$(call git_commit, "sim RTL") # DO NOT REMOVE THIS LINE!!!
	verilator -Wall $(VSRC) $(CSRC) --cc --trace --exe --build
	./obj_dir/Vtop
	gtkwave wave.vcd
 
 .PHONY:clean
clean:
	rm -rf obj_dir wave.vcd
