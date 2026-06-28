#include <stdio.h>

int main() {
    int pin = 1234, entered, choice, attempts = 0;
    double balance = 5000.0, amount;

    while (attempts < 3) {
        printf("Enter PIN: ");
        scanf("%d", &entered);
        if (entered == pin) break;
        printf("Wrong. Remaining: %d\n", 3 - ++attempts);
    }

    if (attempts == 3) {
        printf("Card blocked.\n");
        return 0;
    }

    do {
        printf("\n1.Balance\n2.Deposit\n3.Withdraw\n4.Exit\nChoice: ");
        scanf("%d", &choice);

        if (choice == 1) {
            printf("Balance: $%.2f\n", balance);
        } else if (choice == 2) {
            printf("Amount: ");
            scanf("%lf", &amount);
            if (amount > 0) balance += amount;
        } else if (choice == 3) {
            printf("Amount: ");
            scanf("%lf", &amount);
            if (amount > 0 && amount <= balance) balance -= amount;
            else printf("Invalid or insufficient funds.\n");
        }
    } while (choice != 4);

    return 0;
}
