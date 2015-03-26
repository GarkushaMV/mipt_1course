#include <stdlib.h>
#include <string.h>


int digit_count(char* s) {
	int i = 0;
	int c = 0;

	for (; i < strlen(s); i++)
		if ((s[i] >= '0') && (s[i] <= '9'))
			c++;

	return c;
}


char* filter_digits(char* s) {
	char* ans = (char *)malloc(digit_count(s)*sizeof(char));

	int i = 0;
	int j = 0;
	for (; i < strlen(s); i++)
                if ((s[i] >= '0') && (s[i] <= '9')) {
			ans[j] = s[i];
			j++;
		}

	return ans;
}
