#include <stdio.h>
#include <stdlib.h>

 
int main(){
	
	float media[4], soma[4];
	float notas[4][3];
	int i, j;
	char alunos [4][200];
	
	for(i = 0; i< 4; i++){
		printf("Digite o nome do %i aluno: ", i+1);
		scanf("%s", &alunos[i]);
		
		for(j = 0; j < 3; j++){
			printf("Digite a %i� nota: \n", j+1);
			scanf("%f", &notas[i][j]);
			
			soma[i] +=notas[i][j];
		
		}	
		media[i] = soma[i] / 3;
	}
	
		
		printf("\n");
	
	for(i = 0; i < 4; i++){
		printf("%i� aluno: %s\n", i+1, alunos[i]);
		
		for(j = 0; j < 3; j++){
			printf("%i� nota: %.1f \n", j+1, notas[i][j]);
		
		}
			printf("Media: %.1f\n", media[i]);
	}
	
	
	
	
	return 0;
	
}
