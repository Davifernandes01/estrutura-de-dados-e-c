#include <stdlib.h>
#include <stdio.h>



typedef struct _livro{
    char titulo[100];
    int pagina;
    long preco;    
} Livro;


int main(){

    Livro livro1;
    Livro *livro2 = (Livro*) calloc(1, sizeof(Livro));

    printf("tamanho do livro %ld bytes\n", sizeof(livro1));
    printf("tamanho do livro %ld bytes\n", sizeof(livro2));
    printf("tamanho do livro %ld bytes\n", sizeof(*livro2));

    

    return 0;
}