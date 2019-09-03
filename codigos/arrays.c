// arrays example

#include <stdio.h>

int foo [] = {16, 2, 77, 40, 12071};
int n, result=0;

int main ()
{
  for ( n=0 ; n<5 ; ++n )
  {
    result += foo[n];
  }
  printf("%d", result);
  return 0;
}
