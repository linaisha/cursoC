#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

#define TAM 3

void main(){
	setlocale(LC_ALL,"");
	
	float vet[TAM];
	int i;
	
	for(i = 0; i < TAM; i++){
	printf("Escolha o valor do vetor de posição %i: ", i);
	fflush(stdin);
	scanf("%f", &vet[i]);
	}
	
	for(i = 0; i < TAM; i++){
		printf("Vetor posição %i: ", i);
	}
	
	print("A média dos vetores é: %.2f", (vet[1]+vet[2]+vet[3])/3);
		
}
