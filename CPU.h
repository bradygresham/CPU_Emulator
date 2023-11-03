
typedef unsigned char byte;
typedef unsigned short int byte_2;
typedef unsigned int byte_4;

struct CPU{
    char * instructions;

    unsigned char * memory;
    unsigned char * stack;
    unsigned char * heap;
    struct registers * registers;
    //registers
    
};

struct registers{
    byte_2 V0;
    byte_2 V1;
    byte_2 V2;
    byte_2 V3;
    byte_2 V4;
    byte_2 V5;
    byte_2 V6;
    byte_2 V7;
    byte_2 V8;
    byte_2 V9;
    byte_2 VA;
    byte_2 VB;
    byte_2 VC;
    byte_2 VD;
    byte_2 VE;
    byte_2 VF;
};

void memory_cleanup(struct CPU *cpu);

void mov_constant(byte_2 *dest, byte_2 value);
void mov_register(byte_2 *dest, byte_2 *src);

void initialize_memory(struct CPU *cpu);