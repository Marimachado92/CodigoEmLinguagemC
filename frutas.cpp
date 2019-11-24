#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

float num1, num2, resultado;

int menu;

int main() {
   setlocale(LC_ALL,"portuguese");
   
	do{
  
   		menu = 99;
   		num1 = 0;
   		
	   	printf("  _______________________________________\n");
	   	printf(" |============= FRUTAS!!!! =============|\n");
	   	printf(" |                                      |\n");
	   	printf(" | DIGITE 1 PARA ESCOLHER ABACAXI		|\n");
	   	printf(" | DIGITE 2 PARA ESCOLHER MACA  		|\n");
	   	printf(" | DIGITE 3 PARA ESCOLHER PERA  		|\n");
	   	printf(" | DIGITE 0 PARA SAIR               	|\n");
	   	printf(" |______________________________________|\n");
	   	printf("\n\n"); 
	   	printf(" Qual fruta voce Deseja? ");
	   	fflush(stdin);
	    scanf("%i", &menu);
    
	   
	   	switch(menu){
	   		
	   	
	   		case 0:
	   			printf("\n\n Obrigado, volte sempre!");
	   			printf("\n\n"); 
	   			system("pause");
	   		break;	
	   		
	   	
	   		case 1:
	   			
			   	printf("\n\n Escolheu Abacaxi! Quantos deseja: ");
	   			fflush(stdin);
				scanf("%f", &num1);

	 	    	resultado = num1;
	   			printf("\n O Total de abacaxi: %.1f ",resultado);
	    		
	   			printf("\n\n");
	   			system("pause"); 
	   			system("cls"); 
	   			
	   		break;
	   		
	   		
	   		case 2:
	   			
			   printf("\n\n Escolheu Maca! Quantos deseja: ");
	   			fflush(stdin);
				scanf("%f", &num1);
				
	  			resultado = num1;
	   			printf("\n Total de maca: %.1f", resultado);
	    
	   			printf("\n\n"); 
	   			system("pause"); 
	   			system("cls"); 
	   			
	   		break;	
	   		
	   		
	   		case 3:
	   			
	   			printf("\n\n Escolheu Pera! Quantos deseja: ");
	   			fflush(stdin);
				scanf("%f", &num1);
				
	  			resultado = num1;
	   			printf("\n Total de Pera: %.1f",resultado);
	
	   			printf("\n\n"); 
	   			system("pause"); 
	   			system("cls"); 
	   			
	   		break;	

		
			default:
				
			printf("\n OPÇÃO INVÁLIDA"); 
			printf("\n\n"); 
	   		system("pause"); 
	   		system("cls"); 
		}
	
	}while (menu!=0);
	return 0;
}
