#include <stdio.h>
#include <string.h>

#define MAX 100

struct Employee {
    int id;
    char name[50];
    char position[50];
    float salary;
};

struct Employee emp[MAX];
int count = 0;

void addEmployee() {
    if (count >= MAX) {
        printf("\nSystem full!\n");
        return;
    }
    printf("\nEnter ID: ");
    scanf("%d", &emp[count].id);
    getchar();
    printf("Enter Name: ");
    fgets(emp[count].name, sizeof(emp[count].name), stdin);
    emp[count].name[strcspn(emp[count].name, "\n")] = 0;
    printf("Enter Position: ");
    fgets(emp[count].position, sizeof(emp[count].position), stdin);
    emp[count].position[strcspn(emp[count].position, "\n")] = 0;
    printf("Enter Salary: ");
    scanf("%f", &emp[count].salary);
    count++;
    printf("\nEmployee added successfully!\n");
}

void listEmployees() {
    if (count == 0) {
        printf("\nNo records found!\n");
        return;
    }
    printf("\nID\tName\t\tPosition\tSalary\n");
    printf("------------------------------------------------\n");
    for (int i = 0; i < count; i++) {
        printf("%d\t%-15s\t%-15s\t%.2f\n", emp[i].id, emp[i].name, emp[i].position, emp[i].salary);
    }
}

void searchEmployee() {
    if (count == 0) {
        printf("\nNo records to search!\n");
        return;
    }
    int id, found = 0;
    printf("\nEnter Employee ID to search: ");
    scanf("%d", &id);
    for (int i = 0; i < count; i++) {
        if (emp[i].id == id) {
            printf("\nRecord Found:\n");
            printf("ID: %d\nName: %s\nPosition: %s\nSalary: %.2f\n", emp[i].id, emp[i].name, emp[i].position, emp[i].salary);
            found = 1;
            break;
        }
    }
    if (!found) {
        printf("\nEmployee with ID %d not found.\n", id);
    }
}

void deleteEmployee() {
    if (count == 0) {
        printf("\nNo records to delete!\n");
        return;
    }
    int id, found = 0;
    printf("\nEnter Employee ID to delete: ");
    scanf("%d", &id);
    for (int i = 0; i < count; i++) {
        if (emp[i].id == id) {
            for (int j = i; j < count - 1; j++) {
                emp[j] = emp[j + 1];
            }
            count--;
            found = 1;
            printf("\nRecord deleted successfully!\n");
            break;
        }
    }
    if (!found) {
        printf("\nEmployee with ID %d not found.\n", id);
    }
}

int main() {
    int choice;
    while (1) {
        printf("\n--- Mini Employee Management System ---\n");
        printf("1. Add Employee\n");
        printf("2. List Employees\n");
        printf("3. Search Employee\n");
        printf("4. Delete Employee\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        switch (choice) {
            case 1: addEmployee(); break;
            case 2: listEmployees(); break;
            case 3: searchEmployee(); break;
            case 4: deleteEmployee(); break;
            case 5: return 0;
            default: printf("\nInvalid choice! Try again.\n");
        }
    }
    return 0;
}
