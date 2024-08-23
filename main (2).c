#include <stdio.h>

int main(){

  int a;
  int b; 
  int div;
  int resto;

  printf("Digite o primeiro numero: ");
  scanf("%d", &a);

  printf("Digite o segundo numero: ");
  scanf("%d", &b);

  div = a / b;
  resto = a % b;

  printf("O resultado da divisão é " "%d", div);
  printf("\nE o resto da divisão é " "%d", resto);

}