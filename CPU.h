
typedef unsigned char byte;
typedef unsigned short int byte_2;
typedef unsigned int byte_4;
typedef unsigned long int byte_8;

struct CPU{
    char * instructions;

    byte * memory;
    byte * stack;
    byte * heap;
    struct registers * registers;
    //registers
    
};

struct registers{
    byte_8 SP;

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

void push(struct CPU *cpu, byte_2 *src);
void pop();