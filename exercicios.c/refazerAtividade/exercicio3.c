#include <stdio.h>
#include <locale.h>
#include <string.h>

#define TAM 4

int main (){
    setlocale(LC_ALL, "portuguese");

    int nota[TAM], soma = 0;
    int i;
    float media;
    char condicao[200];

    for(i = 0; i < 4; i++){

        printf("Digite a %iª nota: ", i+1);
        scanf("%i", &nota[i]);


        soma+=nota[i];

        if(nota[i] >= 7){
            strcpy (condicao , "Aprovado");

        }else if(nota[i] >= 5){
            strcpy (condicao, "Recuperação");
        }else{
            strcpy (condicao, "Reprovado");
        }
    }
        media = soma / TAM;

        printf("\n===MOSTRANDO RESULTADOS===\n");

    for(i = 0; i < TAM; i++){
        printf("%iª Nota: %i\n", i+1, nota[i]);
        
    } 
    printf("\n");
    printf("Média: %.1f\n", media);
    printf("Situação: %s", condicao); 
    
}