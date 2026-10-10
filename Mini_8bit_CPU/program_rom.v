module program_rom (
    input wire [3:0] PC,
    output reg [11:0] instruction
);

    always @(*) begin
        case (PC)
            4'd0: instruction = 12'h155; // LDI 0x55
            4'd1: instruction = 12'h6FF; // XOR 0xFF
            4'd2: instruction = 12'h700; // NOT
            4'd3: instruction = 12'h800; // SHL
            4'd4: instruction = 12'h256; // ADD 0x56
            4'd5: instruction = 12'h681; // XOR 0x81
            4'd6: instruction = 12'h800; // SHL

            default: instruction = 12'h000; // NOP
        endcase
    end

endmodule