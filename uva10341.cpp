// question #: 10341 - Solve it
// author: SUN Ka Meng Isaac (skmisaac)
#include <cstdio>
#include <cmath>
#include <cstdlib>
#include <cstring>
#include <ctime>
#include <iostream>

using namespace std;

#define EPS 1e-7

int p, q, r, s, t, u;

inline double f(double x) { return p*exp(-x) + q*sin(x) + r*cos(x) + s*tan(x) + t*x*x + u; }

double fd(double x){ // the derivative of function f
  return -p*exp(-x) + q*cos(x) - r*sin(x) + s/(cos(x)*cos(x)) + 2*t*x;
}

double secant(){
  if (f(0) == 0) return 0;
  for (double x0 = 0, x1 = 1; ; ){               // initial guess for x0 and x1
    double d = f(x1) * (x1 - x0) / (f(x1) - f(x0));  // compute delta
    if (fabs(d) < EPS) return x1;            // the guess is accurate enough
    x0 = x1;
    x1 = x1 - d;
  }
}
 
double newton(){
  if (f(0)==0) return 0;
  for (double x=0.5; ;){             // initial guess x = 0.5
    double x1 = x - f(x)/fd(x);      // x1 = next guess
    if (fabs(x1-x) < EPS) return x;  // the guess is accurate enough
    x = x1;
  }
}

double bisection()
{
  double lo = 0.0, hi = 1.0, ans = 0;
  while (fabs( hi - lo ) > EPS) {
    double mid = ( hi + lo ) / 2.0;
    if ( f(mid) <= EPS )   hi = mid; 
    else                   lo = mid;
  }

  return ( hi + lo ) / 2.0;
}

int main(int argc, char const *argv[])
{
  while( scanf("%d %d %d %d %d %d\n", &p, &q, &r, &s, &t, &u) != EOF ) {
    if ( f(0) * f(1) > 0 )         // range [a..b], ensure f(a) and f(b) is <= 0
      printf("No solution\n");
    else
      printf("%.4lf\n", newton());
  }
  
  return 0;
}
