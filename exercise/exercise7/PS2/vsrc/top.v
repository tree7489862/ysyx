module top(
    input clk,
    input clrn,
    input ps2_clk,
    input ps2_data,
    output [6:0] seg0,    // 七段数码管段选信号
    output [6:0] seg1,
    output [6:0] seg2,
    output [6:0] seg3,
    output [6:0] seg4,
    output [6:0] seg5,
    output [6:0] seg6,
    output ready,
    output overflow,
    output sampling,
    output reg nextdata_n,
    output clk_t
);

    assign clk_t = ps2_clk;
    
    reg [7:0] scan_code;
    reg [7:0] data;
    wire [7:0] ascii_code;
    //wire ready, overflow;
    //reg nextdata_n;
    //reg [3:0] count;
    reg [7:0] num;
    reg ready_2;
    wire [3:0] scan_digit_1,scan_digit_2,ascii_digit_1,ascii_digit_2;
    reg [3:0] num_digit_1,num_digit_2;
    
    
    // 键盘接收模块
    ps2_keyboard keyboard(
        .clk(clk),
        .clrn(clrn),
        .ps2_clk(ps2_clk),
        .ps2_data(ps2_data),
        .data(data),
        .ready(ready),
        .nextdata_n(nextdata_n),
        .overflow(overflow),
        .sampling(sampling)
    );

    // 扫描码解码模块
    scan_code_decoder decoder(
        .scan_code(scan_code),
        .ascii_code(ascii_code)
    );

 

    // ASCII 显示
    assign scan_digit_1 = scan_code[3:0];  // 低四位
    assign scan_digit_2 = scan_code[7:4];
    assign ascii_digit_1 = ascii_code[3:0];  // 低四位
    assign ascii_digit_2 = ascii_code[7:4];              // 高四位

    // 七段数码管驱动模块
    seven_segment_display scan_display_1(
        .digit(scan_digit_1),
        .seg(seg0)
    );

    seven_segment_display scan_display_2(
        .digit(scan_digit_2),
        .seg(seg1)
    );

    seven_segment_display ascii_display_1(
        .digit(ascii_digit_1),
        .seg(seg2)
    );

    seven_segment_display ascii_display_2(
        .digit(ascii_digit_2),
        .seg(seg3)
    );

    seven_segment_display count_display_1(
        .digit(num_digit_1),
        .seg(seg4)
    );
    seven_segment_display count_display_2(
        .digit(num_digit_2),
        .seg(seg5)
    );


reg [7:0] data_buf;       // 当前扫描码
reg got_f0;               // 检测到 F0 表示“即将松开”
reg [7:0] key_release_code; // 松开的键码

always @(posedge clk or negedge clrn) begin

    if (!clrn) begin
        got_f0     <= 0;
        num        <= 8'd0;
        data_buf   <= 8'd0;
    end 
    else begin
        if (ready) begin
            data_buf <= data;   // 缓存当前扫描码
            if (data == 8'hF0) begin
                // 收到松开起始符
                got_f0 <= 1'b1;
            end 
            else begin
                if (got_f0) begin
                    scan_code <= 8'd0;          // 清除当前按键状态
                    num <= num + 8'b1;  // 计数！
                    num_digit_1 = num[3:0];  // 低四位
		    num_digit_2 = num[7:4]; // 高四位
                    got_f0 <= 1'b0;     // 清除标志
              
                end 
                else begin
                    // 正常按键按下
                    scan_code <= data;          // 保存按下的键码
                end
            end
        end
    end
    
end
	
endmodule
