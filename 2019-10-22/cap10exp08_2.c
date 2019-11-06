#include <stdio.h>

int fat(int n){
	if(n == 0){
		return 1;
	}
	else{
		return n * fat(n-1);
	}
}

int main(){
	int a, r;
	printf("digite um  numero inteiro: ");
	scanf("%d", &a);
	r = fat(a);
	printf("%d! = %d", a, r);
	return 0;
}
