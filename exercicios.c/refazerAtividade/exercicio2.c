#include <stdio.h>
#include <locale.h>

#define TAM 3

int main () {
    setlocale(LC_ALL, "portuguese");

    int nota[TAM], soma = 0;
    int i;
    float media;

    for(i = 0; i < TAM; i++){

        printf("Digite a %i� nota: \n", i+1);
        scanf("%i", &nota[i]);

        soma += nota[i];
       
    }
        media = soma / TAM;
    printf("\n===MOSTRANDO RESULTADOS===\n");

    for(i = 0; i < TAM; i++){

        printf("%i� Nota: %i\n", i+1, nota[i]);
    }
    printf("M�dia: %.1f", media);
}