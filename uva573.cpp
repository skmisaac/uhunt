// 573.cpp
#include <iostream>
#include <cstdio>

using namespace std;

int main(int argc, char const *argv[])
{
  double h, u, d, f; 

  int day; 

  double fatigue;
  double climb_h;
  double snail_h;


  while (scanf("%lf %lf %lf %lf", &h, &u, &d, &f) && h != 0) {
    
    day = 1;
    fatigue = u * f/100.0;
    snail_h = 0.0;
    while (1)
    {
      if ( day > 1 )
        u = u - fatigue;

      if ( u < 0 )
        u = 0;
      
      snail_h += u;

      if ( snail_h > h )
      {
        printf("success on day %d\n", day);
        break;
      }

      snail_h -= d;

      if (snail_h < 0.0 || climb_h < 0.0)
      {
        printf("failure on day %d\n", day);
        break;
      } 

      day++;
    }
    
  }
  return 0;
}