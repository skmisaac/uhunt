// question #: 36 No Same
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
  char input[105];
  while ( scanf("%s", input) != EOF ) {
    int answer = 0;
    int numOfChar = 0;
    int stat[260];  // ASCII counters
    int length = strlen(input);

    memset(stat, 0, sizeof(stat));
    for (int i = 0; i < length; ++i)
    {
      stat[input[i]]++;
    }

    for (int i = 0; i < 260; ++i)
    {
      if ( stat[i] > 0 )
        numOfChar++;
    }

    if ( numOfChar >= 3 )
      answer = 0;
    else if ( numOfChar == 2 )
      answer = 2;
    else if ( numOfChar == 1 )
      answer = 1;
    else
      answer = -1;

    printf("%d\n", answer);
  }
  return 0;
}
