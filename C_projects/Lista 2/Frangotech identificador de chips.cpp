/*19. A granja Frangotech possui um controle automatizado de cada frango da sua produ��o. No
p� direito do frango h� um anel com um chip de identifica��o; no p� esquerdo s�o dois an�is
para indicar o tipo de alimento que ele deve consumir. Sabendo que o anel com chip custa
R$4,00 e o anel de alimento custa R$3,50, fa�a um algoritmo para calcular o gasto total da
granja para marcar todos os seus frangos.*/

#include<conio.h>
#include<stdio.h>
#include<iostream>
#include<locale.h>
#include<math.h>

float chipID,chipAlimento,chiptotal,quantchipalimento;
int frangos;

main(){
	printf("Frangotech identificador de quantidade de chips\n\n");
	printf("Digite aqui a quantidade de frangos que v�o receber um chip: ");
	scanf("%i",&frangos);
	
	chipID = frangos * 4;
	
	chipAlimento = ((frangos*2)*3.50);

	chiptotal = chipID+chipAlimento;
	
	quantchipalimento = frangos*2;
	
	
	
	printf("\n\n");
	system("pause");
}
