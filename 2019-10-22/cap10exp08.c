#include <stdio.h>

int fat(int n){
	int i;
	int f=1;
	for(i=n;i>=1;i--){
		f *= i;
	}
	return f;
}

int main(){
	int a, r;
	printf("digite um  numero inteiro: ");
	scanf("%d", &a);
	r = fat(a);
	printf("%d! = %d", a, r);
	return 0;
}
