// question #: 11450 - Wedding Shopping - Top Down DP
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
#define FOR(i, a, b)    for(int i = (a); i <= b; ++i)
#define LOOP(i, n)      for(int i = 0; i < n; ++i)
#define ALL(x)          x.begin(), x.end()

int M, C, price[25][25];   // g <= 20, model <= 20
int memo[210][25];         // money has 201 x 20 DP states, [210] is for safety reason
int shop(int money, int g)
{
  if ( money < 0 ) return -INF;                  // not enough budget, return negative max as infesible 
  if ( g == C ) return M - money;                    // last garment

  if ( memo[money][g] != -1 ) return memo[money][g]; // TOP DOWN: already computed, return state directly
  int ans = -1;         // init answer as a -ve number as all prices are positive value
  FOR(model, 1, price[g][0])  // try all K garments price
    ans = max(ans, shop( money - price[g][model], g + 1 ));
  return memo[money][g] = ans;

}

int main(int argc, char const *argv[])
{
  int TC, score;
  scanf("%d", &TC);

  while (TC--) {
    scanf("%d %d", &M, &C);

    LOOP(i, C)
    {
      scanf("%d", &price[i][0]);                  // store K, the total no. of garment types in price[g][0]
      FOR(j, 1, price[i][0])   scanf("%d", &price[i][j]);
    }

    memset(memo, -1, sizeof memo);
    score = shop(M, 0);
    if ( score > 0 ) printf("%d\n", score);
    else             printf("no solution\n"); 
  }
  
  return 0;
}
