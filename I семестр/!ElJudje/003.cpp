#include <stdio.h>


using namespace std;


int N;
int table[200][200];
int used[200];
int way[200];

int NO_ANSWER = 1;


void init(void) {
	scanf("%d", &N);

	int i;

	for (i = 0; i < N; i++) {
		used[i] = 0;
		way[i] = 0;
		table[i][i] = -1;
	}

	int j;
	char c;
	int w;
	for (i = 0; i < N; i++) {
		for (j = 0; j < i; j++) {
			scanf("%c", &c);
			w = 44 - (int)(c);
			table[i][j] = w;
			table[j][i] = 0 - w;
		}
		while ('#' != c)
			scanf("%c", &c);
		scanf("%c", &c);
	}
}


void printWay(void) {
	int i;
	for (i = 0; i < N; i++)
		printf("%d ", way[i] + 1);
	NO_ANSWER = 0;
}


void rec(int n) {
	if (n == N)
		printWay();
	else
		if (NO_ANSWER) {
			int i;
			for (i = 0; i < N; i++)
				if (((n > 0) && !(used[i]) && (table[way[n-1]][i] + 1)) || (n == 0)) {
					way[n] = i;
					used[i] = 1;
					rec(n+1);
					used[i] = 0;
				}
		}
}


int main(void) {
	init();
	rec(0);

	return 0;
}
