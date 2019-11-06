#include <stdio.h>

int main(){
	int num, i = 1;
	int contDiv = 0;
	
	printf("Digite um numero: ");
	scanf("%d", &num);
	
	while(i <= num){
		if( (num%i) == 0){
			contDiv = contDiv + 1;
		}
		i = i+1;
	}
	if(contDiv == 2){
		printf("Numero primo.\n");
	}
	else {
		printf("Nao eh primo\n");
	}
	return 0;
}
