#include <stdio.h>

int main() {
    int students, roll_no;
    char name;
    float sub1, sub2, total, percentage;

    printf("Enter number of students: ");
    scanf("%d", &students);

    for (int i = 0; i < students; i++) {
        printf("\nEnter Roll Number: ");
        scanf("%d", &roll_no);
        printf("Enter First Name: ");
        scanf("%s", name);
        printf("Enter Mark 1: ");
        scanf("%f", &sub1);
        printf("Enter Mark 2: ");
        scanf("%f", &sub2);

        total = sub1 + sub2;
        percentage = total / 2.0;

        printf("\n--- Marksheet for %s ---\n", name);
        printf("Roll Number: %d\n", roll_no);
        printf("Total Score: %.1f / 200\n", total);
        printf("Percentage: %.2f%%\n", percentage);
        
        if (percentage >= 50.0) {
            printf("Result: PASSED\n");
        } else {
            printf("Result: FAILED\n");
        }
        printf("------------------------\n");
    }

    return 0;
}
