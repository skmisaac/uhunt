// question #: uva750 - 8 Queens Chess Problem
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

int row[8], TC, a, b, lineCounter;

bool place(int r, int c)
{
  for (int prev = 0; prev < c; prev++)
    if (row[prev] == r || (abs(row[prev] -r ) == abs(prev-c)))
      return false;
  return true;
}

void backtrack(int c)
{
  if ( c== 8 && row[b] == a)
  {
    printf("%2d      %d", ++lineCounter, row[0] + 1);
    for ( int j = 1; j < 8; j++ ) printf(" %d", row[j] + 1);
      printf("\n");
  }

  for (int r = 0; r < 8; r++ )
    if (place(r, c)) 
    {
      row[c] = r;
      backtrack(c + 1);
    }
}

int main(int argc, char const *argv[])
{
  scanf("%d\n", &TC);
  while (TC--)
  {
    scanf("%d %d", &a, &b);
    a--;
    b--;
    memset(row, 0, sizeof row);
    lineCounter = 0;
    printf("SOLN       COLUMN\n");
    printf(" #      1 2 3 4 5 6 7 8\n\n");
    backtrack(0);
    if (TC) printf("\n");
  }
  return 0;
}
