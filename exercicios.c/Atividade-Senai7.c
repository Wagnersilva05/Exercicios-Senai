#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	setlocale (LC_ALL, "portuguese");

	char login[200];
	char loginCadastrado[200] = "marta";
	char senhaCadastrada[200] = "123";
	char senha[200];
	
	printf("Digite seu login: ");
	scanf("%s", &login);
	
	printf("Digite sua senha: ");
	scanf("%s", &senha);
	
	if (strcmp(login, loginCadastrado) == 0 && strcmp(senha, senhaCadastrada) == 0){
		printf("Bem vindo!");
	} else{
	printf("Acesso negado!");
	
	}
	
	return 0;
	
}
