#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
  setlocale(LC_ALL, "portuguese");
  int escolha;
  char nome[300];
  int numero;

  printf("Escolha uma opção:\n1-Adicionar um número.\n2-Olhar os numeros cadastrados.\n3-Encerrar o software.\n");
  scanf("%d", escolha);  
  
  do
  {
  switch (escolha)
  {
  case 1:
    printf("Digite o nome do contato: ");
    gets(nome);
    fflush(stdin);
    printf("Digite um número de telefone: ");
    scanf("%d", &numero);
    break;
  case 2:
    printf("Nome do contato: %s\n", nome);
    printf("Numero: %d\n", numero);
    break;
  case 3:
  default:
    break;
  }
  } while (escolha =! '3');
  

  return 0;
}