#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main(){
    setlocale(LC_ALL,"");

    char letra = 'x';

    if(letra == 'x'){
        printf("A letra � x.\n");
    }

    printf("C�digo da letra � igual a = %d\n", letra);

    if(letra == 120){
        printf("A letra � x.\n");
    }

}
