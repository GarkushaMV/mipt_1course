#include <stdio.h>


int main(void) {
	char c = '\0';
	int i = 0;
	for (; i < 3; i++) {
		scanf("%c", &c);
		c -= '0';
		if (c & 4) printf("r"); else printf("-");
		if (c & 2) printf("w"); else printf("-");
		if (c & 1) printf("x"); else printf("-");
	}

	return 0;
}
