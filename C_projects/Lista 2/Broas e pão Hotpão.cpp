/*3. A padaria Hotp�o vende uma certa quantidade de p�es franceses e uma quantidade de
broas a cada dia. Cada p�ozinho custa R$ 0,12 e a broa custa R$ 1,50. Ao final do dia, o dono
quer saber quanto arrecadou com a venda dos p�es e broas (juntos), e quanto deve guardar
numa conta de poupan�a (10% do total arrecadado). Voc� foi contratado para fazer os c�lculos
para o dono. Com base nestes fatos, fa�a um algoritmo para ler as quantidades de p�es e de
broas, e depois calcular os dados solicitados.*/

#include<conio.h>
#include<stdio.h> 
#include<iostream>
#include<locale.h>

float Valorbruto,Poupanca,VBMP,Pao,Broa;

main(){
	setlocale(LC_ALL,"portuguese");
	
	printf("Calculadora ultrasonica da padaria Hotp�o.\r");
	
	printf("Coloque aqui a quantidade de p�es vendidas no dia: ");
	scanf("%f",&Pao);
	
	printf("Coloque aqui a quantidade de broas vendidas no dia: ");
	scanf("%f",&Broa);
	
	Valorbruto = ((Pao * 0.12)+(Broa * 1.50));
	Poupanca = Valorbruto * 0.1;
	VBMP = Valorbruto - Poupanca;
	
	system("cls");
	
	printf("A quantidade de p�es vendidas no dia � de %.0f",Pao);
	printf("\nA quantidade de broas vendidas no dia � de %.0f\n\n",Broa);
	printf("O valor bruto arrecadado em venda � %.2f\n",Valorbruto);
	printf("A quantidade a ser guardada na poupan�a � de %.2f\n",Poupanca);
	printf("A quantidade total arrecadada descontando a poupan�a � %.2f\n",VBMP);
	
	printf("\n\n");
	system("pause");
}


