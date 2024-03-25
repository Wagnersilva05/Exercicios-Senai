#include <stdio.h>
#include <locale.h>


int main(){
	setlocale(LC_ALL, "");
	
	int numero[5];
	int soma = 0;
	int i;
	
	printf("Digite 5 numeros\n");
	
	for( i = 0; i < 5; i++){
		printf("Numero %d: ", i + 1);
		scanf("%d", &numero[i]);
		
	}
	for(i = 0; i < 5; i++){
		soma += numero[i];
	}
	
	printf("a soma dos numeros e: %d", soma);
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}
