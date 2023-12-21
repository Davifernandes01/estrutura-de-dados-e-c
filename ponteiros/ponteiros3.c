#include <stdio.h>
#include <stdlib.h>
#include <string.h>


char main(){

        char nome[50] = "rada";
        char *point = NULL;


        printf("meu nome: %s\nmeu endereço: %p\n\n", nome, &nome);

        point = &nome[0];

        strcpy(point, "urahara kisuke");


        printf("meu novo nome: %s\nmeu endereço que estou apontando: %p\nmeu endereço: %p\nmeu conteudo: %s\n\n", 
         nome, point, &point, point);
        

    return 0;
}