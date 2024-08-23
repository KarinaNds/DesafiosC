#include <stdio.h>

int main(){
  int x; /*variavel que armazena um valor inteiro */
  printf("Oi\n");
  printf("Digite o valor de x: ");
  scanf("%d", &x); /* scanf é a imput de linguagem */ 
  /* %d para ler um numero inteiro*/
  /*& é o endereço de memoria, exemplo: leia o valor de &x, para ver o valor de x*/
  printf("O valor de x = %d", x);
  return 0;
}