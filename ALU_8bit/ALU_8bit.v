module ALU_8bit (
    input [7:0] A,
    input [7:0] B,
    input [2:0] Opcode,
    output [7:0] F,
    output Cout
);

    wire C1;
    wire C2;
    wire C3;
    wire C4;
    wire C5;
    wire C6;
    wire C7;

    wire C0;

    // For subtraction, initial carry must be 1.
    assign C0 = (Opcode == 3'b101) ? 1'b1 : 1'b0;


    // Bit 0
    ALU_1bit ALU0 (
        .A(A[0]),
        .B(B[0]),
        .Cin(C0),
        .Opcode(Opcode),
        .F(F[0]),
        .Cout(C1)
    );


    // Bit 1
    ALU_1bit ALU1 (
        .A(A[1]),
        .B(B[1]),
        .Cin(C1),
        .Opcode(Opcode),
        .F(F[1]),
        .Cout(C2)
    );


    // Bit 2
    ALU_1bit ALU2 (
        .A(A[2]),
        .B(B[2]),
        .Cin(C2),
        .Opcode(Opcode),
        .F(F[2]),
        .Cout(C3)
    );

    // Bit 3
    ALU_1bit ALU3 (
        .A(A[3]),
        .B(B[3]),
        .Cin(C3),
        .Opcode(Opcode),
        .F(F[3]),
        .Cout(C4)
    );


    // Bit 4
    ALU_1bit ALU4 (
        .A(A[4]),
        .B(B[4]),
        .Cin(C4),
        .Opcode(Opcode),
        .F(F[4]),
        .Cout(C5)
    );

    // Bit 5
    ALU_1bit ALU5 (
        .A(A[5]),
        .B(B[5]),
        .Cin(C5),
        .Opcode(Opcode),
        .F(F[5]),
        .Cout(C6)
    );


    // Bit 6
    ALU_1bit ALU6 (
        .A(A[6]),
        .B(B[6]),
        .Cin(C6),
        .Opcode(Opcode),
        .F(F[6]),
        .Cout(C7)
    );

    // Bit 7
    ALU_1bit ALU7 (
        .A(A[7]),
        .B(B[7]),
        .Cin(C7),
        .Opcode(Opcode),
        .F(F[7]),
        .Cout(Cout)
    );

endmodule