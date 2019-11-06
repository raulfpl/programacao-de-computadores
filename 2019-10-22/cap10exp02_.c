#include <stdio.h>

int segundos(int h, int m, int s){
	return h*60*60+m*60+s;
}

int main(){
	int h, m, s;
	int r;
	printf("digite hora, minuto e segundo: ");
	scanf("%d %d %d", &h, &m, &s);
	r = segundos(h, m, s);
	printf("O total de segundos eh %d\n", r);
	return 0;
}

