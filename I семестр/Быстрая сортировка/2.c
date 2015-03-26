#include <stdio.h>
#include <stdlib.h>


int * a;

int cmp_int(const void * p1, const void * p2)
{
	return *(int *)p1 - *(int *)p2;
}

int main(void)
{
	int i;
	int N;
	scanf("%d", &N);
	a = (int *)malloc(N*sizeof(int));
	for (i = 0; i<N; i++)
		scanf("%d", &a[i]);
	qsort(a, N, sizeof(int), cmp_int);
	for (i = 0; i<N; i++)
                printf("%d ", a[i]);

	return 0;
}
