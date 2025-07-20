#include <nvboard.h>
#include "Vtop.h"

void nvboard_bind_all_pins(Vtop* top) {
	nvboard_bind_pin( &top->clrn, 1, SW0);
	nvboard_bind_pin( &top->ps2_clk, 1, PS2_CLK);
	nvboard_bind_pin( &top->ps2_data, 1, PS2_DAT);
	nvboard_bind_pin( &top->seg0, 7, SEG0G, SEG0F, SEG0E, SEG0D, SEG0C, SEG0B, SEG0A);
	nvboard_bind_pin( &top->seg1, 7, SEG1G, SEG1F, SEG1E, SEG1D, SEG1C, SEG1B, SEG1A);
	nvboard_bind_pin( &top->seg2, 7, SEG2G, SEG2F, SEG2E, SEG2D, SEG2C, SEG2B, SEG2A);
	nvboard_bind_pin( &top->seg3, 7, SEG3G, SEG3F, SEG3E, SEG3D, SEG3C, SEG3B, SEG3A);
	nvboard_bind_pin( &top->seg4, 7, SEG4G, SEG4F, SEG4E, SEG4D, SEG4C, SEG4B, SEG4A);
	nvboard_bind_pin( &top->seg5, 7, SEG5G, SEG5F, SEG5E, SEG5D, SEG5C, SEG5B, SEG5A);
	nvboard_bind_pin( &top->ready, 1, LD0);
	nvboard_bind_pin( &top->overflow, 1, LD1);
	nvboard_bind_pin( &top->sampling, 1, LD2);
	nvboard_bind_pin( &top->nextdata_n, 1, LD3);
	nvboard_bind_pin( &top->clk_t, 1, LD4);
}
