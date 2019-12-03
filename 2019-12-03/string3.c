#include <stdio.h>
#include <string.h>

int compara(char str1[], char str2[]){
	int i;
	int iguais = 1;
	for(i=0;str1[i]!='\0';i++){
		if(str1[i] != str2[i]){
			iguais = 0;
		}
	}
	if(str2[i]!='\0'){
		iguais =0;
	}
	if(iguais==1){
		return 0;
	}
	else{
		return 1;
	}
}

int main(){
	char senhaCorreta[] = "abacate", tentativa[255];
	char senha2[] = {'a', 'b', 'c', 'a', 't', 'e', '\0'};
	int i;
	printf("Digite a senha: ");

	gets(tentativa);

	if(compara(tentativa, senhaCorreta) == 0){
		printf("Senha correta!\n");
	}
	else{
		printf("Senha incorreta\n");
	}

	return 0;
}
