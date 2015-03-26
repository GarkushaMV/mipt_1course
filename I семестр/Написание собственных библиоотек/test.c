#include "my_lib_power.h"

#include <iostream>
#include <math.h>

using namespace std;

int four() { return 4; }

#include <stdlib.h>

int main()
{
	int a;
	int n;

	cin	>> a
		>> n;

	cout << (pow(a, n) == power(a, n));
}
