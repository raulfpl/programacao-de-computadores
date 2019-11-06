#include <stdio.h>

int main(){
	int a, b, i;
	int somaImp=0;
	long long int multPar=1;
	printf("Digite dois numeros: ");
	scanf("%d %d", &a, &b);
	i = a+1;
	
	while(i<b){
		if(i%2!=0){
			somaImp = somaImp + i;
		}
		else{
			multPar = multPar * i;
		}
		
		i = i+1;
	}
	printf("A soma dos impares no intervalo eh %d\n", somaImp);
	printf("A multiplicacao dos pares no intervalo eh %lld\n", multPar);
	
	return 0;
}
