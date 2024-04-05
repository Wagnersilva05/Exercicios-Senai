#include <stdio.h>
#include <locale.h>
#include <limits.h>
#include <time.h>
#include <stdlib.h>


 int main (){
 	setlocale(LC_ALL, "");
 	
 	
 	
 	float maiorSalario = INT_MIN, menorSalario = INT_MAX;
 	float salarioPopulacao, salarioFamilia;
 	int opcao, contadorFilho = 0, contadorPopulacao = 0, somaFamilia = 0, somaFilhos = 0, contadorFamilia = 0;
 	float mediaPopulacao, mediaFilhos;
 	int quantidadeFilhos;
 	
 	
 	
 	  do{
 		
 		printf(" === Menu === \n");
 		printf("1 - Adicionar pessoa\n");
 		printf("2 - Sair e exibir resultados\n");
 		printf("Digite a opcao desejada: ");
 		scanf("%i", &opcao);
 		
 		
 		switch (opcao) {
 			
 			case 1: {
 				
 				
 				printf("Digite o salario da familia: ");
 				scanf("%f", &salarioFamilia);
 				
 				
 				printf("Quantidade de filhos: ");
 				scanf("%i", &quantidadeFilhos);
 				
 				
 				somaFamilia += salarioFamilia;
				contadorPopulacao++;
				somaFilhos += quantidadeFilhos;
				contadorFilho++;
				
				contadorFamilia++;	
 				
				break;
			 }
			 case 2: {
			 	
			 	printf("Opçao invalida!");
			 	sleep(4);
			 	system ("cls");
				break;
			 }
		 }
	 }while(opcao != 2);
	 	
	mediaPopulacao = somaFamilia / contadorPopulacao;
	mediaFilhos = (float)somaFilhos / contadorFilho;
	    
	     
	 	
	 
	 
	printf("\n===Exibindo resultados===");
	printf("\nTotal de familia que responderam: %i", contadorFamilia);
	printf("\nMédia da popuaçâo: %i", contadorPopulacao);
	printf("\nMédia de numero de filhos: %.1f", mediaFilhos);
	printf("\nMaior salario: %f", maiorSalario);
	printf("\nMenor salario: %f", menorSalario);
	 	
	 	
	 
	 
	 
	 
	 return 0;
 	
 }
