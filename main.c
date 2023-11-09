#include <stdio.h>
#include <stdlib.h>
#include "CPU.h"
#include "ASM.h"


int main(int argc, char ** argv){
    struct CPU *cpu = malloc(sizeof(struct CPU));
    initialize_memory(cpu);
    //translator(cpu, argv);
    push(cpu, &cpu->registers->V1);
    push(cpu, &cpu->registers->VF);
    mov_constant(&cpu->registers->V1, 'a');
    mov_register(&cpu->registers->VF, &cpu->registers->V1);
    print_registers(cpu);
    
    memory_cleanup(cpu);
    return 0;
}