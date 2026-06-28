#include <stdio.h>

int main() {
    int rows, cols;
    int matrix[100][100];
    int isSymmetric = 1; 

    printf("Enter the number of rows: ");
    scanf("%d", &rows);
    printf("Enter the number of columns: ");
    scanf("%d", &cols);

\    if (rows != cols) {
        printf("\nThe matrix is NOT symmetric (it must be a square matrix).\n");
        return 0;
    }

\    printf("\nEnter the elements of the matrix (%dx%d):\n", rows, cols);
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("Element [%d][%d]: ", i, j);
            scanf("%d", &matrix[i][j]);
        }
    }

    for (int i = 0; i < rows; i++) {
        for (int j = i + 1; j < cols; j++) {
            if (matrix[i][j] != matrix[j][i]) {
                isSymmetric = 0; 
                break;           
            }
        }
        if (!isSymmetric) {
            break;
        }
    }

    printf("\n--- Result ---\n");
    if (isSymmetric) {
        printf("The matrix is a Symmetric Matrix.\n");
    } else {
        printf("The matrix is NOT a Symmetric Matrix.\n");
    }

    return 0;
}
