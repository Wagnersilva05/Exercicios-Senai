#include <stdio.h>
#include <locale.h>

#define TAM 6
int main (){
	setlocale(LC_ALL, "");
	
	
	int numero[TAM];
	int i;
	
	
	
	for(i = 0; i < TAM; i++){
		do{
		
		printf("Digite o %iº numero: ", i+1);
		scanf("%i", &numero[i]);
		
		while(numero[i] % 2 == 0 || numero[i] < 0);
	}
	
 }
	
	
		
		

	
	printf("\n===Mostrando resultado===\n");
	
	for(i TAM - 1; i >= 0; i--){
		
		printf("%iº numero: %i\n", i+1, numero[i]);
	}
	return 0;
}
