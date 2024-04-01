#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


int main (){
	setlocale(LC_ALL, "");
	

    int num, contador = 0;
    float soma = 0;

    printf("Digite uma sequência de números positivos (para encerrar, digite um número negativo):\n");

    scanf("%i", &num);

    while (num >= 0) {
        soma += num;
        contador++;
        scanf("%i", &num);
    }

    if (contador == 0) {
        printf("Nenhum número positivo foi inserido.\n");
    } else {
        float media = (float) soma / contador;
        printf("A média dos números inseridos é: %.1f\n", media);
    }

    return 0;
}

