#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main(){
setlocale(LC_ALL,"");

int a, b, c, mult;
    printf("Escolha 3 n�meros: \n");
    fflush(stdin);
    scanf("%d %d %d", &a, &b, &c);
    mult = a*b*c;
    printf("A multiplica��o de '%d', '%d' e '%d' � '%d'\n",a,b,c,mult);

}
