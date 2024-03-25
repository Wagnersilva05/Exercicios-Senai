#include <stdio.h>
#include <locale.h>


int main(){
	setlocale(LC_ALL, "");
	
	int i;
	int numero, impares = 0, pares = 0;
	
	

	
	for (i = 1; i <= 5; i++){
		
		printf(" Digite o %iº numero: ", i );
		scanf("%i", &numero);
		
		if(numero % 2 == 0){
			pares++;
		}else{
			impares++;
		}
	}
	
	printf("Pares: %i\n", pares);
	printf("Impares: %i\n", impares);
	
	return 0;
}
