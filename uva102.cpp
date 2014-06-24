// question #: uVa 102 - Eco Bin Packing
// author: SUN Ka Meng Isaac (skmisaac)
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <cmath>
#include <algorithm>

int B[3], G[3], C[3];

#define INF 1000000

int main(int argc, char const *argv[])
{
  while (scanf("%d %d %d %d %d %d %d %d %d\n", &B[0], &G[0], &C[0], &B[1], &G[1], &C[1], &B[2], &G[2], &C[2]) != EOF)
  {
    char ans[10] = "BCG";
    int minMove;
    int move;

    minMove = B[1] + B[2] + C[0] + C[2] + G[0] + G[1]; // BCG

    move = B[1] + B[2] + G[0] + G[2] + C[0] + C[1]; // BGC

    if (move < minMove)
    {
      minMove = move;
      strcpy(ans, "BGC");
    }

    move = C[1] + C[2] + B[0] + B[2] + G[0] + G[1]; // CBG

    if (move < minMove)
    {
      minMove = move;
      strcpy(ans, "CBG");
    }

    move = C[1] + C[2] + G[0] + G[2] + B[0] + B[1]; // CGB

    if (move < minMove)
    {
      minMove = move;
      strcpy(ans, "CGB");
    }

    move = G[1] + G[2] + B[0] + B[2] + C[0] + C[1]; // GBC

    if (move < minMove)
    {
      minMove = move;
      strcpy(ans, "GBC");
    }

    move = G[1] + G[2] + C[0] + C[2] + B[0] + B[1]; // GCB

    if (move < minMove)
    {
      minMove = move;
      strcpy(ans, "GCB");
    }

    printf("%s %d\n", ans, minMove);
  }
  return 0;
}
