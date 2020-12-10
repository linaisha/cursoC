#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <iostream>
#include <string>
#define TAM 10

void imprimeVetor(int vetor[TAM], int topo){
	int i;
	
	printf("\n");
	
	for(i = 0; i < TAM; i++){
		printf("%i - ",vetor[i]);
	}
	printf("\nTopo: %i",topo);
}

void pilhaPush(int pilha[TAM],int valor,int *topo){

	if(*topo == TAM -1){
		printf("Pilha cheia!\n");
	}else{
		*topo = *topo + 1;
		pilha[*topo] = valor;
	}
	
}

void pilhaPop(int pilha[TAM], int *topo){
	
	if(*topo == -1){
		printf("\nA pilha já está vazia!");
	}else{
		printf("\nValor removido: %i", pilha[*topo]);
		pilha[*topo] = 0;
		*topo = *topo - 1;
	}
	
}

int main(){
	setlocale(LC_ALL,"");
	
	int pilha[TAM]= {0,0,0,0,0,0,0,0,0,0};
	int topo = -1, valorRetirado;
	
	imprimeVetor(pilha,topo);
	
	pilhaPush(pilha, 5, &topo);
	imprimeVetor(pilha, topo);
	
	pilhaPush(pilha, 7, &topo);
	imprimeVetor(pilha, topo);
	
	pilhaPop(pilha, &topo);
	imprimeVetor(pilha, topo);
	
	return 0;
}
