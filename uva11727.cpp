// 11727.cpp
// Author: skmisaac

#include <cstdio>
#include <cstdlib>
#include <algorithm>

int main(int argc, char const *argv[])
{
  using namespace std;

  int tc;
  scanf("%d", &tc);

  for (int i = 1; i <= tc; ++i)
  {
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);

    int largest = max(a,max(b, c)),
        smallest = min(a, min(b, c)),
        answer = 0;

    if ( a > smallest && a < largest )
      answer = a;
    else if ( b > smallest && b < largest )
      answer = b;
    else
      answer = c;

    printf("Case %d: %d\n", i, answer);
  }
  return 0;
}