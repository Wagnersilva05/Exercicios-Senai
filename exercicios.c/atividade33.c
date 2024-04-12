#include <stdio.h>
#include <locale.h>

#define TAM 5

int main (){
	setlocale(LC_ALL, "");
	
	int numero[TAM];
	int i;
	int soma = 0, negativos = 0;

	
	
	for(i = 0; i < TAM; i++){
		
		printf("Digite o %iº numero: ", i+1);
		scanf("%i", &numero[i]);
		
		
		if(numero[i] < 0){
			negativos++;
		}else if (numero[i] > 0){
			soma += numero[i];
		}
		
		printf("\n");
	}
	
 		printf("=== Resultados===");
 		
 		for(i = 0; i < TAM; i++){
 			printf("%iº numero: %\ni", i+1, numero[i]);
		 }
		
			printf("\nSoma: %i\n", soma);
 			printf("Quantidades de numeros negativos: %i\n", negativos);
	
	return 0;
}
