# 定义变量
VERILATOR = verilator
VERILATOR_FLAGS = -Wall --trace -cc
VERILOG_SRC = vsrc/mux41.v
TESTBENCH = tb_main.cpp
OBJ_DIR = obj_dir
EXE = $(OBJ_DIR)/Vmux41

# 默认目标：生成并运行仿真
all: run

# 生成仿真可执行文件
$(EXE): $(VERILOG_SRC) $(TESTBENCH)
	$(VERILATOR) $(VERILATOR_FLAGS) $(VERILOG_SRC) --exe $(TESTBENCH)
	$(MAKE) -C $(OBJ_DIR) -f Vmux41.mk Vmux41

# 运行仿真
run: $(EXE)
	$(EXE)

# 清理生成的文件
clean:
	rm -rf $(OBJ_DIR) *~

.PHONY: all clean run
