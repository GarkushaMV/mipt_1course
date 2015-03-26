#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int isPalindrom(int a) {
	int b = 0;
	int tmp = a;
	while (tmp > 0) {
		b = b * 10 + tmp % 10;
		tmp /= 10;
	}
	return b == a;
}


int main(void) {
	int n;
	scanf("%d", &n);

	int m = 1;

	int i;
	int j = n;
	while (j >= 1) {
		i = n;
		while (i >= j) {
			if (isPalindrom(i * j) && (i * j > m))
				m = i * j;
			i--;
		}
		j--;
	}
	j++;
	printf("%d", m);
	return 0;
}
