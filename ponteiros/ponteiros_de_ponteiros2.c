#include <stdio.h>
#include <stdlib.h>

int main(){


    float z = 2.5;
    float *fp = &z;


    printf("&z = %p, z = %f\n", &z, z);
    printf("&fp = %p, fp = %p, *fp = %f", &fp, fp, *fp);

}