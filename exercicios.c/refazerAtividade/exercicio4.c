#include <stdio.h>
#include <locale.h>
#include <limits.h>

#define TAM 5

int main () {
    setlocale(LC_ALL, "portuguese");

    int numero[TAM];
    int maiorNumero = INT_MIN, menorNumero = INT_MAX;
    int i;

    for(i = 0; i < TAM; i++){

        printf("Digite a %i� nota: ", i+1);
        scanf("%i", &numero[i]);

        if(numero[i] > maiorNumero){
         maiorNumero =  numero[i] ;
        }else if(numero[i] < menorNumero){
           menorNumero =  numero[i] ;
        }
    }

    printf("\n===MOSTRANDO RESULTADOS===\n");

    for(i = 0; i < TAM; i++){

        printf("%i� Nota: %i\n", i+1, numero[i]);
    }

    printf("Maior n�mero: %i\n", maiorNumero);
    printf("Menor n�mero: %i\n", menorNumero);


}