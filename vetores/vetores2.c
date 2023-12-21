#include <stdlib.h>
#include <stdio.h>


int main(){

int i;
int v[5];

for (i = 0; i < 5; i++){
    scanf("%d\n", &v[i]);

    printf("&v[%p] = %d\n\n", &v[i], v[i]);
}

printf("&v[3] = %p", (v+3));



}