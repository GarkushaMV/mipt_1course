#include <stdio.h>
#include <iostream>
#include <math.h>
#include <stdlib.h>

using namespace std;

int main() {

	// основной код
	int n;
	cin >> n;
	int c = 0;
	while (n>3) {
		switch (n%4) {
			case 0: c+=2; n/=4; break;
			case 1: c+=1; n--; break;
                        case 2: c+=1; n/=2; break;
                        case 3: c+=1; n++; break;

		}

	}
	
	cout << c+n;

        return 0;
}

