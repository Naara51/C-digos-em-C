//Este programa realiza a votação de 3 condidatos apresentando o relátorio com a quantidade de votos e o vencedor, opção de sair e ler opção inválida.  

#include<stdio.h>
#include<locale.h>
#include<stdlib.h>

int main (){
	
	setlocale(LC_ALL, "Portuguese");
	 
	int Escolha, VotoA=0,VotoB=0,VotoC=0;
	
	do{ 
	system("cls");
	printf("Votação 2025 \n");
	printf("1.João\n");
	printf("2. Pedro\n");
	printf("3. Aline\n");
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
	 printf("1- João: %i \n", VotoA);
	 printf("2- Pedro: %i \n", VotoB);
	 printf("3- Aline: %i \n", VotoC);
	 
	 if(VotoA>VotoB && VotoA>VotoC)
	 printf("Candidato mais votado é o João: %i\n", VotoA);
	 
	 if(VotoB>VotoA && VotoB>VotoA)
	 printf("Candidato mais votado é o Pedro: %i\n", VotoB);
	 
	 if(VotoC>VotoA && VotoC> VotoB)
	 printf("Candidato mais votado é a Aline: %i \n", VotoC);
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
