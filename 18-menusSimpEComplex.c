#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main(){
setlocale(LC_ALL,"");
    int op;

    while(op <1 || op > 3){
    printf("Escolha uma op��o: \n");
    printf("1-Op��o 1\n");
    printf("2-Op��o 2\n");
    printf("3-Op��o 3\n");

    fflush(stdin);
    scanf("%d", &op);

    switch(op){
    case 1:
        printf("A op��o 1 foi escolhida\n");
        break;
    case 2:
        printf("A op��o 2 foi escolhida\n");
        break;
    case 3:
        printf("A op��o 3 foi escolhida\n");
        break;
    default:
        printf("Op��o Inv�lida!\n");
        break;
    }

    }



}
