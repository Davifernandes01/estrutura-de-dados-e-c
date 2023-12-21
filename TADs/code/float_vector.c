#include "float_vector.h"
#include <stdlib.h>


struct float_vector{
    int capacity; //capacidade do vector
    int size; //tamanho do vector
    float *data; //vetor de floats
};

/**
 * @brief aloca um vetor com dada capacidade
 * @param capacity capacidade do vetor em inteiros
 * 
 * @return retorna um vetor de floats
 * 
 * @author Davi fernandes


*/
FloatVector *create(int capacity){

   FloatVector *vec =(FloatVector*) calloc(1, sizeof(FloatVector));

   vec->size = 0;
   vec->capacity = capacity;
   vec->data = (float*) calloc(capacity, sizeof(float));

   return vec;
}

/**
 * @brief apagar o vetor em sim e sua estrutura
 * 
 * @param vec_ref o vetor escolhido para ser apagado
 * 
 * @return void
 * 
 * @author Davi fernandes
*/

void destroy( FloatVector **vec_ref){

    FloatVector *vec = *vec_ref;

    free(vec->data);
    free(vec);

    *vec_ref = NULL;

}

