#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "portuguese");

    int j;
    char nomes[99999][300];
    char numeroT[99999][300];
    int i;
    int sal = 0;

    do
    {
        printf("\nEscolha uma opção\n");
        printf("1 - Salvar novo numero. \n");
        printf("2 - Exibir os numeros salvos. \n");
        scanf("%d", &j);
        printf("\n");

        fflush(stdin);

        switch (j)
        {

        case 1:

            printf("Digite o nome do contato: ");
            gets(nomes[sal]);

            printf("Digite o numero do whatsapp: ");
            gets(numeroT[sal]);

            salvo++;
            break;

        case 2:

            for (i = 0; i < sal; i++)
            {

                printf("Nome do contato: %s \n", nomes[i]);
                printf("Numero do whatsapp: %s \n", numeroT[i]);
                printf("\n");
            }

            break;

        default:
            printf("Opção invalida. \n");
            break;
        }

    } while (j != 2);

return 0;
}
