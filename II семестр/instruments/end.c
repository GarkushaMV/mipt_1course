#include <stdio.h>


int main(void) {
	long long int a = 1;
	char b = *((char *)(&a));

	if (b != 0)
		printf("Little-endian");
	else
		printf("Big-endian");

	return 0;
}

