#include <stdio.h>
#include <iostream>
#include <stdlib.h>
#include <math.h>

using namespace std;

int main() {
	/*int n;
	cin >> n;
	double a[n][2];
	for (int i = 0; i<n; i++) {
		cin >> a[i][0];
		a[i][1] = i;
	}
	float t;
	int f = 1;
	while (f) {
		f = 0;
		for (int i = 1; i<n; i++)
			if (a[i][0] < a[i-1][0]) {
				f = 1;
				t = a[i][0];
				a[i][0] = a[i-1][0];
				a[i-1][0] = t;
				t = a[i][1];
                                a[i][1] = a[i-1][1];
                                a[i-1][1] = t;
			}
	}
	int l,r,m,j;
	cin >> m;
	for (int i = 0; i<m; i++) {
		cin	>> l
			>> r;
		j = 0;
		while ((a[j][1]>(r-1)) | (a[j][1]<l))
			j++;
		cout	<< a[j][0]
			<< "\n";
	}*/
	for (int i = 0; i<250000; i++)
		for (int j = 0; j<500000; j++)
			{};
	return 0;
}

