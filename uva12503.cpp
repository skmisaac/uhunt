// question #: 12503
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
  scanf("%d", &TC);

  while (TC--)
  {
    int nCommand, pos = 0;
    int history[110];
    char command[110];

    memset(history, 0, sizeof history);
    scanf("%d\n", &nCommand);

    for (int j = 1; j <= nCommand; ++j)
    {
      gets(command);
      if (command[0] == 'L') {
        pos--; 
        history[j] = -1;
      }

      else if (command[0] == 'R') {
        pos++;
        history[j] = 1;
      }

      else {
        int x, ret;
        char trash[10];
        sscanf(command, "%s %s %d", trash, trash, &x);

        pos = pos + history[x];
        history[j] = history[x];
      }
    }

    printf("%d\n", pos);
  }
  return 0;
}
