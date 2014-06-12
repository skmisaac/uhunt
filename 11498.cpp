#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
  int k, m, n, x, y;
  while (scanf("%d", &k), k != 0)
  {
    scanf("%d %d\n", &m, &n);
    while ( k-- )
    {
      scanf("%d %d\n", &x, &y);
      if ( x > m && y > n )
        printf("NE");
      else if (x < m && y > n)
        printf("NO");
      else if (x < m && y < n)
        printf("SO");
      else if (x > m && y < n)
        printf("SE");
      else
        printf("divisa");
    }

  }

  return 0;
}