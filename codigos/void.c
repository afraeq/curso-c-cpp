#include <stdio.h>

int main()
{
  int valor = 20;
  float valor2 = 5.23;

  void *ponteiro; // ponteiro genérico

  ponteiro = &valor; // aponta para um inteiro
  printf("%d\n", *(int *)ponteiro);

  ponteiro = &valor2; // aponta para um float
  printf("%0.2f\n", *(float *)ponteiro);

  return 0;
}
