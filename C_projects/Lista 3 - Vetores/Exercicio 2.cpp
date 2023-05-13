/* 2 - Desenvolver um programa que tenha um menu de:

2.1 - Entrada de dados dos vetores VetorA[5] e VetorB[5] com valores inteiros;
2.2 - Soma dos elementos dos dois vetores gerando o VetorSoma[5];
2.3 � Subtra��o dos elementos dos dois vetores gerando o VetorSoma[5];
2.4 - Multiplica��o dos elementos dos dois vetores gerando o VetorMulti[5];
2.5 � Divis�o dos elementos dos dois vetores gerando o VetorDivi[5];
2.6 - Sair do Sistema*/

#include<cmath>
#include<conio.h>
#include<stdio.h>
#include<iostream>
#include<math.h>
#include<stdlib.h>

char menu,vet,op,aleatorio,kek;
int vetA[5],vetB[5];

main(){
	setlocale(LC_ALL,"portuguese");
	
	printf("Vetores exercicio 2\n\n");
	printf("1 - Inserir os vetores manualmente\n");
	printf("2 - Aleatorizar os vetores");
	kek=getche();
	
	switch(kek){
		case'1':{
			goto vet;
			break;
		}
		case'2':{
			goto aleatorio;
			break;
		}
	}
	
	vet:
	system("cls");
	
	printf("Vetores exercicio 2\n\n");
	printf("Entrada de dados Vetor [A] [Valores inteiros]\n");
	for(int i=0;i<6;i++){
		printf("\nVetor A[%i]: ",i);
		scanf("%i",&vetA[i]);
	}
	for(int i=0;i<6;i++){
		printf("\nVetor B[%i]: ",i);
		scanf("%i",&vetB[i]);
	}
	
	menu:
		system("cls");
		printf("Vetores exercicio 2\n");
		printf("Menu:\n\n");
		printf("1 - Soma dos vetores\n");
		printf("2 - Substra��o dos vetores\n");
		printf("3 - Multiplica��o dos vetores\n");
		printf("4 - Divis�o dos vetores\n");
		printf("5 - Inserir manualmente novos vetores\n");
		printf("6 - Aleatorizar vetores\n");
		printf("7 - Sair\n\n");
	op=getche();
	
	if(op>'7'){
		system("cls");
		printf("Vetores exercicio 2\n\n");
		printf("Valor invalido, retornando.\n");
		system("pause");
		goto menu;
	}
	
	switch(op){
		
		case'1':{
				system("cls");
				
				int vetsoma[5];
				char opSoma;
				
				printf("Vetores exercicio 2 - Soma\n\n");
			
				printf("Vetores A : \n");
				
				for(int i=0;i<6;i++){
					fflush(stdin);
				printf("Vetor [A %i] = [%i]\n",i,vetA[i]);
				}
				
				printf("\nVetores B : \n");
				for(int i=0;i<6;i++){
				printf("Vetor [B %i] = [%i]\n",i,vetB[i]);
				}
				
				for(int i=0;i<6;i++){
					vetsoma[i] = vetA[i] + vetB[i];
				}
				
				printf("Soma:\n\n");
				
				for(int i=0;i<6;i++){
					printf("O vetor A [%i] + O vetor B [%i] � = %i\n",i,i,vetsoma[i]);
				}
				
				printf("\nAperte qualquer tecla para retornar ou N para sair.");
				opSoma=getche();
				opSoma=toupper(opSoma);
				
				switch(opSoma){
					case 'N':{
							system("cls");
							printf("Vetores exercicio 2 - Sair\n\n");
							printf("Saindo...");
							exit(0);
					}
					default:{
						goto menu;
						break;
					}
				}
				
			
			system("pause");
			
			break;
		}
		
		case'2':{
			system("cls");
			
			int vetsub[5];
			char opsub;
			
			printf("Vetores exercicio 2 -  Subtra��o\n\n");
			
			printf("Vetores A : \n");
				
			for(int i=0;i<6;i++){
					fflush(stdin);
			printf("Vetor [A %i] = [%i]\n",i,vetA[i]);
			}
				
			printf("\nVetores B : \n");
			for(int i=0;i<6;i++){
			printf("Vetor [B %i] = [%i]\n",i,vetB[i]);
			}
				
			for(int i=0;i<6;i++){
			vetsub[i] = vetA[i] - vetB[i];
			}
			
			printf("Subtra��o:\n\n");
				
				for(int i=0;i<6;i++){
					printf("O vetor A [%i] - O vetor B [%i] � = %i\n",i,i,vetsub[i]);
				}
				
				printf("\nAperte qualquer tecla para retornar ou N para sair.");
				opsub=getche();
				opsub=toupper(opsub);
				
				switch(opsub){
					case 'N':{
							system("cls");
							printf("Vetores exercicio 2 - Sair\n\n");
							printf("Saindo...");
							exit(0);
					}
					default:{
						goto menu;
						break;
					}
			}
			break;
		}
		
		case'3':{
			system("cls");
				
				int vetmult[5];
				char opmult;
				
				printf("Vetores exercicio 2 - Multiplica��o\n\n");
			
				printf("Vetores A : \n");
				
				for(int i=0;i<6;i++){
					fflush(stdin);
				printf("Vetor [A %i] = [%i]\n",i,vetA[i]);
				}
				
				printf("\nVetores B : \n");
				for(int i=0;i<6;i++){
				printf("Vetor [B %i] = [%i]\n",i,vetB[i]);
				}
				
				for(int i=0;i<6;i++){
					vetmult[i] = vetA[i] * vetB[i];
				}
				
				printf("Multiplica��o:\n\n");
				
				for(int i=0;i<6;i++){
					printf("O vetor A [%i] * O vetor B [%i] � = %i\n",i,i,vetmult[i]);
				}
				
				printf("\nAperte qualquer tecla para retornar ou N para sair.");
				opmult=getche();
				opmult=toupper(opmult);
				
				switch(opmult){
					case 'N':{
							system("cls");
							printf("Vetores exercicio 2 - Sair\n\n");
							printf("Saindo...");
							exit(0);
					}
					default:{
						goto menu;
						break;
					}
				}
				
			
			system("pause");
			
			break;
		}
		
		case'4':{
			system("cls");
				
				float vetdiv[5];
				char opdiv;
				
				printf("Vetores exercicio 2 - Divis�o\n\n");
			
				printf("Vetores A : \n");
				
				for(int i=0;i<6;i++){
					fflush(stdin);
				printf("Vetor [A %i] = [%i]\n",i,vetA[i]);
				}
				
				printf("\nVetores B : \n");
				for(int i=0;i<6;i++){
				printf("Vetor [B %i] = [%i]\n",i,vetB[i]);
				}
				
				for(int i=0;i<6;i++){
					vetdiv[i] = vetA[i] / vetB[i];
				}
				
				printf("Divis�o:\n\n");
				
				for(int i=0;i<6;i++){
					printf("O vetor A [%i] / O vetor B [%i] � = %.2f\n",i,i,vetdiv[i]);
				}
				
				printf("\nAperte qualquer tecla para retornar ou N para sair.");
				opdiv=getche();
				opdiv=toupper(opdiv);
				
				switch(opdiv){
					case 'N':{
							system("cls");
							printf("Vetores exercicio 2 - Sair\n\n");
							printf("Saindo...");
							exit(0);
					}
					default:{
						goto menu;
						break;
					}
				}
				
			
			system("pause");
			
			break;
		}
		
		case'5':{
			goto vet;
			
			break;
		}
		
		case'6':{
			aleatorio:
				
				system("cls");
				
			printf("Vetores exercicio 2 - Aleatoriza��o\n\n");
			for(int i=0;i<6;i++){
				vetA[i] = rand() % 1000;
				vetB[i] = rand() % 1000;
			}
			
			for(int i=0; i<6; i++){
        	 for(int a=0; a<6; a++){
             if(i == a)
                 continue;
             if(vetA[i] == vetA[i])
                 vetA[a] = rand()%1000 + 1;
       		  }
   		  }
   		  
   		  for(int i=0; i<6; i++){
        	 for(int a=0; a<6; a++){
             if(i == a)
                 continue;
             if(vetB[i] == vetB[i])
                 vetB[a] = rand()%1000 + 1;
       		  }
   		  }
			
			printf("Vetores A : \n");
				
				for(int i=0;i<6;i++){
					fflush(stdin);
				printf("Vetor [A %i] = [%i]\n",i,vetA[i]);
				}
				
				printf("\nVetores B : \n");
				for(int i=0;i<6;i++){
				printf("Vetor [B %i] = [%i]\n",i,vetB[i]);
			}
			printf("Vetores aleatorizados com sucesso.\n\n");
			system("pause");
			
			goto menu;
			
			break;
		}
		
		default:{
			system("cls");
			printf("Vetores exercicio 2 - Sair\n\n");
			printf("Saindo...");
			exit(0);
			break;
		}
			}
	printf("\n\n");
	system("pause");
	exit(0);
}
