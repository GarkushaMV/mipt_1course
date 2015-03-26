#include <stdio.h>
#include <stdlib.h>
#include <string.h>


struct student
{
	int mark;
	char name[30];
};


int cmp_name(const void * p1, const void * p2)
{
	struct student a = *(struct student *)p1;
        struct student b = *(struct student *)p2;

	int i = 0;
	while (((int) a.name[i] == (int)b.name[i]) && (i < 29))
		i++;
	return ((int)(a.name[i]) - (int)(b.name[i]));
}


int cmp_mark(const void * p1, const void * p2)
{
	struct student a = *(struct student *)p1;
	struct student b = *(struct student *)p2;

	int res =  b.mark - a.mark;
	if (0 == res)
		res = cmp_name(p1, p2);
	return res;
}


struct student * a;


int main(void)
{
	int N;
	scanf("%d", &N);
	a = (struct student *)malloc(N*sizeof(struct student));
	int i;
	for (i = 0; i < N; i++)
		scanf("%s %d", &a[i].name, &a[i].mark);
	qsort(a, N, sizeof(struct student), cmp_name);
	for (i = 0; i < N; i++)
                printf("%s %d\n", a[i].name, a[i].mark);
	printf("\n");
        qsort(a, N, sizeof(struct student), cmp_mark);
        for (i = 0; i < N; i++)
                printf("%s %d\n", a[i].name, a[i].mark);

	return 0;
}
