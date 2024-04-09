#include <stdio.h>
#include <limits.h>

#define TAM 6


int main () {
	
	
	
	int numero[TAM];
	int pares = 0, impares = 0;
	int i;
	
	
	printf("Digite numeros:\n");
	for(i = 0; i < TAM; i++){
		printf("numero %d: ", i + 1);
		scanf("%d", &numero[i]);
	
	}

	
	 printf("\nExibindo os numeros:\n");
	for(i = 0; i < TAM; i++){
		printf("Numero %d: %d\n", i+1, numero[i]);
		
	if(numero[i] % 2 == 0){
		pares++;
	}else if(numero[i] % 2 != 0){
		impares++;
	}

	
	}
	
	printf("\nNumero impares: %d ", impares);
	printf("\nNumeros pares: %d", pares);
	
	 return 0;
}
