#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

#define TAM 10

int main () {
    setlocale(LC_ALL, "portuguese");

    int negativos = 0;
    int somaPositivo, numero[TAM];
    int i;

    for(i = 0; i < TAM; i++){

        printf("Digite o %iº número: ", i+1);
        scanf("%i", &numero[i]);


        if(numero[i] > 0){
            somaPositivo += numero[i];
        }else if(numero[i] < 0){
        negativos++;
        }
    }
        system("cls");

        printf("\n===MOSTRANDO RESULTADOS===\n");

        printf("Soma dos positivos: %i\n", somaPositivo);
        printf("Quantidade de números negativos: %i\n", negativos);
}