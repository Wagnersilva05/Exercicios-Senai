#include <stdio.h>
#include <locale.h>

#define TAM 6

int main(){
    setlocale(LC_ALL, "portuguese");

    int numero[TAM];
    int i;


    for(i = 0; i < TAM; i++){
        
       do{
        printf("Digite o %iº número: ", i+1);
        scanf("%i", &numero[i]);

       }while (numero[i] < 0);
       
    }

        printf("\n===MOSTRANDO RESULTADOS===\n");

        for(i = TAM -1; i >= 0; i--){
            printf("%iº número: %i\n", i+1, numero[i]);
        }

}