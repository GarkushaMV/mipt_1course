#include <stdio.h>
#include <stdlib.h>
#include <string.h>


char c[2000];


void removeGoodPairs(void) {
	int i = 0;
	int j = 0;
	int f = 1;
	while (f) {
		f = 0;
		for (i = 0; i < strlen(c) - 1; i++) {
			if ((c[i] == '(') && (c[i + 1] == ')')) {
				f = 1;
				if (strlen(c) == 2) {
					c = "";
				}
				else {
					for (j = i; j < strlen(c) - 1; j++) {
						c[j] = c[j + 2];
					}
				}
			}
		}
	}
}


int main(void) {
	scanf("%s", c);
	if (strlen(c) % 2 == 1) {
		printf("NO");
		return 0;
	}

	removeGoodPairs();

	int count = 0;
	int i = 0;
	for (i = 0; i < 0.5 * strlen(c); i++) {
		if (c[i] == ')') {
			count++;
		}
		if (c[strlen(c) - i - 1] == '(') {
			count++;
		}
	}

	printf("%d", count);

	return 0;
}

