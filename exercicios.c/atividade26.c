#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <time.h>
#include <locale.h>

int main () {
 setlocale(LC_ALL, "portuguese");

    
    int valor, impar = 0, par = 0;
    float media, mediaValoresPar, soma = 0;
    int contador = 0;


        printf("Digite um valor: ");
        scanf("%i", &valor);

     while (valor > 0 ) {
        if(valor % 2 == 0){
            par++;
            mediaValoresPar += valor;
        } else {
            impar++;
        }
        soma += valor;
        contador++;

        printf("Digite um valor: ");
        scanf("%i", &valor);
    }
        mediaValoresPar = mediaValoresPar / par;
        media = soma / contador;

        printf("Quantidade de numeros pares: %i\n", par);
        printf("Quantidades de numeros impares: %i\n", impar);
        printf("Média de valores pares: %.1f\n", mediaValoresPar);
        printf("Média geral: %.1f\n", media);
     


}