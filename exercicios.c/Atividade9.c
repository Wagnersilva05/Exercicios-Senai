#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "portuguese");

    char conceito;
    float primeiraNota, segundaNota, soma;
    float media;


    printf("Primeira nota: ");
    scanf("%f", &primeiraNota);

	fflush(stdin);

    printf("Segunda nota: ");
    scanf("%f", &segundaNota);

    soma = primeiraNota + segundaNota;
    media = soma / (float) 2;


    if(media > 9){
        conceito = 'A';
    }else
        if(media >= 7){
            conceito = 'B';
        }else
            if(media >= 6){
                conceito = 'C';
            }else
                if(media >= 4){
                    conceito = 'D';
                }else{
                    conceito = 'E';
                }


    printf("Média do aluno: %.2f\n", media);            
    printf("Conceito: %c\n", conceito);

    if(conceito == 'A' || conceito == 'B' || conceito == 'C'){
        printf("Aprovado!\n");
    }else{
        printf("Reprovado!\n");
    }
    

    return 0;
}
