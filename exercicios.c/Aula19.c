#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
    setlocale (LC_ALL, "portuguese");

    int iJ, iI;
    iJ = 17;
    iI = 60;

    int idade = 0;

    printf("Digite sua idade: ");
    scanf("%i", &idade);

    if(idade <= iJ){
        printf("\nA idade informada é de jovem.");
    }else
        if(idade >= iI){
            printf("\nA idade informada é de idosa.");
        }else
           if( ( idade > iJ ) && ( idade < iI ) ){
            printf("\nA idade informada é de uma pessoa de meia-idade.");
        }
    

    return 0;
}