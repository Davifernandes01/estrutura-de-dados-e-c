#include <stdio.h>
#include <stdlib.h>


int main(){
    //alocação de um vetor estático(memoria stack)

    int v_stack[5] = {0,10,20,30,40};

    puts("vetor estatico:");
    printf("&v_stack = %p, v = %p\n", &v_stack, v_stack );

    for(int i = 0; i < 5; i++){
        printf("&v_stack[%d] = %p, v_stack[%d] = %d\n", i, &v_stack[i],i, v_stack[i]);
    }
    puts("\n");
    //alocação de um vetor dinâminco usando malloc(memoria heap)

    int *v_heap_mal = (int*) malloc(5 * sizeof(int)); // todos os elementos possuem "lixo" de memoria

    puts("vetor dinamico usando malloc");

    printf("&v_heap_mal = %p, v_heap_mal = %p\n", &v_heap_mal, v_heap_mal);

    for(int i = 0; i < 5; i++){
        printf("&v_heap_mal[%d] = %p, v_heap_mal = [%d] = %d\n", i, &v_heap_mal[i], i, v_heap_mal[i]);
    }
    puts("\n");

    puts("vetor dinamico usando calloc");
    //alocação de um veto dinamico usando calloc
    int *v_heap_cal = (int*) calloc(5, sizeof(int)); 
    //todos os bit reservados no calloc ja recebem o valor 0,nao contendo lixo de memoria
       printf("&v_heap_cal = %p, v_heap_cal = %p\n", &v_heap_cal, v_heap_cal);

    for(int i = 0; i < 5; i++){
        printf("&v_heap_cal[%d] = %p, v_heap_cal = [%d] = %d\n", i, &v_heap_cal[i], i, v_heap_cal[i]);
    }


    return 0;

    //resultado no terminal

     /*vetor estatico:
&v_stack = 0x7ffe241b04e0, v = 0x7ffe241b04e0
&v_stack[0] = 0x7ffe241b04e0, v_stack[0] = 0
&v_stack[1] = 0x7ffe241b04e4, v_stack[1] = 10
&v_stack[2] = 0x7ffe241b04e8, v_stack[2] = 20
&v_stack[3] = 0x7ffe241b04ec, v_stack[3] = 30
&v_stack[4] = 0x7ffe241b04f0, v_stack[4] = 40


vetor dinamico
&v_heap_mal = 0x7ffe241b04d8, v_heap_mal = 0x5626d1fd56b0 
|| &v_heap_mal possui um endereço proprio, enquanto guarda o endereço da base do vetor, que esta na memoria heap
&v_heap_mal[0] = 0x5626d1fd56b0, v_heap_mal = [0] = 0 //base
&v_heap_mal[1] = 0x5626d1fd56b4, v_heap_mal = [1] = 0
&v_heap_mal[2] = 0x5626d1fd56b8, v_heap_mal = [2] = 0
&v_heap_mal[3] = 0x5626d1fd56bc, v_heap_mal = [3] = 0
&v_heap_mal[4] = 0x5626d1fd56c0, v_heap_mal = [4] = 0

vetor dinamico usando calloc
&v_heap_cal = 0x7ffc7a4f5878, v_heap_cal = 0x557ab5a3b6d0
&v_heap_cal[0] = 0x557ab5a3b6d0, v_heap_cal = [0] = 0
&v_heap_cal[1] = 0x557ab5a3b6d4, v_heap_cal = [1] = 0
&v_heap_cal[2] = 0x557ab5a3b6d8, v_heap_cal = [2] = 0
&v_heap_cal[3] = 0x557ab5a3b6dc, v_heap_cal = [3] = 0
&v_heap_cal[4] = 0x557ab5a3b6e0, v_heap_cal = [4] = 0
*/
}


