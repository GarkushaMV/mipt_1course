#include <stdio.h>


int main(void) {
	char c[150];
	scanf("%s", c);

	switch (c[0]) {
		case 'e' : printf("Big-endian"); break;
		case 'a' : printf("RISC"); break;
		case 'p' : printf("pc"); break;
		case 'i' : printf("bne"); break;
	}

	return 0;
}
