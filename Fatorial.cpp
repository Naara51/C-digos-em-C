#include<stdio.h>
#include<locale.h>

int main (){
	
	setlocale(LC_ALL, "Portuguese");
	
	int Numero, fatorial=1, i;
	
	printf("Digite um número: ");
	scanf("%i", &Numero);
	
	for(i=1;i<=Numero;i++){
	fatorial=fatorial*i;}
	
	printf("O fatorial de %i será %i", Numero,fatorial);
	
	return 0;
	
}
