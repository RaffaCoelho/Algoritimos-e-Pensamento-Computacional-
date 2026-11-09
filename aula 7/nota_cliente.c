#include<stdio.h>

int main(){
	int i; 
	float media, nota, soma;
	
	
	
	for(i=0;i<10;i++){
		
		printf("\n Ola caro cliente, por favor nos de uma nota de 0 a 10: ");
		scanf("%f",&nota);
		
		
		
		if (nota>=0 && nota<=10){
			soma += nota;
			printf("\nSua nota foi %.2f, Obrigado por sua avaliação!!\n", nota);
		}
		else{
			printf("\nNota invalida, digite uma nota entre 0 e 10!!\n");
		}
		
		
	}

	media = soma / 10;
	
	printf("\nMeida geral é %.2f\n", media);
	
	if(media < 7){
		printf("\nNota de cliente abaixo da media\n");
			
	}
	else{
		printf("\nCliente satisfeitos!!\n");
	}
	
	return 0;
}
