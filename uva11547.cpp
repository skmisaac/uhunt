// question #: 11547
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
  int TC;
  scanf("%d", &TC);

  while ( TC-- ) {
    int n;
    scanf("%d", &n);

    printf("%d\n", abs(((n * 567 / 9 + 7492 )* 235 / 47 - 498) / 10 % 10 ));
  }
  return 0;
}
