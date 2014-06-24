// question #: 410 - Station Balance
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
#include <numeric>

using namespace std;

typedef long long       ll;
typedef pair<int, int>  ii;
typedef vector<ii>      vii;
typedef vector<int>     vi;
#define INF             1000000000
#define ALL(x) x.begin(), x.end()
#define SUM(x) accumulate(x.begin(), x.end(), 0)
#define PRINT(x) for (vi::iterator it=x.begin(); it != x.end(); ++it) printf("%d ", *it);

int main(int argc, char const *argv[])
{
  int C, S, caseNo = 1;

  while( scanf("%d %d\n", &C, &S) != EOF )
  {
    int i, j, k;
    vi M;
    for (i = 1; i <= S; ++i)
    {
      int x;
      scanf("%d", &x);
      M.push_back(x);
    }

    if ( S < 2 * C )
      for (i = 1; i <= 2*C - S; ++i)
        M.push_back(0);
    sort(ALL(M));

    double A = (double)SUM(M) / C;
    double imbalance = 0.0;

    printf("Set #%d\n", caseNo++);

    for (j = 0, k = 0; j < 2*C-j; ++j, ++k)
    {
      printf(" %d:", k);
      if ( M[j] == 0 && M[2*C-j-1] != 0 )
      {
        printf(" %d\n", M[2*C-j-1]);
      }
      else if ( M[j] == 0 && M[2*C-j-1] == 0 )
      {
        printf("\n");
      }
      else
      {
        printf(" %d %d\n", M[j], M[2*C-j-1]);
      }

      imbalance += abs( M[j] + M[2*C-j-1] - A );
    }

    printf("IMBALANCE = %.5lf\n\n", imbalance );
  }
  
  return 0;
}
