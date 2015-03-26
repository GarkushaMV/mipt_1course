#include <stdio.h>
#include <string.h>

char c[1000];
int m = 1;
int n;
int s = 0;

int value(char c) {
	switch (c) {
		case 'I' : return 1; break;
		case 'V' : return 5; break;
                case 'X' : return 10; break;
                case 'L' : return 50; break;
                case 'C' : return 100; break;
                case 'D' : return 500; break;
                case 'M' : return 1000; break;
	}

	return 0;
}


int main(void) {
	scanf("%s", c);
	n = strlen(c);
	n--;

	while (n >= 0) {
		if (value(c[n]) < m) s -= value(c[n]);
		if (value(c[n]) == m) s += value(c[n]);
		if (value(c[n]) > m) {s += value(c[n]); m = value(c[n]);}

		n--;
	}

	printf("%d\n", s);

	return 0;
}
