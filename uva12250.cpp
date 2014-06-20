#include <cstdio>
#include <cstdlib>
#include <cstring>

using namespace std;

int main(int argc, char const *argv[])
{
  int TC = 1;
  while ( TC <= 2000 ) {
    char *input = new char[20];
    char *answer = new char[20];

    scanf("%s\n", input);

    if ( strcmp(input, "#") == 0 ) break;
    
    if ( strcmp(input, "HELLO") == 0 )
      strcpy(answer, "ENGLISH");
    else if ( strcmp(input, "HOLA") == 0 )
      strcpy(answer, "SPANISH");
    else if ( strcmp(input, "HALLO") == 0 ) 
      strcpy(answer, "GERMAN");
    else if ( strcmp(input, "BONJOUR") == 0 )
      strcpy(answer, "FRENCH");
    else if ( strcmp(input, "CIAO") == 0 )
      strcpy(answer, "ITALIAN");
    else if ( strcmp(input, "ZDRAVSTVUJTE") == 0 )
      strcpy(answer, "RUSSIAN");
    else
      strcpy(answer, "UNKNOWN");

    printf("Case %d: %s\n", TC++, answer);
  }
  return 0;
}