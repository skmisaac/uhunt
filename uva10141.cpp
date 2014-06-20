// question #: 10141
// author: SUN, Ka Meng Isaac (skmisaac)
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
#include <iostream>

using namespace std;

typedef long long       ll;
typedef pair<int, int>  ii;
typedef vector<ii>      vii;
typedef vector<int>     vi;
#define INF             1000000000

typedef struct {
  string name;
  double price;
  int r;
  double compliance;
  int idx;
} rfp;


bool compare(rfp p1, rfp p2) {
  if ( p1.compliance > p2.compliance )
    return true;
  else if ( p1.compliance == p2.compliance )
  {
    if ( p1.price < p2.price )
      return true;
    else if ( p1.price > p2.price )
      return false;
    else
    {
      if ( p1.idx < p2.idx )
        return true;
      else
        return false;
    }
  }
  else
    return false;
}

int main(int argc, char const *argv[])
{
  int requirements, proposals;
  vector<rfp> company_list;
  bool firstCase = true;

  //  
  // Input process
  //
  int p = 1;
  while ( scanf("%d %d", &requirements, &proposals) && requirements && proposals ) {
    if (!firstCase)
      printf("\n");
    company_list.clear();
    int n = requirements;
    do
    {
      string junk;
      getline(cin, junk);
    } while ( n-- );

    string name;
    for ( int idx = 0; idx < proposals; idx++ ) {
      rfp temp_company;
      getline(cin, name);
      temp_company.name = name;
      temp_company.idx = idx;

      scanf("%lf %d\n", &temp_company.price, &temp_company.r);
      temp_company.compliance = (double)temp_company.r / requirements;
      company_list.push_back(temp_company);

      for ( int k = 0; k < company_list[idx].r; k++ ) {
        string trash;
        getline(cin, trash);
      }
    }

    //
    // Sorting
    //
    sort(company_list.begin(), company_list.end(), compare);

    // Debugging
    // for ( vector<rfp>::iterator it = company_list.begin(); it != company_list.end(); ++it ) {
    //   printf("Company: %s Price: %lf Compliance: %lf\n", it->name.c_str(), it->price, it->compliance);
    // }

    //
    // Output
    printf("RFP #%d\n", p++);
    printf("%s\n", company_list[0].name.c_str());
    firstCase = false;
  }
  return 0;
}