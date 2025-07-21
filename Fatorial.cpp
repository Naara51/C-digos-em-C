// Este programa calcula o fatorial de um número inteiro utilizando a estrutura de repetição for, a variável i serve como contador.

#include<stdio.h>
#include<locale.h>

int main (){
	
	setlocale(LC_ALL, "Portuguese");
	
	int Numero, i;
	unsigned long long int fatorial=1;//Consegue guardar valores de até 64 bits
	
	printf("Digite um número inteiro: ");
	scanf("%i", &Numero);
	
	if(Numero <0){
	printf("Não existe fatorial de números negativos.");
	return 1;}
	
	for(i=1;i<=Numero;i++){
	fatorial=fatorial*i;}
	
	printf("O fatorial de %i será %llu", Numero,fatorial);
	
	return 0;
	
}
