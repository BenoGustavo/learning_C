/*05. Escreve um programa que sorteio, aleatoriamente, 10 n�meros e 
armazene estes em um vetor.
Em seguida, o usu�rio digita um n�mero e seu programa em C deve acusar 
se o n�mero digitado est� no vetor ou n�o. Se estiver, diga a posi��o que 
est�*/

#include<conio.h>
#include<stdio.h>
#include<iostream>
#include<math.h>
#include<stdlib.h>
#include<string.h>
#include<time.h>

int vetor[9],selecao,achou=0;
char opcao;

main(){
	setlocale(LC_ALL,"portuguese");
	do{
		system("cls");
		srand(time(NULL));
	
	printf("Chute um valor de 0 a 100: ");
	scanf("%i",&selecao);
	
	for(int i=0;i<9;i++){
		vetor[i] = rand() % 100;
		printf("\nVetor[%i] = %i\n",i,vetor[i]);
	}
	
	for(int i=0;i<9;i++){

		if(vetor[i] == selecao){
			printf("\nParab�ns, seu valor [%i] existe no ind�ce [%i]\n\n",selecao,i);
			achou++;
		}
	}
	
	if(achou == 0){
		printf("\n\nO valor que voc� digitou n�o foi encontrado\n\n");
	}
	
	printf("\n\nDeseja sair? (S) || (N)");
	opcao=getche();
	opcao=toupper(opcao);
	
	}while(opcao != 'S');
	
}
