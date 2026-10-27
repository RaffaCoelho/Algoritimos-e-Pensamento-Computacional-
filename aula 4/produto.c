#include <stdio.h>

int main(){
	float produto;
	
	printf("Qual o valor do produto: ");
	scanf("%f",&produto);
	float imposto = produto * 0.08;
	float presfinal = produto + imposto;
	printf("O valor imposto = %.2f\n", imposto);
	printf("O valor do produto final = %.2f", presfinal);	
}
