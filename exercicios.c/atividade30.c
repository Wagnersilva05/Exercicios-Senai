#include <stdio.h>


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
	if(media >= 7 ){
		printf("Aprovado");
	}
	if(media >= 5){
		printf("Recuperação");
	}else{
		printf("Reprovado");
	}
	
    printf("\nMedia: %.1f", media); 
	 return 0;
	
}
