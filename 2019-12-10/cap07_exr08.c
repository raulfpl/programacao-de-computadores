#include <stdio.h>

int main(){
	char frase1[200], frase2[200];
	int pos_1=0, pos_2=0, i;
	printf("Digite a frase 1: ");
	gets(frase1);
	printf("Digite a frase 2: ");
	gets(frase2);
	
	while(frase1[pos_1] != '\0' || frase2[pos_2] != '\0'){
		for(i=pos_1;frase1[i] != ' ' && frase1[i]!= '\0';i++){
			printf("%c", frase1[i]);
		}
		if(frase1[i]!= '\0'){
			pos_1 = i+1;
		}else{
			pos_1 = i;
		}
		printf(" ");
		for(i=pos_2;frase2[i] != ' '&& frase2[i]!= '\0';i++){
			printf("%c", frase2[i]);
		}

		if(frase2[i] != '\0'){
			pos_2 = i+1;
		}else{
			pos_2 = i;
		}
		
		printf(" ");
	}
	return 0;
}
