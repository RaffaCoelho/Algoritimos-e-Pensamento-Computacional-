#include <stdio.h>


int main(){
	
	float cofrinho = 0;
	int op;
	
	printf("=========================================\n");
	printf("    Bem vindo ao Cofrinho da Unipe!!! \n");
	
	do{
	
		printf("\nQual valor voce quer adicionar?\n");
        printf("1 - R$ 0,50\n");
        printf("2 - R$ 1,00\n");
        printf("3 - R$ 2,00\n");
        printf("0 - Sair\n");
        printf("Escolha: ");
		scanf("%d",&op);
	
		switch (op){
		case 1:
			cofrinho += 0.50;
			printf("Voce aadicionou R$ 0,50!\n");
			break;
		case 2:
			cofrinho += 1.00;
			printf("Voce aadicionou R$ 1,00!\n");	
			break;	
		case 3: 
			cofrinho += 2.00;
			printf("Voce aadicionou R$ 2,00!\n");
			break;
		case 0:
			printf("Fechando o cofrinho...");
			break;
		default:
			printf("Opção invalida");
			break;
		} 
	}while(op != 0);
	
	printf("\nO cofrinho tem R$%.2f",cofrinho);	
	return 0;
}
