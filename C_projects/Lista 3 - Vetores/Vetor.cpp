/*
um vetor com 10 caracteres, e na sequencia fa�a o usu�rio digitar um caracter qualquer, e o algoritmo localizar este
e mostrar na tela sua localiza��o no vetor
*/

#include<cmath>
#include<conio.h>
#include<stdio.h>
#include<iostream>
#include<math.h>
#include<stdlib.h>

int vetor[10],loc,locx,rtn;
char sl;
int ent=0; 

main(){
	setlocale(LC_ALL,"portuguese");
	do{
	do{

		system("cls");
	
	printf("Vetores Ex.\n");
	for(int i=0;i<10; i++){
		printf("\nInsira o [%i] vetor: ",i);
		scanf("%i",&vetor[i]);
	}
	
	printf("\nInsira o valor que voc� deseja localizar dentro do vetor: ");
	scanf("%i",&loc);
	
	system("cls");
	
	printf("Vetores Ex.\n");
	
	
	
	for(int i=0;i<10; i++){
		if(vetor[i] == loc){
			locx=i;
			ent=1;
		}
}

}while(ent == 0);

system("cls");

printf("Vetores Ex.\n");
printf("O valor que voc� digitou est� na posi��o %i do vetor e seu valor � %i",locx,vetor[locx]);
	printf("\n\n");
	
system("pause");

printf("\n\nAperte qualquer tecla para retornar ou [N] para sair");
			 sl=getche();
			 sl=toupper(sl);
		}while(sl!='N');
		
		printf("\n\nsaindo...");
	
	printf("\n\n");

	}
	



