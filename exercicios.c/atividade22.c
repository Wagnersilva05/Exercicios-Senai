#include <stdio.h>
#include <locale.h>
#include <ctype.h>


int main () {
	setlocale(LC_ALL,"");
	
	
	int contador = 0;
	float nota, soma = 0, media;
	char resposta;
	
	do{
		
		printf("Digite uma nota: ");
		scanf("%f", &nota);
		
		fflush(stdin);
		
		
		printf("Deseja inserir mais uma nota: ");
		scanf("%c", &resposta);
		resposta = toupper(resposta);
		
		
		soma += nota;
		contador++;
		
	}while(resposta != 'N');
	
	media = soma / nota;
	
	printf("\n == Exibindo resultados===\n");
	printf("Média: %.f \n", media);
}
