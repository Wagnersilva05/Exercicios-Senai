#include <stdio.h>
#include <stdlib.h>

int main(){

    float salario, quantidadeSalario, salarioMinimo = 1412.00;
    
    printf("Qual e o seu salario? ");
    scanf("%f", &salario);
     
    quantidadeSalario = salario / salarioMinimo;
    
    printf("Sua quantidade de salario e: %.2f", quantidadeSalario);
    
    return 0;

}
