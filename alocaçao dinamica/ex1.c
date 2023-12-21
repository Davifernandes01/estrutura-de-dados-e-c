#include <stdlib.h>
#include <stdio.h>


void soma_vet(int v[], int n, int scale){

    for(int i = 0; i < n; i++){
        v[i] += scale;
    }

}

void print_vet(const int *v , int n){

    for(int i = 0; i < n;i++){
        printf("&v[%d] = %p, v[%d] = %d\n", i, &v[i], i, v[i]);
      
    }

      puts("");

}

void desaloca_vet(int **v){

    free(*v);
    *v = NULL;

}

int main(){
    puts("vetor estatico");

    int v_static[5] = {0,10,20,30,40};

    print_vet(v_static, 5);

    soma_vet(v_static, 5, 9);

    print_vet(v_static,5);

    puts("vetor dinamico com calloc");

    int *v_dinamic = (int*) calloc(5, sizeof(int));

    for(int i = 0; i < 5; i++){
        v_dinamic[i] = i * 100;
    }

    print_vet(v_dinamic, 5);

    soma_vet(v_dinamic, 5, 9);

    print_vet(v_dinamic,5);

    puts("antes da funcçao de desalocar:");

    printf("&v_dinamic = %p, v_dinamic = %p\n", &v_dinamic, v_dinamic);

    desaloca_vet(&v_dinamic);

    puts("depois da funcçao de desalocar:");

    printf("&v_dinamic = %p, v_dinamic = %p\n", &v_dinamic, v_dinamic);

    return 0;
}