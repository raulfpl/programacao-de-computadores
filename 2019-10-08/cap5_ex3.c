#include <stdio.h>

int main(){
	int vet1[10], vet2[10], vetResult[20];
	int i;
	printf("vetor 1:\n");
	for(i=0;i<10;i++){
		printf("digite um numero %d: ",i);
		scanf("%d",&vet1[i]);
	}
	printf("vetor 2:\n");
	for(i=0;i<10;i++){
		printf("digite um numero %d: ",i);
		scanf("%d",&vet2[i]);
	}
	
	for(i=0;i<10;i++){
		vetResult[i*2] = vet1[i];
		vetResult[i*2+1] = vet2[i];
	}
	for(i=0;i<10;i++){
		printf("%d ",vetResult[i]);
	}
		
	
	return 0;
}
