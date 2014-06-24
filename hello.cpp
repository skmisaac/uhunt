// question #: hello world
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
#define FOR(i, a, b)    for(int i = a; i <= b; ++i)
#define LOOP(i, n)      for(int i = 0; i < n; ++i)
#define ALL(x)          x.begin(), x.end()


int main(int argc, char const *argv[])
{
  FOR(caseNo, 1, 20)
  {
    printf("%d ", caseNo);
  }
  printf("\n");

  LOOP(k, 10) printf("%02d ", k);
  printf("\n");

  return 0;
}
