/*6. O restaurante a quilo Bem-B�o cobra R$12,00 por cada quilo de refei��o. Escreva um
algoritmo que leia o peso do prato montado pelo cliente (em quilos) e imprima o valor a pagar.
Assume que a balan�a j� desconte o peso do prato.*/

#include<conio.h>
#include<stdio.h> 
#include<iostream>
#include<locale.h>

float  ValorDoPrato, Quilo;

main(){
setlocale(LC_ALL,"portuguese");
printf("Bem Vindo ao restaurante a quilo Bem-Bom\n\n");

printf("Insira aqui o peso da sua comida em quilos\n:");
scanf("%f",&Quilo);

ValorDoPrato = 12*Quilo;

system("cls");

printf("O peso do seu prato � igual a %.1f, portanto o valor do mesmo � igual a %.2fR$",Quilo,ValorDoPrato);

printf("\n\n");
system("pause");

}
