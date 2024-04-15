#include <stdio.h>
#include <locale.h>

#define TAMANHO 6

int main() {
    setlocale(LC_ALL, "");
    int numeros[TAMANHO], somaPositivos = 0;
    int i, quantidadeNegativos = 0;
   
    printf("=== Solicitando dados para o usu�rio === \n");
    for (i = 0; i < TAMANHO; i++) {
        do {
            printf("Digite o %i� n�mero: ", i+1);
            scanf("%i",&numeros[i]);
        } while (numeros[i] < 0 || numeros[i] % 2 == 1);
    }
   
    printf("\n=== Exibindo dados para o usu�rio na ordem inversa === \n");
    for (i = TAMANHO - 1; i >= 0; i--) {
        printf("%i� n�mero: %i \n", i+1, numeros[i]);
    }

    return 0;
}


