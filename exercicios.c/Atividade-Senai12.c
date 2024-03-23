#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


int main(){
	setlocale(LC_ALL, "");
	

	float altura, peso;
	char sexo;
	
	printf("Digite seu sexo: ");
	scanf("%c", &sexo);
	
	printf("Digite sua altura: ");
	scanf("%f", &altura);
		
	sexo = toupper(sexo); // Converter em maiúsculo.
	
	switch (sexo){
		case 'M':
			peso = (72.7 * altura) - 58;
			printf("Seu peso ideal é: %.2f", peso);
		  break;
		case 'F':
			peso = (62.1 * altura) - 44.7;
			printf("Seu peso ideal é: %.2f", peso);
		  break;
		  
		default:
			printf("Opção inválida!");
	}	
	
	return 0;
}
