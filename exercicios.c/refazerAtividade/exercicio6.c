#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

int main () {
    setlocale(LC_ALL, "portuguese");

    char listaNome[5][200];
    int listaIdade[5];
    int i;

    for(i = 0; i < 5; i++){

        printf("Digite o %iº Nome: ", i+1);
        scanf("%s", &listaNome[i]);

        printf("Digite a idade: ", i+1);
        scanf("%i", &listaIdade[i]);

        system("cls");
    }

    printf("\n===MOSTRANDO RESULTADOS===\n");

    for(i = 0; i < 5; i++){

        printf("%i� Nome: %s\n", i+1, listaNome[i]);
        printf("Idade: %i\n", listaIdade[i]);
        printf("\n");
    }
        return 0;
}