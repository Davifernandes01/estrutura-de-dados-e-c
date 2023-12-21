#include <stdio.h>
#include <stdlib.h>



int** create_matriz(int n_rows, int n_cols){

        int **m = (int**) calloc(n_rows, sizeof(int *));

        for(int i = 0; i < n_rows; i++){

            m[i] = (int *) calloc(n_cols, sizeof(int));
        }

        return m;

    }

int main(){

    int **m = create_matriz(100000,10000);

    for(int i = 0; i < 100000; i++){
        for(int j = 0; j < 10000; j++){
            m[i][j] = (i + j ) % 2;
        }
    }

    return 0;
}