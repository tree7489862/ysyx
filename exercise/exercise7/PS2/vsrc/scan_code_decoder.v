module scan_code_decoder(
    input [7:0] scan_code,
    output reg [7:0] ascii_code
);
    always @(*) begin
        case (scan_code)
            // 字母按键
            8'h1C: ascii_code = 8'h41; // 'A'
            8'h32: ascii_code = 8'h42; // 'B'
            8'h21: ascii_code = 8'h43; // 'C'
            8'h23: ascii_code = 8'h44; // 'D'
            8'h24: ascii_code = 8'h45; // 'E'
            8'h2B: ascii_code = 8'h46; // 'F'
            8'h34: ascii_code = 8'h47; // 'G'
            8'h33: ascii_code = 8'h48; // 'H'
            8'h43: ascii_code = 8'h49; // 'I'
            8'h3B: ascii_code = 8'h4A; // 'J'
            8'h42: ascii_code = 8'h4B; // 'K'
            8'h4B: ascii_code = 8'h4C; // 'L'
            8'h3A: ascii_code = 8'h4D; // 'M'
            8'h31: ascii_code = 8'h4E; // 'N'
            8'h44: ascii_code = 8'h4F; // 'O'
            8'h4D: ascii_code = 8'h50; // 'P'
            8'h15: ascii_code = 8'h51; // 'Q'
            8'h2D: ascii_code = 8'h52; // 'R'
            8'h1B: ascii_code = 8'h53; // 'S'
            8'h2C: ascii_code = 8'h54; // 'T'
            8'h3C: ascii_code = 8'h55; // 'U'
            8'h2A: ascii_code = 8'h56; // 'V'
            8'h1D: ascii_code = 8'h57; // 'W'
            8'h22: ascii_code = 8'h58; // 'X'
            8'h35: ascii_code = 8'h59; // 'Y'
            8'h1A: ascii_code = 8'h5A; // 'Z'

            // 数字键
            8'h45: ascii_code = 8'h30; // '0'
            8'h16: ascii_code = 8'h31; // '1'
            8'h1E: ascii_code = 8'h32; // '2'
            8'h26: ascii_code = 8'h33; // '3'
            8'h25: ascii_code = 8'h34; // '4'
            8'h2E: ascii_code = 8'h35; // '5'
            8'h36: ascii_code = 8'h36; // '6'
            8'h3D: ascii_code = 8'h37; // '7'
            8'h3E: ascii_code = 8'h38; // '8'
            8'h46: ascii_code = 8'h39; // '9'

            // 符号键
            8'h29: ascii_code = 8'h20; // Space (空格)
            8'h0E: ascii_code = 8'h60; // '`' (Grave Accent)
            8'h4E: ascii_code = 8'h2D; // '-' (Dash)
            8'h55: ascii_code = 8'h3D; // '=' (Equal)
            8'h54: ascii_code = 8'h5B; // '[' (Left Bracket)
            8'h5B: ascii_code = 8'h5D; // ']' (Right Bracket)
            8'h5D: ascii_code = 8'h5C; // '\' (Backslash)
            8'h4C: ascii_code = 8'h3B; // ';' (Semicolon)
            8'h52: ascii_code = 8'h27; // ''' (Single Quote)
            8'h41: ascii_code = 8'h2C; // ',' (Comma)
            8'h49: ascii_code = 8'h2E; // '.' (Period)
            8'h4A: ascii_code = 8'h2F; // '/' (Slash)

            // Enter 键
            8'h5A: ascii_code = 8'h0D; // Carriage Return (Enter)

            // Backspace 键
            8'h66: ascii_code = 8'h08; // Backspace

            // Tab 键
            8'h0D: ascii_code = 8'h09; // Horizontal Tab (Tab)

            // Esc 键
            8'h76: ascii_code = 8'h1B; // Escape

            // F1 到 F12 功能键 (这些键没有 ASCII 码)
            8'h05: ascii_code = 8'h00; // F1
            8'h06: ascii_code = 8'h00; // F2
            8'h04: ascii_code = 8'h00; // F3
            8'h0C: ascii_code = 8'h00; // F4
            8'h03: ascii_code = 8'h00; // F5
            8'h0B: ascii_code = 8'h00; // F6
            8'h83: ascii_code = 8'h00; // F7
            8'h0A: ascii_code = 8'h00; // F8
            8'h01: ascii_code = 8'h00; // F9
            8'h09: ascii_code = 8'h00; // F10
            8'h78: ascii_code = 8'h00; // F11
            8'h07: ascii_code = 8'h00; // F12

            // 默认情况下，返回 '*' 表示未知字符
            default: ascii_code = 8'h00; // '*'表示未知字符
        endcase
    end
endmodule
