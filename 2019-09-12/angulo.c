// cap 2. Exercícios propostos 23.
// calcular a medida do terceiro ângulo

#include <stdio.h>

int main(){
	float a1, a2, a3;
	
	printf("Digite os valores dos dois angulos: ");
	scanf("%f %f",&a1, &a2);
	
	a3 = 180 - (a1 + a2);
	
	printf("O valor do terceiro angulo eh: %.2f\n", a3);
	
	return 0;
}
