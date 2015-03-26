#include <stdio.h>
#include <iostream>


int main() {
	int N;
	scanf("%d", &N);
	bool is_prime[2*N];
	is_prime[0] = false;
	is_prime[1] = false;
	for (int i = 2; i<N; i++)
		is_prime[i] = true;
	for (int i = 2; i<N; i++)
		if (is_prime[i])
			for (int j = 2*i; j<N; j += i)
				is_prime[j] = false;

	long long s = 0;
	for (int i = 2; i<N; i++)
		if (is_prime[i])
			s += i;

	printf("%lld", s);

	return 0;
}
