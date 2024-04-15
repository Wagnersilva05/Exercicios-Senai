#include <stdio.h>
#include <locale.h>


int main (){
    setlocale(LC_ALL, "portuguese");

    int numeroPessoas, idade, soma = 0;
    float media;
    int i;

    printf("Digite o numero de pessoas: ");
    scanf("%i", &numeroPessoas);

        for(i = 1; i <= numeroPessoas; i++){

            printf("\nDigite a idade da %iº pessoa: ", i);
            scanf("%i", &idade);

            
            soma += idade;
            media = soma / numeroPessoas;
        }

             

             printf("Media: %f\n", media);
            if(media < 26){
                printf("A turma é jovem.");
            }else if(media < 60){
                printf("A turma é adulta.");
            }else{
                printf("A turma é idosa.");
            }
}