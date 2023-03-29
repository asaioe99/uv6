#include "common.h"

void mov();
void movb();

void (* const op[])(void) = {
	mov,
	movb,
}