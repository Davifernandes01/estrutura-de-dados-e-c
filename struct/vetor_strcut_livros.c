#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

typedef struct _book
    {
        char title[100];
        unsigned int pages;
        float price;

    } Book;





void print_book(const Book *book){

    printf("title: %s\npages: %d\nprice: %.2f\n\n", book->title, book->pages, book->price);
}




//funções da struct BOOKs

//construtor
Book *create_book( const char *title , unsigned int pages, float price){

    Book *book = (Book*) calloc(1, sizeof(Book));

    strcpy(book->title, title);
    book->pages = pages;
    book->price = price;
    return book;
}



void destroy_book(Book **book){

    Book *_book = *book;
    free(_book);
    *book = NULL;


}

Book *copy_book(const Book *book){

    return create_book(book->title, book->pages, book->price);

}

bool BookAreTheSame(const Book *book_1 , const Book *book_2){//livros sãp iguais

    if(strcmp(book_1->title, book_2->title) == 0){

        return true;
    }else{
        return false;
    }

}



int main(){

    Book *livro_1 = create_book("livro a", 200,45.77);
    Book *livro_2 = create_book("livro b", 566,67.45);
    Book *livro_3 = create_book("livro c", 450, 88.99);



    return 0;
}


