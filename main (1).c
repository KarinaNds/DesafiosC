#include <stdio.h>

  int main(){

    float celsius, fahrenheit, conta;

    printf("Digite o valor em celsius: ");
    scanf("%f", &celsius);

    fahrenheit = (celsius * 9/5) + 32;

    printf("A temperatura em Fahrenheit é igual a: " "%.2f", fahrenheit);
    
  }