// question #: 11875 - Brick game
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
#define FOR(i, a, b)    for(typeof(i) i = (a); i <= b; ++i)
#define LOOP(i, n)      for(typeof(i) i = 0; i < n; ++i)
#define ALL(x)          x.begin(), x.end()


int main(int argc, char const *argv[])
{
  vi member;
  int TC, N, caseNo = 1, i;

  scanf("%d", &TC);
  while (TC--)
  {
    member.clear();
    scanf("%d", &N);
    LOOP(i, N)
    {
      int x;
      scanf("%d", &x);
      member.push_back(x);
    }

    printf("Case %d: %d\n", caseNo++, member[(member.size()+1)/2-1]);
  }
  
  return 0;
}
