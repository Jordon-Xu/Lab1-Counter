#include "Vtop.h"
#include "verilated.h"
#include "verilated_vcd_c.h"
#include "vbuddy.cpp"

int main(int argc, char **argv, char **env) {
    int i;
    int clk;

    Verilated::commandArgs(argc, argv);

    // init top verilog instance
    Vtop* top = new Vtop;

    // init trace dump
    Verilated::traceEverOn(true);
    VerilatedVcdC* tfp = new VerilatedVcdC;
    top->trace(tfp, 99);
    tfp->open("top.vcd");

    // init Vbuddy
    if (vbdOpen() != 1) return(-1);
    vbdHeader("Lab 1: Top Level");
    vbdSetMode(1);

    // initialize simulation inputs
    top->clk = 1;
    top->rst = 1;
    top->en  = 0;  
    // top->v   = 0;

    // run simulation for many clock cycles
    for (i=0; i<300; i++) {

        // dump variables into VCD file and toggle clock
        for (clk=0; clk<2; clk++) {
            tfp->dump(2*i+clk);  // unit is in ps!!!
            top->clk = !top->clk;
            top->eval();
        }

        // Send count value to Vbuddy
        vbdHex(4, (int(top->bcd) >> 12) & 0xF);
        vbdHex(3, (int(top->bcd) >> 8) & 0xF);
        vbdHex(2, (int(top->bcd) >> 4) & 0xF);
        vbdHex(1, int(top->bcd) & 0xF);
        vbdCycle(i+1);

        // change input stimuli
        top->rst = (i < 2) | (i == 15);
        // top->v = vbdValue();
        top->en = vbdFlag();
        if (vbdFlag()) {
            top->clk = !top->clk;
        }
        if (Verilated::gotFinish()) exit(0);
    }

    vbdClose();
    tfp->close();
    exit(0);
}
