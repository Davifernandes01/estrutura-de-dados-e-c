#include <stdlib.h>
#include <stdio.h>


int main(){

    int **m = NULL;
    
    m = (int**)calloc(2, sizeof(int*));

    //para cada linha da matriz
    for(int i = 0; i < 2; i++){
        m[i] = (int*) calloc(3, sizeof(int));
    }

    printf("&m = %p, m = %p\n\n", &m , m);

    int count = 0;

    for(int i = 0; i < 2; i++){
        printf(" &m[%d] = %p, m[%d] = %p\n",i, &m[i],i, m[i]);

        for(int j = 0; j < 3; j++){
            m[i][j] = count;
            count ++;


            printf(" &m[%d][%d] = %p, m[%d][%d] = %d", i,j, &m[i][j], i,j, m[i][j]);

             puts("");
        }

    }

//desalocando a memoria

    for(int i = 0; i < 2; i ++){
            free(m[i]);
    }


    return 0;
}

