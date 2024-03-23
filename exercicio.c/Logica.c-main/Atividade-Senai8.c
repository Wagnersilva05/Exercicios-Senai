#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "portuguese");
	
	int primeiroNumero, segundoNumero, soma, produto;
	int maiorValor, menorValor;
	float media;
	
	printf("Digite o primeiro numero: ");
	scanf("%i", &primeiroNumero);
	
	printf("Digite o segundo numero: ");
	scanf("%i", &segundoNumero);
	
	soma = primeiroNumero + segundoNumero;
	produto = primeiroNumero * segundoNumero;
	media = soma / (float) 2;
	
	if(primeiroNumero > segundoNumero){
		maiorValor = primeiroNumero;
		menorValor = segundoNumero;	
	}else{
		(segundoNumero > primeiroNumero)
			maiorValor = segundoNumero;
			menorValor = primeiroNumero;		
	}
	
	printf("primeiro numero: %i\n", primeiroNumero);
	printf("segundo numero: %i\n", segundoNumero);
	printf("soma : %i\n", soma);
	printf("produto: %i\n", produto);
	printf("media %f\n", media);
	printf("maior numero: %i\n", maiorValor);
	printf("menor numero: %i\n", menorValor);
	
	
	return 0;
} 
