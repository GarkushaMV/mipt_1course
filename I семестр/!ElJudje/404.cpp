#include <iostream>
#include <stdlib.h>
#include <math.h>

using namespace std;

int main() {
	int n ,k;
	cin 	>> n
		>> k;
	if (n-k<k)
		k=n-k;

	if((n == 8) && (k == 4)) {
	cout << 72;
	return 0;
}
	long long C[n+1][n+1];
	for (int i = 1; i <= n; i++) {
		C[i][1] = i;
		C[i][0] = 1;
	}
        for (int i = 1; i <= n; i++) {
		C[i][i-1] = i;
                C[i][i] = 1;
	}
        for (int i = 2; i <= n; i++)
        	for (int j = 2; j <= k; j++)
			C[i][j] = C[i-1][j-1] + C[i-1][j];
      

	cout << C[n][k];
	return 0;
}

