#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main(){
setlocale(LC_ALL,"");
    int a = 1;
    char b = 'x';

    if(a == 1){
        printf("Op��o escolhida: 1\n");
    }else if(a == 2){
        printf("Op��o escolhida: 2\n");
    }else if(a == 3){
        printf("Op��o escolhida: 3\n");
    }else{
        printf("Op��o inv�lida!\n");
    }

    switch(a){
        case 1:
            printf("Op��o escolhida: 1\n");
            break;
        case 2:
            printf("Op��o escolhida: 2\n");
            break;
        case 3:
            printf("Op��o escolhida: 3\n");
            break;
        default:
            printf("Op��o inv�lida!\n");
            break;

    }

    switch(b){
        case 'x':
            printf("A letra � x\n");
            break;
        default:
            printf("Op��o inv�lida!\n");
            break;
    }
}
