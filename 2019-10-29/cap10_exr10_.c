#include <stdio.h>
int fat(int n){
	int f = 1, i;
	for(i=n;i>=1;i--){
		f *= i;
	}
	return f;
}

float somatorio(int n){
	float S=1.0f;
	int i;
	for(i=1;i<=n;i++){
		S += 1.0f/fat(i);
	}
	return S;
}

int main(){
	int a;
	printf("Digite um valor inteiro: ");
	scanf("%d", &a);
	printf("S = %f", somatorio(a));
	return 0;
}
