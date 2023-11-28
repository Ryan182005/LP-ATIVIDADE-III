#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
setlocale(LC_ALL, "portuguese");

int tamanho = 2;
char nome[tamanho][300];
int idade[tamanho], i;
float altura[tamanho], peso[tamanho];
int maior = 0, menor = 99999999;
float maiorP = 0, menorP = 99999999999999;
float maiorA = 0, menorA = 99999999999999;

for (i = 0; i < 2; i++)
{
  printf("Digite o %d° nome: ", i + 1);
  scanf("%s", &nome[i]);

  fflush(stdin);

  printf("Digite a idade: ");
  scanf("%d", &idade[i]);
    maior = idade[i] > maior ? idade[i] : maior;
    
    if (idade[i] < menor)
        {
            menor = idade[i];
        }

        

  printf("Digite o peso: ");
  scanf("%f", &peso[i]);
  maiorP = peso[i] > maiorP ? peso[i] : maiorP;
    
    if (peso[i] < menorP)
        {
            menorP = peso[i];
        }
  
  

  printf("Digite a altura: ");
  scanf("%f", &altura[i]);
  maiorA = altura[i] > maiorA ? altura[i] : maiorA;
    
    if (altura[i] < menorA)
        {
            menorA = altura[i];
        }
  fflush(stdin);
}

printf("\n\n\nExibindo Resultados...\n\n\n");

for (i = 0; i < 2; i++)
{
  printf("\n%d° nome: %s\n", i + 1, nome[i]);
  printf("Idade: %d\n", idade[i]);
  printf("Peso: %.2f\n", peso[i]);
  printf("Altura: %.2f\n", altura[i]);
}
printf("\n\nMaior idade: %d\n", maior);
printf("Menor idade: %d\n", menor);
printf("Maior peso: %.2f\n", maiorP);
printf("Menor peso: %.2f\n", menorP);
printf("Maior altura: %.2f\n", maiorA);
printf("Menor altura: %.2f\n", menorA);

  return 0;
}