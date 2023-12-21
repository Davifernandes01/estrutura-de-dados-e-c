#include <stdio.h>
#include <stdlib.h>


int **create_int_matrix( int n_rows,  int n_collums){

    int **m = (int **) calloc(n_rows, sizeof(int));

    for(int i = 0; i < n_rows; i++){
        m[i] = (int*) calloc(n_collums, sizeof(int));
    }

    return m;

}

void print_int_matriz(const int *m[], int n_rows, int n_collumns){

    printf("&m = %p, m = %p\n\n", &m , m);

    for(int i = 0; i < n_rows; i++){
        printf(" &m[%d] = %p, m[%d] = %p\n",i, &m[i],i, m[i]);

        for(int j = 0; j < n_collumns; j++){
       
            printf(" &m[%d][%d] = %p, m[%d][%d] = %d", i,j, &m[i][j], i,j, m[i][j]);

             puts("");
        }

    }
}


void scale_for_matriz(int **m, int n_rows, int n_collumns, int scale){

    for (int i = 0; i < n_rows; i++)
    {
            for (int j = 0; j < n_collumns; j++)
            {
                m[i][j] = scale++;
            }
            
    }
    

}


void  destroy_int_matriz(int ***mat, int n_rows, int n_cols){

    int **aux = *mat;
      for(int i = 0; i < 2; i ++){
            free(aux[i]);
    }

    free(aux);
    *mat = NULL;

}

int main(int argc , char *argv[]){

    if(argc != 4){

        printf("ERROR\n%s n_rows ncols scale \n", argv[0]);
        exit(-1);

    }

    int n_rows = atoi(argv[1]);
    int n_cols = atoi(argv[2]);
    int scale = atoi(argv[3]);

    int **m = create_int_matrix(n_rows, n_cols);
    //printando a matriz

    print_int_matriz(m, n_rows, n_cols);

    scale_for_matriz(m, n_rows, n_cols, scale);

    print_int_matriz(m, n_rows, n_cols);

    destroy_int_matriz(&m, n_rows, n_cols);
    printf("m is null ? %d \n", m == NULL);

return 0;
}