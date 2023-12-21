#include <stdio.h>
#include <stdlib.h>


int main(){

    int array[5] = {0,1,2,3,4};

    for(int i = 0; i < 5; i++){
        printf("&array[%d] = %p , array[%d] = %d\n ", i, &array[i], i, array[i]);
    }

    printf("&array[6] = %p , array[6] = %d\n", &array[6], array[6]);

    return 0;

}