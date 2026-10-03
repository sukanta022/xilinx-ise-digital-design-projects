module ALU_1bit (
    input A,
    input B,
    input Cin,
    input [2:0] Opcode,
    output reg F,
    output reg Cout
);

    always @(*) begin

        F = 1'b0;
        Cout = 1'b0;

        case (Opcode)

            3'b000: begin
                // AND
                F = A & B;
                Cout = 1'b0;
            end
				
            3'b001: begin
                // OR
                F = A | B;
                Cout = 1'b0;
            end

            3'b010: begin
                // XOR
                F = A ^ B;
                Cout = 1'b0;
            end

            3'b011: begin
                // NOT A
                F = ~A;
                Cout = 1'b0;
            end
				
            3'b100: begin
                // ADD
                {Cout, F} = A + B + Cin;
            end

            3'b101: begin
                // SUB
                {Cout, F} = A + (~B) + Cin;
            end

            default: begin
                F = 1'b0;
                Cout = 1'b0;
            end

        endcase

    end

endmodule