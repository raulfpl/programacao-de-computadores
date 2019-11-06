#include <stdio.h>
int fatorial(int n){
	int i, f = 1;
	for(i = n; i>=1; i--){
		f *= i;
	}
	return f;
}
void fatvet(int A[10], int B[10]){
	int i;
	for(i=0;i<10;i++){
		B[i] = fatorial(A[i]);
	}
	return;
}

int main(){
	int a[10], b[10];
	int i;
	for(i = 0; i < 10; i++){
		printf("Digite um numero (%d): ", i+1);
		scanf("%d", &a[i]);
	}
	fatvet(a, b);
	printf("Resultado:\n");
	for(i = 0; i < 10; i++){
		printf("%d ", b[i]);
	}
	return 0;
}
