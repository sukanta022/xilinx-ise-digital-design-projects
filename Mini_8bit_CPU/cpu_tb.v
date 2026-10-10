`timescale 1ns/1ps

module cpu_tb;

    reg CLK;
    reg RESET;

    wire [7:0] Q;
    wire Z;
    wire [3:0] PC;

    integer cycle;

    cpu_top DUT (
        .CLK(CLK),
        .RESET(RESET),
        .Q(Q),
        .Z(Z),
        .PC(PC)
    );

    // Clock period = 10 ns
    initial begin
        CLK = 1'b0;
        forever #5 CLK = ~CLK;
    end

    initial begin
        RESET = 1'b1;
        cycle = 0;

        $display("Cycle | Executed PC | ACC(Q) | Z | Next PC");
        $display("-------------------------------------------");

        // One rising edge with RESET = 1
        @(posedge CLK);
        #1;
        $display(
            "%0d     | RESET       | %02h     | %b | %0d",
            cycle, Q, Z, PC
        );

        // Release reset after the rising edge
        RESET = 1'b0;
// Execute seven instructions
        repeat (7) begin
            @(posedge CLK);
            #1;
            cycle = cycle + 1;

            $display(
                "%0d     | %0d           | %02h     | %b | %0d",
                cycle, PC - 1'b1, Q, Z, PC
            );
        end

		$finish;
    end

endmodule