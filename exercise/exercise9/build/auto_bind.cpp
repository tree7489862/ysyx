#include <nvboard.h>
#include "Vtop.h"

void nvboard_bind_all_pins(Vtop* top) {
	nvboard_bind_pin( &top->sw, 1, SW0);
	nvboard_bind_pin( &top->led, 1, LD0);
	nvboard_bind_pin( &top->clk_t, 1, LD1);
}
