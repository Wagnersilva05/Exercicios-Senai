#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
    setlocale (LC_ALL, "portuguese");

    int x = 0;
        printf("msg\n");
        x += 1;
     

    /*
    1) += -> soma
    2) -= -> subtração
    3) *= -> multiplicação 
    4) /= -> divisão
    5) %= -> resto da divisão
    */


   int i = 50;

   printf("soma: %i\n", i += 100);
   printf("subtra��o: %i\n", i -= 50);
   printf("multiplica��o: %i\n", i *= 3);
   printf("divis�o: %i\n", i /= 3);
   printf("resto: %i\n", i %= 3);

    return 0;
}