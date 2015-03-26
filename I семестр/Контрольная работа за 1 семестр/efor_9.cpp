#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#pragma comment(linker,"/STACK:10000000")
#define N 1001
int main() {
	char x,i=0;
	long long sum1=0,sum2=0;
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	while((scanf("%c",&x)!=-1)&&(x!='\n')&&(x!='\0'))
		if (i==0) {
			sum1+=(x-'0');
			i=1;
		} else {
			sum2+=(x-'0');
			i=0;
		}
	sum1-=sum2;
	if (sum1%11==0) 
		printf("YES\n"); 
	else 
		printf("NO\n");
	return 0;
}