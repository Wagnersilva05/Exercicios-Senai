#include <stdio.h>
#include <stdlib.h>

 
int main(){

	

	
	float notas[2][3];
	int i, j;
	char alunos [2][200];
	
	for(i = 0; i< 2; i++){
		printf("Digite o nome do %i aluno: ", i+1);
		scanf("%s", &alunos[i]);
		
		for(j = 0; j < 3; j++){
			printf("Digite a %i� nota: \n", j+1);
			scanf("%f", &notas[i][j]);
		}
	}
	printf("\n");
	
	for(i = 0; i < 2; i++){
		printf("%i� aluno: \n", i+1, alunos[i]);
		
		for(j = 0; j < 3; j++){
			printf("%i� nota: %.1f \n", j+1, notas[i][j]);
		}
	}
	
	return 0;
	
}
