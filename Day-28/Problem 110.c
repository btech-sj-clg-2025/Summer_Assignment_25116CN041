#include <stdio.h>

int main() {
    int choice;
    int acc_num = 0;
    char name[50] = "";
    double balance = 0.0;
    double amount = 0.0;
    int created = 0;

    do {
        printf("\n1.Create 2.Deposit 3.Withdraw 4.Balance 5.Exit\nChoice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                if (created == 1) {
                    printf("Account already exists.\n");
                    break;
                }
                printf("Enter ID: ");
                scanf("%d", &acc_num);
                printf("Enter Name: ");
                scanf("%s", name);
                printf("Initial Deposit: ");
                scanf("%lf", &balance);
                created = 1;
                printf("Account created successfully.\n");
                break;

            case 2:
                if (created == 0) {
                    printf("Create an account first.\n");
                    break;
                }
                printf("Enter Deposit Amount: ");
                scanf("%lf", &amount);
                if (amount > 0) {
                    balance += amount;
                    printf("Success.\n");
                } else {
                    printf("Invalid amount.\n");
                }
                break;

            case 3:
                if (created == 0) {
                    printf("Create an account first.\n");
                    break;
                }
                printf("Enter Withdrawal Amount: ");
                scanf("%lf", &amount);
                if (amount > 0 && amount <= balance) {
                    balance -= amount;
                    printf("Success.\n");
                } else {
                    printf("Invalid or insufficient funds.\n");
                }
                break;

            case 4:
                if (created == 0) {
                    printf("Create an account first.\n");
                    break;
                }
                printf("\nAccount: %d\nName: %s\nBalance: %.2f\n", acc_num, name, balance);
                break;
        }
    } while (choice != 5);

    return 0;
}
