#include <stdio.h>
#include <iostream>
#include <math.h>
#include <stdlib.h>

int main() {
	int p;
	scanf("%d", &p);
	double r;
	double T[p];

	for (int i = 0; i < p; i++) {
		scanf("%lf", &r);
		T[i] = pow(r, 3.0/2.0);
	}
	
	for (int i = 0; i < p; i++) {
		for (int j = 0; j < i; j++)
			printf("%lf ", fabs((double)(1 / (double)((double)(1/T[i]) - (double)(1/T[j])))) / T[0]);
		printf("-1\n");
	}

	return 0;
}
