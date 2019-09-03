#include <stdio.h>
  
// este eh um comentario. comentarios sao ignorados pelo compilador
  
int main ()
{
	// declarando variaveis
	int a;
	double b;
	int c;
	double d, e;
    
	// definindo variaveis ao mesmo tempo em que declaramos	
	double f = 1.5; float g = 0.5;
    
	// definindo as variaveis declaradas no inicio do codigo
	c = 4;
	d = e = 2.5; 
      
	// operando com as variaveis
	a = 3*(c+2);		// "a" foi antes declarada, mas nao definida!
	b = f*(g*(d+e));	// "b" foi antes declarada, mas nao definida!
	c = c+a;		// redefinindo "c"
       
	// mostrando resultados na tela
	printf("\nOs resultados sao: %d, %f, %d \n\n", a, b, c);
}
