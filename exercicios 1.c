#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main(){
setlocale(LC_ALL,"");
    float a, b;

    printf("Escolha um número: \n");
    fflush(stdin);
    scanf("%f", &a);
    printf("\nEscolha um segundo número: \n");
    fflush(stdin);
    scanf("%f", &b);
    printf("\nA média entre '%f' e '%f' é: %f\n", a, b, (a+b)/2);

}
