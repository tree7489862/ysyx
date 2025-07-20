module seg (in,seg);
  input [4:0] in;
  output reg [7:0] seg;

    always @(*) begin
        case (in)
            5'b10000: seg = 8'b0000_0011;
            5'b10001: seg = 8'b1001_1111;
            5'b10010: seg = 8'b0010_0101;
            5'b10011: seg = 8'b0000_1101;
            5'b10100: seg = 8'b1001_1001;
            5'b10101: seg = 8'b0100_1001;
            5'b10110: seg = 8'b0100_0001;
            5'b10111: seg = 8'b0001_1111;
            5'b11000: seg = 8'b0000_0001;
            5'b11001: seg = 8'b0000_1001;
            5'b11010: seg = 8'b0001_0001;
            5'b11011: seg = 8'b1100_0001;
            5'b11100: seg = 8'b0110_0011;
            5'b11101: seg = 8'b1000_0101;
            5'b11110: seg = 8'b0110_0001;
            5'b11111: seg = 8'b0111_0001;
            default: seg = 8'b1111_1111;
        endcase
    end
endmodule

