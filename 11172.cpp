#include <cstdio>

int 
main(int argc, char const *argv[]) 
{
  int TC;
  scanf("%d", &TC);

  while (TC--) {
    int a, b;
    scanf("%d %d", &a, &b);

    if ( a > b ) printf(">\n");
    else if ( a < b ) printf("<\n");
    else
      printf("=\n");
  }
  return 0;
}