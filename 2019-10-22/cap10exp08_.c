#include <stdio.h>
int fat(int n){
	int i, mult=1;
	for(i=n;i>=1;i--){
		mult *= i;
	}
	return mult;
}

int main(){
	int x;
	printf("digite um numero inteiro: ");
	scanf("%d", &x);
	printf("%d! = %d", x, fat(x));
	return 0;
}
