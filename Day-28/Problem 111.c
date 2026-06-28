#include <stdio.h>
#include <stdlib.h>

int main() {
    int seats[10] = {0};
    int choice;
    int seatNumber;

    while (1) {
        printf("\n1. View Seats\n");
        printf("2. Book a Seat\n");
        printf("3. Exit\n");
        printf("Choice: ");
        scanf("%d", &choice);

        if (choice == 1) {
            printf("\nSeats: ");
            for (int i = 0; i < 10; i++) {
                printf("[%d:%c] ", i + 1, (seats[i] == 0) ? 'O' : 'X');
            }
            printf("\n(O = Empty, X = Booked)\n");
        } 
        else if (choice == 2) {
            printf("Enter seat number (1-10): ");
            scanf("%d", &seatNumber);

            if (seatNumber < 1 || seatNumber > 10) {
                printf("Invalid seat number.\n");
            } 
            else if (seats[seatNumber - 1] == 1) {
                printf("Seat already taken.\n");
            } 
            else {
                seats[seatNumber - 1] = 1;
                printf("Seat booked successfully!\n");
            }
        } 
        else if (choice == 3) {
            printf("Goodbye!\n");
            break;
        } 
        else {
            printf("Invalid choice.\n");
        }
    }

    return 0;
}
