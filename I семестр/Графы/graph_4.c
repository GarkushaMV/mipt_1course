#include <stdio.h>


int n;
int matrix[100][100];
int left[100];
int right[100];


void init(void) {
	int m;
	scanf("%d %d", &n, &m);

	int i, j;
	for (i = 0; i < n; i++) {
		for (j = 0; j < n; j++)
			matrix[i][j] = 0;
		left[i] = 0;
		right[i] = 0;
	}
	int a, b;
	for (i = 0; i < m; i++) {
		scanf("%d %d", &a, &b);
		matrix[a][b] = 1;
		matrix[b][a] = 1;
	}
}


void to_left(int id);
void to_right(int id);

void to_left(int id) {
	if (0 == left[id]) {
		left[id] = 1;

		int i;
	
		for (i = 0; i < n; i++)
			if (matrix[i][id])
				to_right(i);
	}
}


void to_right(int id) {
	if (0 == right[id]) {
     		right[id] = 1;

        	int i;

        	for (i = 0; i < n; i++)
               	 	if (matrix[i][id])
         	               to_left(i);
	}
}


int check(void) {
	int f = 0;
	int i;
	for (i = 0; i < n; i++)
		if ((left[i] == right[i]) && (right[i] == 0))
			left[i] = 1;
		else
			f = f || (left[i] == right[i]);

	return !f;
}

int main(void) {
	init();
	to_left(0);
	if (check()) {
		printf("YES\n");
		int i;
		for (i = 0; i < n; i++)
			if (left[i])
				printf("%d ", i);
	}
	else
		printf("NO");

	return 0;
}
