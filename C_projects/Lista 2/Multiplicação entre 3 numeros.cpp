/*26. Fa�a um algoritmo que receba tr�s n�meros, calcule e mostre a multiplica��o desses
n�meros.*/

#include<conio.h>
#include<stdio.h>
#include<iostream>
#include<locale.h>
#include<math.h>

float v1,v2,v3,r,multipl,multipl2;

main(){
	setlocale(LC_ALL,"portuguese");
	printf("Multiplica��o entre 3 n�meros\n\n");
	printf("Insira aqui os 3 valores a serem multiplicados: ");
	scanf("%f %f %f",&v1,&v2,&v3);
	
	r=v1*v2;
	multipl=v1*v2*v3;
	
	system("cls");
	printf("Multiplica��o entre 3 n�meros\n\n");
	printf("A sua multiplica��o de %.2f e %.2f, tem como resultado %.2f, que multiplicado por %.2f, tem o resultado de: %.2f",v1,v2,r,v3,multipl);
	
	printf("\n\n");
	system("pause");
	
}
