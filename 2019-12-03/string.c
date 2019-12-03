#include <stdio.h>


int main(){
	char senhaCorreta[] = "abacate", tentativa[255];
	int i;
	printf("Digite a senha: ");

	gets(tentativa);
	int iguais = 1;
	for(i = 0; tentativa[i] != '\0' ; i++){
		if(tentativa[i] != senhaCorreta[i]){
			iguais = 0;
		}
	}
	if(iguais == 1){
		printf("Senha correta!\n");
	}
	else{
		printf("Senha incorreta\n");
	}

	return 0;
}
