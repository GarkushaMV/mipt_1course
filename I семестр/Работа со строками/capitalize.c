#include <stdio.h>
#include <string.h>

void charToUpperCase(char * c) {
	*c += 'A' - 'a';
}

int check(char * cur) {
	char next = ' ';
	if(1 == scanf("%c", &next)) {
		printf("%c ", *cur);
		if (' ' != next)
			ungetc((int)next, stdin);
		return 0;
	}
	else {
		printf("%c ", *cur);
		return 1;
	}
}

char  	L[26] = "qwertyuiopasdfghjklzxcvbnm";
char	U[26] = "QWERTYUIOPASDFGHJKLZXCVBNM";
char	S[6] = ".,:;!?";

int main(void) {
//	freopen("symbols.in", "r", stdin);
//	freopen("symbols.out", "w", stdout);
	int i = 0;
	char cur = '\0';
	int c = 0;
	while ((1 == scanf("%c", &cur)) && (!c))
		if (NULL != strchr(&S[0], cur))
			c = check(&cur);
		else
			printf("%c", cur);
	return 0;
}
