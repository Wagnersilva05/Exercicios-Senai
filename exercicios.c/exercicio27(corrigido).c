#include <stdio.h>
#include <locale.h>
#include <limits.h>
#include <time.h>
#include <stdlib.h>



int main() {
    setlocale(LC_ALL, "");

    int maiorSalario = INT_MIN, menorSalario = INT_MAX;
    float salarioFamilia;
    int opcao, contadorFilho = 0, contadorPopulacao = 0, somaFamilia = 0, somaFilhos = 0, contadorFamilia = 0;
    float mediaPopulacao, mediaFilhos;
    int quantidadeFilhos;

    do {

        printf(" === Menu === \n");
        printf("1 - Adicionar pessoa\n");
        printf("2 - Sair e exibir resultados\n");
        printf("Digite a opcao desejada: ");
        scanf("%i", &opcao);

        system("cls");

        switch (opcao) {

            case 1: {

                printf("Digite o salario da familia: ");
                scanf("%f", &salarioFamilia);

                printf("Quantidade de filhos: ");
                scanf("%i", &quantidadeFilhos);

                // Atualizar o maior e o menor salário
                if (salarioFamilia > maiorSalario)
                    maiorSalario = salarioFamilia;
                if (salarioFamilia < menorSalario)
                    menorSalario = salarioFamilia;

                // Atualizar contadores e somas
                contadorPopulacao++;
                contadorFamilia++;
                somaFamilia += salarioFamilia;
                contadorFilho += quantidadeFilhos;
                somaFilhos += quantidadeFilhos;

                break;
            }
            case 2: {
                break;
            }
            default :
                printf("Opção inválida!");
                sleep(4);
                system("cls");
                break;


        }
    } while (opcao != 2);

    // Calcular médias
    mediaPopulacao = (float) somaFamilia / contadorPopulacao;
    mediaFilhos = (float) contadorFilho / contadorFamilia;

    printf("\n===Exibindo resultados===");
    printf("\nTotal de famílias que responderam: %i", contadorFamilia);
    printf("\nMédia da população: %.2f", mediaPopulacao);
    printf("\nMédia de número de filhos: %.2f", mediaFilhos);
    printf("\nMaior salário: %i", maiorSalario);
    printf("\nMenor salário: %i", menorSalario);

    return 0;
}
