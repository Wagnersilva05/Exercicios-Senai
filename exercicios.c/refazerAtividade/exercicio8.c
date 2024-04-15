#include <stdio.h>
#include <locale.h>


#define TAM 5

int main () {
    setlocale(LC_ALL, "portuguese");

    
    int numero[TAM];
    int i;

    for(i = 0; i < TAM; i++){

        printf("Digite o %iº número: ", i+1);
        scanf("%i", &numero[i]);

        if(numero[i] < 0){
            numero[i] = 0;
        }
        
    }
       

        printf("\n===MOSTRANDO RESULTADOS===\n");

        for(i = 0; i < TAM; i++){

            printf("%iº Número: %i\n",i+1, numero[i]);
        }

}

        