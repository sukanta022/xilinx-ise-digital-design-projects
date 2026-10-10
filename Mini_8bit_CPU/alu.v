module alu (
    input wire [7:0] ACC,
    input wire [7:0] operand,
    input wire [2:0] alu_op,
    output reg [7:0] result
);

    localparam OP_NOP = 3'b000;
    localparam OP_LDI = 3'b001;
    localparam OP_ADD = 3'b010;
    localparam OP_XOR = 3'b011;
    localparam OP_NOT = 3'b100;
    localparam OP_SHL = 3'b101;
	 
	 
    always @(*) begin
        case (alu_op)
            OP_LDI: result = operand;
            OP_ADD: result = ACC + operand;
            OP_XOR: result = ACC ^ operand;
            OP_NOT: result = ~ACC;
            OP_SHL: result = ACC << 1;

            default: result = ACC;
        endcase
    end

endmodule