#include <stdio.h>
#include <locale.h>
#include <ctype.h>

int main() {

    int candidato1 = 0, candidato2 = 0, candidato3 = 0;
    int eleitores;
    char voto;
    int i;

    printf("Quantidade de eleitores: ");
    scanf("%i", &eleitores);

        fflush(stdin);

        for(i = 1; i <= eleitores; i++){

            printf("\nDigite 1, 2 ou 3 em que o eleitor %i quer votar: ", i);
            scanf("%c", &voto);

             fflush(stdin);


             if(voto == '1'){
                candidato1++;
            }else if(voto == '2'){
                candidato2++;
            }else if(voto == '3'){
                candidato3++;
            }
        }

           


            printf("\nquantidade de votos do candidato 1: %i\n", candidato1);
            printf("quantidade de votos do candidato 2: %i\n", candidato2);
            printf("quantidade de votos do candidato 3: %i\n", candidato3);


    return 0;
}