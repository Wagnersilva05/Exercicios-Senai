#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <ctype.h>
#include <time.h>

int main(){
    setlocale(LC_ALL, "");

    int idade, telefone;
    char email[200], nome[200];
    int opcao;


        printf("Nome: ");
        scanf("%s", &nome);

        printf("Idade: ");
        scanf("%i", &idade);

        printf("Email: ");
        scanf("%s", &email);

        printf("Telefone: ");
        scanf("%i", &telefone);

        fflush(stdin);

        do{
            printf("\n===MENU===\n");
            printf("1 - Mostar nome e idade\n");
            printf("2 - Mostar nome e email\n");
            printf("3 - Mostar idade e telefone\n");
            printf("4 - Mostar telefone e email\n");
            printf("0 - Sair do programa\n");

            printf("Qual opção deseja? ");
            scanf("%i", &opcao);

            switch (opcao)
            {
            case 1:
                printf("Nome adicionado: %s\n", nome);
                printf("Idade adicionada: %i\n", idade);
                sleep(4);
                break;

                case 2:
                printf("Nome adicionado: %s\n", nome);
                printf("Email adicionado: %s\n", email);
                sleep(4);
                break;

                case 3:
                printf("Idade adicionado: %i\n", idade);
                printf("Telefone adicionado: %i\n", telefone);
                break;

                case 4:
                printf("Telefone adicionado: %i\n", telefone);
                printf("Email adicionado: %s\n", email);

                case 0:
                break;
            default:
                printf("Opção Invalida!");
                sleep(4);
                system("cls");
                break;
            }

            
        }while(opcao != 0);

        return 0;
}