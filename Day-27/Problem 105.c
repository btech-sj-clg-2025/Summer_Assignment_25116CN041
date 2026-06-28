#include <stdio.h>
#include <stdlib.h>

#define MAX 50

struct Student {
    int id;
    char name[50];
    float gpa;
};

struct Student list[MAX];
int count = 0;

void add() {
    if (count >= MAX) {
        printf("System full!\n");
        return;
    }
    printf("Enter ID: ");
    scanf("%d", &list[count].id);
    printf("Enter Name: ");
    scanf("%s", list[count].name);
    printf("Enter GPA: ");
    scanf("%f", &list[count].gpa);
    count++;
}

void display() {
    if (count == 0) {
        printf("No records found.\n");
        return;
    }
    for (int i = 0; i < count; i++) {
        printf("ID: %d, Name: %s, GPA: %.2f\n", list[i].id, list[i].name, list[i].gpa);
    }
}

void search() {
    int id;
    printf("Enter ID to find: ");
    scanf("%d", &id);
    for (int i = 0; i < count; i++) {
        if (list[i].id == id) {
            printf("Found! Name: %s, GPA: %.2f\n", list[i].name, list[i].gpa);
            return;
        }
    }
    printf("Not found.\n");
}

int main() {
    int choice;
    while (1) {
        printf("\n1. Add\n2. Display\n3. Search\n4. Exit\nChoice: ");
        scanf("%d", &choice);
        
        if (choice == 1) add();
        else if (choice == 2) display();
        else if (choice == 3) search();
        else if (choice == 4) exit(0);
        else printf("Invalid option.\n");
    }
    return 0;
}
