#include <stdio.h>


long int reg[100];
int n = 0;


int main(void) {
	char tmp;
	while (scanf("%c", &tmp) == 1) {
		if ((tmp >= '0') && (tmp <= '9')) {
			reg[n] = tmp - '0';
			n++;
		}
		else {
			switch (tmp) {
				case '+' : reg[n - 2] += reg[n - 1]; n--; break;
				case '-' : reg[n - 2] -= reg[n - 1]; n--; break;
				case '*' : reg[n - 2] *= reg[n - 1]; n--; break;
			}
		}
	}

	printf("%ld", reg[0]);

	return 0;
}
