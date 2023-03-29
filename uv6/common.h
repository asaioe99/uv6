#include <stdint.h>

//2ƒIƒyƒ‰ƒ“ƒh–½—ß
#define MOV  001
#define MOVB 011
#define CMP  002
#define CMPB 012
#define BIT  003
#define BITB 013




#define CLR  0150
#define CLRB 0050

union ram_type {
	uint8_t byte[0177777];
	uint16_t word[077777];
};

bool N, Z, V, C; //at 0777776 2.3.2 Processor Status Word
bool cur_mode, prv_mode;
uint8_t pri;
uint16_t R0, R1, R2, R3, R4, R5, KR6, UR6, R7;

ram_type ram;

