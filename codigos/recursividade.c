// factorial calculator

#include<stdio.h>

long factorial (long a)
{
  if (a > 1)
   return (a * factorial (a-1));
  else
   return 1;
}

int main ()
{
  long number = 4;
  printf("\n%d! = %d\n\n",number,factorial(number));
  return 0;
}
