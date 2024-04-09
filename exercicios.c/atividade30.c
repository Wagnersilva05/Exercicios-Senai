#include <stdio.h>
#include <locale.h>

int main (){
	
	
    int nota[3];
    int i;
    int soma = 0;
    float media;

    printf("Digite as notas: \n");
    for (i = 0; i < 3; i++){
        printf("Nota %d: ", i + 1);
        scanf("%d", &nota[i]);

        soma += (float)nota[i];
    }

    media = (float)soma / 3;

    printf("\nExibindo notas:\n");
    for(i = 0; i < 3; i++){
        printf("\nNota %d: %d", i+1, nota[i]);
    }

    
    printf("\nMedia: %.1f", media); 

    if(media >= 7 ){
        printf("\nAprovado");
    } else if(media >= 5){
        printf("\nRecuperação");
    } else {
        printf("\nReprovado");
    }
    return 0;
}
