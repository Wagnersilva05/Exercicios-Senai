#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "");
	
	float nota, media, soma = 0;
	int i;
	
	do{
		
	for(i = 1; i <=2; i++){
	
	printf("Digite a %i� nota: ", i);
	scanf("%f", &nota);

	soma += nota;
	media = nota / 2;
		
	}
	
	}while(nota < 0 || nota > 10);
	
	printf("A m�dia do aluno �: %.1f", media);
	
	
	
	
	
}
