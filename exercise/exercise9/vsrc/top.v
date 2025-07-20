module top(
	input clk,
	input sw,
	output reg led,
	output clk_t
);

assign clk_t = clk;

always @ (negedge clk) begin
	if(sw == 0)
		led <= 0;
	else
		led <= 1;
end

endmodule
