#include <stdio.h>

struct Employee {
    int id;
    char name[50];
    float basic;
    float allowance;
    float deduction;
    float net_salary;
};

int main() {
    int total;
    struct Employee emp[100];

    printf("Enter number of employees: ");
    scanf("%d", &total);

    for (int i = 0; i < total; i++) {
        printf("\nEnter Details for Employee %d\n", i + 1);
        printf("ID: ");
        scanf("%d", &emp[i].id);
        printf("Name: ");
        scanf("%s", emp[i].name);
        printf("Basic Salary: ");
        scanf("%f", &emp[i].basic);

        emp[i].allowance = emp[i].basic * 0.20;
        emp[i].deduction = emp[i].basic * 0.10;
        emp[i].net_salary = emp[i].basic + emp[i].allowance - emp[i].deduction;
    }

    printf("\n--- Salary Report ---\n");
    for (int i = 0; i < total; i++) {
        printf("ID: %d | Name: %s | Net Salary: %.2f\n", 
               emp[i].id, emp[i].name, emp[i].net_salary);
    }

    return 0;
}
