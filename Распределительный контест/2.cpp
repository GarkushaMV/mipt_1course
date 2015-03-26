#include <stdio.h>
#include <iostream>

using namespace std;


int main() {
	int hh, mm, x;
	cin	>> hh
		>> mm
		>> x;

	mm += x;
	hh += mm/60;
	mm = mm % 60;

	printf("%#02d:%#02d", hh, mm);
	return 0;
}
