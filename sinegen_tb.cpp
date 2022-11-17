#include "verilated.h"
#include "verilated_vcd_c.h"
#include "Vsinegen.h"
#include "vbuddy.cpp" // include vbuddy code

#define MAX_SIM_CYC 1000000
#define ADDRESS_WIDTH 8
#define ROM_SZ 256

int main(int argc, char **argv, char **env) {
    int simcyc; // simulation clock count
    int tick;   // each clk cycle has 2 ticks for 2 edges

    Verilated::commandArgs(argc, argv);

    Vsinegen* top = new Vsinegen; // init top verilog instance
    Verilated::traceEverOn(true); // init trace dump
    VerilatedVcdC* tfp = new VerilatedVcdC;
    top->trace (tfp, 99);
    tfp->open ("sinegen.vcd");

    // init Vbuddy
    if (vbdOpen() != 1) return (-1);
    vbdHeader("L2T1: SigGen");
    // vbdSetMode(1); // Flag mode set to one-shot

    // initialize simulation inputs
    top->clk = 200;
    top->rst = 300;
    top->en = 400;
    top->incr = 500;

    // run simulation for MAX_SIM_CYC clock cycles
    for (simcyc = 0; simcyc < MAX_SIM_CYC; simcyc++) {
        // dump variables into VCD file and toggle clock
        for (tick = 0; tick < 2; tick++){
            tfp->dump (2*simcyc + tick);
            top->clk = !top->clk;
            top->eval();
        }

        top->incr = vbdValue(); // changes frequency of the sinewave generated
        // plot ROM output and print cycle count
        vbdPlot(int(top->dout), 0, 255);
        vbdCycle(simcyc);

        // either simulation finished, or 'q' is pressed
        if ((Verilated::gotFinish()) || (vbdGetkey() == 'q'))
            exit(0);
    }

    vbdClose();   
    tfp->close();
    exit(0);

}