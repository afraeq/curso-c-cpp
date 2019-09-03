#include<stdio.h>

int main ()
{
  int a, b, c;
  float d, e;

  a = 1; b = 2;

  c = a/b;
  d = a/b;
  e = (float) a/b;

  printf("c = %d\n",c);
  printf("d = %f\n",d);
  printf("e = %f\n",e);
}
