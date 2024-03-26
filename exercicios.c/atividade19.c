#include <stdio.h>
#include <locale.h>
#include <string.h>


int main(){
	setlocale(LC_ALL, "");
	
	 int contador;
	float nota;
	do{
		
		contador = contador++;
		
		printf("Nota do aluno: ");
		scanf("%f", &nota);
		
	}while(nota < 0 || nota > 10);
	
	printf("Nota do aluno %i vezes", contador );
	
	
	
	return 0;
}
