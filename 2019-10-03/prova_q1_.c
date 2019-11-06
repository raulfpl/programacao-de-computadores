#include <stdio.h>

int main(){
	float base, altura, area;
	
	printf("Digite os valores da base e altura do triangulo: ");
	scanf("%f %f", &base, &altura);
	
	area = base * altura / 2;
	
	printf("O valor da area eh: %f\n", area);
	
	return 0;
}
