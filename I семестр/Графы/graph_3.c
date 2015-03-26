#include <stdio.h>


int n;
int matrix[100][100];


void init(void) {
	int m;
	scanf("%d %d", &n, &m);

	int i, j;
	for (i = 0; i < n; i++)
		for (j = 0; j < n; j++)
			matrix[i][j] = 0;
	int a, b;
	for (i = 0; i < m; i++) {
		scanf("%d %d", &a, &b);
		matrix[a][b] = 1;
		matrix[b][a] = 1;
	}	
}


void print(void) {
	int i, j;
	for (i = 0; i < n; i++) {
		for (j = 0; j < n; j++)
			printf("%d ", matrix[i][j]);
		printf("\n");
	}
}


int main(void) {
	init();
	print();

	return 0;
}
