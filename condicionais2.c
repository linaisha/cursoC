#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main(){
setlocale(LC_ALL,"");

    int a = 5, b = 10 , c = 15;
    char d ='x';

    if(a>2){
        printf("%d � maior que 2\n", a);
    }

    if(c>= b){
        printf("%d � maior ou igual a %d\n", c, b);
    }

    if(a < 10){
        printf("%d � menor que 10\n", a);
    }
    if(a <= 10){
        printf("%d � menor ou igual a 10\n", a);
    }

    if(c != 10){
        printf("%d n�o � 10\n", c);
    }
    if(d != 'a')
        printf("%c n�o � 'a'\n", d);

}
