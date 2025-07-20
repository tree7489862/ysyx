#include <nvboard.h>
#include "Vtop.h"

void nvboard_bind_all_pins(Vtop* top) {
	nvboard_bind_pin( &top->command_input, 3, BTNU, BTNC, BTND);
	nvboard_bind_pin( &top->a_input, 4, SW8, SW7, SW6, SW5);
	nvboard_bind_pin( &top->b_input, 4, SW3, SW2, SW1, SW0);
	nvboard_bind_pin( &top->en, 1, SW10);
	nvboard_bind_pin( &top->ans, 4, LD7, LD6, LD5, LD4);
	nvboard_bind_pin( &top->overflow_flag, 2, LD1, LD0);
}
