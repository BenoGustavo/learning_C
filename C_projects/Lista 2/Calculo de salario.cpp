/*12. Fa�a um algoritmo para ler o sal�rio de um funcion�rio e aument�-lo em 15%. Ap�s o
aumento, desconte 8% de impostos. Imprima o sal�rio inicial, o sal�rio com o aumento e o
sal�rio final.*/

#include<conio.h> 
#include<stdio.h>  
#include<iostream> 
#include<locale.h>
#include<math.h>

float salario,imposto,aumento,salariototal,salarioaumento;

main(){
	setlocale(LC_ALL,"portuguese"); //Mudar idioma para portugues
	printf("Calculadora de salario\n\n");
	printf("Insira aqui seu salario (com , apenas para centavos): ");
	scanf("%f",&salario);
	
	aumento = salario*0.15;
	
	salarioaumento = salario+aumento;
	
	imposto = salarioaumento*0.08;
	
	salariototal=((salario+aumento)-imposto);
	
	system("cls");
	
	printf("\nO seu salario �: %.2fR$, Voce paga: %.2fR$ de imposto, Seu salario final: %.2fR$",salario,imposto,salariototal);
	
	printf("\n\n");
	system("pause");
	
}
