#include <stdlib.h>



int main(void) {
	char c = '0';

	for (c = '0'; c <= '9'; c++) {
		printf("		case %d : return '%c'; break;\n", c - '0', c);
	}
	for (c = 'A'; c <= 'Z'; c++) {
                printf("		case %d : return '%c'; break;\n", c - 'A' + 10, c);
        }
	return 0;
}
