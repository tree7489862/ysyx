module top(
  input [7:0] x,
  input en,
  output [3:0] l,
  output [6:0] h
);
  reg [2:0] y;
  wire sign = en & (|x);
  integer i;
  
  always @(x or en) begin
    if(en)begin
      y = 0;
      for(i = 0; i <=7; i++)
        if(x[i] == 1) y = i[2:0];
    end
    else y = 0;
  end
  assign l = {sign, y};
  seg seg1(
    .b(l),
    .h(h)
);
endmodule
