#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main(){
setlocale(LC_ALL,"");

    int a = 5, b;

    printf("%d\n",a);

    //concatenando
    printf("O valor da var 'a' é: %d\n", a);

    a = 15;

    printf("Agora o valor de 'a' é : %d\n", a);

    scanf("%d", &b);
    fflush(stdin);
    printf("O valor de 'b' é: %d\n", b);

    printf("\nUhuu\n");

    system("pause");
}
