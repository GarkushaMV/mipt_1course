#include <stdio.h>


unsigned char reg[5];


void add(void) {
	unsigned char id1, id2;
	scanf("%hhu %hhu", &id1, &id2);
	reg[id1 - 5] += reg[id2 - 5];
	reg[id1 - 5] %= 256;
}


void sub(void) {
	unsigned char id1, id2;
        scanf("%hhu %hhu", &id1, &id2);
        reg[id1 - 5] -= reg[id2 - 5];
        reg[id1 - 5] %= 256;
}


void mov(void) {
	unsigned char id, value;
        scanf("%hhu %hhu", &id, &value);
        reg[id - 5] = value;
        reg[id - 5] %= 256;

}


void ir(void) {
	unsigned char i = 0;
	for (; i < 4; i++) {
		printf("%hhu ", reg[i]);
	}
	printf("\n");
}


void reset(void) {
        unsigned char i = 0;
        for (; i < 5; i++) {
                reg[i] = 0;
        }
}

int main(void) {
	unsigned char cmd = 0;
	reset();
	scanf("%hhu", &cmd);
	while (cmd) {
		switch (cmd) {
			case 1 : add(); break;
			case 2 : sub(); break;
			case 3 : mov(); break;
			case 4 : ir(); break;
		}
		scanf("%hhu", &cmd);
	}

	return 0;
}
