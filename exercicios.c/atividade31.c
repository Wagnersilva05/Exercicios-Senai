#include <stdio.h>
#include <limits.h>


int main () {
	
	
	
	int numero[5];
	int maiorValor = INT_MIN, menorValor = INT_MAX;
	int i;
	
	
	printf("Digite numeros:\n");
	for(i = 0; i < 5; i++){
		printf("numero %d: ", i + 1);
		scanf("%d", &numero[i]);
	
	}

	
	 printf("\nExibindo os numeros:\n");
	for(i = 0; i < 5; i++){
		printf("Numero %d: %d\n", i+1, numero[i]);
		
		if( numero[i] > maiorValor){
		maiorValor = numero[i];
	}
	
	if(numero[i] < menorValor){
		menorValor = numero[i];
	}
	
	}
	
	printf("\nMaior numero: %d ", maiorValor);
	printf("\nMenor numero: %d", menorValor);
	
	 return 0;
}
