#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
    setlocale (LC_ALL, "portuguese");

    int x = 0;
    int valDigitado = 0;

    printf("Quantidade de repetição: ");
    scanf("%i", &valDigitado);

    while (x < valDigitado){
        printf("%i\n", x *10);
        x = x + 1;
    }
    


    return 0;
}