#include <stdio.h>
#include <ctype.h>

int main(){
	char frase[400];
	int i;
	printf("Digite uma frase: ");
	gets(frase);
	frase[0] = toupper(frase[0]);
	for(i=0;frase[i] != '\0'; i++){
		if(frase[i] == ' '){
			frase[i+1] = toupper(frase[i+1]);
		}
	}
	printf("%s", frase);
	return 0;
}
