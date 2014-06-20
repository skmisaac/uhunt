// question #: 272
// author: SUN, Ka Meng Isaac (skmisaac)
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
  char in;
  int tick = 1;
  while ( scanf("%c", &in) != EOF ) {
    if ( in == '"' && tick )
    {
      printf("``");
      tick = 0;
    }
    else if ( in == '"' && !tick )
    {
      printf("''");
      tick = 1;
    }
    else
      printf("%c", in);

  }
  return 0;
}
