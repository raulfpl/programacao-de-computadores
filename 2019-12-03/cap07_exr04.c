#include <stdio.h>

int main(){
	char string[255];
	int i;
	printf("Digite a frase: ");
	gets(string);
	for(i=0;string[i] != '\0'; i++){
		char c = tolower(string[i]);
		if(c == 'a' || c == 'e' || c == 'i'
					|| c == 'o' || c == 'u'){
			string[i] = '*';
		}
	}
	printf("%s", string);
	return 0;
}
