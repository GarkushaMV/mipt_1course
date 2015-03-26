#include <stdio.h>


char ans[10000];
int s = 0;
int n = 2; int k = 2;


char getDigit(int value) {
	switch (value) {
                case 0 : return '0'; break;
                case 1 : return '1'; break;
                case 2 : return '2'; break;
                case 3 : return '3'; break;
                case 4 : return '4'; break;
                case 5 : return '5'; break;
                case 6 : return '6'; break;
                case 7 : return '7'; break;
                case 8 : return '8'; break;
                case 9 : return '9'; break;
                case 10 : return 'A'; break;
                case 11 : return 'B'; break;
                case 12 : return 'C'; break;
                case 13 : return 'D'; break;
                case 14 : return 'E'; break;
                case 15 : return 'F'; break;
                case 16 : return 'G'; break;
                case 17 : return 'H'; break;
                case 18 : return 'I'; break;
                case 19 : return 'J'; break;
                case 20 : return 'K'; break;
                case 21 : return 'L'; break;
                case 22 : return 'M'; break;
                case 23 : return 'N'; break;
                case 24 : return 'O'; break;
                case 25 : return 'P'; break;
                case 26 : return 'Q'; break;
                case 27 : return 'R'; break;
                case 28 : return 'S'; break;
                case 29 : return 'T'; break;
                case 30 : return 'U'; break;
                case 31 : return 'V'; break;
                case 32 : return 'W'; break;
                case 33 : return 'X'; break;
                case 34 : return 'Y'; break;
                case 35 : return 'Z'; break;
	}

	return '0';
}


int getValue(char digit) {
	switch (digit) {
                case '0' : return 0; break;
                case '1' : return 1; break;
                case '2' : return 2; break;
                case '3' : return 3; break;
                case '4' : return 4; break;
                case '5' : return 5; break;
                case '6' : return 6; break;
                case '7' : return 7; break;
                case '8' : return 8; break;
                case '9' : return 9; break;
                case 'A' : return 10; break;
                case 'B' : return 11; break;
                case 'C' : return 12; break;
                case 'D' : return 13; break;
                case 'E' : return 14; break;
                case 'F' : return 15; break;
                case 'G' : return 16; break;
                case 'H' : return 17; break;
                case 'I' : return 18; break;
                case 'J' : return 19; break;
                case 'K' : return 20; break;
                case 'L' : return 21; break;
                case 'M' : return 22; break;
                case 'N' : return 23; break;
                case 'O' : return 24; break;
                case 'P' : return 25; break;
                case 'Q' : return 26; break;
                case 'R' : return 27; break;
                case 'S' : return 28; break;
                case 'T' : return 29; break;
                case 'U' : return 30; break;
                case 'V' : return 31; break;
                case 'W' : return 32; break;
                case 'X' : return 33; break;
                case 'Y' : return 34; break;
                case 'Z' : return 35; break;
	}

	return 0;
}


void countSum(void) {
	char c = '\0';
	while (!(((c >= '0') && (c <= '9')) || ((c >= 'A') && (c <= 'Z')))) {
		scanf("%c", &c);
	}
	while ( ((c >= '0') && (c <= '9')) || ((c >= 'A') && (c <= 'Z')) ) {
		s *= n;
		s += getValue(c);
		scanf("%c", &c);
	}
}


int main(void) {
	scanf("%d", &n);
	countSum();
	scanf("%d", &k);

	int i = 9999;
	while (s != 0) {
		ans[i] = getDigit(s % k);
		s /= k;
		i--;
	}
	for (; i < 10000; i++) {
		printf("%c", ans[i]);
	}

	return 0;
}
