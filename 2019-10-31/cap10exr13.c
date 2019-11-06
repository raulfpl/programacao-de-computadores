#include <stdio.h>
void fatvet(int A[10], int B[10]){
	int i, j;
	int fat;
	for(i=0;i<10;i++){
		fat = 1;
		for(j = A[i]; j>=1; j--){
			fat *= j;
		}
		B[i] = fat;
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
