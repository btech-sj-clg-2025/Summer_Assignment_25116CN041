#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_BOOKS 100

struct Book {
    int id;
    char title[100];
    char author[100];
    int is_issued;
};

struct Book library[MAX_BOOKS];
int book_count = 0;

void addBook() {
    if (book_count >= MAX_BOOKS) {
        printf("\nLibrary full!\n");
        return;
    }
    struct Book b;
    printf("\nID: ");
    scanf("%d", &b.id);
    while (getchar() != '\n');
    printf("Title: ");
    fgets(b.title, 100, stdin);
    b.title[strcspn(b.title, "\n")] = 0;
    printf("Author: ");
    fgets(b.author, 100, stdin);
    b.author[strcspn(b.author, "\n")] = 0;
    b.is_issued = 0;
    library[book_count++] = b;
    printf("Added.\n");
}

void displayBooks() {
    for (int i = 0; i < book_count; i++)
        printf("%d: %s by %s (%s)\n", library[i].id, library[i].title, 
               library[i].author, library[i].is_issued ? "Out" : "In");
}

void main() {
    int choice;
    while (1) {
        printf("\n1.Add 2.Show 3.Exit\nChoice: ");
        scanf("%d", &choice);
        if (choice == 1) addBook();
        else if (choice == 2) displayBooks();
        else break;
    }
}
