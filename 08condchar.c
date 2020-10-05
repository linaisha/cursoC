#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main(){
    setlocale(LC_ALL,"");

    char letra = 'x';

    if(letra == 'x'){
        printf("A letra é x.\n");
    }

    printf("Código da letra é igual a = %d\n", letra);

    if(letra == 120){
        printf("A letra é x.\n");
    }

}
