/*28. Fa�a um algoritmo que receba duas notas, calcule e mostre a m�dia ponderada dessas
notas, considerando peso 2 para a primeira nota e peso 3 para a segunda nota.*/

#include<conio.h>
#include<stdio.h>
#include<iostream>
#include<locale.h>
#include<math.h>

float n1,n2,pond1,pond2,final;

main(){
	setlocale(LC_ALL,"portuguese");
	printf("M�dia ponderada entre 2 notas\n\n");
	printf("Insira a nota de n�mero 1: ");
	scanf("%f",&n1);
	printf("Insira a nota de n�mero 2: ");
	scanf("%f",&n2);
	
	pond1=n1*2; pond2=n2*3;
	
	final=((pond1+pond2)/2);
	
	system("cls");
	printf("M�dia ponderada entre 2 notas\n\n");
	printf("A m�dia ponderada entre as notas N1 (%.2f), N2 (%.2f) � igual � %.2f",n1,n2,final);
	
	printf("\n\n");
	system("pause");
}
