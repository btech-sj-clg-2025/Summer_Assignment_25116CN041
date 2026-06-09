#include <stdio.h>

int main() {
    int rows, i, j, space;

    printf("Enter the number of rows: ");
    scanf("%d", &rows);

    for (i = 1; i <= rows; i++) {
        char ch ='A';
        for (space = 1; space <= rows - i; space++) {
            printf(" ");
        }
        for (j = 1; j <= i; j++) {
            printf("%c",'A' + j - 1);
            ch++;
        } 
        for (j = i - 1; j >= 1; j--) {
            printf("%c",'A' + j - 1);
            ch++;
        }
        printf("\n");
    }
    return 0;
}
