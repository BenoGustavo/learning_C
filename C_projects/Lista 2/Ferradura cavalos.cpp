/*2. Fa�a um algoritmo para calcular quantas ferraduras s�o necess�rias para equipar todos os
cavalos comprados para um haras.*/

#include<conio.h>
#include<stdio.h> 
#include<iostream>
#include<locale.h>

int NdeCavalos,NdeFerraduras;

main(){
	
setlocale(LC_ALL,"portuguese");
	printf("Contador de ferradura para cavalos\n\n");
	printf("Digite aqui o n�mero de cavalos aos quais voc� quer colocar uma ferradura: ");
	scanf("%i",&NdeCavalos);
	
	NdeFerraduras = NdeCavalos * 4;
	
	system("cls");
	
	printf("O n�mero de ferraduras necessarias � %i",NdeFerraduras);
	
	printf("\n\n");
	system("pause");	
}


