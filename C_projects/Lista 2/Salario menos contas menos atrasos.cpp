/*39. Jo�o recebeu seu sal�rio de R$ 1200,00 e precisa pagar duas contas (C1=R$ 200,00 e
C2=R$120,00) que est�o atrasadas. Como as contas est�o atrasadas, Jo�o ter� de pagar multa
de 2% sobre cada conta. Fa�a um algoritmo que calcule e mostre quanto restar� do sal�rio do
Jo�o;*/

#include<conio.h>
#include<stdio.h>
#include<iostream>
#include<locale.h>
#include<math.h>

float sal,c1,c2,atrasoc1,atrasoc2,ressal;

main(){
	setlocale(LC_ALL,"portuguese");
	printf("Calculadora de contas atrasadas\n\n");
	printf("Insira aqui seu sal�rio: ");
	scanf("%f",&sal);
	printf("Insira o valor de duas contas: ");
	scanf("%f %f",&c1,&c2);
	
	atrasoc1=c1*0.02; atrasoc2=c2*0.02; c1=c1+atrasoc1; c2=c2+atrasoc2; ressal=sal-c1-c2;
	
	system("cls");
	printf("Calculadora de contas atrasadas\n\n");
	printf("Seu sal�rio � de %.2fR$, ap�s pagar a multa de %.2fR$ da conta1 [%.2f] e %.2fR$ da conta2 [%.2f] seu sal�rio ser� de %.2f",sal,atrasoc1,c1,atrasoc2,c2,ressal);
	
	printf("\n\n");
	system("pause");
}
