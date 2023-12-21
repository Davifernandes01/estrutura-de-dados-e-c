#include <stdlib.h>
#include <stdio.h>


void troca(int *x, int *y){

    int aux = *x;
    *x = *y;
    *y = aux;

}


int main(){

    int a = 10;
    int b = 20;

    printf("antes da troca a: %d\n b: %d\n", a, b);


    troca(&a, &b);

    printf("depois da troca: a: %d\n, b:%d\n",a,b);


    return 0;
}