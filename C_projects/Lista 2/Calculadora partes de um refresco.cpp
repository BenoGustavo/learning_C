/*24. Um tonel de refresco � feito com 8 partes de �gua mineral e 2 partes de suco de maracuj�.
Fa�a um algoritmo para calcular quantos litros de �gua e de suco s�o necess�rios para se fazer
X litros de refresco (informados pelo usu�rio).*/

#include<conio.h>
#include<stdio.h>
#include<iostream>
#include<locale.h>
#include<math.h>

float litros,suco,agua,litrosparte;

main(){
	setlocale(LC_ALL,"portuguese");
	printf("Calculadora de partes de refresco\n\n");
	printf("Insira aqui a quantidade de litros de refresco que voc� deseja fazer: ");
	scanf("%f",&litros);
	
	litrosparte=litros/10;
	suco=litrosparte*2;
	agua=litrosparte*8;
	
	system("cls");
	
	printf("Calculadora de partes de refresco\n\n");
	printf("O seu refresco ira ter %.2fL de suco, e %.2fL de �gua",suco,agua);
	
	printf("\n\n");
	system("pause");
	
}
