#include <stdlib.h>
#include <stdio.h>

int main(){

int ***m = (int***) calloc(2, sizeof(int**));

//para cada fatia
for(int i = 0; i < 2; i++){

    m[i] = (int**) calloc(2, sizeof(int*));
    //para cada linha
        for(int j  = 0; j < 2; j++){

            m[i][j] = (int*) calloc(3, sizeof(int));

        }
}

int count = 0;


printf(" &m = %p, m = %p\n\n", &m, m);

for(int i = 0; i < 2; i++){

    printf(" &m[%d] = %p, m[%d] = %p\n", i, &m[i], i, m[i]);
    
        for(int j = 0; j < 2; j++){

            printf(" &m[%d][%d] = %p, m[%d][%d] = %p\n", i,j, &m[i][j],i,j,m[i][j]);
                
                for(int k = 0; k < 3; k++){

                    m[i][j][k] = count;
                    count ++;

                    printf(" &m[%d][%d][%d] = %p, m[%d][%d][%d] n= %d\n", i,j,k, &m[i][j][k], i,j,k,m[i][j][k]);

                    
                }
                puts("");
        }
            puts("");
}

   //desalocando a memoria
    //para cada fatia
    for(int i = 0; i < 2; i++){
        //para cada linha
        for( int j = 0; j < 2; j++){
                free(m[i][j]);
        }
    
     free(m[i]);
    }

    free(m);
    m = NULL;

    return 0;
}