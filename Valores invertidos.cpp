//Este programa inverte os valores utilizando um auxiliar.

#include<stdio.h>
#include<locale.h>

int main (){
	
	setlocale(LC_ALL, "Portuguese");
	
	float Num1,Num2,Auxiliar;
	
	printf("Número1: ");
	scanf("%f", &Num1);
	
	printf("Número2: ");
	scanf("%f", &Num2);
	
	Auxiliar=Num1; // O auxiliar vai receber o valor armazenado em Num1
	Num1=Num2; // O Num1 vai receber o valor de Num2
	Num2=Auxiliar; //O Num2 vai receber o auxiliar ou seja o valor de Num1
	
	printf("\n\nNúmero 1: %.2f\n", Num1);
	printf("Número 2: %.2f", Num2);
	
	return 0;
