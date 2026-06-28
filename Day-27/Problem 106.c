#include <stdio.h>
#include <stdlib.h>

struct Employee {
    int id;
    char name[50];
    float salary;
};

int main() {
    struct Employee emp[100];
    int count = 0;
    int choice;
    int searchId;

    while (1) {
        printf("\n1. Add\n2. View\n3. Search\n4. Exit\nEnter choice: ");
        scanf("%d", &choice);

        if (choice == 1) {
            printf("Enter ID: ");
            scanf("%d", &emp[count].id);
            printf("Enter Name: ");
            scanf("%s", emp[count].name);
            printf("Enter Salary: ");
            scanf("%f", &emp[count].salary);
            count++;
        } 
        else if (choice == 2) {
            for (int i = 0; i < count; i++) {
                printf("\nID: %d, Name: %s, Salary: %.2f\n", emp[i].id, emp[i].name, emp[i].salary);
            }
        } 
        else if (choice == 3) {
            printf("Enter ID to search: ");
            scanf("%d", &searchId);
            int found = 0;
            for (int i = 0; i < count; i++) {
                if (emp[i].id == searchId) {
                    printf("Found! Name: %s, Salary: %.2f\n", emp[i].name, emp[i].salary);
                    found = 1;
                    break;
                }
            }
            if (!found) {
                printf("Not found.\n");
            }
        } 
        else if (choice == 4) {
            break;
        } 
        else {
            printf("Invalid choice.\n");
        }
    }
    return 0;
}
