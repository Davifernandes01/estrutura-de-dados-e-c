#include <stdio.h>
#include <stdlib.h>



int soma(int a, int b){

    int z;

    puts("dentro da função");

    printf("&a = %p\n &b = %p\n &z = %p\n lixo de z: %d\n\n", &a, &b, &z, z);

     z = a + b;

    return z;
}

int main(){
    int a = 10;
    int b = 20;
    int c;

  
    c = soma(a, b);

    puts("depois da função");
    printf("resultado: %d\n\n", c);

    printf("&a = %p\n &b = %p\n &c = %p\n", &a, &b, &c);

    return 0;

    
}

