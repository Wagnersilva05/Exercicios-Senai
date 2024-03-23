#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "portuguese");
	
     char nome[200];
     int idade;
     
     
     printf("Digite seu nome: ");
     scanf("%s", &nome);
     
     printf("Digite sua idade: ");
     scanf("%i", &idade);
     
     if(idade >=  18 || idade <=  65){
     	printf("Voto  obrigatorio");
	 } 
	 	else{
	 	printf("Voto nao obrigatorio");
	}
	 
	

	 
	
	return 0;
} 
