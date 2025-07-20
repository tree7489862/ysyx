module key_processing_system(
    input clk,          // 时钟信号
    input reset,        // 复位信号
    output reg nextdata_n, // 连接到键盘控制器的nextdata_n信号
    input [7:0] data,   // 来自键盘控制器的数据
    input ready,      // 来自键盘控制器的ready信号
    input overflow
);

// 状态定义
localparam IDLE = 0, READ = 1;
reg state, next_state;

// 状态转移逻辑
always @(posedge clk or posedge reset) begin
    if (reset) begin
        state = IDLE;
	next_state = IDLE;
    end 
    else begin
    // 根据当前状态决定下一个状态
    case (state)
        IDLE: begin
            if (ready) begin
                // 如果键盘控制器准备好了数据，转移到READ状态
                next_state = READ;
            end
        end
        READ: begin
            if (ready && !nextdata_n) begin
                // 如果已经确认读取完毕，回到IDLE状态
                next_state = IDLE;
            end
        end
        default: begin
            next_state = IDLE;
        end
    endcase
    end
    state = next_state;
end

// 输出逻辑
always @(posedge clk) begin
    if (reset) begin
        nextdata_n <= 1'b1; // 确保在复位时，nextdata_n为高电平
    end else begin
        case (state)
            IDLE: begin
                nextdata_n <= 1'b1; // 在IDLE状态下，保持nextdata_n为高电平
            end
            READ: begin
                nextdata_n <= 1'b0; // 在READ状态下，拉低nextdata_n以读取数据
            end
            default: begin
                nextdata_n <= 1'b1;
            end
        endcase
    end
end

endmodule

