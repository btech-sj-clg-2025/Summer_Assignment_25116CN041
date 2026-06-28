#include <stdio.h>

int main() {
    int matrix[10][10];
    int rows, cols, i, j, rowSum;

    printf("Enter the number of rows and columns (max 10): ");
    scanf("%d %d", &rows, &cols);

    printf("Enter elements of the matrix:\n");
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            printf("Element [%d][%d]: ", i, j);
            scanf("%d", &matrix[i][j]);
        }
    }

    printf("\n--- Row-wise Sums ---\n");
    for (i = 0; i < rows; i++) {
        rowSum = 0; 
        for (j = 0; j < cols; j++) {
            rowSum += matrix[i][j]; 
        }
        printf("Sum of Row %d = %d\n", i + 1, rowSum);
    }

    return 0;
}
