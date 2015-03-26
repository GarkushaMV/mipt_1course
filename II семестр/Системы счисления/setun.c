#include <stdio.h>


int a[10000], b[10000];


void regUp(int * arr, int l) {
	int i = 0;
	for (i = 0; i < l - 1; i++) {
		arr[i] = arr[i + 1];
	}
}



int main(void) {
	char t = '\0';
	int i = 0;

	scanf("%c", &t);
	while ((t == '$') || (t == '0') || (t == '1')) {
		regUp(a, 10000);
		switch (t) {
			case '$' : a[9999] = -1; break;
			case '0' : a[9999] = 0; break;
			case '1' : a[9999] = 1; break;
		}
		scanf("%c", &t);
	}

	scanf("%c", &t);
        while ((t == '$') || (t == '0') || (t == '1')) {
                regUp(b, 10000);
                switch (t) {
                        case '$' : b[9999] = -1; break;
                        case '0' : b[9999] = 0; break;
                        case '1' : b[9999] = 1; break;
                }
                scanf("%c", &t);
        }

	for (i = 9999; i >= 0; i--) {
		a[i] += b[i];
		switch (a[i]) {
			case -3 : a[i] = 0; a[i - 1]--; break;
			case -2 : a[i] = 1; a[i - 1]--; break;
			case 2 : a[i] = -1; a[i - 1]++; break;
			case 3 : a[i] = 0; a[i - 1]++; break;
		}
	}

	i = 0;
	while ((a[i] == 0) && (i < 10000)) {
		i++;
	}

	if (i == 10000) {
		printf("0");
	}
	for (; i < 10000; i++) {
		if (a[i] == -1) {
			printf("$");
		}
		else {
			printf("%d", a[i]);
		}
	}

	return 0;
}
