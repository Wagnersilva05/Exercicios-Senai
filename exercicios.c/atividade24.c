#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


int main (){
	setlocale(LC_ALL, "");
	

    int num, contador = 0;
    float soma = 0;

    printf("Digite uma sequ�ncia de n�meros positivos (para encerrar, digite um n�mero negativo):\n");

    scanf("%i", &num);

    while (num >= 0) {
        soma += num;
        contador++;
        scanf("%i", &num);
    }

    if (contador == 0) {
        printf("Nenhum n�mero positivo foi inserido.\n");
    } else {
        float media = (float) soma / contador;
        printf("A m�dia dos n�meros inseridos �: %.1f\n", media);
    }

    return 0;
}

