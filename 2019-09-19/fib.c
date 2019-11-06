//cap4 ex resolvidos n4
#include <stdio.h>
int main(){
	int a = 0, b = 1, c, i=0;
	printf("%d %d ", a, b);
	while(i<6){
		c = a+b;
		printf("%d ",c);
		a = b;
		b = c;
		i = i+1;
	}
	return 0;
}
