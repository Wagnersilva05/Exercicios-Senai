#include <stdio.h>
#include <stdlib.h>

int main() {

    char nomeAluno[200];
    int idade;
    float primeraNota, segundaNota, terceiraNota, quartaNota, media;

    printf("Digite o nome do aluno: \n");
    scanf("%s", &nomeAluno);

    printf("Digite a idade do aluno: \n");
    scanf("%i", &idade);

    printf("Digite a primeira nota: \n");
    scanf("%f", &primeraNota);

    printf("Digite a segunda nota: \n");
    scanf("%f", &segundaNota);

    printf("Digite a terceira nota: \n");
    scanf("%f", &terceiraNota);

    printf("Digite a quarta nota: \n");
    scanf("%f", &quartaNota);

    media = primeraNota + segundaNota + terceiraNota + quartaNota / 4;
    
    system("cls");

    printf("=== EXIBINDO RESULTADOS ===\n");
    printf("nome: %s\n", nomeAluno);
    printf("Idade: %i\n", idade);
    printf("Primeira nota: %.0f\n", primeraNota);
    printf("Segunda nota: %.0f\n", segundaNota);
    printf("Terceira nota: %.0f\n", terceiraNota);
    printf("Quarta nota: %.0f\n", quartaNota);
    printf("Media: %.2f\n", media);
    return 0;

}