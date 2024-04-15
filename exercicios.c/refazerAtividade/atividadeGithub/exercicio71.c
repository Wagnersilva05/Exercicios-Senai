#include <stdio.h>
#include <locale.h>
#include <time.h>
#include <stdlib.h>

int main (){
    setlocale(LC_ALL, "portuguese");

    int turma, aluno, somaAlunos = 0;
    int i;
    float media;


        printf("digite a quantidade de turmas: ");
        scanf("%i", &turma);

          
        for(i = 1; i <= turma; i++){

            

            while(1){

                printf("Digite a quantidade de alunos da %iª turma: ", i);
                scanf("%i", &aluno);

                if(aluno > 40){
                    
                    printf("\nNão pode ser mais de 40 alunos na turma.");
                    sleep(4);
                }else{
                    break;
                }
            }

            somaAlunos+= aluno;
            media = (float)somaAlunos / turma;
                

        }

        printf("A media de alunos por turma é de: %.1f", media);

           
   

    return 0;
}