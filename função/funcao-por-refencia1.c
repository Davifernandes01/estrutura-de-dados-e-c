#include <stdio.h>
#include <stdlib.h>

void soma(int x, int y, int *z){

    *z = x + y;

    printf("valor de z = %d\n\n", *z);

}

void sub_mult(int x, int y, int *mult, int *sub){

    *mult = x * y;
    *sub = x - y;

    printf("valor de sub: %d,\nvalor de mult: %d\n", *sub, *mult);

}

int main(){

    int a = 30;
    int b = 40;
    int c;
    int d;

    printf("valor de c e d com lixo de memoria: %d, %d\n\n", c, d);
    soma(a,b,&c);

    printf("valor de c sem lixo de memoria: %d\n\n", c);


    sub_mult(a,b, &c, &d);

    printf("valor dend sem lixo de memoria:  %d\n\n", d);

}

