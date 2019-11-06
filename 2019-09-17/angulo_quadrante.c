#include <stdio.h>
int main(){
	float angulo;
	int voltas;
	printf("Digite o valor do angulo: ");
	scanf("%f",&angulo);
	voltas = angulo / 360;
	if(voltas == 0){
		printf("0 voltas.\n");
	}
	else if(voltas > 0 ){
		printf("%d voltas. No sentido anti-horario\n", voltas);
	}
	else {
		printf("%d voltas. No sentido horario\n", -voltas);
	}
	
	return 0;
}
