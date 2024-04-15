#include <stdio.h>
#include <locale.h>

#define SIZE 6

int main () {
    setlocale(LC_ALL, "portuguese");

    int numero[SIZE];
    int pares = 0, impares = 0;
    int i;


    for(i = 0; i < SIZE; i++){

        printf("Digite a %iº número: ", i+1);
        scanf("%i", &numero[i]);

        if(numero[i] % 2 == 0){
            pares++;
        }else{
            impares++;
        }
    }

        printf("\n===MOSTRANDO RESULTADOS===\n");

    for(i = 0; i < SIZE; i++){
        printf("%iº número: %i\n", i+1, numero[i]);

    }

    printf("Quanidades de pares: %i\n", pares);
    printf("Quanidades de ímpares: %i\n", impares);
}