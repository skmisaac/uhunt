// question #: uva10469
// author: SUN Ka Meng Isaac (skmisaac)
#include <cstdio>
#include <cmath>
#include <cstdlib>

typedef long long       ll;

int main(int argc, char const *argv[])
{
  ll a, b;
  while (scanf("%lld %lld", &a, &b) != EOF) {
    printf("%lld\n", a^b);
  }
  
  return 0;
}
