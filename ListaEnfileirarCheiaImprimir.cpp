#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <iostream>
#include <string>
#define TAM 10

void imprimeVetor(int vetor[TAM],int tamanho){
	
	int i;
	
	printf("\n");
	
	for(i=0;i<TAM;i++){
		printf("%i - ",vetor[i]);
	}
}

void filaConstrutor(int *frente, int *tras){
	*frente = 0;
	*tras = -1;
}

void filaEnfileirar(int fila[TAM], int valor, int *tras){
	
	if(*tras == TAM-1){
		printf("Fila cheia!\n");
	}else{
	*tras = *tras + 1;
	fila[*tras] = valor;	
	}
}

int filaTamanho(int tras,int frente){
	return (tras - frente)+1;
}

int main(){
	setlocale(LC_ALL,"");
	
	int fila[TAM]= {0,0,0,0,0,0,0,0,0,0};
	int frente, tras;
	int valor;
	
	filaConstrutor(&frente,&tras);
	
	filaEnfileirar(fila, 5, &tras);
	filaEnfileirar(fila, 7, &tras);
	filaEnfileirar(fila, 8, &tras);
	filaEnfileirar(fila, 9, &tras);
	filaEnfileirar(fila, 5, &tras);
	filaEnfileirar(fila, 7, &tras);
	filaEnfileirar(fila, 8, &tras);
	filaEnfileirar(fila, 9, &tras);
	filaEnfileirar(fila, 5, &tras);
	filaEnfileirar(fila, 7, &tras);
	filaEnfileirar(fila, 8, &tras);
	filaEnfileirar(fila, 9, &tras);	
	
	imprimeVetor(fila, filaTamanho(tras,frente));
	
	return 0;
}
