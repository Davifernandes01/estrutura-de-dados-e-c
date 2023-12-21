#include <stdio.h>

int main(){

    int a = 10;
    int *p1 = NULL;
    int *p2;

    printf("valor da variavel a: %d\n\n",a);


    p1 = &a;
    p2 = p1;
    *p2 = 4;

    printf("valor da variavel a: %d\n, valor do ponteiro de a: %p\n, valor de p1: %p\n, valor de p2: %p\n", a, &a, p1, p2);

    return 0;

}

//ponteiro nada mais é do que que uma variavel que guarda o endereço de memoria de outra variavel
// todo ponteiro ocupa 8 bytes na memoria