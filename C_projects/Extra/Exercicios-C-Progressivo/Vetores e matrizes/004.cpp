/*04. Crie um aplicativo em C que pe�a um n�mero inicial ao usu�rio, uma 
raz�o e calcule os termos de uma P.G (Progress�o Geom�trica), 
armazenando esses valores em um vetor de tamanho 10.*/

#include<conio.h>
#include<stdio.h>
#include<iostream>
#include<math.h>
#include<stdlib.h>
#include<string.h>
#include<time.h>

int razao,TAMANHO;
char opcao;

main(){
	do{
		
	setlocale(LC_ALL,"portuguese");
	
	printf("\nInsira o tamanho da P.A: ");
	scanf("%i",&TAMANHO);
	
		int PA[TAMANHO];
	
	printf("Insira o valor inicial: ");
	scanf("%i",&PA[0]);
	
	printf("\nInsira a raz�o: ");
	scanf("%i",&razao);
	
	for(int i=0;i<TAMANHO;i++){
		PA[i+1] = PA[i] * razao;
		printf("\n\nProgress�o Geometrica (%i) = %i",i,PA[i]);
	}
	
	printf("\n\nDeseja sair? (S) || (N)");
	opcao=getche();
	opcao=toupper(opcao);
	
	}while(opcao != 'S');
	
}
