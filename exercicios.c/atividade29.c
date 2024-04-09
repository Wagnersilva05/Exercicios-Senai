#include <stdio.h>


int main (){
	
	
	 int nota[3];
	 int i;
	 float media;
	 
	 
	 printf("Digite as notas: \n");
	 for (i = 0; i < 3; i++){
	 	
	 	printf("Nota %d: ", i + 1);
	 	scanf("%d", &nota[i]);
	 	
	 }
	 
	// media = (float) nota[i] / 3;
	 
	 printf("\nExibindo notas:\n");
	 for(i = 0; i < 3; i++){
	 	
	media = (float )nota[i] / 3;
	
	 printf("\nNota %d: %d", i+1, nota[i]);
	 printf("Media: ", media);
	
	 
	 return 0;
}
	
	
}
