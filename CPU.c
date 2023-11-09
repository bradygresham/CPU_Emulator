#include "CPU.h"
#include <stdlib.h>
#include <stdio.h>
void memory_cleanup(struct CPU *cpu)
{
    free(cpu->RAM);
    free(cpu->registers);
    free(cpu->stack);
    free(cpu->heap);
    free(cpu->instructions);
    free(cpu);
}
void mov_constant(byte *dest, byte value)
{
    *dest = value;
}
void mov_register(byte *dest, byte *src)
{
    *dest = *src;
}
void initialize_memory(struct CPU *cpu)
{
    cpu->RAM = malloc(1024);
    cpu->registers = malloc(256);

    cpu->stack = malloc(256);
    cpu->registers->SP = &cpu->stack[0];

    cpu->heap = malloc(256);
    cpu->instructions = malloc(256);
}
void push(struct CPU *cpu, byte *src)
{
    cpu->stack = malloc(sizeof(src));
    cpu->registers->SP += sizeof(src);
}

void print_registers(struct CPU *cpu)
{
    printf("V0: %d\n", cpu->registers->V0);
    printf("V1: %d\n", cpu->registers->V1);
    printf("V2: %d\n", cpu->registers->V2);
    printf("V3: %d\n", cpu->registers->V3);
    printf("V4: %d\n", cpu->registers->V4);
    printf("V5: %d\n", cpu->registers->V5);
    printf("V6: %d\n", cpu->registers->V6);
    printf("V7: %d\n", cpu->registers->V7);
    printf("V8: %d\n", cpu->registers->V8);
    printf("V9: %d\n", cpu->registers->V9);
    printf("VA: %d\n", cpu->registers->VA);
    printf("VB: %d\n", cpu->registers->VB);
    printf("VC: %d\n", cpu->registers->VC);
    printf("VD: %d\n", cpu->registers->VD);
    printf("VE: %d\n", cpu->registers->VE);
    printf("VF: %d\n", cpu->registers->VF);
    printf("SP: %p\n", cpu->registers->SP);
    printf("PC: %p\n", cpu->registers->PC);

}
