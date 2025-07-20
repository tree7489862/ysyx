module top(
	input clk,
	input reset,
	output reg [7:0] x,
	output reg [6:0] h0,
	output reg [6:0] h1
);
  
always @(posedge clk or posedge reset) begin
	if (reset)begin
		x = 8'b00000001;
	end
	else begin
		x = {(x[4] ^ x[3] ^ x[2] ^ x[0]),x[7:1]};
	end
end

seg seg0(
	.b(x[3:0]),
	.h(h0)
);

seg seg1(
	.b(x[7:4]),
	.h(h1)
);
endmodule
