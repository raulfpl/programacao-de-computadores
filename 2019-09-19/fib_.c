#include <stdio.h>
int main(){
	int a = 0, b = 1, c, i = 1;
	printf("%d %d ",a,b);
	while(i <= 6){
		c = a+b;
		printf("%d ", c);
		a = b;
		b = c;
		i = i+1;
	}
	
	return 0;
}
