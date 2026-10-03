`timescale 1ns / 1ps

module ALU_8bit_tb;

    reg [7:0] A;
    reg [7:0] B;
    reg [2:0] Opcode;

    wire [7:0] F;
    wire Cout;

    ALU_8bit uut (
        .A(A),
        .B(B),
        .Opcode(Opcode),
        .F(F),
        .Cout(Cout)
    );
	 
    initial begin

        // AND
        A = 8'b10101010;
        B = 8'b11001100;
        Opcode = 3'b000;
        #10;


        // OR
        A = 8'b10101010;
        B = 8'b11001100;
        Opcode = 3'b001;
        #10;


        // XOR
        A = 8'b10101010;
        B = 8'b11001100;
        Opcode = 3'b010;
        #10;


        // NOT
        A = 8'b10101010;
        B = 8'b00000000;
        Opcode = 3'b011;
        #10;

        // ADD
        A = 8'b00000101;
        B = 8'b00000011;
        Opcode = 3'b100;
        #10;


        // SUB
        A = 8'b00000101;
        B = 8'b00000011;
        Opcode = 3'b101;
        #10;


        // ADD with carry
        A = 8'b11111111;
        B = 8'b00000001;
        Opcode = 3'b100;
        #10;


        $finish;

    end

endmodule