#include<stdio.h>
#include<math.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	float Altura, Peso, IMC;
	
	printf("Qual a sua altura? \n");
	scanf("%f", &Altura);
	
	printf("Qual a seu peso?\n");
	scanf("%f", &Peso);
	
	IMC= Peso/(Altura*Altura);
	printf("Seu IMC é %.2f\n", IMC);
	
	if (IMC< 18.5)
	 printf("Você está abaixo do peso.");
	 
	if (IMC>=18.5 && IMC <=24.9)
	 printf("Seu peso está normal.");
	 
	if (IMC>=25.0 && IMC <=29.9)
	 printf("Você está com excesso de peso ou (pré-obesidade).");
	 
	if (IMC>=30.0 && IMC <=34.9){
	 printf("Você está com obesidade classe 1.\n");
	 printf("Possui risco moderado de doenças relacionadas ao peso (hipertensão, diabetes, etc).");}
	 
	if(IMC>=35.0 && IMC <=39.9){
	 printf("Você está com obesidade classe 2.\n");
	 printf("Possui riscos altos para problemas de saúde.");}
	 
	if (IMC>=40.0){
	 printf("Você está com obesidade classe 3 ou mórbida.\n");
	 printf("Possui risco muito alto para doenças cardiovasculares, respiratórias, diabetes e a redução significativa na expectativa de vida.");}
	 
	 
return 0;
		
}
