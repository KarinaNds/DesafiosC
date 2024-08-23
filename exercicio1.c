#include <stdio.h>

int exercicio1(){

  int a, b;
  int soma, divisao, multiplicacao, subtracao;
  
  printf("Digite um numero: ");
  scanf("%d", &a);

  printf("Digite um segundo numero: ");
  scanf("%d", &b);

  soma = a+b;
  divisao = a/b;
  multiplicacao = a*b;
  subtracao = a-b;


  printf("");

  printf("A soma dos numeros é igual a: " "%d\n", soma);
  printf("A divisão dos numeros é igual a: " "%d\n", divisao);
  printf("A multiplicação dos numeros é igual a: " "%d\n", multiplicacao);
  printf("A subtração dos numeros é: " "%d", subtracao);

  return  0;

}
