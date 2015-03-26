#include <stdio.h>


int n;
int matrix[100][100];


void init(void) {
	scanf("%d", &n);
	int i, j;
	for (i = 0; i < n; i++)
		for (j = 0; j < n; j++)
			scanf("%d", &matrix[i][j]);
}


int main(void) {
	init();

	int s = 0;

	int i, j;
        for (i = 0; i < n; i++)
                for (j = 0; j < n; j++)
			s += matrix[i][j];

	printf("%d", s/2);

	return 0;
}
