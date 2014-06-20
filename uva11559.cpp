// 11559.cpp
// Author: skmisaac

#include <cstdio>
#include <cstdlib>
#include <algorithm>

int main(int argc, char const *argv[])
{
  using namespace std;
  int n, b, h, w, p;
  int solution = 0;
  int cheap = 100000000;

  while ( scanf("%d %d %d %d", &n, &b, &h, &w) != EOF ) {
    solution = 0;  // reset 
    cheap = 100000000;
    for (int i = 0; i < h; ++i)
    {
      scanf("%d\n", &p);
      for (int j = 0; j < w; ++j)
      {
        int space;
        scanf("%d", &space);
        if ( space < n || b < n * p )  // not enough space in one hotel OR budget is insufficient 
        {
          continue;
        }
        else if ( space >= n && b >= n * p )
        {
          solution = n * p;
          if ( solution < cheap )
            cheap = solution;
        }
      }
    }

    if ( cheap && cheap < 100000000 )
      printf("%d\n", cheap);
    else
      printf("stay home\n");
  }
  return 0;
}