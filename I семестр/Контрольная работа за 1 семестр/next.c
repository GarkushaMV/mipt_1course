#include <stdio.h>
#include <stdlib.h>
#include <string.h>


char word[200];
int next_found = 0;
int n;


int cmp_char(const void * p1, const void * p2) {
	return (int)(*(char *)p1) - (int)(*(char *)p2);
}


int find(int id) {
	int i;

	int ans = -1;
	int d = 99;
	for (i = id +1; i < n; i++)
		if (   ((int)word[i] > (int)word[id])  &&  ((int)(word[i] - (int)word[id] < d))  ) {
			ans = i;
			d = (int)word[i] - (int)word[id];
		}
	return ans;
}

int try(int id) {
	int chng_id = find(id);
	if (chng_id == -1)
		return 0;
	char tmp;
	tmp = word[id];
	word[id] = word[chng_id];
	word[chng_id] =  tmp;
	qsort(&word[id+1], n - id - 2, sizeof(char), cmp_char);
	next_found = 1;
	return 1;
}


int main(void) {
	n = 0;
	int i = 0;
	while (1 == scanf("%c", &word[i]))
		i++;
	n = i;
	i = n - 1;
	while ((i >= 0) && !next_found)
		if (!try(i))
			i--;
	if (1 == next_found)
		for (i = 0; i < n; i++)
			printf("%c", word[i]);
	else
		printf("no word");
}
