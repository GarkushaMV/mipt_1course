#include <stdio.h>
#include <iostream>
#include <stdlib.h>
#include <math.h>

using namespace std;

int a[20][20][20];
int sum[20][20][20];
int m,n,d;

void read_data() {
	cin	>> m
		>> n
		>> d;

	for (int i = 0; i<d; i++)
		for (int j = 0; j<m; j++)
			for (int k = 0; k<n; k++)
				cin	>> a[i][j][k];
}

void find_summ() {
	sum[0][0][0] = a[0][0][0];
	for (int i = 1; i<d; i++)
		sum[i][0][0] = sum[i-1][0][0] + a[i][0][0];
	for (int i = 1; i<m; i++)
		sum[0][i][0] = sum[0][i-1][0] + a[0][i][0];
	for (int i = 1; i<n; i++)
		sum[0][0][i] = sum[0][0][i-1] +  a[0][0][i];

	for(int i = 1; i<d; i++)
		for (int j = 1; j<m; j++)
			sum[i][j][0] = a[i][j][0] - sum[i-1][j-1][0] + sum[i-1][j][0] + sum[i][j-1][0];
	for(int i = 1; i<d; i++)
                 for (int j = 1; j<n; j++)
                         sum[i][0][j] = a[i][0][j] - sum[i-1][0][j-1] + sum[i-1][0][j] + sum[i][0][j-1];
	for(int i = 1; i<m; i++)
                 for (int j = 1; j<n; j++)
                         sum[0][i][j] = a[0][i][j] - sum[0][i-1][j-1] + sum[0][i-1][j] + sum[0][i][j-1];

	for (int i = 1; i<d; i++)
		for (int j = 1; j<m; j++)
			for (int k = 1; k<n; k++)
				sum[i][j][k] = sum[i-1][j-1][k-1] -  sum[i][j-1][k-1] - sum[i-1][j][k-1] - sum[i-1][j-1][k] + sum[i][j][k-1] + sum[i][j-1][k] + sum[i-1][j][k] + a[i][j][k];  
}

int max(int a, int b) {
	if (b>a)
		return b;
	else
		return a;
}

int main() {
	read_data();
	find_summ();

	int ans = sum[0][0][0];
	for (int i = 0; i<d; i++)
                for (int j  = 0; j<m; j++)
                        for (int k = 0; k<n; k++)
				for (int ii = 0; ii<i; ii++)
               				for (int jj = 0; jj<j; jj++)
                        			for (int kk = 0; kk<k; kk++)
							ans = max(max(ans,sum[i][j][k] - sum[i][j][kk] - sum[i][jj][k] - sum[ii][j][k] + sum[i][jj][kk] + sum[ii][j][kk] + sum[ii][jj][k] - sum[ii][jj][kk]),max(sum[i][j][k],a[i][j][k]));

	cout << ans;
		
	return 0;
}

