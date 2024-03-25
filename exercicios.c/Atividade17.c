#include <stdio.h>
#include <locale.h>


int main(){
	setlocale(LC_ALL, "");
	
	float notas, soma;
	int i;
	float media;
	
		for (i = 1; i <= 4; i++){

		printf(" Digite o %iº nota: ", i);
		scanf("%f", &notas);
		 
		 soma = soma + notas;
		media = soma / 4;
		
	}
	
	printf("Media: %.2f", media);
	
	
	
	return 0;
}
