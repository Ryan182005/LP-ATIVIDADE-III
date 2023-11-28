#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
  setlocale(LC_ALL, "portuguese");

  int escolha = 0;
  int quantidade[9999];
  float valor[9999];
  float valorT;
  char produto[9999][300];


  do{
  printf("Digite:\n1-Para adicionar uma venda.\n2-Para exibir o total da vendas.\n3-Para fechar o programa.\n");
  scanf("%d", &escolha);
  switch (escolha)
  {
  case 1:
      printf("Digite o nome do produto: ");
      scanf("%s", &produto);
      printf("Digite o preço do produto: ");
      scanf("%f", &valor);
      fflush(stdin);
      printf("Digite a quantidade do produto: ");
      scanf("%d", &quantidade);
      
      valorT = valor * (float)quantidade;
    break;
  case 2:
    printf("Nome do produto: %s\n", produto);
    printf("Valor do produto: %s\n", valorT);
    printf("Quantidade do produto: %s\n", quantidade);
    break;
  default:
    break;
  }
    
  } while (escolha != '3');
  

  return 0;
}