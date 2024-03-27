#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
    setlocale (LC_ALL, "portuguese");

    // Resto da divisão
    printf("%i\n", 3 % 2);
    printf("%i\n", 4 % 2);
    printf("%i\n", 5 % 2);
    printf("%i\n", 6 % 2);

    return 0;
}