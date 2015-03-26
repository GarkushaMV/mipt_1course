#include <stdio.h>


int A[1024][1024], B[1024][1024];


int gcd(int a, int b) {
	if (!(a*b))
		return a + b;
	return gcd(b, a % b);
}


int main(void) {
	int n = 0;
	int d = 0;
	scanf("%d %d", &n, &d);

	int i = 0, j = 0;
	for (i = 0; i < n; i++) {
		for (j = 0; j < n; j++) {
			A[i][j] = gcd(i + 1, j + 1);
			B[i][j] = gcd(n - i + 1, n - j + 1);
		}
	}

	int s = 0;
	int res = 0;
	int k = 0;
	for (i = 0; i < n; i++) {
        	for (j = 0; j < n; j++) {
			s = 0;
			for (k = 0; k < n; k++) 
				s += A[i][k]*B[j][k];
			res += !(s % d);
		}
	}

	printf("%d", res);

	return 0;
}
