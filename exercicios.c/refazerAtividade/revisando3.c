#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

int main (){
	setlocale(LC_ALL, "portuguese");
	
	char disciplina[3][200];
	float notas[3][2];
	float media[2], soma[2];
	int i, j;
	
	
	for(i = 0; i < 3; i++){
		
		printf("%iª Disciplina: ", i+1);
		scanf("%s", &disciplina[i]);
		
		for(j = 0; j < 2; j++){
			
			printf("%iª Nota: ", j+1);
			scanf("%f", &notas[i][j]);
			
			soma[i]+=notas[i][j];
			media[i] = soma[i] / 2;
		}
	}
	
		printf("\n===EXIBINDO RESULTADOS===\n");
		
		for(i = 0; i < 3; i++){
			
			printf("Disciplina %i: %s\n", i+1, disciplina[i]);
			
			for( j = 0; j < 2; j++){
				
				printf("%iª Nota: %.1f\n", j+1, notas[i][j]);
			}
			printf("Média: %.1f\n", media[i]);
		}
		
		return 0;
}
