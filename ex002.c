#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
  setlocale(LC_ALL, "portuguese");

  char nome[5][300];
  float notas[5][3];
  float media[5];
  int idade[5];
  int i, j;
  float somaN = 0;
  

  for (i = 0; i < 5; i++)
  {
    printf("Digite o nome do %d° aluno: ", i + 1);
    gets(nome[i]);

    printf("Digite a idade do aluno: ");
    scanf("%d", &idade[i]);

    for (j = 0; j < 3; j++)
    {
      printf("Digite a %d° nota: ", j + 1);
      scanf("%f", &notas[i][j]);

      //Local para calcular a soma total e depois a média.
      somaN += notas[i][j];
    }
      media[i] = somaN / j;
      somaN = 0;
      fflush(stdin);
  }

  printf("\n\n\nExibindo resultados...\n\n\n");
  
  for (i = 0; i < 5; i++)
  {
    //Exibindo nome e idade do aluno.
    printf("\n\nNome do %d° aluno: %s\n", i + 1, nome[i]);
    printf("Idade do aluno: %d\n", idade[i]);
    for (j = 0; j < 3; j++)
    {
      //Outro laço de repetição para exibir as três notas.
      printf("%d° Nota: %.1f\n", j + 1, notas[i][j]);
    }
      //Exibindo a média.
    printf("Media do aluno: %.1f\n", media[i]);
    
    //Usando if else para exibir a mensagem de aprovado, reprovado e recuperação.
    if (media[i] >= 7)
    {
      printf("Aprovado.");
    } else if (media[i] >= 5)
    {
      printf("Recuperação.");
    } else {
      printf("Reprovado.");
    }
    
    
  }
  

  return 0;
}