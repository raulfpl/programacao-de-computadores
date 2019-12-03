#include <stdio.h>
#include <string.h>

int main(){
	char senhaCorreta[] = "abacate", tentativa[255];
	int i;
	printf("Digite a senha: ");

	gets(tentativa);

	if(strcmp(tentativa, senhaCorreta) == 0){
		printf("Senha correta!\n");
	}
	else{
		printf("Senha incorreta\n");
	}

	return 0;
}
