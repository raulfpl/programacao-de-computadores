#include <stdio.h>

int main(){
	char string[200];
	int i;
	printf("Digite uma frase: ");
	gets(string);
	
	for(i=0;string[i]!='\0';i++){
		char c = string[i];
		if(c=='a' || c == 'e' || c == 'i' || c == 'o' || c == 'u'){
			string[i] = '*';
		}
	}
	printf("Nova frase: %s\n", string);
	return 0;
}
