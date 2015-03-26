#include <math.h>
#include <stdio.h>

/*
struct Drob {
	int a;
	int b;
};
*/


int gcd(int x, int y) { 
	if (y == 0)  
		return x;  
	return gcd(y, x % y);
}


struct Drob plus(struct Drob d1, struct Drob d2) {
	struct Drob ans;
	ans.a = d1.a * d2.b + d1.b * d2.a;
	ans.b = d1.b * d2.b;
	if (0 == ans.a) {
		ans.b = 1;
		return ans;
	}
	int tmp = gcd(abs(ans.a), ans.b);
	ans.a /= tmp;
	ans.b /= tmp;
	return ans;
}


/*
int main(void) {
	struct Drob d1, d2, ans;
	d1.a = -5;
	d2.a = -7;
	d2.b = 4;
	d1.b = 4;
	ans = plus(d1, d2);
	printf("%d %d\n", ans.a, ans.b);
	return 0;
}
*/
