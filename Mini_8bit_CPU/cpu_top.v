module cpu_top (
    input wire CLK,
    input wire RESET,
    output wire [7:0] Q,
    output wire Z,
    output wire [3:0] PC
);

    wire [11:0] instruction;
    wire [3:0] opcode;
    wire [7:0] operand;
    wire [2:0] alu_op;
    wire acc_we;
    wire [7:0] alu_result;

    assign opcode  = instruction[11:8];
    assign operand = instruction[7:0];

    pc PC_UNIT (
        .CLK(CLK),
        .RESET(RESET),
        .PC(PC)
    );

    program_rom ROM_UNIT (
        .PC(PC),
        .instruction(instruction)
    );

    control_unit CONTROL_UNIT (
        .opcode(opcode),
        .alu_op(alu_op),
        .acc_we(acc_we)
    );

    alu ALU_UNIT (
        .ACC(Q),
        .operand(operand),
        .alu_op(alu_op),
        .result(alu_result)
    );

    acc_z_register ACC_UNIT (
        .CLK(CLK),
        .RESET(RESET),
        .acc_we(acc_we),
        .data_in(alu_result),
        .Q(Q),
        .Z(Z)
    );

endmodule