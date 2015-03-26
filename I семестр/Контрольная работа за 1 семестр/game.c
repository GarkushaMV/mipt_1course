#include <stdio.h>


long int a[10000000];


int main(void) {
	int i = 0;
	long long last;
	while (1 == scanf("%ld", &a[i]))
		i++;
	i--;
	last = a[i];
	i--;
	while ((i >= 0) && (a[i] != last))
		i--;
	if (-1 == i)
		printf("-1");
	else
		printf("%ld", a[i+1]);
	return 0;
}
