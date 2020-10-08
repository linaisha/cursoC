#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main(){
setlocale(LC_ALL,"");
    int op;

    while(op <1 || op > 3){
    printf("Escolha uma opção: \n");
    printf("1-Opção 1\n");
    printf("2-Opção 2\n");
    printf("3-Opção 3\n");

    fflush(stdin);
    scanf("%d", &op);

    switch(op){
    case 1:
        printf("A opção 1 foi escolhida\n");
        break;
    case 2:
        printf("A opção 2 foi escolhida\n");
        break;
    case 3:
        printf("A opção 3 foi escolhida\n");
        break;
    default:
        printf("Opção Inválida!\n");
        break;
    }

    }



}
