#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include <Vtop.h>
#include <verilated.h>
#include "verilated_vcd_c.h"
#include <nvboard.h>

static Vtop dut;
void nvboard_bind_all_pins(Vtop* top);

int main(int argc, char** argv, char** env){
	nvboard_bind_all_pins(&dut);  //绑定引脚
	nvboard_init();         //开发板初始化
	VerilatedContext* contextp = new VerilatedContext;
	contextp->commandArgs(argc, argv);
	Vtop* top = new Vtop{contextp};

	//VerilatedVcdC* tfp = new VerilatedVcdC;
	//contextp->traceEverOn(true);
	//top->trace(tfp, 0); 
	//tfp->open("wave.vcd"); 
	
	while (!contextp->gotFinish()) {
	  //int a = rand() & 1;
	  //int b = rand() & 1;
	  //top->a = a;
	  //top->b = b;
	  //top->eval();
	  //printf("a = %d, b = %d, f = %d\n", a, b, top->f);
	  
	  //tfp->dump(contextp->time()); 
	  //contextp->timeInc(1);

	  //assert(top->f == (a ^ b));
	  dut.eval(); 
	  nvboard_update();    //更新NVBoard各组件状态
	}
	delete top;
	delete contextp;
	nvboard_quit();        //退出NVBoard
	return 0;
}
