/*27. Fa�a um algoritmo que receba dois n�meros, calcule e mostre a divis�o do primeiro
n�mero pelo segundo. Sabe-se que o segundo n�mero n�o pode ser zero, portanto n�o �
necess�rio se preocupar com valida��es.*/

#include<conio.h>
#include<stdio.h>
#include<iostream>
#include<locale.h>
#include<math.h>

float num,div,res;

main(){
	setlocale(LC_ALL,"portuguese");
	printf("Calculadora de divis�o entre dois n�meros\n\n");
	printf("Insira o n�mero que voc� deseja dividir: ");
	scanf("%f",&num);
	printf("Insira o divisor: ");
	scanf("%f",&div);
	
	res=num/div;
	
	system("cls");;
	printf("Calculadora de divis�o entre dois n�meros\n\n");
	printf("A sua divis�o de %.2f por %.2f � igual � %.2f",num,div,res);
	
	printf("\n\n");
	system("pause");
}
