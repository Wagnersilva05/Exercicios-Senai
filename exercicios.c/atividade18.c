#include <stdio.h>
#include <locale.h>
#include <string.h>


int main(){
	setlocale(LC_ALL, "");
	
	int i;
	float soma = 0, notas, media;
	char condicao[200];
	
	for(i = 1; i <= 3; i++){
		
		printf("Digite a %iº nota: ", i);
		scanf("%f", &notas);
		
		soma = soma + notas;
		media = soma / 3;
		
		if(media >= 7){
		  strcpy(condicao, "Aprovado");
		 }else if(media >= 4){
			strcpy(condicao, "Recuperação");
		}else{
			strcpy(condicao, "Reprovado");
		}
		
	}
	
		printf("Media: %.1f\n", media);
		printf("Resultado: %s\n", condicao);
	
	
	return 0;
}
