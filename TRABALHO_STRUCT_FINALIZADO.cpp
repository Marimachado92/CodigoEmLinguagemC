#include <stdio.h>
#include <iostream>
#include <locale.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>
#include <time.h>

	int menu;
    int contador=0;
	int opcao;
	int i;
	int op;
	
	main(void){
	
struct Empregado
{
    char  nome[15];
    char sobrenome[30];
    char data_nasc [10];
    char data_adm [10];     
    char rg [14];
    float salario;
};
struct Empregado empregado[2];
    
    setlocale(LC_ALL, "Portuguese");
    
    do{
    inicio:
        system("cls");
        
        printf("--------Menu de Cadastro de Empregados--------\n\n\n");
        printf("-------------Escolha uma das opção:------------\n\n");
        printf("1 - Cadastrar Empregados\n");
        printf("2 - Listar Todos os Empregados cadastrados\n");
        printf("3 - Sair\n     ");
        fflush(stdin);
        scanf("%d",&opcao);
        
        system("cls");
        
        switch(opcao){
            case 1:
                if (contador < 2){
                    do{
                        op='n';
                        printf("------Cadastrando Empregados-------\n\n\n");
                        printf("Nome ---:");
						fflush(stdin);                        
                        gets(empregado[contador].nome);
                        
                        
                        printf("Sobrenome ---:");
						fflush(stdin);                       
                        gets(empregado[contador].sobrenome);
                        
                        
                        printf("\nData de Nascimento ---:");
						fflush(stdin);                       
                        gets(empregado[contador].data_nasc);
                        
                        
                        printf("\nData de Admissão ---:");
						fflush(stdin);                       
                        gets(empregado[contador].data_adm);
                        
                        
                        printf("\nRG---:");
						fflush(stdin);                       
                        gets(empregado[contador].rg);
                       
                        
                        printf("\nSalario---:");
						fflush(stdin);                       
                        scanf("%f",&empregado[contador].salario);
                        
                        
                        
                        contador ++;
                        
                        printf ("Empregado Cadastrado\n"); 
						                      
                        printf("Quer Realizar Mais Algum Cadastro? S/N ");
                        fflush(stdin);                        
                        scanf("%c",&op);
                        
                        if(contador > 1){
                            printf("\nNão é possivel adicionar mais empregados!!!\n\n\nVoltando para o menu\n");
                            op='n';
                        }
                    }while(op=='s');
                }
                break;
            case 2:
                
                printf("Vamos Listar Todos os Empregados\n\n");
                
                for(i=0;i<contador;i++){
                	fflush(stdin);
                    printf("Nome ------> %s\n",empregado[i].nome);
                    printf("Sobrenome -------> %s\n",empregado[i].sobrenome);
                    printf("Data de Nascimento --> %s\n",empregado[i].data_nasc);
                    printf("Data de Admissão -----> %s\n",empregado[i].data_adm);
                    printf("RG ---> %s\n",empregado[i].rg);
                    printf("Salário ---> %.2f\n", empregado[i].salario);
                    printf("\n");
                    printf("--------------------------------------------\n\n");
                    getch();
                }
                break;
                
                default:
                	printf("Opção inválida. Tente novamente.");
        }
    }while(opcao!=3);
}
