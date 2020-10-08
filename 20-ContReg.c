#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main(){
setlocale(LC_ALL,"");

    int i;

    for(i = 10; i >= 0 ; i--){
        printf("%d\n", i);

    }

    i = 10;

    do{
        printf("%d\n", i);
        i--;
    }while(i >= 0);

    i = 10;

    while(i >= 0){
        printf("%d\n",i);
        i--;
    }

}
