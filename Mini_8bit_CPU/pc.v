module pc (
    input wire CLK,
    input wire RESET,
    output reg [3:0] PC
);

    always @(posedge CLK) begin
        if (RESET)
            PC <= 4'b0000;
        else
            PC <= PC + 1'b1;
    end

endmodule