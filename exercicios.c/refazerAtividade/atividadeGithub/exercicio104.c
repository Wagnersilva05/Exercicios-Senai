#include <stdio.h>
#include <locale.h>
#include <ctype.h>

    
int main(){
    setlocale(LC_ALL, "portuguese");

    char meses[12][200] = {"Janeiro", "Fevereiro", "Março", "Abril", "Maio", "Junho", "Julho", "Agosto", "Setembro", "Outubro", "Novembro", "Dezembro"};
    float media, temperaturaAnual, temperatura[12];
    int somaTemperatura = 0;
    int i;


    for(i = 0; i < 12; i++){

        printf("Digite a temperatura de %s : ", meses[i]);
        scanf("%f", &temperatura[i]);

        somaTemperatura+=temperatura[i];
        media = (float) somaTemperatura / 12;
    }
       
        
        printf("Temperatura acima da média anual (%.2f°). ", media);
        for(i = 0; i < 12; i++){
        
          if(temperatura[i] > media){
            printf("\n%.2f em %s.", temperatura[i], meses[i]);
        }  
        } 

        
           

           

        return 0;
}
            