#include <stdio.h>
#include <locale.h>
#include <ctype.h>

int main (){
    setlocale(LC_ALL, "portuguese");

    float somaProduto = 0;
    float trocoCliente, valorProduto, dinheiroCliente, quantidadeProduto;
    int i;


    printf("Quantos produtos deseja levar? ");
    scanf("%f", &quantidadeProduto);

       
        for( i = 1; i <= quantidadeProduto; i++){

           
            
            printf("Digite o valor do %iº produto: ", i);
            scanf("%f", &valorProduto);

            fflush(stdin);
            somaProduto+=valorProduto;
        }
        
            
       
        printf("\nQuantos em especie vai dar? ");
        scanf("%f", &dinheiroCliente);

         trocoCliente = dinheiroCliente - somaProduto;


         printf("Total produto: %.2f\n", somaProduto);
         printf("Troco: %.2f\n", trocoCliente);

    return 0;     


}
