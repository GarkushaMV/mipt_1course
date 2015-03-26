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

	int i, j;
        for (i = 0; i < n; i++)
                for (j = 0; j < i; j++)
			if (matrix[i][j])
				printf("%d %d\n", i, j);

	return 0;
}
