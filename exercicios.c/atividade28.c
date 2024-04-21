#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>



int main (){
	
char senha[200], login[200];
char senhaCadastrada[200] = "123";
char loginCadastrado[200] = "wagner";
bool loginCorreto, senhaCorreto;
	 
	 
	 
	 do{
	 
	 printf("Digite seu login: ");
	 gets(login);
	 
	 
	 printf("Digite sua senha: ");
	 gets(senha);
	 
	 loginCorreto = strcmp(login, loginCadastrado) == 0;
	 senhaCorreto = strcmp(senha, senhaCadastrada) == 0;
	 
	
}while (!loginCorreto || !senhaCorreto);

  printf("\nBem vindo!");


return 0;
}
	
	
	
  
