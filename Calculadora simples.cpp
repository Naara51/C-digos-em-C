#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<locale.h>

int main (){
	
	setlocale(LC_ALL,"Portuguese");
	
	int Opcao;
	float Resultado,Numero1, Numero2;
   
	do{
  
	  	printf("Calculadora \n");
		
		printf("Digite uma operação\n");
		printf("1- Soma; \n");
		printf("2- Subtração: \n");
		printf("3- Multiplicação: \n");
		printf("4- Divisão; \n");
		scanf("%d", &Opcao);
		system("cls");
	 	
		if(Opcao <1 || Opcao >4){
			printf("Opção inválida. \n");}
		
		else{
		
			printf("Digite um número: \n");
			scanf("%f", &Numero1);
			printf("Digite outro número; \n");
			scanf("%f", &Numero2);
			system("cls");}
			
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
				 Resultado = Numero1/Numero2;
				 printf("O resultado será %.2f\n", Resultado);
				  break;}
				system("pause");
				system("cls");
		
	}while(1);
	
  
return 0;	
}
