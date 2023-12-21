#include <stdio.h>
#include <stdlib.h>


int main(){

//2 fatias, 2 linhas, 3 colunas
    int m[2][2][3] = {
    //fatia 0
        {
            {0,1,2}, //linha 0 
            {4,5,6} //linha 1
        },
    //fatia 1
        {
            {7,8,9}, //linha 0
            {10,11,12} //linha 1
        }
    };

    printf("&m = %p, m = %p\n\n", &m, m);

    //para cada fatia
    for(int i = 0; i < 2; i++)
    {
        puts("");
        //para cada linha
            for(int j = 0; j<2; j++)
            {
                puts("");
                //para cada coluna
                for(int k = 0; k < 3; k++)
                {
                    printf(" &m[%d][%d][%d] = %p, m[%d][%d][%d] = %d\n", i,j,k,&m[i][j][k], i,j,k, m[i][j][k]);
                }

            }
    }

/*

    no terminal:

&m = 0x7ffd898cc730, m = 0x7ffd898cc730



 &m[0][0][0] = 0x7ffd898cc730, m[0][0][0] = 0
 &m[0][0][1] = 0x7ffd898cc734, m[0][0][1] = 1
 &m[0][0][2] = 0x7ffd898cc738, m[0][0][2] = 2

 &m[0][1][0] = 0x7ffd898cc73c, m[0][1][0] = 4
 &m[0][1][1] = 0x7ffd898cc740, m[0][1][1] = 5
 &m[0][1][2] = 0x7ffd898cc744, m[0][1][2] = 6


 &m[1][0][0] = 0x7ffd898cc748, m[1][0][0] = 7
 &m[1][0][1] = 0x7ffd898cc74c, m[1][0][1] = 8
 &m[1][0][2] = 0x7ffd898cc750, m[1][0][2] = 9

 &m[1][1][0] = 0x7ffd898cc754, m[1][1][0] = 10
 &m[1][1][1] = 0x7ffd898cc758, m[1][1][1] = 11
 &m[1][1][2] = 0x7ffd898cc75c, m[1][1][2] = 12

*/



    return 0;
}