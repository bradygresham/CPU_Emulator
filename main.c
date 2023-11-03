#include <stdio.h>
#include <stdlib.h>
#include "CPU.h"



int main(int argc, char ** argv){
    struct CPU *cpu = malloc(sizeof(struct CPU));
    initialize_memory(cpu);
    mov_constant(&cpu->registers->V1, 'a');
    mov_register(&cpu->registers->V0, &cpu->registers->V1);
    printf("%d\n", cpu->registers->V0);
    memory_cleanup(cpu);
    return 0;
}