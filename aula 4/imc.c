#include <stdio.h>


int main(){
	float peso, altura, imc;
	
	printf("Informe seu pesso: ");
	scanf("%f",&peso); 
	printf("Infoerme sua altura: ");
	scanf("%f",&altura);
	
	imc = peso / (altura * altura);
	
	if (imc < 18.5){
		printf("Clacificacao: Magreza");
	}
	else if(imc >= 18.5 && imc < 25){
		printf("Clacificacao: peso normal");
	}
	else if(imc >= 25 && imc < 30){
		printf("Clacificacao: sobre peso");
	}
	else {
		printf("Obesidade");
	}
}

