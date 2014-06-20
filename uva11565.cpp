// question #: 11565 Simple Equations
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
  int N;

  scanf("%d\n", &N);
  while ( N-- ) {
    int A, B, C;
    bool hasSolution = false;

    scanf("%d %d %d\n", &A, &B, &C);
    for (int i = -100; i <= 100 && !hasSolution; ++i)
    {
      if ( i*i <= C )
      for (int j = -100; j <= 100 && !hasSolution; ++j)
      {
        if ( i != j && i*i + j*j <= C )
        for (int k = -100; k <= 100 && !hasSolution; ++k)
        {
          if ( k != j && k != i && i+j+k == A && i*j*k == B && i*i+j*j+k*k == C )
          {
            printf("%d %d %d\n", i, j, k);
            hasSolution = true;
          }
        }
      }
    }

    if (!hasSolution)
      printf("No solution.\n");
  }
  return 0;
}
