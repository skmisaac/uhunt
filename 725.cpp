#include <cstdio>
#include <cmath>
#include <cstdlib>
#include <cstring>
#include <ctime>
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
  bool firstCase = true;
  while ( scanf("%d", &N) && N != 0 ) {
    if ( !firstCase ) {
      printf("\n");
    }
    bool noAnswer = true;
    for (int fghij = 1234; fghij <= 98765 / N; fghij++)
    {
      int abcde = fghij * N;
      int tmp, 
          used = (fghij < 10000);

      tmp = abcde; while (tmp) { used |= 1 << (tmp %10); tmp /= 10; }
      tmp = fghij; while (tmp) { used |= 1 << (tmp %10); tmp /= 10; }

      // if all bits are on (11111111111) = 1024 then all digits have been used, print the answer
      if ( used == (1<<10) - 1 ) {
        printf("%0.5d / %0.5d = %d\n", abcde, fghij, N);
        noAnswer = false;
      }
    }
    if ( noAnswer )
      printf("There are no solutions for %d.\n", N);
    firstCase = false;
  }

  return 0;
}
