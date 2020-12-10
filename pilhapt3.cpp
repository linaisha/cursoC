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

bool pilhaVazia(int topo){
	if(topo == -1){
		return true;
	}else{
		return false;
	}
}

bool pilhaCheia(int topo){
	if(topo == TAM -1){
		return true;
	}else{
		return false;
	}
}

int pilhaTamanho(int topo){
	return topo + 1;
}

int pilhaGet(int pilha[TAM],int *topo){
	if(pilhaVazia(*topo)){
		printf("A pilha está vazia!");
		return 0;
	}else{
		return pilha[*topo];
	}
}

void pilhaPush(int pilha[TAM],int valor,int *topo){

	if(pilhaCheia(*topo)){
		printf("Pilha cheia!\n");
	}else{
		*topo = *topo + 1;
		pilha[*topo] = valor;
	}
	
}

void pilhaPop(int pilha[TAM], int *topo){
	
	if(pilhaVazia(*topo)){
		printf("\nA pilha já está vazia!");
	}else{
		printf("\nValor removido: %i", pilha[*topo]);
		pilha[*topo] = 0;
		*topo = *topo - 1;
	}	
}

void pilhaConstrutor(int pilha[TAM], int *topo){
	
	*topo = -1;
	
	int i;
	
	printf("\n");
	
	for(i = 0; i < TAM; i++){
		pilha[i] = 0;
	}
}

int main(){
	setlocale(LC_ALL,"");
	
	int pilha[TAM];
	int topo = -1, valorRetirado;
	
	pilhaConstrutor(pilha,&topo);
	
	imprimeVetor(pilha,topo);
	
	pilhaPush(pilha, 5, &topo);
	imprimeVetor(pilha, topo);
	
	printf("\nUltimo valor da pilha: %i",pilhaGet(pilha,&topo));
	
	printf("\nTamanho da pilha: %i", pilhaTamanho(topo));
	
	pilhaPush(pilha, 7, &topo);
	imprimeVetor(pilha, topo);
	
	pilhaPop(pilha, &topo);
	imprimeVetor(pilha, topo);
	
	return 0;
}
