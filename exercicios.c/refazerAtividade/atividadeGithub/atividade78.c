#include <stdio.h>
#include <ctype.h>
#include <limits.h>

int main(){

	
	float menorPeso = INT_MAX, maiorPeso = INT_MIN;
	float menorAltura = INT_MAX, maiorAltura = INT_MIN;
	float altura, peso;
	int quanitdadeAltura = 0, quantidadePeso = 0;
	float mediaAltura, mediaPeso, somaPeso = 0, somaAltura = 0;
	int i;
	int codigo, opcao;
	
	

	
	do{
		printf(" === Menu === \n");
 		printf("1 - Adicionar pessoa\n");
 		printf("2 - Sair e exibir resultados\n");
 		printf("Digite a opcao desejada: ");
 		scanf("%i", &opcao);
 		system ("cls");
		
	
	
		switch (opcao){
			
		case 1: 	
		printf("%i codigo: ", i+1);
		scanf("%i", &codigo);
		
		printf("Sua altura: ");
		scanf("%f", &altura);
		quanitdadeAltura++;
		
		printf("Seu peso: ");
		scanf("%f", &peso);
		quantidadePeso++;
		
		if(peso < menorPeso ){
			menorPeso = peso;
		}
		if(peso > maiorPeso ){
			maiorPeso = peso;
		}
		
		if(altura < menorAltura  ){
			menorAltura = altura;
		}
		
		if(altura > maiorAltura){
			maiorAltura = altura;
		}
		
		somaAltura += quanitdadeAltura;
		 somaPeso += quantidadePeso;
		 
		 mediaAltura = somaAltura / quanitdadeAltura;		
		 mediaPeso = somaPeso / quantidadePeso;		
		
		break;
		
		case 0: 
		system("cls");
		
		for(i = 1; i <= codigo; i++){
		
		printf(" %i Codigo\n", i);
		printf(" %i Altura: %.1f\n", i, altura);
		printf(" %i peso: %.1f\n", i, peso);
	}
	
	printf("Maior peso: %.1f\n", maiorPeso);
	printf("Menor peso: %.1f\n", menorPeso);
	printf("Media das altura : %.1f\n", mediaAltura);
	printf("Media dos pesos : %.1f\n", mediaPeso);
	break;
}
			
		
		
	
		
	}while(opcao != 0);
	


	return 0;
}
