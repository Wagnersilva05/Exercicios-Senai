#include <stdio.h>
#include <locale.h>
#include <string.h>


int main(){
	setlocale(LC_ALL, "");
		
	float nota, media, soma = 0;
	int i;
	char resultado[200];
	
	
    for(i = 1; i <=3; i++){
	
	do{
			
	printf("Digite a %i� nota: ", i);
	scanf("%f", &nota);

	soma += nota;
	
	
	}while(nota < 0 || nota > 10);
	
	}
	
	 media = soma / 3;
	 
	 if(media >= 7){
		 strcpy(resultado, "Aprovado");
	 }else if(media >= 5){
	 	 strcpy(resultado, "Recupera��o");
	 }else{
	 	 strcpy(resultado, "Reprovado");
	 }
	 
	printf("A m�dia do aluno �: %.1f\n", media);
	printf("Resultado: %s\n", resultado);
	
	
	
	return 0;
}
