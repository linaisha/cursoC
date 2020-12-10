#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <iostream>
#include <string>
#define TAM 10

void imprimeVetor(int vetor[TAM]){
	int i;
	
	printf("\n");
	
	for(i = 0; i < TAM; i++){
		printf("%i - ",vetor[i]);
	}
}

void pilhaPush(int pilha[TAM],int valor,int *topo){

	if(*topo == TAM -1){
		printf("Pilha cheia!\n");
	}else{
		*topo = *topo + 1;
		pilha[*topo] = valor;
	}
	
}

int main(){
	setlocale(LC_ALL,"");
	
	int pilha[TAM]= {0,0,0,0,0,0,0,0,0,0};
	int topo = -1;
	
	imprimeVetor(pilha);
	
	pilhaPush(pilha, 5, &topo);
	pilhaPush(pilha, 7, &topo);
	
	imprimeVetor(pilha);
	
	return 0;
}
