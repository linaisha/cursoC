#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main(){
setlocale(LC_ALL,"");

// definindo variaveis
    int a = 6, b = 4;

    printf("A soma de '%d' e '%d' = %d\n", a, b, a + b);

    printf("A subtra��o de '%d' e '%d' = %d\n", a, b, a - b);

    printf("A divis�o de '%d' e '%d' = %d\n", a, b, a / b);

    printf("A multiplica��o de '%d' e '%d' = %d\n", a, b, a * b);

    printf("O resto da divis�o entre '%d' e '%d' = %d\n", a, b, a % b);

    printf("O valor absoluto de -3 = %d\n", abs(-3));

}
