#include "CPU.h"
#include <stdlib.h>
void memory_cleanup(struct CPU *cpu)
{
    free(cpu->memory);
    free(cpu->registers);
    free(cpu->stack);
    free(cpu->heap);
    free(cpu->instructions);
    free(cpu);
}
void mov_constant(byte_2 *dest, byte_2 value)
{
    *dest = value;
}
void mov_register(byte_2 *dest, byte_2 *src)
{
    *dest = *src;
}
void initialize_memory(struct CPU *cpu)
{
    cpu->memory = malloc(1024);
    cpu->registers = malloc(256);

    cpu->stack = malloc(256);
    cpu->registers->SP = &cpu->stack[0];

    cpu->heap = malloc(256);
    cpu->instructions = malloc(256);
}
void push(struct CPU *cpu, byte_2 *src)
{
    cpu->stack = malloc(sizeof(src));
    cpu->registers->SP += sizeof(src);
}