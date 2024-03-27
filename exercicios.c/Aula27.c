#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <ctype.h>

int main(){
    setlocale (LC_ALL, "portuguese");

    float num1, num2, resultado;
    char op = '0';

    do{
        num1, num2, resultado = 0; // Resetar variaveis.
        // imprimindo as opÃ§Ãµes da operadora.
        printf(" (1) somar\n");
        printf(" (2) subtrair\n");
        printf(" (3) multiplicar\n");
        printf(" (4) dividir\n");

        printf("Informe a operação: \n");
        op = getchar ();

        printf("Digite o primeiro numero: \n\t ");
        scanf("%f", &num1);
        printf("Digite o segundo numero: \n\t ");
        scanf("%f", &num2);

       

    }while(op != '0');

    return 0;
}