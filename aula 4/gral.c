#include <stdio.h>

int main(){
	
	float gralc, gralf;
	
	printf("Informe a tempertura em gral celsius: ");
	scanf("%f",&gralc);
	
	gralf = (gralc * 9/5) + 32;
	
	printf("%.0f°C tranformado em fahrenheit e %.1f°F", gralc, gralf);
	return 0;
}
