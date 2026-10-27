#include <stdio.h>

int main(){
	float nota;
	int falta;
	
	printf("Digite sua media: ");
	scanf("%f",&nota);
	printf("Digita suas faltas: ");
	scanf("%i",&falta);
	
	
	if(nota >= 7 && falta <= 10){
		
		printf("Aluno aprovado!!!");
	}
	else if (nota < 6 || falta > 10 ){
		

		printf("REPROVADOOO!!!");
		
	}
	else {
		
		printf("Aluno em recuperação!!!");
		
	}

	
}
