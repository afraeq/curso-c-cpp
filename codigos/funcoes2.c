#include <stdio.h>
#include <stdlib.h>
#include <math.h>

double f (double x);       								// equacao a ser resolvida
double bissecao (double a, double b, double tol, int it_max);  		// metodo

int main ()
{
  double z = bissecao (-1, 1, 1e-4, 100);
  printf("\nO resultado eh: %e\n\n", z); 
}

double f(double x) 
{
  double y = x-cos(x);
  return y;
}

double bissecao (double a, double b, double tol, int it_max) 
{
  double c;   // usado na iteracao
  int it;     // contador
  
  printf("\nResolvendo equacao transcedental pelo metodo da Bissecao:\n\n");
  
  if(f(a)*f(b)>0)
  {
    printf("\nAtencao! A raiz nao encontra-se no intervalo dado.\n\n  **** ERRO FATAL **** INTERROMPENDO ****");
    exit (-1);
  }
  
  else
  {
    printf("it \t a \t b \t c \t f(c) \t \n\n");
    for (it=1;it<=it_max;it++)
    {
      c=0.5*(a+b);

      if (f(a)*f(c)<0)		
         b=c;
      else	
         a=c;
         
      printf("%d \t %e \t %e \t %e \t %e\n", it, a, b,c, f(c));
         
      if (fabs(f(c))<=tol)
      {
        return c;
        break;
      }
      
      if (it>=it_max)
      {
        printf("\n METODO DIVERGIU\n\n ***** ERRO FATAL ***** INTERROMPENDO *****");
        exit (-1);
       }
    }
 }
}
