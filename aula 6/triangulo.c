#include <stdio.h>

int main(){
	int num1, num2, num3, maior, lado1, lado2;
	
	printf("Digite o primeiro numero: ");
	scanf("%i",&num1);
	printf("Digite o segundo numero: ");
	scanf("%i",&num2);
	printf("Digite o teceiro numero: ");
	scanf("%i",&num3);
	
	if (num1 + num2 > num3 && num2 + num3 > num1 && num1 + num3 > num2){
		
		printf("Os numeros formam um triangulo!!\n ");
		
		if (num1 == num2 && num2 == num3){
			
			printf("Este triasngolo é Equilatero!");		
		}
		else if(num1 == num2 || num2 == num3 || num1 == num3){
			
			printf(" Este triangolo é isosceles!!");
		}
		else{
			
			printf("Este triangolo é Escaleno");
		}
		
		if (num1 >= num2 && num1 >= num3){
			maior = num1;
			lado1 = num2;
			lado2 = num3;
		}
		else if (num2 >= num1 && num2 >= num3){
			maior = num2;
			lado1 = num2;
			lado2 = num1;
		}
		else {
			maior = num3;
			lado1 = num2;
			lado2 = num1;
		}
		
		if (maior * maior < lado1 * lado1 + lado2 * lado2 ){
				
				printf(" \n e tambem um Actangulo");
			}
			else if (maior * maior == lado1 * lado1 + lado2 * lado2){
				
				printf("\n e tambem um retangulo");
			}
			else {
				printf("\n e tambem um obtusangulo");
			}
	}
	else{
		
		printf("Os numeros não formam um triangulo");
	}
	
	return 0;

	
}
