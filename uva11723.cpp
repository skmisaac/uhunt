// question #: 11723 - Numbering Roads 
// author: SUN Ka Meng Isaac (skmisaac)
#include <cstdio>
#include <cmath>
#include <cstdlib>
#include <cstring>

using namespace std;


int main(int argc, char const *argv[])
{
  int N, R, caseNo = 1;
  while (scanf("%d %d", &R, &N), (R != 0 && N != 0)) 
  {
    int ans = 0;

    // ans = (int) ceil((double)(R-N)/(double)N);   // std function

    // ans = (R-N)/N;                   // comparison based
    // if (ans*N < (R-N)) ++ans;

    ans = ( R-N+N-1 ) / N;    // ans = ( x + y - 1 ) / y;  (round-up technique)
                              // from http://stackoverflow.com/questions/2745074/fast-ceiling-of-an-integer-division-in-c-c

    // double fp = ((double)(R-N)) / (N); // extreme speed technique 
    // ans = 32768 - (int)(32768. - fp);  // from http://www.codeproject.com/Tips/700780/Fast-floor-ceiling-functions
    if ( ans > 26 )
    {
      printf("Case %d: impossible\n", caseNo++);
    }
    else
      printf("Case %d: %d\n", caseNo++, ans);

  }
  return 0;
}
