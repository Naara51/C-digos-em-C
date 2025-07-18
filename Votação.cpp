#include<stdio.h>
#include<locale.h>
#include<stdlib.h>

int main (){
	
	setlocale(LC_ALL, "Portuguese");
	 
	int Escolha, VotoA=0,VotoB=0,VotoC=0;
	
	do{ 
	system("cls");
	printf("Teste de popularidade \n");
	printf("1.Arya\n");
	printf("2. Melisandre\n");
	printf("3. Ramsay\n");
	printf("4. Relatório\n");	
	printf("5. Sair\n");	
	scanf("%i", &Escolha);
	
    switch(Escolha){
    case 1:{
     VotoA=VotoA+1;		
		break;
	}
	case 2:{
	 VotoB=VotoB+1;
		break;
	}
	case 3:{
	 VotoC=VotoC+1;
		break;
	}
	case 4:{
	 system("cls");
	 printf("Relatório de votação\n");
	 printf("1- Arya: %i \n", VotoA);
	 printf("2- Melisandre: %i \n", VotoB);
	 printf("3- Ramsay: %i \n", VotoC);
	 
	 if(VotoA>VotoB && VotoA>VotoC)
	 printf("Candidato mais votado Arya: %i\n", VotoA);
	 
	 if(VotoB>VotoA && VotoB>VotoA)
	 printf("Candidato mais votado Melisandre: %i\n", VotoB);
	 
	 if(VotoC>VotoA && VotoC> VotoB)
	 printf("Candidato mais votado Ramsay: %i \n", VotoC);
	 system("pause");
		break;
	}
     case 5:{
     printf("Votação encerrada!\n");
     system("pause");
		break;
	 }	
	 default: {
	 	printf("\n Opção inválida.");
	 	system("pause");
		break;
	 }	
	}
 }while(Escolha!=5);	
  return 0;		
	}
