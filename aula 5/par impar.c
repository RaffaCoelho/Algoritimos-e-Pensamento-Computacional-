#include <stdio.h>

int main(){
	int num;
	
	printf("digite um numero: ");
	scanf("%i",&num);
	
	if (num > 0){
		if (num % 2 == 0){
			printf("Positivo e Par");
		}
		else if (num < 0){
			printf("positivo e Impar");
		}
	}	
	else if (num > 0){
		if(num % 2 == -0){
			printf("Negativo e par");
		}
	}
	else {
		printf("nada");
	}
}
