#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include <Vtop.h>
#include <verilated.h>
#include "verilated_vcd_c.h"
#include <nvboard.h>


VerilatedContext* contextp = nullptr;     // 仿真上下文指针
VerilatedVcdC* tfp = nullptr;             // 用于写波形的对象指针
Vtop* top = nullptr;                      // 顶层模块指针（Verilator生成）

extern void nvboard_bind_all_pins(Vtop* top);  // 外部函数，绑定引脚（由 .cpp 自动生成）

// 单步仿真 + 波形写入
void step_and_dump_wave() {
    top->eval();                         // 求当前时刻输出（根据输入信号）
    contextp->timeInc(1);                // 仿真时间 +1
    tfp->dump(contextp->time());         // 写入波形数据
}

// 初始化仿真器
void sim_init(int argc, char** argv) {
    contextp = new VerilatedContext;     // 创建仿真上下文
    contextp->commandArgs(argc, argv);   // 传入命令行参数
    top = new Vtop{contextp};            // 创建顶层模块实例，挂到 contextp 上

    tfp = new VerilatedVcdC;             // 创建 VCD 写入对象
    contextp->traceEverOn(true);         // 打开波形追踪开关
    top->trace(tfp, 3);                  // 将顶层模块绑定到波形对象
    tfp->open("wave.vcd");               // 指定波形输出文件
}

// 结束仿真
void sim_exit() {
    step_and_dump_wave();  // 写入最后一个时刻波形
    tfp->close();          // 关闭波形文件
    nvboard_quit();        // 关闭 NVBoard
    delete top;            // 释放资源
    delete tfp;
    delete contextp;
}

// 主函数入口
int main(int argc, char** argv) {
    sim_init(argc, argv);              // 初始化仿真器
    nvboard_bind_all_pins(top);        // 绑定开发板引脚
    nvboard_init();                    // 初始化开发板 GUI

    while (!contextp->gotFinish()) {   // 仿真主循环，未收到 $finish 指令前持续
        nvboard_update();              // 刷新开发板状态（读入输入）
        
        top->clk = !top->clk;          // 时钟翻转（模拟时钟信号）
        step_and_dump_wave();          // 单步仿真并记录波形
    }

    sim_exit();                        // 仿真结束清理
    return 0;
}
