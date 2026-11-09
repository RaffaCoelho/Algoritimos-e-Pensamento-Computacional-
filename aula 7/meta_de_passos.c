#include<stdio.h>

int main(){
	int i = 1, passos, meta=0;
	
	while(meta < 10000){
		printf("Quantos passos voce andou na hora %i:  ", i++);
		scanf("%i",& passos);
		meta = meta + passos;
	}
	
	printf("A meta de passos e de %i em %i horas", meta, i-1);
	return 0;
}
