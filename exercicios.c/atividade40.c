#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "");
	
	char bandaMusical[3][200];
	char integrantes[3][5][200];
	int i, j; 
	
	
	for(i = 0; i < 3; i++){
		
		printf("%iª Banda: ", i+1);
		fgets(bandaMusical[i], sizeof(bandaMusical[i]), stdin);
		
		for(j = 0; j < 5; j++){
	
			printf("%iº Integrante: ", j+1);
			fgets(integrantes[i][j], sizeof(integrantes[i][j]), stdin);
		}
	}
		system("cls");
	
	 	printf("\n===EXIBINDO RESULTADOS===\n");
	 
	 for(i = 0; i < 3; i++){
	 	
	 	printf("\n%iª Banda: %s\n", i+1, bandaMusical[i]);
	 	
	 	for(j = 0; j < 5; j++){
	 		
	 		printf("%iº Integrante: %s", j+1, integrantes[i][j]);
		 }
	 }
	 
	 return 0;
	
}
