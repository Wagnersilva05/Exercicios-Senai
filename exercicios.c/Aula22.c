#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
    setlocale (LC_ALL, "portuguese");

    int i = 1;

    while (i <= 10){
        printf("%i", i);
        i = (i + 1);
    }


    return 0;
}    