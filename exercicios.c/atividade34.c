#include <stdio.h>
#include <locale.h>


#define TAM 5

int main() {
		setlocale(LC_ALL, "");
	
	 int numero[TAM];
	 int i;
	
	 
	 for(i = 0; i < TAM; i++){
	 	
	 	printf("Digite 0 %iº numero: ", i+1);
	 	scanf("%i", &numero[i]);
	 	
	 	
	 	if(numero[i] < 0){
	 		numero[i] = 0;
	 		
		 }
	 	
	 }
	 
	 printf("\n===Mostrando resultados===\n");
	 
	 for(i = 0; i < TAM; i++){
	 	printf("%iº numero: %i\n", i+1, numero[i]);
	 }
	 
	 
}
	 
	
