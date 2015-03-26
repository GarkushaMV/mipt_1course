#include <stdio.h>
#include <stdlib.h>
#define size 16



int main(void) {
	char *x = malloc(size*sizeof(char));
	printf("%lld", x);
	free(x);

	return 0;
}
