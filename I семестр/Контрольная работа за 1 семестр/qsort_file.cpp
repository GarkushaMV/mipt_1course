#include <iostream>
#include <stdio.h>
#include <algorithm>
#include <cmath>
#include <string.h>
#include <memory.h>
#include <vector>
#include <map>

#define mp make_pair
#define fi first
#define se second

 using namespace std;
pair < string, int >a[20000];
 bool cmp1 (pair < string, int >a, pair < string, int >b)
{
  return a.fi < b.fi;
}

  int
main ()
{
  freopen ("input.txt", "r", stdin);
  freopen ("output.txt", "w", stdout);
  int N, i;
  cin >> N;
  N++;
  for (i = 1; i <= N; i++)
    getline (cin, a[i].fi);
  sort (a + 1, a + 1 + N, cmp1);
  for (i = 2; i <= N; i++)
    cout << a[i].fi << "\n";
   return 0;
}


