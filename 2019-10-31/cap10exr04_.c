#include <stdio.h>
void tempo(int segundos){
	int h, m, s;
	h = segundos / (60*60);
	segundos = segundos % (60*60);
	m = segundos / 60;
	s = segundos % 60;
	
	printf("Tempo: %d:",h);
	if(m<10){
		printf("0%d:",m);
	}
	else{
			 printf("%d:",m);
	}
	if(s<10){
		printf("0%d\n",s);
	}
	else{
			 printf("%d\n",s);
	}
	return;
}

int main(){
	int s;
	printf("Digite a quantidade de segundos: ");
	scanf("%d", &s);
	tempo(s);
	return 0;
}
