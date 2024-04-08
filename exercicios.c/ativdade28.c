#include <stdio.h>
#include <stdlib.h>




int main (){
	
int contador = 0;
char senha = "123", login = "Wagner";
char senhaCadastrada[200], loginCadastrado[200];
	 
	 
	 
	 do{
	 
	 printf("Digite seu login: ");
	 scanf("%s", &login);
	 
	 printf("Digite sua senha: ");
	 scanf("%s", &senha);
	 
	 
	 if(loginCadastrado == login && senhaCadastrada == senha){
	 	printf("Bem vindo!");
	 }else{
	 	contador++;
	 }
}while(loginCadastrado == login && senhaCadastrada == senha);


return 0;
}
	
	
	
  

