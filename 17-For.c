#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main(){
setlocale(LC_ALL,"");

    int cont;

    for(cont = 1; cont <= 10; cont++){
        printf("5 X %d = %d\n", cont, 5 * cont);

    }

    for(cont = 0; cont <= 10; cont = cont + 2){
        printf("%d\n", cont);
    }

    for(cont = 10; cont >= 0; cont--){
        printf("%d\n", cont);
    }
}
