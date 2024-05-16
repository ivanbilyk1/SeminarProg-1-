#include "stdio.h"

void Endiannes() {
	unsigned short int n = 0x1234;
	unsigned char* p = (unsigned char*)&n;

	if (p[0] == 0x12 && p[1] == 0x34) {
		printf("Big-endian\n");
	}
	else if (p[0] == 0x34 && p[1] == 0x12) {
		printf("Little-endian\n");
	}
}

void IntToChar() {
	unsigned short int n = 0x1234;
	unsigned char p = (unsigned char)n;

	printf("Int = %u, Char = %d", n, p);
}

int main() {
	Endiannes();
	IntToChar();
	return 0;
}