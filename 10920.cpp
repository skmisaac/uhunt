// 10920.cpp
// Author: skmisaac

#include <cstdio>
#include <cmath>
#include <algorithm>

int main(int argc, char const *argv[])
{
  int sz, p;
  while (scanf("%d %d", &sz, &p) && sz != 0 && p != 0 ) {
    int a[sz][sz],
        l = c = sz/2,
        number = 1;

    memset(a, -1, sizeof(a));

    a[l][c] = number++;

    while ( number != p ) {
      while ( l != 0 ) {
        l -= 1;
        a[l][c] = number++;
        c -= 1;
        a[l][c] = number++;
        l += 1;
        a[l][c] = number++;
        l += 1;
        a[l][c] = number++;
        c += 1;
        a[l][c] = number++;
        c += 1; 
        a[l][c] = number++;
        l -= 1;
        a[l][c] = number++;
        l -= 1;
        a[l][c] = number++;

        if ( number == p )
          break;
      } 
      if (number == p)
        break;
    }


    l = abs(l - sz);
    c = abs(c - sz);
    printf("Line = %d, column = %d\n", l, c);
  }
  return 0;
}