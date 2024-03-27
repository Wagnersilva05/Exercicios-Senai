#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <ctype.h>

int main(){
    setlocale (LC_ALL, "portuguese");


    int contador = 0;
    char c;
    do{

        contador += 1;
        printf("Digite 0 para sair do looping:\n ");
        printf("%i quantidade de vezes.\n", contador);
        c = getchar();
    }
    while (c != '0');
   
    

    return 0;
}