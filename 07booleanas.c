#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <stdbool.h>

void main(){
setlocale(LC_ALL,"");

    bool a =  true, b = false;

    if(a){
        printf("A é verdadeiro\n");
    }

    if(b){
        printf("B é verdadeiro\n");
    }else{
    printf("B é falso\n");
    }

    if(!b){
        printf("B é falso\n");
    }

}
