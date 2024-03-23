#include <stdio.h>
#include <stdlib.h>

int main(){
	
	float valor, reajuste;
	
    printf("Digite um valor: ");
	scanf("%f", &valor);
	
	reajuste = valor - (valor * 10 / 100);
	
	printf("O reajuste desse valor foi: %.2f", reajuste);
	
	return 0;
}
