#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "");
	
	
	char sexo;
	float MediaSalarialGrupo, salario;
	int idade, SalarioDeMuheres = 0, contador = 0;
	
	

		
		printf("Digite a seu sexo: ");
		scanf("%c", &sexo);
		
		printf("Digite sua idade: ");
		scanf("%i", &idade);
		
		printf("Digite seu salario: ");
		scanf("%f", &salario);
		
		
		system ("cls");
		
		
		printf("=== MENU ===");
		printf("1 - Adicionar pessoa \n");
		printf("2 - Exibir reultados e sair \n");

		
	
		if (sexo == 'f' && salario > 5000){
            SalarioDeMuheres++;
        }

        int opcao;
        printf("Escolha uma opcao: ");
        scanf("%d", &opcao);

        if (opcao == 2) {
            break;
        }

        system("cls");
    }
		
		
		printf("A quantidade de mulheres com salario maior que 5000 é: %d\n", SalarioDeMuheres);

    return 0;
			
		}
			

				
				
		
	
	
 		
 		
	
} 
