#include <stdio.h>

int main() {
    int n, i, j;
    int principal_sum = 0, secondary_sum = 0;
    int matrix[10][10];

    printf("Enter the size of the square matrix (e.g., 3 for 3x3): ");
    scanf("%d", &n);

    printf("Enter the elements of the matrix:\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            printf("Element [%d][%d]: ", i, j);
            scanf("%d", &matrix[i][j]);
        }
    }

    for (i = 0; i < n; i++) {
        principal_sum += matrix[i][i];            
        secondary_sum += matrix[i][n - i - 1];    
    }

    printf("\n--- Result ---\n");
    printf("Sum of Principal Diagonal: %d\n", principal_sum);
    printf("Sum of Secondary Diagonal: %d\n", secondary_sum);

    return 0;
}
