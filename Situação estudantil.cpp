#include<stdio.h>
#include<locale.h>

int main (){
	setlocale(LC_ALL, "Portuguese");
	
	float Nota1, Nota2, Media;
	
	printf("Digite a primeira nota: ");
	scanf("%f", &Nota1);
		
	printf("Digite a segunda nota: ");
	scanf("%f", &Nota2);
	
	Media= (Nota1+Nota2)/2;
	
	if (Media>=6){
	 printf("APROVADO!\n");
	 printf("Sua média é %.2f", Media);}
	 
	else if(Media>=5 && Media <6){
	 printf("RECUPERAÇÃO!\n");
	 printf("Sua média é %.2f", Media);}
	 
	else{
	 printf("REPROVADO!\n");
	 printf("Sua média é %.2f", Media);}
	
	return 0;
	
}
