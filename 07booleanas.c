#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <stdbool.h>

void main(){
setlocale(LC_ALL,"");

    bool a =  true, b = false;

    if(a){
        printf("A � verdadeiro\n");
    }

    if(b){
        printf("B � verdadeiro\n");
    }else{
    printf("B � falso\n");
    }

    if(!b){
        printf("B � falso\n");
    }

}
