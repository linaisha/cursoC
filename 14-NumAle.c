#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>

void main(){
setlocale(LC_ALL,"");

    srand((unsigned)time(NULL));

    int aleatorio = rand() % 3;

    int aleatorioSegundo = (rand() % 5) + 1;

    printf("%d\n", aleatorioSegundo);

    aleatorioSegundo = (rand() % 5) + 1;

    printf("%d", aleatorioSegundo);


}
