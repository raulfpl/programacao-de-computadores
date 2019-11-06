#include <stdio.h>
int fatorial(int n){
	int i, f=1;
	for(i=n;i>=1;i--){
		f *= i;
	}
	return f;
}
void fatVet(int A[10], int B[10]){
	int i;
	for(i=0;i<10;i++){
		B[i] = fatorial(A[i]);
	}
	return;
}
int main(){
	int v1[10],v2[10];
	int i;
	for(i=0;i<10;i++){
		printf("Digite um numero (%d): ", i+1);
		scanf("%d", &v1[i]);
	}
	fatVet(v1, v2);
	printf("Resultado:\n");
	for(i =0; i< 10; i++){
		printf("%d ", v2[i]);
	}
	return 0;
}
