/*37. Fa�a um algoritmo que calcule e mostre a tabuada de um n�mero digitado pelo usu�rio.*/

#include<conio.h>
#include<stdio.h>
#include<iostream>
#include<locale.h>
#include<math.h>

float num,numtotal,div;
int TDN;

main(){
	setlocale(LC_ALL,"portuguese");
	printf("Tabuada automatica\n\n");
	printf("Insira aqui o n�mero da tabuada desejada: ");
	scanf("%f",&num);
	printf("Insira aqui at� que n�mero voc� deseja sua tabuada: ");
	scanf("%f",&numtotal);
	
	TDN=numtotal;
	
	system("cls");
	
	printf("Tabuada automatica\n\n");
	while(numtotal>0){
		if(numtotal>0){
		div=num*numtotal;
		printf("\n%.2f*%.2f - RESULTADO: %.2f N(%i)",num,numtotal,div,TDN);
		TDN=TDN-1;
		numtotal=numtotal-1;
	}
	}
	printf("\nSua tabuada do %.2f foi finalizada",num);
	
	printf("\n\n");
	system("pause");
}
