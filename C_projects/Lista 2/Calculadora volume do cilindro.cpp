//25. Calcule o volume de uma caixa de �gua cil�ndrica.

#include<conio.h>
#include<stdio.h>
#include<iostream>
#include<locale.h>
#include<math.h>

float raio,area,altura,volume;

main(){
	setlocale(LC_ALL,"portuguese");
	printf("Calculadora de volume caixa de �gua CIL�NDRICA\n\n");
	printf("Insira aqui o raio da caixa de �gua (Raio=Diametro/2) em cm: ");
	scanf("%f",&raio);
	printf("Insira aqui a altura da caixa de �gua em cm: ");
	scanf("%f",&altura);
	
	area=(3.14*(pow(raio,2)));
	
	volume=area*altura;
	
	volume=volume/1000;
	area=area/1000;
	
	system("cls");
	
	printf("Calculadora de volume caixa de �gua CIL�NDRICA\n\n");
	printf("A �rea da sua caixa d�gua � %.2f metros quadrados, e tem %.2f metros quadrados de volume",area,volume);
	
	printf("\n\n");
	system("pause");
}
