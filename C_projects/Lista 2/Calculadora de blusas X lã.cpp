/* 20. Uma confec��o produz X blusas de l� e para isto gasta uma certa quantidade de novelos.
Fa�a um algoritmo para calcular quantos novelos de l� ela gasta por blusa. */

//cada blusa gasta 3 novelos de l�

#include<conio.h>
#include<stdio.h>
#include<iostream>
#include<locale.h>
#include<math.h>

int camisas,la,totalla;

main(){
	setlocale(LC_ALL,"portuguese");
	printf("Calculadora de blusas X novelo de l�\n\n");
	printf("Digite a quantidade de camisas a serem feitas: ");
	scanf("%i",&camisas);
	
	la =3;
	
	totalla = camisas*la;
	
	system("cls");
	printf("Para realizar a confec��o de %i blusas � necess�rio %i l�",camisas,totalla);
	
	printf("\n\n");
	system("pause");
}
