#include "mmc.h"
#include "common.h"

uint8_t read(uint16_t addr) {
	if (addr == 0777776) {
		return ((cur_mode ? 0b00:0b11) << 14) | ((prv_mode ? 0b00 : 0b11) << 12) | (pri << 5) | (N << 3) | (Z << 2) | (V << 1) | C;
	}
	else {
		return ram.byte[addr];
	}

	return 0377;
}

uint16_t fetch(uint16_t addr) {
	return (read(addr) << 8) | read(addr);
}