#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main(){
setlocale(LC_ALL,"");

    int a =10;

    // conectivo E (AND) = &&
    if(a > 5 && a < 15){
        printf("A variavel 'a' esta entre 5 e 15\n");
    }

    // conectico OU (OR) = ||
    if(a > 5 || a < 15){
        printf("A variavel 'a' esta entre 5 ou 15\n");
    }

    if((a > 5 && a < 15) || a == 20){
        printf("A variavel 'a' esta entre 5 e 15 ou ela vale 20\n");
    }
}
