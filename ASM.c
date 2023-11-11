#include "ASM.h"

void mov_constant(byte *dest, byte value)
{
    *dest = value;
}
void mov_register(byte *dest, byte *src)
{
    *dest = *src;
}

void lea(byte *dest, byte *src)
{
    
}
