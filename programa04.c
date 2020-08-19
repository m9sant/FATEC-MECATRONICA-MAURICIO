#include <stdio.h>

int main(void) {
  float numero_real;
  int numero_inteiro;
  char letra;
  printf("Informe um valor real: ");
  scanf("%f", &numero_real);
  printf("Informe um valor inteiro: ");
  scanf("%d", &numero_inteiro);
  printf("Informe uma letra: ");
  scanf(" %c", &letra);

  printf("Entao: %f\n", numero_real);
  printf("Valor Inteiro: %d\n", numero_inteiro);
  printf("Letra Digitada: %c\n", letra);
  printf("éisto\n");

  return 0;
}
