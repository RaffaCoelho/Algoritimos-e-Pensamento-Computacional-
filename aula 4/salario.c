#include <stdio.h>

int main(){
	float valor, salario;
	int hora;
	
	printf("Informe a hora trabalha: ");
	scanf("%i",&hora);
	printf("Informe o valor da hora: ");
	scanf("%f",&valor);
	
	salario = valor * hora;
	
	printf("Seu salario e R$ %.2f", salario);
	
}
