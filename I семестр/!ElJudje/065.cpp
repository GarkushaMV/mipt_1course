#include <stdio.h>
#include <iostream>
#include <stdlib.h>
#include <math.h>

using namespace std;

int min (int a, int b) {
	if (a<b)
		return a;
	else
		return b;
	return 0;
}

int main() {
	int n;
	cin >> n;
	int a[n+1][3];
	for (int i = 1; i<=n; i++)
			cin	>> a[i][0]
				>> a[i][1]
				>> a[i][2];

	int t[n+1];

	t[0] = 0;
	t[1] = a[1][0];
	t[2] = min(a[1][0]+a[2][0], a[1][1]);

	for (int i = 3; i<=n; i++)
		t[i] = min(t[i-1] + a[i][0], min(t[i-2]+a[i-1][1], t[i-3] + a[i-2][2]));

	cout << t[n];

	
	return 0;
}

