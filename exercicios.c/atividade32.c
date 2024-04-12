#include <stdio.h>
#include <locale.h>


int main (){
	setlocale(LC_ALL, "");
	
	char listaNomes[5][200];
	int listaIdade[5];
	int i;
	
	
	
	
	for(i = 0; i < 5; i++){
	printf("Digite o %i° nome: ", i+1);
	scanf("%s", &listaNomes[i]);
	
	printf("Digite o %i° idade: ", i+1);
	scanf("%i", &listaIdade[i]);
	}
	
	
	
	printf("\nMostrando resultados\n");
	
	for(i = 0; i < 5; i++){
	printf("%iº nome: %s \n", i+1, listaNomes[i]);
	printf("%iº idade: %i: \n", i+1, listaIdade[i]);
}

	
	
	
	
	
	
	
	return 0;
}
