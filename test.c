#include <stdio.h>
#include <string.h>
int whatsBook();
int main()
{
    whatsBook();
    return 0;
}
int whatsBook()
{
    struct Books
    {
        char title[50];
        char author[50];
        char subject[100];
        int book_id;
    };

    struct Books book1;

    strcpy(book1.title, "milu");
    strcpy(book1.author, "lu");
    strcpy(book1.subject, "C Programming Tutorial");
    book1.book_id = 6495407;

    printf("Book 1 title : %s\n", book1.title);
    printf("Book 1 author : %s\n", book1.author);
    printf("Book 1 subject : %s\n", book1.subject);
    printf("Book 1 book_id : %d\n", book1.book_id);

    return 0;
}