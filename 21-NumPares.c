#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main(){
setlocale(LC_ALL,"");

    int i;

    i = 10;

    while(i <= 20){
        printf("%d\n", i);
        i = i + 2;
    }

    i = 10;

    do{
        printf("%d\n", i);
        i = i + 2;
    }while(i <= 20);

    for(i = 10; i <= 20; i = i + 2){
        printf("%d\n", i);
    }
    // OUUU
    i = 9;

    printf("\nAGORA COM OS RESTOS\n");

    while(i <= 20){
        i++;
        if(i % 2 == 0){
        printf("%d\n", i);
        }
    }

    i = 9;

    do{
        i++;
        if(i % 2 == 0){
        printf("%d\n", i);
        }
    }while(i <= 20);

    for(i = 9; i <= 20; i++){
        if(i % 2 == 0){
        printf("%d\n", i);
        }
    }
}
