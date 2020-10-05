#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main(){
setlocale(LC_ALL,"");

    int a = 5, b = 10 , c = 15;
    char d ='x';

    if(a>2){
        printf("%d é maior que 2\n", a);
    }

    if(c>= b){
        printf("%d é maior ou igual a %d\n", c, b);
    }

    if(a < 10){
        printf("%d é menor que 10\n", a);
    }
    if(a <= 10){
        printf("%d é menor ou igual a 10\n", a);
    }

    if(c != 10){
        printf("%d não é 10\n", c);
    }
    if(d != 'a')
        printf("%c não é 'a'\n", d);

}
