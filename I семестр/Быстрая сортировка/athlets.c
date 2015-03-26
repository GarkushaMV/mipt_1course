#include <stdio.h>
#include <stdlib.h>



int * m;
int * s;


int cmp_int(const void * p1, const void * p2) {
	return *(int *)p1 - *(int *)p2;
}


int main(void) {
	int i;
	int N;

	scanf("%d", &N);

	m = (int *)malloc(N*sizeof(int));
	s = (int *)malloc(N*sizeof(int));

	for (i = 0; i<N; i++)
		scanf("%d %d", &m[i], &s[i]);

	qsort(m, N, sizeof(int), cmp_int);
	qsort(s, N, sizeof(int), cmp_int);

	int maxm = m[0];
	int c = 1;
	i = 1;
	while (i < N) {
		while ((i < N) && (s[i] < maxm))
			i++;
		if (i < N) {
			maxm += m[i];
			c++;
			i++;
		}
	}

       	printf("%d ", c);

	free(m);
	free(s);

	return 0;
}
