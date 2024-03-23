#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


int main(){
	setlocale(LC_ALL, "");
	
	int quantidadeMaca;
	float  precoMaca, precoTotal;
	
	
	printf("Quantas maçãs: ");
	scanf("%i", &quantidadeMaca);
	
	
	if(quantidadeMaca > 12){
		precoMaca = 1.0;
	
	}else{
		precoMaca = 1.30;
	}

	precoTotal = quantidadeMaca * precoMaca;
	
	printf("quantidade maçã: %i\n", quantidadeMaca);
	printf("Preço total: %.2f\n", precoTotal);
	
}
