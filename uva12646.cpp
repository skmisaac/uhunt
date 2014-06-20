#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
  int a, b, c;
  char winner;
  while ( cin >> a >> b >> c ) {
    winner = '*';
    if ( a != b && a != c )
      winner = 'A';
    else if ( b != a && b != c )
      winner = 'B';
    else if ( c != a && c != b )
      winner = 'C';

    cout << winner << endl;
  }
  return 0;
}