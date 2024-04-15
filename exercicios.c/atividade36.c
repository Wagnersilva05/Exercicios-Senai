#include <stdio.h>
#include <locale.h>

#define TAMANHO 6

int main() {
    setlocale(LC_ALL, "");
    int numeros[TAMANHO], somaPositivos = 0;
    int i, quantidadeNegativos = 0;
   
    printf("=== Solicitando dados para o usuário === \n");
    for (i = 0; i < TAMANHO; i++) {
        do {
            printf("Digite o %iº número: ", i+1);
            scanf("%i",&numeros[i]);
        } while (numeros[i] < 0 || numeros[i] % 2 == 1);
    }
   
    printf("\n=== Exibindo dados para o usuário na ordem inversa === \n");
    for (i = TAMANHO - 1; i >= 0; i--) {
        printf("%iº número: %i \n", i+1, numeros[i]);
    }

    return 0;
}


