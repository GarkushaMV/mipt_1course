#include <stdio.h>
#include <stdlib.h>



struct Point
{
	int x;
	int y;
};


int cmp_Point(const void * p1, const void * p2)
{
	struct Point a = *(struct Point *)p1;
	struct Point b = *(struct Point *)p2;

	int res = a.x*a.x+a.y*a.y-b.x*b.x-b.y*b.y;
	if (res != 0)
		return res;
	res = a.x - b.x;
	if (res != 0)
                return res;
	return a.y - b.y;
}


struct Point * a;


int main(void)
{
	int N;
	scanf("%d", &N);
	a = (struct Point *)malloc(N*sizeof(struct Point));
	int i;
	for (i = 0; i < N; i++)
		scanf("%d %d", &a[i].x, &a[i].y);
	qsort(a, N, sizeof(struct Point), cmp_Point);
	for (i = 0; i < N; i++)
                printf("%d %d\n", a[i].x, a[i].y);

	return 0;
}
