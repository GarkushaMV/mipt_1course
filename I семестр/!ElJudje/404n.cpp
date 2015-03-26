#include <stdio.h>
 unsigned long long C(long n,long k) {
    if(k == 0 || n == k) return 1;
    return C(n - 1, k - 1) + C(n - 1, k);
 }
 int main() {
    long n, k;
    scanf ("%ld%ld", &n, &k);
    printf ("%llu ", C(n, k));
    return 0;
 }
