#include <stdio.h>

int main() {
	
	char nome[200] = "Marta"; // Cadeia
	char sexo = 'F'; // Caracter
	int idade = 20; // Inteiro
	float peso = 58.400; // Real
	
	// Exibindo resultado.
	printf("\n=== Exibindo resultados ===\n");
	printf("Nome: %s \n", nome); // %s -> string -> cadeia 
	printf("Sexo: %c \n", sexo); // %c -> char -> caracter 
	printf("Idade: %i \n", idade); // %i -> int -> inteiro
	printf("Peso: %f", peso); // %f -> float -> real 
	return 0;
}
