#include <stdlib.h>
#include <stdio.h>


int func(int *px, int *py){

    px = py; // px começa a apontar pra onde py aponta

    *py = (*py) * (*py);

    *px = *px + 2;
}

int main(){

    int x,y;

    scanf("%d", &x);
    scanf("%d", &y);

    func(&x, &y);


    printf("x = %d\n y = %d", x,y);

    return 0;
}