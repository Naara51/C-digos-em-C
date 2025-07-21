// Este programa verifica o valor digitado pelo usúario calcula e imprimi o IMC e o calssifica de acordo com o resultado. 

#include<stdio.h>
#include<math.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	float Altura, Peso, IMC;
	
	printf("Qual a sua altura (em metros): \n");
	scanf("%f", &Altura);
	if(Altura <=0){
	 printf("Altura inválida, digite um valor maior que 0.");
	 return 1;}//Encerra o programa com erro, no caso valor errado digitado pelo usúario.
	
	printf("Qual a seu peso (em kg): \n");
	scanf("%f", &Peso);
	if(Peso <=0){
	 printf("Peso inválido, digite um valor maior que 0.");
	 return 1;}
	
	IMC= Peso/(Altura*Altura);
	printf("Seu IMC é %.2f\n", IMC);
	
	if (IMC< 18.5)
	 printf("Você está abaixo do peso.");
	 
	else if (IMC>=18.5 && IMC <=24.9)
	 printf("Seu peso está normal.");
	 
	else if (IMC>=25.0 && IMC <=29.9)
	 printf("Você está com excesso de peso ou (pré-obesidade).");
	 
	else if (IMC>=30.0 && IMC <=34.9){
	 printf("Você está com obesidade classe 1.\n");
	 printf("Possui risco moderado de doenças relacionadas ao peso (hipertensão, diabetes, etc).");}
	 
	else if(IMC>=35.0 && IMC <=39.9){
	 printf("Você está com obesidade classe 2.\n");
	 printf("Possui riscos altos para problemas de saúde.");}
	 
	else{
	 printf("Você está com obesidade classe 3 ou mórbida.\n");
	 printf("Possui risco muito alto para doenças cardiovasculares, respiratórias, diabetes e a redução significativa na expectativa de vida.");}
	 
	 
return 0;
		
}
