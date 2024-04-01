#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <time.h>
#include <locale.h>

int main () {
 setlocale(LC_ALL, "portuguese");

 float nota, media, soma = 0;
 int contador = 0;
 char resposta;


 do{
    printf("Digite uma nota: ");
    scanf("%f", &nota);

    fflush(stdin);

    system ("cls");
    printf("Escolha uma das opções abaixo: \n");
    printf("S - Inserir mais uma nota: \n");
    printf("P - Ver quantidade de notas inseridas: \n");
    printf("N - Calcular a média aritimética: \n");
    scanf("%c", &resposta);
    resposta = toupper(resposta);

    soma+= nota;
    contador++;

        switch (resposta)
        {
        case 'S':
            system("cls");
            break;
        case 'P':
            printf("Quantidade de notas inseridas: %i\n", contador);
            sleep(5);
        case 'N':
            system("cls");
            break;
        default:
            printf("Opção inválida!\n");
            sleep(5);
            system("cls");
            break;
  
        }

 }while (resposta != 'N');
 
    media = soma / contador;

    printf("\n===Exibindo resultados===\n");
    printf("Média: %.1f\n", media);
 

 
    return 0;
}