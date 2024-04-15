#include <stdio.h>
#include <locale.h>


int main (){
    setlocale(LC_ALL, "portuguese");


    float valorProduto = 0.18, somaProduto = 0;
    int i;

        printf("\nLOJA QUASE DOIS - TABELA DE PREÇOS\n");

        for(i = 1; i <= 50; i++){

            somaProduto+=valorProduto;

              printf("\n%i - R$ %.2f", i, somaProduto);

            
    
        }
    return 0;
}