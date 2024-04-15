#include <stdio.h>
#include <locale.h>

#define TAM 3

int main () {
    setlocale(LC_ALL, "portuguese");

    int nota[TAM];
    int i;

    for(i = 0; i < TAM; i++){

        printf("Digite a %iª nota: \n", i+1);
        scanf("%i", &nota[i]);
    }

    printf("\n===MOSTRANDO RESULTADOS===\n");

    for(i = 0; i < TAM; i++){

        printf("%iª Nota: %i\n", i+1, nota[i]);
    }
}