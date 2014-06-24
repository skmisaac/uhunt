/**
 * uva 10773 - Back to Intermediate Math
 * author: SUN Ka Meng Isaac (skmisaac)
 */
#include <cstdio>
#include <cmath>
#include <cstdlib>

using namespace std;

int main(int argc, char const *argv[])
{
  int TC, caseNo = 1;
  double d, v, u;
  scanf("%d", &TC);
  while (TC--)
  {
    scanf("%lf %lf %lf", &d, &v, &u);
    if ( u <= v || v == 0 ) {
      printf("Case %d: can't determine\n", caseNo++);
    }
    else {
      double diff = d / sqrt(u * u - v * v) - d / u;
      printf("Case %d: %.3lf\n", caseNo++, diff);
    }
  }

  return 0;
}
