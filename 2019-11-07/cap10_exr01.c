#include <stdio.h>
int positivo(int n){
	if(n < 0){
		return 0;
	}
	else{
		return 1;
	}
}
int main(){
	int n;
	printf("Digite um numero: ");
	scanf("%d",&n);
	if(positivo(n)==1){
		printf("Positivo\n");
	}
	else{
		printf("Negativo\n");
	}
	return 0;
}
