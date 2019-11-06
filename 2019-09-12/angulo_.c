// cap. 2 - Exercicio proposto n 02
// calcular a medida do terceiro ângulo de um triângulo

#include <stdio.h>

int main(){
	float a1, a2, a3;
	printf("Digite os dois angulos do triangulo: ");
	scanf("%f %f", &a1, &a2);
	
	a3 = 180 - (a1 + a2);
	
	printf("O terceiro angulo eh: %.2f\n", a3);
	
	return 0;
}
