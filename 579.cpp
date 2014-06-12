// question #: 579 ClockHands
// author: SUN Ka Meng Isaac (skmisaac)
#include <cstdio>
#include <cmath>
#include <cstdlib>
#include <cstring>
#include <ctime>
#include <iostream>
#include <vector>
#include <stack> 
#include <queue> 
#include <deque> 
#include <bitset> 
#include <algorithm> 
#include <set> 
#include <list> 

using namespace std;

typedef long long       ll;
typedef pair<int, int>  ii;
typedef vector<ii>      vii;
typedef vector<int>     vi;
#define INF             1000000000

int main(int argc, char const *argv[])
{
  int H, MM;
  while ( scanf("%d:%2d", &H, &MM) != EOF ) 
  {
    double answer = 360.000; 
    int h_angle, mm_angle, tmp;

    h_angle = H * 30;
    mm_angle = MM * 6;

    // h hand clockwise
    tmp = abs(mm_angle - h_angle);
    if (tmp >= 0 && tmp < answer)
      answer = tmp;
    
    // h hand anti-clockwise
    
    if (tmp >= 0 && tmp < answer)
      answer = tmp;

    // m hand clockwise
    // m hand anti-clockwise
    printf("%.3lf\n", answer);
  }
  return 0;
}
