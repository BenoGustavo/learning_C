//Algoritmo Media Valor
//Dado uma s�rie de 05 valores inteiros de temperatura, leia este 5 valores e calcule a m�dia
//destes, e em seguida apresente esta m�dia e caso esta seja maior e igual que 30 graus
//escreva �temperatura acima da m�dia, calor�, caso esta m�dia seja inferior ou igual a 15 graus
//�temperatura a baixo da m�dia, frio � e se esta estiver no intervalo entre estes dois valores,
//�temperatura mediana, temperatura agrad�vel�

//Bibliotecas
#include<conio.h>  //inclus�o da biblioteca conio - comandos I/O - Input/Output - Entrada e sa�da
#include<stdio.h>  //inclus�o da biblioteca stdio - comandos de tela I/O
#include<iostream> //inclus�o da biblioteca mais completa
#include<locale.h>

//Declarar variaveis
float Temperatura1,Temperatura2,Temperatura3,Temperatura4,Temperatura5,TempTotal,TempMedia;

//Principal
main(){
	printf("Digite o valor da primeira temperatura em graus celsius\n");
	scanf("%f" ,&Temperatura1);
	
	printf("Digite o valor da segunda temperatura em graus celsius\n");
	scanf("%f" ,&Temperatura2);
	
	printf("Digite o valor da terceira temperatura em graus celsius\n");
	scanf("%f" ,&Temperatura3);
	
	printf("Digite o valor da quarta temperatura em graus celsius\n");
	scanf("%f" ,&Temperatura4);
	
	printf("Digite o valor da quinta temperatura em graus celsius\n");
	scanf("%f" ,&Temperatura5);
	
TempTotal = Temperatura1 + Temperatura2 + Temperatura3 + Temperatura4 + Temperatura5;

TempMedia = TempTotal / 5;

if( TempMedia < 15 ){
	printf("\ntemperatura a baixo da media, frio");
}

if( 30 <= TempMedia  ){
	printf("\ntemperatura acima da media, calor");
}

if((TempMedia < 30 )&&(TempMedia >= 15)){
    printf("\ntemperatura Media, temperatura agradavel");
}

printf("\nA temperatura media em graus celsius eh %2.2f", TempMedia);

printf("\n\n");
system("pause");
}
