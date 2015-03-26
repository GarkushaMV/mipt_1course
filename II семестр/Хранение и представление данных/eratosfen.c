#include <stdio.h>
#include <stdlib.h>
#include <time.h>



char * is_prime;


int countPrimes(long long n) {
	int P = 0;

	is_prime = (char *)malloc((n + 1) * sizeof(char));

	long long i, j;

	for (i = 0; i <= n; i++) {
		is_prime[i] = 1;
	}


	// Решето Эратосфена с подсчетом количества
        for (i = 2; i <= n; i++) {
                if (is_prime[i]) {
                        P++;
                        for (j = i * i; j <= n; j += i) {
                                is_prime[j] = 0;
                        }
                }
        }

	free(is_prime);

	return P;
}


void readInputData(void * x) {
	scanf("%lld", (long long *)x);
}



void writeOutputData(int c, long long n) {
	printf("%d", c);
}


int main(void) {
	long long n;
	readInputData(&n);

	writeOutputData(countPrimes(n), n);

	return 0;
}

