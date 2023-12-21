#include <stdlib.h>
#include <stdio.h>


int main(){

    int v[5] = {0,1,2,3,4};
    int *v2, *p;
    int i;

    p = v;
    p[3] = p[4] = 10;

    for(i = 0; i< 5; i++){
        printf("&v[%d] = %p, v[%d] = %d\n", i,&v[i],i, v[i]);
    }
    puts("");
    v2 = (int*) malloc(5 * sizeof(int));

    for(i = 0; i< 5; i++){
        v2[i] = v[i];

         printf("&v[%d] = %p, v[%d] = %d\n", i,&v2[i],i, v2[i]);
    }

    free(v2);
    v2 = NULL;

    return 0;

/* STACK
&v[0] = 0x7ffe3543bc90, v[0] = 0
&v[1] = 0x7ffe3543bc94, v[1] = 1
&v[2] = 0x7ffe3543bc98, v[2] = 2
&v[3] = 0x7ffe3543bc9c, v[3] = 10
&v[4] = 0x7ffe3543bca0, v[4] = 10

HEAP
&v[0] = 0x559a240296b0, v[0] = 0
&v[1] = 0x559a240296b4, v[1] = 1
&v[2] = 0x559a240296b8, v[2] = 2
&v[3] = 0x559a240296bc, v[3] = 10
&v[4] = 0x559a240296c0, v[4] = 10
*/
}