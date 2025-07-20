# 定义变量
VERILATOR = verilator
VERILATOR_FLAGS = -Wall --trace -cc
VERILOG_SRC_TOP = vsrc/mux41.v
VERILOG_SRC_MODULES = vsrc/modules/*.v
TESTBENCH = tb_main.cpp
OBJ_DIR = obj_dir
EXE = $(OBJ_DIR)/Vmux41

# 默认目标：生成并运行仿真
all: run

# 生成仿真可执行文件
$(EXE): $(VERILOG_SRC_TOP) $(VERILOG_SRC_MODULES) $(TESTBENCH)
	$(VERILATOR) $(VERILATOR_FLAGS) $(VERILOG_SRC_TOP) $(VERILOG_SRC_MODULES) --exe $(TESTBENCH)
	$(MAKE) -C $(OBJ_DIR) -f Vmux41.mk Vmux41

# 运行仿真
run: $(EXE)
	$(EXE)

# 清理生成的文件
clean:
	rm -rf $(OBJ_DIR) *~

.PHONY: all clean run
