#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main(){
setlocale(LC_ALL,"");
    int a, b;
    printf("Escolha um n�mero: \n");
    fflush(stdin);
    scanf("%d", &a);
    printf("Escolha um segundo n�mero: \n");
    fflush(stdin);
    scanf("%d", &b);
    printf("O m�dulo da diferen�a entre '%d' e '%d' �: %d\n", a, b, abs(a-b));
}

