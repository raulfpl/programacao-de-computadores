#include <stdio.h>
#include <ctype.h>
int main(){
	char string[400], c;
	int i, consoantes=0;
	printf("Digite uma frase: ");
	gets(string);
	for(i=0;string[i] != '\0'; i++){
		c = toupper(string[i]);
		if(c >= 'A' && c <= 'Z'){
			if(c != 'A' && c != 'E' && c != 'I' && c != 'O' && c != 'U'){
		 		consoantes++;
			}
		}
	}
	printf("Quantidade de consoantes: %d\n", consoantes);
	return 0;
}
