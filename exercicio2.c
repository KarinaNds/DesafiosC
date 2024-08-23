#include <stdio.h>

int exercicio2(){

  float peso, altura, imc;

  printf("Digite o seu peso: ");
  scanf("%f", &peso);

  printf("Digite sua altura: ");
  scanf("%f", &altura);

  imc = peso / (altura*altura);

  printf("O seu IMC é igual a: " "%.2f", imc);

  return 0;


}