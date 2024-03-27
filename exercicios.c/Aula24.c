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
    2) -= -> subtraÃ§Ã£o
    3) *= -> multiplicaÃ§Ã£o 
    4) /= -> divisÃ£o
    5) %= -> resto da divisÃ£o
    */


   int i = 50;

   printf("soma: %i\n", i += 100);
   printf("subtração: %i\n", i -= 50);
   printf("multiplicação: %i\n", i *= 3);
   printf("divisão: %i\n", i /= 3);
   printf("resto: %i\n", i %= 3);

    return 0;
}