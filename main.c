#include <stdio.h>

int main() {

  // escreva um programa que leia a nota e a frequencia do aluno e informe se
  // ele foi aprovado ou reprovado obs: frequencia = 75% e nota = 6

  int nota, frequencia;

  printf("Digite a nota do aluno: ");
  scanf("%d", &nota);

  printf("Digite a frequencia do aluno: ");
  scanf("%d", &frequencia);

  if(nota >= 6 && frequencia >= 75){
    printf("O aluno foi aprovado");
  }
  else{
    printf("O aluno foi reprovado");
  }

  
    
}