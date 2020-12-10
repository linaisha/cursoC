#include <iostream>
#include <stdlib.h>
#include <string>
#define TAM 10

using namespace std;

void imprimeVetor(int vetor[]){
    int i;
    cout << "\n";
    for(i = 0; i < TAM; i++){
        cout << " |" << vetor[i] << "| ";
    }
}

void selectionSort(int vetor[TAM]){

    int posicaoDoMenor, aux, i, j;

    for(i = 0; i < TAM; i++){


        posicaoDoMenor = i;

        for(j = i + 1; j < TAM; j++){

            if(vetor[j] < vetor[posicaoDoMenor]){
                posicaoDoMenor = j;
            }

        }

        if(posicaoDoMenor != i){
            aux = vetor[i];
            vetor[i] = vetor[posicaoDoMenor];
            vetor[posicaoDoMenor] = aux;
        }

        imprimeVetor(vetor);

    }

}

int main(){

    int vetor[TAM] = {10,9,8,7,6,5,4,3,2,1};

    selectionSort(vetor);

    imprimeVetor(vetor);

    return 0;
}
