#include <stdio.h>

int s = 0;
char c;


int main(void) {
	while (scanf("%c", &c) == 1) {
		if ((c == '0') || (c == '1') || (c == '2'))
			s = s * 3 + c - '0';
	}

	printf("%d\n", s);

	return 0;
}
