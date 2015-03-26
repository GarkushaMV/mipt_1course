#include <stdio.h>
#include <iostream>
#include <math.h>

using namespace std;

int main() {
	// формирование массива с максимальным значением в блоке
	int i = 1;
	int s = 0;
	int a[1818];
	while (s<2000000000) {
		s+= i*i;
		a[i] = s;
		i++;
	}

	// основная программа
	int N;
	cin >> N;
	i = 0;

	while (N>a[i])
		i++;
	int flour=i*(i-1)/2;
	int n = N-a[i-1];

	while ((n-i)>=0) {
		n-=i;
		flour++;
	}

	if (n==0)
		cout << flour << " " << i << "\n" ;
	else
		cout << flour+1 << " " << n << "\n";	

	return 0;
}
