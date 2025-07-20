module top(

  input [2:0] command_input,
  input [3:0] a_input,
  input [3:0] b_input,
  input en,
  output reg [3:0] ans,
  output reg [1:0] overflow_flag
);
  
  reg [3:0] a;
  reg [3:0] b;
  reg [3:0] temp_ans;
  reg [1:0] overflow;

always @(*) begin
  assign a = a_input;
  assign b = b_input;
if(en == 1) begin
  case(command_input)
    3'b000:begin
	    {overflow[0],temp_ans} = a + b;
	    overflow[1] = (a[3] != temp_ans[3]) && (temp_ans[3] != b[3]);  
    end
    3'b001:begin
	    b = ~b + 1'b1;
	    {overflow[0],temp_ans} = a + b;
	    overflow[1] = (a[3] != temp_ans[3]) && (temp_ans[3] != b[3]);
    end
    3'b010:begin
	    temp_ans = ~a;
	    overflow = 0;
    end
    3'b011:begin
	    temp_ans = a & b;
            overflow = 0;
    end
    3'b100:begin
            overflow = 0;
	    temp_ans = a | b;
    end
    3'b101:begin
            overflow = 0;
	    temp_ans = a ^ b;
    end
    3'b110:begin
	    overflow = 0;
	    if(a[3] == b[3])begin
		if(a < b) temp_ans = 1;
		else temp_ans = 0;
	    end
            else begin
		if(a[3] == 1) temp_ans = 1;
		else temp_ans = 0;
	    end
    end
    3'b111:begin
	    overflow = 2'b0;
	    if(a == b) temp_ans = 1;
	    else temp_ans = 0;
    end
  endcase
end
else begin
    temp_ans = 4'b0;
    overflow = 2'b0;
end
end
  assign ans = temp_ans;
  assign overflow_flag = overflow;
endmodule
