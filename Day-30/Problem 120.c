#include <stdio.h>
#include <string.h>

#define MAX_STUDENTS 50
#define NAME_LENGTH 30

void addStudent(char names[MAX_STUDENTS][NAME_LENGTH], int marks[], char grades[], int *count);
void displayStudents(char names[MAX_STUDENTS][NAME_LENGTH], int marks[], char grades[], int count);
void calculateStatistics(int marks[], int count);
char determineGrade(int score);

int main() {
    char studentNames[MAX_STUDENTS][NAME_LENGTH];
    int studentMarks[MAX_STUDENTS];
    char studentGrades[MAX_STUDENTS];
    int studentCount = 0;
    int choice;

    do {
        printf("\n=== STUDENT DATABASE SYSTEM ===\n");
        printf("1. Add Student\n");
        printf("2. Display All Students\n");
        printf("3. View Class Statistics\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        getchar();

        switch (choice) {
            case 1:
                addStudent(studentNames, studentMarks, studentGrades, &studentCount);
                break;
            case 2:
                displayStudents(studentNames, studentMarks, studentGrades, studentCount);
                break;
            case 3:
                calculateStatistics(studentMarks, studentCount);
                break;
            case 4:
                printf("Exiting system.\n");
                break;
            default:
                printf("Invalid choice. Try again.\n");
        }
    } while (choice != 4);

    return 0;
}

char determineGrade(int score) {
    if (score >= 90) return 'A';
    if (score >= 80) return 'B';
    if (score >= 70) return 'C';
    if (score >= 60) return 'D';
    return 'F';
}

void addStudent(char names[MAX_STUDENTS][NAME_LENGTH], int marks[], char grades[], int *count) {
    if (*count >= MAX_STUDENTS) {
        printf("Database is full.\n");
        return;
    }

    printf("Enter student name: ");
    fgets(names[*count], NAME_LENGTH, stdin);
    names[*count][strcspn(names[*count], "\n")] = '\0';

    do {
        printf("Enter score (0-100): ");
        scanf("%d", &marks[*count]);
    } while (marks[*count] < 0 || marks[*count] > 100);

    grades[*count] = determineGrade(marks[*count]);
    (*count)++;
    printf("Student added successfully.\n");
}

void displayStudents(char names[MAX_STUDENTS][NAME_LENGTH], int marks[], char grades[], int count) {
    if (count == 0) {
        printf("No records found.\n");
        return;
    }

    printf("\n%-20s %-10s %-5s\n", "Name", "Score", "Grade");
    printf("---------------------------------------\n");
    for (int i = 0; i < count; i++) {
        printf("%-20s %-10d %-5c\n", names[i], marks[i], grades[i]);
    }
}

void calculateStatistics(int marks[], int count) {
    if (count == 0) {
        printf("No data available to calculate statistics.\n");
        return;
    }

    int total = 0;
    int highest = marks[0];
    int lowest = marks[0];

    for (int i = 0; i < count; i++) {
        total += marks[i];
        if (marks[i] > highest) highest = marks[i];
        if (marks[i] < lowest) lowest = marks[i];
    }

    double average = (double)total / count;

    printf("\n=== CLASS STATISTICS ===\n");
    printf("Total Students: %d\n", count);
    printf("Class Average:  %.2f\n", average);
    printf("Highest Score:  %d\n", highest);
    printf("Lowest Score:   %d\n", lowest);
}
