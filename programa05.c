#include <stdio.h>

int main(void) {
  int numero, resto;
  printf("Informe um número: ");
  scanf("%d", &numero);
  resto = numero % 2;

  if(resto == 0){
    printf("Número par\n");
  } else {
    printf("Número impar\n");
  }

  printf("Fim do Programa.\n");

  return 0;
}
