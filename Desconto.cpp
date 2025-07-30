// Calcula um item com desconto.
#include<stdio.h>
#include<locale.h>
#include<math.h>

int main (){
	
	setlocale(LC_ALL, "Portuguese");
	
	float ValorProduto, ValorDesconto, PorcentagemDesconto, ValorTotal;
	
	printf("Valor do produto: ");
	scanf("%f", &ValorProduto);
	
	printf("Porcentagem do desconto: ");
	scanf("%f", &PorcentagemDesconto);
	
	ValorDesconto= ValorProduto * PorcentagemDesconto/100;
	ValorTotal=ValorProduto-ValorDesconto;
	
	printf("Valor com desconto: %.2f", ValorTotal);
	
	return 0;
}
