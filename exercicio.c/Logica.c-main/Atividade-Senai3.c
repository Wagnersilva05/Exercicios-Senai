#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
	
	int numero;
	
	printf("Digite um numero: ");
	scanf("%i", &numero);
	
	system("cls");
	
	if(numero % 2 == 0){
		printf("par");
	}else{
		printf("impar");
	}
	
	return 0 ;
	
	
	
	
}
