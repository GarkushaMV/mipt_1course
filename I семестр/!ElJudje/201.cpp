#include <stdio.h>
#include <iostream>
#include <stdlib.h>
#include <math.h>

using namespace std;

int main() {

	int n;
	cin >> n;

	int c = 0;

	for (int i=0; i<=n/4; i++)
		for (int j=0; j<=(n-4*i)/3; j++)
			for (int k=0; k<=(n-4*i-3*j)/2; k++)
				c++;

	
	cout << c;
	return 0;
}

