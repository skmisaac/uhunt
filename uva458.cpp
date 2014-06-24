// question #: UVa 458 decode
// author: SUN Ka Meng Isaac (skmisaac)
#include <cstdio>
#include <cstdlib>
#include <cstring>

int main(int argc, char const *argv[])
{
  char message[100000];
  while ( gets(message) ) {
    int i = 0;
    while ( message[i] != '\0' ) 
    {
      printf("%c", (char)(message[i]-7));
      i++;
    }
    printf("\n");
  }
  return 0;
}
