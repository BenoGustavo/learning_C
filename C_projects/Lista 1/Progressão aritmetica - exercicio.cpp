/*5 � Algoritmo PA � Progress�o Aritm�tica
Fa�a um programa que imprima os elementos de uma PA e o somat�rio da mesma dados :
primeiro termo , numero de termos e raz�o.*/

#include<conio.h> 
#include<stdio.h>  
#include<iostream> 
#include<locale.h>

int PrimeiroTermo,NdeTermos,razao,somatorio,PA;

main(){
	setlocale(LC_ALL,"portuguese"); //Mudar idioma para portugues
	
	printf("Progress�o aritmetica\n\n");
	printf("Digite o valor do primeiro termo: ");
	scanf("%i",&PrimeiroTermo);
	
	printf("\nDigite o n�mero de termos: ");
	scanf("%i",&NdeTermos);
	
	printf("\nDigite a raz�o: ");
	scanf("%i",&razao);
	
	system("cls");
	
	printf("A SUA PA �\n");
	
	printf("\nO 1� termo da PA �: %i",PrimeiroTermo);
	
	for(int i=2; i<=razao; i++){
		PA=PrimeiroTermo+razao;
		PrimeiroTermo=PA;
		printf("\nO %i� termo da PA �: %i",i,PA);
		
	}
	
	printf("\n\n");
	system("pause");
}
