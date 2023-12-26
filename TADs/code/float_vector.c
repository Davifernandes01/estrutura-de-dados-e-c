#include "float_vector.h"
#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>


//interfaces privadas
struct float_vector{
    int capacity; //capacidade do vector
    int size; //tamanho do vector
    float *data; //vetor de floats
};


/**
 * @brief funçao criada ver se o tamanho do vetor está cheio (atingiu a capacidade maxima)
 * @param vec vetor
 * @return bool
 * @author davi fernandes
*/
bool isFUll(const FloatVector *vec){

    return vec->size == vec->capacity;
}



//interface publicas
/**
 * @brief cria uma struct com x capacidade
 * @param int capacidade que deseja que a struct seja criada
 * @return retorna uma struct com um dado float
 * @author davi fernandes
*/
FloatVector *create(int capacity){

   FloatVector *vec =(FloatVector*) calloc(1, sizeof(FloatVector));

   vec->size = 0;
   vec->capacity = capacity;
   vec->data = (float*) calloc(capacity, sizeof(float));

   return vec;
}

/**
 * @brief apagar o vetor em si e sua estrutura
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

/**
 * @brief adicionar um valor no vetor e retorna um erro se o vetor estiver cheio
 * @param vec que é o vetor
 * @param val que é o numero de ponto flutuante
 * @return void
 * @author Davi fernandes
*/
void append(FloatVector *vec, float val){

    if(isFUll(vec)){
        fprintf(stderr,"ERROR: in 'append'\n");
        fprintf(stderr,"vector is full\n");

        exit(EXIT_FAILURE);
    
    }

    vec->data[vec->size] = val;
    vec->size++;

}

/**
 * @brief imprime todos os elementos do vetor
 * @param vec vetor
 * @return void
 * @author davi fernandes
*/

void print(const FloatVector *vec){

    puts("------------------");
    printf("size: %d\n", vec->size);
    printf("capacity: %d\n", vec->capacity);
    puts("---------");

    for(int i = 0; i < vec->size; i++){
        printf("[%d] = %f\n", i, vec->data[i]);
    }
}

/**
 * @brief retorna o tamanho do vetor
 * @param vec vetor
 * @return int
 * @author davi fernandes
*/
int size(const FloatVector *vec){

    return vec->size;
}

/**
 * @brief retorna a capacidade do vetor
 * @param vec vetor
 * @return int
 * @author davi fernandes
*/
int capacity(const FloatVector *vec){

    return vec->capacity;
}

/**
 * @brief retorna o elemendo do indice 'index', caso o inex seja invalido, retornará um erro
 * @param vec vetor
 * @param index indice do vetor
 * @return float
 * @author davi fernandes
*/
float at(const FloatVector *vec, int index){
    if(index < 0 || index >= vec->size){
        fprintf(stderr, "ERROR: in 'at'");
        fprintf(stderr, "the index has exceeded the vector size limit"); //o índice excedeu o limite de tamanho do vetor
        
        exit(EXIT_FAILURE);
    }

    return vec->data[index];
}


 /** @brief retorna o elemendo do indice 'index', sem retornar um erro
 * @param vec vetor
 * @param index indice do vetor
 * @return float
 * @author davi fernandes
 * */
float get(const FloatVector *vec, int index){

    return vec->data[index];
}

 /** @brief adiciona um novo valor em um elemento do indice 'index'
 * @param vec vetor
 * @param index indice do vetor
 * @param  val novo valor
 * @return void
 * @author davi fernandes
 * */
void set(FloatVector *vec, int index, float val){
     if(index < 0 || index >= vec->size){
        fprintf(stderr, "ERROR: in 'at'");
        fprintf(stderr, "the index has exceeded the vector size limit"); //o índice excedeu o limite de tamanho do vetor
        
        exit(EXIT_FAILURE);
       }

       vec->data[index] = val;

}