#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main(){
setlocale(LC_ALL,"");
    int a, b;
    printf("Escolha um número: \n");
    fflush(stdin);
    scanf("%d", &a);
    printf("Escolha um segundo número: \n");
    fflush(stdin);
    scanf("%d", &b);
    printf("O módulo da diferença entre '%d' e '%d' é: %d\n", a, b, abs(a-b));
}

