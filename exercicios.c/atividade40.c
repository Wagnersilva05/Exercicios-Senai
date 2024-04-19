#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "");
	
	char integrantes[5][200];
	char bandaMusical[3][5][200];
	int i,j; 
	
	
	for(i = 0; i < 3; i++){
		
		printf("%iª Banda: ", i+1);
		scanf("%s", &bandaMusical[i]);
		
		for(j = 0; j < 5; j++){
			fflush(stdin);
			printf("%iº Integrante: ", j+1);
			scanf("%s", &integrantes[i][j]);
		}
	}
		system("cls");
	
	 	printf("\n===EXIBINDO RESULTADOS===\n");
	 
	 for(i = 0; i < 3; i++){
	 	
	 	printf("%iª Banda: %s\n", i+1, bandaMusical[i]);
	 	
	 	for(j = 0; j < 5; j++){
	 		
	 		printf("%iº Integrante: %s\n", j+1, integrantes[i][j]);
		 }
	 }
	 
	 return 0;
	
}
