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
	int x;
	printf("digite um numero inteiro: ");
	scanf("%d", &x);
	printf("%d! = %d", x, fat(x));
	return 0;
}
