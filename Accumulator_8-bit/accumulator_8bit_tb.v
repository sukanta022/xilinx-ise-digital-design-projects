`timescale 1ns/1ps

module accumulator_8bit_tb;

reg [7:0] A, B;
reg CLK, RESET;
wire [7:0] Q;

accumulator_8bit uut (
    .A(A),
    .B(B),
    .CLK(CLK),
    .RESET(RESET),
    .Q(Q)
);

// Here generating clock
always #5 CLK = ~CLK;

initial begin
    CLK = 0;
    RESET = 0;
    A = 0;
    B = 0;

    // Step 1 is: Reset
    RESET = 1;
    #10;
	 
	  // Step 2 is: 3 + 5 = 8
    RESET = 0;
    A = 8'b00000011;
    B = 8'b00000101;
    #10;

    // Step 3 is: 2 + 1 = 3
    A = 8'b00000010;
    B = 8'b00000001;
    #10;

    // Step 4 is: 255 + 1 = 0 (overflow happens)
    A = 8'b11111111;
    B = 8'b00000001;
    #10;
	 
	  // Step 5 is: 170 + 5 = 175
    A = 8'b10101010; 
    B = 8'b00000101;
    #10;

    $finish;
end

endmodule