#include <stdio.h>
  
int main ()
{
	double T;

	printf("Insira a temperatura, em graus Celsius \n");
	scanf("%lf", &T);

	if (T<-273.15)
	{
		printf ("Temperatura abaixo do zero absoluto! \n");
	}
	else if (T>-273.15 & T<0)
	{	
		printf("Agua no estado solido \n");
	}
	else if (T==0)
	{
		printf("Agua no equilibrio S-L \n");
	}
	else if (T>0 & T<100)
	{
		printf("Agua no estado liquido \n");
	}
	else if (T==100)
	{
		printf("Agua no equilibrio L-V \n");
	}
	else
	{
		printf("Agua no estado vapor \n");
	}
}
