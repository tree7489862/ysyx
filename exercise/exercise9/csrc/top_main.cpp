#include <nvboard.h>
#include <Vtop.h>
#include "verilated.h"  // 必须包含这个头文件

// 实例化顶层模块
static Vtop dut;

void nvboard_bind_all_pins(Vtop* top);

// 主函数
int main() {
  // 绑定引脚
  nvboard_bind_all_pins(&dut);
  nvboard_init();

  // Verilator 的初始化
  Verilated::traceEverOn(true);  // 如果需要跟踪，可以开启

  // 时钟信号和重置信号初始化
  // dut.clk = 0;
  // dut.clrn = 1;  // 初始状态：清除复位信号

  // 仿真主循环
  while (!Verilated::gotFinish()) {  // 检查仿真是否应该终止
    // 每次循环翻转时钟信号
    dut.clk = !dut.clk;

    // 更新数码管等外设状态
    nvboard_update();

    // 评估电路状态
    dut.eval();

    // 如果需要，可以在这里加上条件，退出仿真
  }

  nvboard_quit();  // 仿真结束，关闭 nvboard
  return 0;  // 正常退出
}
