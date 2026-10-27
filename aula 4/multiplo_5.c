#include <stdio.h>

int main(){
	int numero;
	
	printf("Informe um numero: ");
	scanf("%i",&numero);
	
	if (numero % 5 == 0){
		printf("Esse numero e mutiplo por 5");
	}else{
		printf("Esse numero nao e mutiplo por 5");
	}
}
