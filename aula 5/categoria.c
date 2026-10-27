#include <stdio.h>

int main(){
	int idade;
	
	printf("Qual a sua idade: ");
	scanf("%i",&idade);
	
	
	if (5 <= idade > 7){
		printf("Nadador de idade %i e da categoria infantil A", idade);
	}
	else if ( 8 < idade >= 10){
		printf("Nadador de idade %i e da categoria infantil B", idade);
	}
	else if ( 11 < idade >= 13){
		printf("Nadador de idade %i e da categoria juvenil A", idade);
	}
	else if ( 14 < idade >= 17){
		printf("Nadador de idade %i e da categoria juvenil B", idade);
	}
	else {
	
		printf("Nadador de idade %i e da categoria senior", idade);
	
	}
}
