#include <string.h>
#include <stdio.h>
#include <stdlib.h>



int main(){

    typedef struct _aluno
    {
        char nome[100];
        int idade;
    } Aluno;

    Aluno davi;

    strcpy(davi.nome, "Davi");
    davi.idade = 10;

    printf("sizeof(Aluno) = %lu  bytes\n", sizeof(Aluno));

    Aluno ana = { .nome = "ana", .idade = 19};

    Aluno *arthur = (Aluno *) calloc(1, sizeof(Aluno));

    strcpy(arthur->nome, "arthur");
    arthur->idade = 19;
     
}