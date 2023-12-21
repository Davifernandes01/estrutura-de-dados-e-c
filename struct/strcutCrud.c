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


typedef struct _student{
    char name[100];
    int age;
    Book *book;

} Student;


//funções da struct BOOKs

//construtor
Book *create_book( const char *title , unsigned int pages, float price){

    Book *book = (Book*) calloc(1, sizeof(Book));

    strcpy(book->title, title);
    book->pages = pages;
    book->price = price;
    return book;
}

void print_book(const Book *book){

    printf("title: %s\npages: %d\nprice: %.2f\n\n", book->title, book->pages, book->price);
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


//função da struct alunos

Student *create_student(const char *name, int age, const Book *book){

        Student *student = (Student*) calloc(1, sizeof(Student));

        strcpy(student->name, name);
        student->age = age;
        student->book = copy_book(book);


        return student;


}

void print_studend(const Student *student){

    printf("name: %s\nage:%d\n", student->name, student->age);
    puts("book:");
    print_book(student->book);

}


void destroy_studend(Student **student){

    Student *st = *student;

    destroy_book(&st->book);
    free(st);
    *student = NULL;


}

int main(){

 
    Book *livro_1 = create_book("percy jackson e o mar de monstros", 234,45.00);

   

    livro_1->price = 38.99;

    print_book(livro_1);

    
    Student *student1 = create_student("davi", 20,livro_1);

    print_studend(student1);

    if(student1->book, livro_1){
        puts("true");
    }else{
        puts("false");
    }
    destroy_book(&livro_1);
    destroy_studend(&student1);


    return 0;
}