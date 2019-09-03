#include <stdio.h>

int adicao (int a, int b)
{
  int r;
  r = a+b;
  return r;
}  

int main ()
{
  int z = adicao (2,3);
  printf("\nO resultado eh: %d\n\n", z); 
}  
