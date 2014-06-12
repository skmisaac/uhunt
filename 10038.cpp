// question #: 10038 - Jolly Jumpers
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
  int bit[3005];    // N <= 3000

  int N;

  while (scanf("%d", &N) != EOF) 
  {
    memset(bit, 0, sizeof(bit));

    int difference, prev_num, current_num;

    // input
    scanf("%d", &prev_num);
    for (int i = 0; i < N - 1; ++i)
    {
      scanf("%d", &current_num);
      difference = abs(current_num - prev_num);
      bit[difference] += 1;
      prev_num = current_num;
    }

    // solve
    int isJolly = true;
    for (int i = 1; i < N; ++i)
    {
      if ( bit[i] == 0 ) {
        isJolly = false;
        break;
      }
    }

    // output
    if (isJolly)
      printf("Jolly\n");
    else
      printf("Not jolly\n");
  }
  
  return 0;
}