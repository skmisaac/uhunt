//
//  main.cpp
//  uva11235
//
//  Created by SUN Ka Meng Isaac on 12/6/14.
//  Copyright (c) 2014 SUN, Ka Meng Isaac. All rights reserved.
//

#include <iostream>
#include <cstdio>
#include <cmath>
#include <cstdlib>
#include <cstring>
#include <ctime>
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

int compare(const void* p1, const void* p2)
{
    long l1 = *(long *)p1;
    long l2 = *(long *)p2;
    
    if (l1 < l2)
        return 1;
    else if (l1 > l2)
        return -1;
    else
        return 0;
}

int main(int argc, const char * argv[])
{
    using namespace std;
    
    long N, Q, lRange, rRange;
    long seq[100000], refList[100000];
    
    memset(seq, 0, sizeof(seq));
    
    while ( scanf("%ld %ld\n", &N, &Q) == 2 )
    {
      // printf("%ld %ld\n", N, Q);
      for (long i = 0; i < N; i++) {
          scanf("%ld\n", &seq[i]);
          // printf("%ld ", seq[i]);
      }
      
      for (int j = 0; j < Q; j++) {
          memset(refList, 0, sizeof(refList));
          scanf("%ld %ld\n", &lRange, &rRange);
          for (long k = lRange-1; k <= rRange-1; k++) {
              refList[seq[k]]++;
          }
          size_t size = sizeof(refList)/sizeof(long);
          qsort(refList, size, sizeof(long), compare);
          printf("%ld\n", refList[0]);
          
      }
    }
    
    return 0;
}