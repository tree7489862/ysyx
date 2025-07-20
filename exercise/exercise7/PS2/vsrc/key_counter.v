module key_counter(
    input clk,
    input clrn,
    input [7:0] key_code,  // 当前按键的扫描码
//    input key_down,        // 按键按下信号
    output reg [3:0] key_count // 按键总次数
);

    reg [7:0] last_key_code;
//    reg last_key_down;
    reg out;
    reg state_wen;

    parameter[2:0] S0 = 0, S1 = 1, S2 = 2;
    wire [2:0] state_din, state_dout;
    SimReg#(3,0) state(clk, clrn, state_din, state_dout, state_wen);
    assign state_wen = 1;
    MuxKeyWithDefault#(3, 3, 3) stateMux1(.out(state_din), .key(state_dout), .default_out(S0), .lut({
	    S0, (key_code != last_key_code) ? S1 : S0,
	    S1, (key_code == 8'hF0) ? S2 : S1,
	    S2, (key_code == 8'h2A) ? S0 : S2
	    }));
    MuxKeyWithDefault#(3, 3, 1) stateMux2(.out(out), .key(state_dout), .default_out(1'b0), .lut({
	    S0, 1'b0,
	    S1, 1'b0,
	    S2, 1'b1
	    }));

    always @(posedge clk or negedge clrn) begin
        if (!clrn) begin
            key_count <= 0;
            last_key_code <= 8'h2A;
//            last_key_down <= 0;
        end else begin
//            if (key_down && !last_key_down && (key_code != last_key_code)) begin
//                key_count <= key_count + 1;
//            end
            last_key_code <= key_code;
//            last_key_down <= key_down;
        end
    end
endmodule
