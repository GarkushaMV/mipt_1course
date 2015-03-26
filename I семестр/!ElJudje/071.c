#include <stdio.h>
#include <stdlib.h>



int * l;
int n;
int k;


void init(void) {
	scanf("%d %d", &n, &k);
	l = (int *)malloc(n * sizeof(int));
	int i = 0;
	for (i = 0; i < n; i++) {
		scanf("%d", &l[i]);
	}
}


int check(int a) {
	int c = 0;
	int i = 0;
	for (i = 0; i < n; i++) {
		c += l[i] / a;
	}

	return c;
}


int length(int a, int b) {
	if(a + 1 == b) {
		if ((b == 2) && (check(1) < k)) {
			return 0;
		}
		if (check(b) >= k) {
			return b;
		}
		return a;
	}
	if (check(0.5 *(a + b)) >= k) {
		return length(0.5 * (a + b), b);
	}
	return length(a, 0.5 * (a + b));
}


int main(void) {
	init();
	printf("%d", length(1, 10000001));
	free(l);

	return 0;
}
