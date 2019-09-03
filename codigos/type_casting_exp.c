#include <stdio.h>
  
int main() 
{
  int a, b;
  
  printf("Entre com uma fracao (numerador e denominador): ");
  scanf("%d %d", &a, &b);
  
  printf("A fracao em decimal eh  %f\n", (float) a / b);
}
