#pragma once
typedef unsigned char byte;
typedef unsigned short int byte_2;
typedef unsigned int byte_4;
typedef unsigned long int byte_8;

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

extern void mov_constant(byte *dest, byte value);
extern void mov_register(byte *dest, byte *src);

extern void initialize_memory(struct CPU *cpu);
extern void read_instructions(struct CPU *cpu, char *filename);
extern void run_instructions(struct CPU *cpu);

extern void push(struct CPU *cpu, byte *src);
extern void pop();

extern void print_registers(struct CPU *cpu);
extern void print_instructions(struct CPU *cpu);
