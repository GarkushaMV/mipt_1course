#include <stdio.h>
#include <iostream>
#include <stdlib.h>
#include <math.h>

using namespace std;
	
int N,M;
int T[20];

int maxn = 0;
void rec(int i, int l) {
	if (i<N) {
		rec(i+1,l);
		rec(i+1,l+T[i]);
	}
	else 
		if ((l<=M)&(l>maxn))
			maxn = l;
}

int main() {
	cin	>> M
		>> N;
	for (int i = 0; i<N; i++)
		cin >> T[i];

	rec(0,0);

	cout << maxn;
	return 0;
}

