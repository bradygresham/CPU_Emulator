#pragma once
#include "typedef.h"

extern void mov_constant(byte *dest, byte value);
extern void mov_register(byte *dest, byte *src);
extern void lea(byte *dest, byte *src);
extern void add(byte *dest, byte *src);
extern void sub(byte *dest, byte *src);
extern void mul(byte *dest, byte *src);
extern void divide(byte *dest, byte *src);
extern void mod(byte *dest, byte *src);
extern void cmp(byte *dest, byte *src);
extern void jmp(byte *dest);