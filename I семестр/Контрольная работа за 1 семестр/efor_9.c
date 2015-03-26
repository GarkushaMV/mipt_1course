#include <stdio.h>


int main(void) {
	FILE * in;
	FILE * out;
	in = fopen("input.txt", "r");
	out = fopen("output.txt", "w");
	int s[2];
	s[0] = 0;
	s[1] = 0;
	int i = 0;
	char c;
	while (1 == scanf(in, "%c", c) {
		s[i%2] += (int)c - (int)'0';
		i++;
	}
	if 
}
