#include <stdio.h>
#include <locale.h>


int main() {
    setlocale(LC_ALL, "Portuguese");

    int  totalDeCds, totalGasto, somaTotal = 0;
    float  mediaGasto;
    int i;

        
        printf("Total de CD's: ");
        scanf("%i", &totalDeCds);

        for(i = 1; i <= totalDeCds; i++){

            printf("\nValor gasto no %iº CD: ", i);
            scanf("%i", &totalGasto);

            somaTotal+=totalGasto;
            mediaGasto = (float)somaTotal / (float)totalDeCds;
        }

        printf("Total gasto: %i\n", somaTotal);
        printf("Média de gasto em cada CD: %.2f", mediaGasto);
        
       

    return 0;

}

