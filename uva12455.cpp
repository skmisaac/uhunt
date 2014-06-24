// question #: 12455 Bars
// author: SUN Ka Meng Isaac (skmisaac)
#include <cstdio>
#include <cmath>
#include <cstdlib>
#include <cstring>
#include <ctime>
#include <iostream>
#include <vector>
#include <stack>
#include <queue>
#include <deque>
#include <bitset>
#include <algorithm>
#include <set>
#include <list>

using namespace std;

typedef long long       ll;
typedef pair<int, int>  ii;
typedef vector<ii>      vii;
typedef vector<int>     vi;
#define INF             1000000000

int main(int argc, char const *argv[])
{
  int TC;
  scanf("%d\n", &TC);

  while (TC--)
  {
    int target, n;
    int i, j;
    bool sol = false;

    scanf("%d\n%d\n", &target, &n);

    int *p = new int [n];
    memset(p, 0, sizeof(*p));
    for (int k = 0; k < n; ++k) {
      scanf("%d", &p[k]);
    }
    cin.ignore();

    for (i = 0; i < (1 << n); ++i)
    {
      int sum = 0;
      for (j = 0; j < n; j++)
      {
        if ( (i & (1<<j)) )
          sum += p[j];
      }

      if ( sum == target ) {
        printf("YES\n");
        sol = true;
        break;
      }

    }

    if (!sol) printf("NO\n");

  }
  return 0;
}