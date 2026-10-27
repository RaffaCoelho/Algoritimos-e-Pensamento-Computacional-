#include<stdio.h>

int main(){
	
	int morador, contador = 1 ,consumo = 20;
	float media = 0;
	
	
	while (contador <= 5){
		printf("Digite a metragem de consumo do marador: \n\n");
		scanf("%i",& morador);
		contador++;
		
		if (morador <= consumo){
			printf("Consumo dentro da média!!\n\n");
		}
		else{
			printf("Consumo fora da média!!\n");
		}
		media += morador;
		
	}
		
	printf("A media de consumo dos moradores é %2.fm³\n\n", media / 5);
	
	return 0;
	
}
