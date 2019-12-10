#include <stdio.h>
int main(){
	char frase[400];
	int i;
	
	printf("Digite uma frase: ");
	gets(frase);
	
	for(i=0; frase[i] != '\0'; i++){
		if(frase[i] == ' '){
			frase[i] = '\n';
		}
	}
	printf("%s", frase);
	return 0;
}
