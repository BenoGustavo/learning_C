//Algoritmo pre�o autom�vel
//O pre�o de um autom�vel � calculado pela soma do pre�o de f�brica com o pre�o dos
//impostos (45% do pre�o de f�brica) e a percentagem do revendedor (28% do pre�o de f�brica).
//Fa�a um algoritmo que leia o nome do autom�vel e o pre�o de f�brica e imprima o nome do
//autom�vel e o pre�o final.

//Bibliotecas
#include<conio.h>  //inclus�o da biblioteca conio - comandos I/O - Input/Output - Entrada e sa�da
#include<stdio.h>  //inclus�o da biblioteca stdio - comandos de tela I/O
#include<iostream> //inclus�o da biblioteca mais completa
#include<locale.h>

//Declarar variaveis
float PrecoDeFabrica;
float Impostos;
float Revendedor;
float Precofinal;
float Veiculo;

//Principal
main(){
	
printf("Digite aqui a marca do veiculo (SEM ESPACOS).\n");
scanf("%s" ,&Veiculo);	

printf("Digite o preco do veiculo.(SEM PONTOS)\n");
scanf ("%f" ,&PrecoDeFabrica);

Impostos = PrecoDeFabrica * 0.45;

Revendedor = PrecoDeFabrica * 0.28;

Precofinal = PrecoDeFabrica + Impostos + Revendedor;

printf("\n Tem o valor de fabrica: %2.2f",PrecoDeFabrica);
printf("\n E recebe 45 porcento desse valor em impostos: %2.2f",Impostos);
printf("\n Tendo a taxa do Revendedor de 28 porcento com base no Preco De Fabrica: %2.2f",Revendedor);
printf("\n Tem o valor de final de %2.2f",Precofinal);
printf("\n A marca do seu veiculo eh %s",Veiculo);

printf("\n\n");
system("pause");
}
