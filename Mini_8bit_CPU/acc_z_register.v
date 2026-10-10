module acc_z_register (
    input wire CLK,
    input wire RESET,
    input wire acc_we,
    input wire [7:0] data_in,
    output reg [7:0] Q,
    output reg Z
);

    always @(posedge CLK) begin
        if (RESET) begin
            Q <= 8'h00;
            Z <= 1'b1;
        end
        else if (acc_we) begin
            Q <= data_in;

            if (data_in == 8'h00)
                Z <= 1'b1;
            else
                Z <= 1'b0;
        end
    end

endmodule