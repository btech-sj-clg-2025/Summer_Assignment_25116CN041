#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Contact {
    char name[50];
    char phone[20];
};

struct Contact list[100];
int total = 0;

void addContact() {
    if (total >= 100) {
        printf("List is full!\n");
        return;
    }
    printf("Enter Name: ");
    scanf(" %[^\n]", list[total].name);
    printf("Enter Phone: ");
    scanf(" %[^\n]", list[total].phone);
    total++;
    printf("Contact added!\n");
}

void viewContacts() {
    if (total == 0) {
        printf("No contacts found.\n");
        return;
    }
    for (int i = 0; i < total; i++) {
        printf("%d. Name: %s | Phone: %s\n", i + 1, list[i].name, list[i].phone);
    }
}

void searchContact() {
    char query[50];
    int found = 0;
    printf("Enter name to search: ");
    scanf(" %[^\n]", query);
    for (int i = 0; i < total; i++) {
        if (strcasecmp(list[i].name, query) == 0) {
            printf("Found! Phone: %s\n", list[i].phone);
            found = 1;
            break;
        }
    }
    if (!found) {
        printf("Not found.\n");
    }
}

int main() {
    int choice;
    while (1) {
        printf("\n1. Add | 2. View | 3. Search | 4. Exit\n");
        printf("Choice: ");
        scanf("%d", &choice);
        if (choice == 1) addContact();
        else if (choice == 2) viewContacts();
        else if (choice == 3) searchContact();
        else if (choice == 4) break;
        else printf("Invalid choice.\n");
    }
    return 0;
}
