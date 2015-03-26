#include <stdio.h>

char c;
int a[1001], b[1001];
int t;


int main(void) {
	int k;

	int i = 1000;
	scanf("%c", &c);
	while ((c == '0') || (c == '1')) {
		a[i] = c - '0';
		scanf("%c", &c);
		i--;
	}
	i++;
	for (k = 1000; 2 * k  > 1000 + i; k--) {
		t = a[k];
		a[k] = a[1000 + i - k];
		a[1000 + i - k] = t;
	}

	i = 1000;
	scanf("%c", &c);
        while ((c == '0') || (c == '1')) {
                b[i] = c - '0';
                scanf("%c", &c);
		i--;
        }
	i++;
        for (k = 1000; 2 * k  > 1000 + i; k--) {
                t = b[k];
                b[k] = b[1000 + i - k];
                b[1000 + i - k] = t;
        }

	for (i = 1000; i > 0; i--) {
		a[i] += b[i];
		a[i-1] += a[i] / 2;
		a[i] %= 2;
	}

	i = 0;
	while ((a[i] == 0) && (i < 1000))
		i++;

	for (; i < 1001; i++)
		printf("%d", a[i]);

	return 0;
}
