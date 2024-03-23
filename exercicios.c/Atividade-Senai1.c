#include <stdio.h>
#include <stdlib.h>

int main() {

    int primeiroNumero, segundoNumero;
    
    printf("Digite o primeiro numero: \n");
    scanf("%i", &primeiroNumero);

    printf("Digite o segundo numero: \n");
    scanf("%i", &segundoNumero);

    int soma = primeiroNumero + segundoNumero;
    printf("A soma dos numeros e: %i\n", soma);

    int subtracao = primeiroNumero - segundoNumero;
    printf("A subtracao dos numeros e: %i\n", subtracao);

    int multiplicacao = primeiroNumero * segundoNumero;
    printf("A multiplicacao dos numeros e: %i\n", multiplicacao);

    int divisao = primeiroNumero / segundoNumero;
    printf("A divisao dos numeros e: %i\n", divisao);

    return 0;
}
