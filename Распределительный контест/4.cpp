#include <stdio.h>
#include <iostream>

using namespace std;


int main() {
	int N;
	int c;
	cin	>> N;
	for (int i = 1; i<N-1; i++)
		for (int j = 1; j<N-i; j++) {
			c = N - i - j;
			if (i*i + j*j == c*c) {
				cout	<< i*j*c;
				return 0;
			}
		}
	return 0;
}
