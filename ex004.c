#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){

setlocale(LC_ALL, "portuguese");

int numeros[5];
int negativos = 0;
int impares = 0, pares = 0;
int maior = 0, menor = 99999999;
int somaPares = 0, somaImpares = 0;
float mediaPares = 0;
int somaG = 0;
float mediaG = 0;
int i;

for (i = 0; i < 5; i++)
{
  printf("Digite o %d° número: ", i + 1);
  scanf("%d", &numeros[i]);

  somaG += numeros[i];
  //PRIMEIRA PARTE.

  if (numeros[i] % 2 == 0){
    pares++;
    somaPares = somaPares + numeros[i];
  } else {
    impares++;
    somaImpares = somaImpares + numeros[i];
  }

  //SEGUNDA PARTE.
  if (numeros[i] < 0){
    negativos++;
  }

  //TERCEIRA PARTE.
  maior = numeros[i] > maior ? numeros[i] : maior;  
  if (numeros[i] < menor)
  {
    menor = numeros[i];
  }

  //QUARTA PARTE.
  mediaPares = somaPares / (float)pares;
  
  

}
  mediaG = somaG / (float)5;

  printf("\n\n\nExibindo os resultados...\n\n\n");

  printf("Quantidade de impares: %d\n", impares);
  printf("Quantidade de numeros negativos: %d\n", negativos);
  printf("Maior numero: %d\n", maior);
  printf("Menor numero: %d\n", menor);
  printf("Media dos pares: %.2f\n", mediaPares);
  printf("Media geral: %.2f\n", mediaG);
  return 0;
}