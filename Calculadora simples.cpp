/* Este programa executa uma caluladora com operações simples de soma, subtração, multiplicação e divisão, com estrutura de repetção do-while
  e opção de saida ao usuário. Ele verifica se a opção é válida, solicita os valores caso seja e realiza o cálculo. */

#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<locale.h>

int main (){
	
	setlocale(LC_ALL,"Portuguese");
	
	int Opcao;
	float Resultado,Numero1, Numero2;
   
	do{
  
	  	printf("=== Calculadora === \n");
		
		printf("1- Soma; \n");
		printf("2- Subtração; \n");
		printf("3- Multiplicação; \n");
		printf("4- Divisão; \n");
		printf("5-Sair. \n");
		printf("Digite uma opção: \n");
		scanf("%d", &Opcao);
		
		system("cls"); // Remova esta linha caso não esteja utilizando o windows

		if (Opcao == 5){
		printf("Encerrando o programa\n");
			break;}
	
		if(Opcao <1 || Opcao >5){
			printf("Opção inválida. \n");}
		
		else{
		
			printf("Digite um número: \n");
			scanf("%f", &Numero1);
			printf("Digite outro número: \n");
			scanf("%f", &Numero2);
			system("cls");// Remova esta linha caso não esteja utilizando o windows
		        }
			
	   	      	switch(Opcao){
			   
					case 1 : 
				 		Resultado= Numero1 + Numero2;
						printf("O resultado será %.2f\n", Resultado);
				  		break;
			                case 2 :
			   	 		Resultado= Numero1 - Numero2; 
			   	 		printf("O resultado será %.2f\n", Resultado);
				  		break;
					case 3:
				 		Resultado = Numero1*Numero2;
				 		printf("O resultado será %.2f\n", Resultado);
				  		break;
					case 4 :
				 		if (Numero2==0){
				  			printf("Erro divisão por 0 não permitida.\n");}
			  	 		else{
				  			Resultado = Numero1/Numero2;
				  			printf("O resultado será %.2f\n", Resultado);}
				  			break;}
							   
					system("pause"); // Remova esta linha caso não esteja utilizando o windows
					system("cls"); // Remova esta linha caso não esteja utilizando o windows
	}while(1);
	
  
return 0;	
}
