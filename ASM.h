#pragma once
#include "CPU.h"

extern char ** instructions;
void translator(struct CPU *cpu, char ** filepath);
void step();

