#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "");
	
	
	int pares = 0, impares = 0, positivos = 0, negativos = 0, valor;
	int i, quantidadeNumeros = 0;
	
	
	 do{
	 
	 		
	 	printf("Digite o um valor: ");
	 	scanf("%i", &valor);
	 	
	 	
	 	if(valor != 0){
	 	 	quantidadeNumeros++;
		  }
		  
	 	if(valor % 2 == 0){
	 		pares++;
		 }else if(valor % 2 != 0){
		 	impares++;
		 }
		 
		 if(valor > 0){
		 	positivos++;
		 }else if(valor < 0){
		 	negativos++;
		 }
		 	
		 
	
	 	
	 }while(valor != 0);
	 
	 printf("\nQuantidade de pares: %i\n", pares);
	 printf("Quantidade de impares: %i\n", impares);
	 printf("Quantidade de numeros positivos: %i\n", positivos);
	 printf("Quantidade de numeros negativos: %i\n", negativos);
	 printf("Quantidade de numeros inserdos: %i\n", quantidadeNumeros);
	 
	 
	return 0;
}
