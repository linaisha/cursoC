#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#define TAM 10

void main(){
setlocale(LC_ALL,"");

    printf("%d\n", TAM);

    int i;

    for(i = 1; i < TAM; i++){
        printf("%d\n", i);
    }
}
