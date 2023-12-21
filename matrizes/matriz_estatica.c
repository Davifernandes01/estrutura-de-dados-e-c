#include <stdio.h>


int main(){

   const int n_rows = 3;
   const int n_cols = 3;

    int m[3][3] = {{0,1,2}, {3,4,5},{45,35,34}};

    printf("&m = %p, m = %p\n\n", &m, m);


    for(int i = 0; i < n_rows; i++){
        for(int j = 0; j < n_cols; j++){

            printf(" , &m[%d][%d] = %p m[%d][%d] = %d", i, j,&m[i][j], i,j ,m[i][j]);
        }

        puts("");
    }

    

  
    return 0;
}