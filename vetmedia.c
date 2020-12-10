#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

#define TAM 3

void main(){
	setlocale(LC_ALL,"");
	
	float vet[TAM], soma;
	int i;
	
	for(i = 0; i < TAM; i++){
	printf("Escolha o valor do vetor de posição %i: ", i);
	fflush(stdin);
	scanf("%f", &vet[i]);
	soma = soma + vet[i];
	}
	
	for(i = 0; i < TAM; i++){
		printf("Vetor posição %i: %.2f", i, vet[i]);
		printf("\n");
	}
	
	printf("A média dos vetores é: %.2f", soma/3);
		
}
