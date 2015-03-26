#include <stdio.h>
#include <iostream>

using namespace std;

int M[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

int main() {
	int y, m, d;
	cin	>> y
		>> m
		>> d;

	if ((m<1) || (m>12) || (y<0)) {
		cout	<< "NO";
		return 0;
	}

	if (y%4 == 0)	M[1]++;
	if (y%100 == 0)   M[1]--;
	if (y%400 == 0)   M[1]++;

	if ((d <= M[m-1]) && (d > 0))
		cout 	<< "YES";
	else
		cout	<< "NO";

	return 0;
}
