#include <stdio.h>


int main(){
	int a , b, c, d;

	printf("Informe um numero para a: ");
	scanf("%i",&a);
	printf("Informe um numero para b: ");
	scanf("%i",&b);
	printf("Informe um numero para c: ");
	scanf("%i",&c);
	printf("Informe um numero para d: ");
	scanf("%i",&d);
	
	float soma = a + b + c + d ;
	float media = soma / 4;
	printf("O valor da media = %.1f", media);
	
}
