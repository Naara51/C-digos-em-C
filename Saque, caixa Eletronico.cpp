#include<stdio.h>

int main(){
	
	int Valor, Nota;
	int Notas[] = {100, 50, 20, 10, 5, 2, 1}; // Notas é um vetor ele vai guardar esses valore, há 7 números, 7 posições.
	
	printf("Informe o valor do saque: ");
	scanf("%d", &Valor);
	
	printf("Serão entreges as seguintes notas:\n");
	
	for (int i = 0; i<7; i++){ // i variavel declarada agora serve como variavel contadora, iniciar em  0 é como iniciar em 100 e ir até 6 ou < 7 é ir até 1 (contaria de 0 a 6 e não de 1 a 7).
		Nota = Valor/ Notas [i]; // Valor que o usuario digitou / pela nota avaliada ( 100,50,20 ...).
		Valor = Valor % Notas[i]; // Valor mod (resto) de Notas.
		printf("%d de %d\n", Nota, Notas[i]);} // Imprimi a quantidade de nota e o valor da nota.
	
	return 0;
}
