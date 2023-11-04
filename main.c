#include <stdio.h>
#include <stdlib.h>
#include "CPU.h"



int main(int argc, char ** argv){
    struct CPU *cpu = malloc(sizeof(struct CPU));
    initialize_memory(cpu);
    printf("%d\n", cpu->registers->SP);
    printf("%d\n", &cpu->stack[0]);
    push(cpu, &cpu->registers->V1);
    push(cpu, &cpu->registers->VF);
    mov_constant(&cpu->registers->V1, 'a');
    mov_register(&cpu->registers->VF, &cpu->registers->V1);
    
    
    memory_cleanup(cpu);
    return 0;
}