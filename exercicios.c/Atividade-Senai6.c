#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "portuguese");
	
	char nomeAluno[200];
	float primeiraNota, segundaNota, terceiraNota, media;
	
	printf("Digite o nome do aluno: ");
	scanf("%s", &nomeAluno);


	printf("Digite a primeira nota: " );
	scanf("%f",&primeiraNota);
	
	printf("Digite a segunda nota: " );
	scanf("%f",&segundaNota);
	
	printf("Digite a terceira nota: ");
	scanf("%f",&terceiraNota);
	
	media = (primeiraNota + segundaNota + terceiraNota) / 3;
	
	if(media >= 7){
		printf("Aprovado");
	}else{
		printf("Reprovado");
	}
	
	return 0;
}
