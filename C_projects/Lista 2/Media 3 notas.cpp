//Exercicio construir um algoritmo para ler o nome do aluno, 3Notas, e calcular a media.
//Se a m�dia >=7.0 - apresentar uma mensagem dizendo "aprovado"
//se a m�dia <4,0 - apresentar uma mensagem dizendo "Reprovado"
//se a m�dia >=4.0 e m�dia <7.0 apresentar uma mensagem que o aluno est� "Em Exame"

#include<conio.h>
#include<stdio.h>
#include<iostream>

//Variaveis
char Aluno[30];
float Nota1;
float Nota2;
float Nota3;
float Media;

//Inicio
main(){ //comando da estrutura - Escopo - principal do programa
printf("\n Digite o nome do Aluno:");//escreva na tela("Digite o nome do Aluno:")
scanf("%s",&Aluno);//leia do teclado("operador %s tipo string-conjunto
// de char",& - ponteiro que localiza a posi��o na mem�ria RAM da 
//vari�vel Aluno
printf("\n Digite a Nota1:");
scanf("%f",&Nota1);//%f - tipo float
printf("\n Digite a Nota2:");
scanf("%f",&Nota2);//%f - tipo float
printf("\n Digite a Nota3:");
scanf("%f",&Nota3);//%f - tipo float
Media = (Nota1 + Nota2 + Nota3)/3;//c�lculo da M�dia

if (( Media <= 7)&&( Media >= 4)){
	printf("\n Aluno em exame");
}
if ( Media >= 7){
	printf("\n Aluno aprovado");
}
if ( Media < 4){
	printf("\n Aluno reprovado");
}

printf("\n Nome do Aluno: %s",Aluno);//mostra na tela o valor da vari�vel Aluno
printf("\n Nota1: %.2f",Nota1);//mostra na tela o valor da var�avel Nota1
printf("\n Nota2: %.2f",Nota2);//mostra na tela o valor da var�avel Nota2
printf("\n Nota2: %.2f",Nota3);//mostra na tela o valor da var�avel Nota3
printf("\n Media: %.2f",Media);//mostra na tela o valor da vari�vel Media
printf("\n Nome do Aluno: %s tem a M�dia: %.2f",Aluno,Media);
printf("\n\n");//\n - new line  - nova linha
system("pause");//espera tecla enter para continuar
}
