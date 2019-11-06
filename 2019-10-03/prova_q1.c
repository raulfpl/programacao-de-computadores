#include <stdio.h>

int main(){
	float base1, base2, altura, area;
	
	printf("digite as duas bases e a altura do trapezio: ");
	scanf("%f %f %f", &base1, &base2, &altura);
	
	area = (base1+base2)*altura/2;
	
	printf("a medida da area = %.3f\n", area);
	return 0;
}
