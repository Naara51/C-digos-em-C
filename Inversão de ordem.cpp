// Inverte a ordem de um número com 3 digitos.
#include<stdio.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	int Numero, Resto, Centena, Dezena, Unidade, NumeroInvertido;
	
	printf("Informe um número inteiro com 3 dígitos: ");
	scanf("%i", Numero);
	
	Centena=Numero/100; // ex 123 centena = 123 div 100 = 1
	Resto= Numero%100; // resto= 123 mod 100 = 23
	Dezena= Resto/10; // dezena= 23 div 10 = 2
	Unidade=Resto%10; //unidade= 23 mod 10 = 3
	
	//macete  Centena, resto, dezena, unidade, div 100, mod 100, div 10, mod 10, numero, numero, resto,resto.
	
	NumeroInvertido= Unidade*100+Dezena*10+Centena;// 3*100 + 2*10 + 1 = 321
	
	printf("Número Invertido %i", NumeroInvertido);
	
	
	return 0;
}
