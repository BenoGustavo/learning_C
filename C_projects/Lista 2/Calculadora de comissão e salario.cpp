/*30. Um funcion�rio recebe um sal�rio fixo
mais 4% de comiss�o sobre as vendas. Fa�a um algoritmo que receba o sal�rio fixo de um
funcion�rio e o valor de suas vendas, calcule e mostre a comiss�o e o sal�rio final do
funcion�rio.*/

#include<conio.h>
#include<stdio.h>
#include<iostream>
#include<locale.h>
#include<math.h>

float salario,vendas,comissao,salfinal;

main(){
	setlocale(LC_ALL,"portuguese");
	printf("Calculadora de sal�rio comiss�o\n\n");
	printf("Insira aqui o sal�rio: ");
	scanf("%f",&salario);
	printf("Insira aqui o valor feito em vendas: ");
	scanf("%f",&vendas);
	
	comissao=vendas*0.04; salfinal=comissao+salario;
	
	system("cls");
	printf("Calculadora de sal�rio comiss�o\n\n");
	printf("O voc� recebeu %.2f de comiss�o, seu sal�rio final � de %.2f",comissao,salfinal);
	
	printf("\n\n");
	system("pause");
	
}
