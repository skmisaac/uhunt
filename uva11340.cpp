// question #: 11340 - Newspaper
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
  scanf("%d", &N);

  while ( N-- ) 
  {
    unsigned long long salary = 0;

    // K lines of table of values
    int K;
    scanf("%d\n", &K);

    unsigned long long paidTable[350];
    memset(paidTable, 0, sizeof(paidTable));

    for (int i = 0; i < K; ++i)
    {
      unsigned char c;
      unsigned long long value;

      scanf("%c %llu\n", &c, &value);
      paidTable[(int)c] = value;
      // printf("%c: %d\n", c, value);
    }

    // M lines of characters in article
    int M;
    scanf("%d\n", &M);

    for (int i = 0; i < M; ++i)
    {
      unsigned char ch;
      while ( (ch = getchar()) != '\n' )
        salary += paidTable[ (int)ch ];
    }

    // output
    // printf("%llu.%02llu$\n", salary/100, (salary%100));
    printf("%.2lf$\n", salary / 100.00);

  }
  return 0;
}
