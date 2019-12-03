#include <stdio.h>

int main(){
	char string[255], vogais[] = "aeiouAEIOU";
	int i, j;
	printf("Digite a frase: ");
	gets(string);
	for(i=0;string[i] != '\0'; i++){
		for(j = 0; vogais[j] != '\0'; j++){
			if(string[i] == vogais[j]){
				string[i] = '*';
			}
		}
	}
	printf("%s", string);
	return 0;
}
