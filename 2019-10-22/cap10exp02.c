#include <stdio.h>
int segundos(int h, int m, int s){
	return h*60*60+m*60+s;
}

int main(){
	int h, m, s;
	printf("Digite a quantidade de horas, minutos e segundos: ");
	scanf("%d %d %d", &h, &m, &s);
	printf("Segundos: %d", segundos(h,m,s));
	return 0;
}
