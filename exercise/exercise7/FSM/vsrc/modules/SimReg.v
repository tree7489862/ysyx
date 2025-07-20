module SimReg #(parameter WIDTH = 4, parameter INIT = 0) (
    input wire clk,
    input wire reset,
    input wire [WIDTH-1:0] d,
    output reg [WIDTH-1:0] q,
    input wire wen
);
    always @(posedge clk or posedge reset) begin
        if (reset)
            q <= INIT;
        else if (wen)
            q <= d;
    end
endmodule
