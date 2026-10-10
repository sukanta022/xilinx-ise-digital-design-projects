module control_unit (
    input wire [3:0] opcode,
    output reg [2:0] alu_op,
    output reg acc_we
);

    // ALU operation codes
    localparam OP_NOP = 3'b000;
    localparam OP_LDI = 3'b001;
    localparam OP_ADD = 3'b010;
    localparam OP_XOR = 3'b011;
    localparam OP_NOT = 3'b100;
    localparam OP_SHL = 3'b101;


    always @(*) begin
        // Default: do nothing
        alu_op = OP_NOP;
        acc_we = 1'b0;

        case (opcode)
            4'b0001: begin // LDI
                alu_op = OP_LDI;
                acc_we = 1'b1;
            end

            4'b0010: begin // ADD
                alu_op = OP_ADD;
                acc_we = 1'b1;
            end

            4'b0110: begin // XOR
                alu_op = OP_XOR;
                acc_we = 1'b1;
            end
				            4'b0111: begin // NOT
                alu_op = OP_NOT;
                acc_we = 1'b1;
            end

            4'b1000: begin // SHL
                alu_op = OP_SHL;
                acc_we = 1'b1;
            end

            default: begin
                alu_op = OP_NOP;
                acc_we = 1'b0;
            end
        endcase
    end

endmodule