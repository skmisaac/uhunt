// question #: 12503
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

vector<string>& split(const string &s, char delim, vector<string> &elems) {
    stringstream ss(s);
    string item;
    while (getline(ss, item, delim)) {
        elems.push_back(item);
    }
    return elems;
}


int main(int argc, char const *argv[])
{
  int caseID;
  scanf("%d", &caseID);

  for (int i = 0; i < caseID; ++i)
  {
    int n, p = 0;
    scanf("%d\n", &n);

    string command[110];
    int step[110];

    for (int j = 0; j < n; ++j)
    {

      getline(cin, command[j]);
      if ( command[j].find("LEFT") != -1 )
      {
        p--;
        step[j] = -1;
      }
      else if ( command[j].find("RIGHT") != -1 )
      {
        p++;
        step[j] = 1;
      }
      else if ( command[j].find("SAME") != -1)
      {




      }
    }

    printf("%d\n", p);
  }
  return 0;
}
