#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main(){
setlocale(LC_ALL,"");

    int a = 1, b = 10;

    while(a <= 10){
        printf("%d\n",a);

        a++; //= a + 1;
    }

    a = 20;

    do{
        printf("%d\n",b);

        a++; //= b - 1;
    }while(a <= 10);


}

