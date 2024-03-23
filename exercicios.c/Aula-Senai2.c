#include <stdio.h>

int main() {
	
     // Declarando variáveis. 	
	char nome[200]; // Cadeia
	char sexo; // Caracter
	int idade; // Inteiro
	float peso; // Real
	
	// Solicitando dados para o usuário.
	printf("Digite seu nome: ");
	scanf("%s",&nome);
	
	fflush(stdin); //Limpa o cache de input.
	
	printf("Digite seu sexo - M ou F: ");
	scanf("%c",&sexo);
	
	printf("Digite sua idade: ");
	scanf("%i",&idade);
	
	printf("Digite seu peso: ");
	scanf("%f" ,&peso);
	
	// Exibindo resultado.
	printf("\n=== Exibindo resultados ===\n");
	printf("Nome: %s \n", nome); // %s -> string -> cadeia 
	printf("Sexo: %c \n", sexo); // %c -> char -> caracter 
	printf("Idade: %i \n", idade); // %i -> int -> inteiro
	printf("Peso: %f", peso); // %f -> float -> real 
	return 0;
}
