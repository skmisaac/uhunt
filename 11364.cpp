// 11364.cpp
// Author: skmisaac
//
#include <iostream>
#include <cstdio>

using namespace std;

int main(int argc, char const *argv[])
{
  int TC;
  scanf("%d", &TC);

  while ( TC-- )
  {
    int n, l = 101, r = -1;
    scanf("%d", &n);
    while ( n-- )
    {
      int tmp;
      scanf("%d", &tmp);
      if ( tmp < l )
        l = tmp;
      if ( tmp > r )
        r = tmp;
    }

    printf("%d\n", 2*(r-l));

  }
  return 0;
}