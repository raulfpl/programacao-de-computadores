#include <stdio.h>
int main(){
	int a,b, i=0, j;
	while(i<5){
		printf("digite dois valores inteiros positivos: ");
		scanf("%d %d", &a, &b);
		j=a;
		while(j <= b){
			if( (j%2) == 0 ){
				printf("%d\n", j);
			} 
			j = j+1;
		}
		i = i+1;
	}
	return 0;
}
