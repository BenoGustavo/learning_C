/*36. Fa�a um algoritmo que receba o valor do sal�rio m�nimo e o valor do sal�rio de um
funcion�rio, calcule e mostre a quantidade de sal�rios m�nimos que ganha esse funcion�rio.*/

#include<conio.h>
#include<stdio.h>
#include<iostream>
#include<locale.h>
#include<math.h>

float salMin,salfunc,quantsal;

main(){
	setlocale(LC_ALL,"portuguese");
	printf("Divisor de sal�rio por sal�rio minimo\n\n");
	printf("Insira aqui o valor do sal�rio minimo atual: ");
	scanf("%f",&salMin);
	printf("Insira aqui o valor do seu sal�rio atual: ");
	scanf("%f",&salfunc);
	
	quantsal=salfunc/salMin;
	
	system("cls");
		printf("Divisor de sal�rio por sal�rio minimo\n\n");
		printf("Com o sal�rio de %.2f, voc� recebe %.2f",salfunc,quantsal);
		
		
		printf("\n\n");
		system("pause");
}
