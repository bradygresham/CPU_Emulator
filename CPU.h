#pragma once
#include "typedef.h"
#include "ASM.h"

struct CPU{
    char ** instructions;

    byte_4 * RAM;
    byte_4 * stack;
    byte * heap;
    struct registers * registers;
    //registers
    
};

struct registers{
    byte_4 *SP;
    byte_4 *PC;
    
    byte V0;
    byte V1;
    byte V2;
    byte V3;
    byte V4;
    byte V5;
    byte V6;
    byte V7;
    byte V8;
    byte V9;
    byte VA;
    byte VB;
    byte VC;
    byte VD;
    byte VE;
    byte VF;
};

extern void memory_cleanup(struct CPU *cpu);

extern void initialize_memory(struct CPU *cpu);
extern void read_instructions(struct CPU *cpu, char *filename);
extern void run_instructions(struct CPU *cpu);

extern void push(struct CPU *cpu, byte *src);
extern void pop();

extern void print_registers(struct CPU *cpu);
extern void print_instructions(struct CPU *cpu);
