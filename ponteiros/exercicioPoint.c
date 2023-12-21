#include <stdlib.h>
#include <stdio.h>


int main(int argc, char *argv[] ){

    int a,b,*p1,*p2;

    a = 4;
    b = 3;

    p1 = &a;
    p2 = p1; // = p2 = %a

    *p2 = *p1 + 3; // 7
    b = b * (*p1); // 21
    p1 = &b; //*p1 = 21
    (*p2)++; // 8 p2 ainda aponta para a


    printf("%d, %d\n", *p1, *p2);
    printf("%d, %d\n", a,b);

}