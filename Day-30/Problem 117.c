#include <stdio.h>
#include <string.h>

struct Student {
    int id;
    char name[50];
    float gpa;
};

int main() {
    struct Student record[100];
    int count = 0;
    int choice;
    int search_id;
    int found;

    do {
        printf("\n=== STUDENT RECORD SYSTEM ===\n");
        printf("1. Add Student\n");
        printf("2. Display All Students\n");
        printf("3. Search Student by ID\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                if (count >= 100) {
                    printf("Database is full.\n");
                    break;
                }
                printf("Enter Student ID: ");
                scanf("%d", &record[count].id);
                printf("Enter Student Name: ");
                scanf(" %[^\n]s", record[count].name);
                printf("Enter Student GPA: ");
                scanf("%f", &record[count].gpa);
                count++;
                printf("Record added successfully.\n");
                break;

            case 2:
                if (count == 0) {
                    printf("No records found.\n");
                    break;
                }
                printf("\n%-10s %-30s %-5s\n", "ID", "Name", "GPA");
                printf("---------------------------------------------\n");
                for (int i = 0; i < count; i++) {
                    printf("%-10d %-30s %-5.2f\n", record[i].id, record[i].name, record[i].gpa);
                }
                break;

            case 3:
                if (count == 0) {
                    printf("No records found.\n");
                    break;
                }
                printf("Enter Student ID to search: ");
                scanf("%d", &search_id);
                found = 0;
                for (int i = 0; i < count; i++) {
                    if (record[i].id == search_id) {
                        printf("\nRecord Found:\n");
                        printf("ID: %d\n", record[i].id);
                        printf("Name: %s\n", record[i].name);
                        printf("GPA: %.2f\n", record[i].gpa);
                        found = 1;
                        break;
                    }
                }
                if (!found) {
                    printf("Student with ID %d not found.\n", search_id);
                }
                break;

            case 4:
                printf("Exiting program.\n");
                break;

            default:
                printf("Invalid choice. Try again.\n");
        }
    } while (choice != 4);

    return 0;
}
