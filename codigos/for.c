#include <stdio.h>
#include <math.h>
  
int main ()
{

  int i;                // contador
  int soma = 0;      // valor da soma 
  
  for(i=1;i<=6;i++)	   // novo operador (++): i++ significa i = i+1
  {
    soma = soma + pow(3,(i+1));
  }

  printf("\nO resultado eh: %d\n\n", soma);
  
}  
