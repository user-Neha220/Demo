#include <stdio.h>

struct Book
{
    int id;
    char title[50];
    char author[50];
};

int main()
{
    struct Book b[100];
    int n, i;

    printf("Enter number of books: ");
    scanf("%d", &n);

    for(i = 0; i < n; i++)
    {
        printf("\nBook %d\n", i + 1);

        printf("Book ID: ");
        scanf("%d", &b[i].id);

        printf("Book Title: ");
        scanf(" %[^\n]", b[i].title);

        printf("Author: ");
        scanf(" %[^\n]", b[i].author);
    }

    printf("\n========== LIBRARY RECORD ==========\n");

    for(i = 0; i < n; i++)
    {
        printf("\nBook %d\n", i + 1);
        printf("Book ID    : %d\n", b[i].id);
        printf("Title      : %s\n", b[i].title);
        printf("Author     : %s\n", b[i].author);
    }

    return 0;
}