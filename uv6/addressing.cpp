#include <stdint.h>
#include "common.h"

uint16_t* addressing_h(uint16_t data) {
	switch (data & 007700) {
	case 000:
		return &R0;
		break;
	case 001:
		return &R1;
		break;
	case 002:
		return &R2;
		break;
	case 003:
		break;
	case 004:
		break;
	case 005:
		break;
	case 006:
		break;
	case 007:
		break;
	case 010:
		return &ram.word[R0 >> 1];
		break;
	}
	return 0;
}
