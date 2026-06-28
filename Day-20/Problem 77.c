#include <stdio.h>

int main() {
    int r1, c1, r2, c2;
    int mat1[10][10], mat2[10][10], result[10][10];

    printf("Enter rows/cols for Matrix 1: ");
    scanf("%d %d", &r1, &c1);
    printf("Enter rows/cols for Matrix 2: ");
    scanf("%d %d", &r2, &c2);

    if (c1 != r2) {
        printf("Error! Matrix multiplication is not possible.\n");
        return 0;
    }

    printf("\nEnter elements of matrix 1:\n");
    for (int i = 0; i < r1; i++)
        for (int j = 0; j < c1; j++) scanf("%d", &mat1[i][j]);

    printf("\nEnter elements of matrix 2:\n");
    for (int i = 0; i < r2; i++)
        for (int j = 0; j < c2; j++) scanf("%d", &mat2[i][j]);

    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c2; j++) {
            result[i][j] = 0;
            for (int k = 0; k < c1; k++) {
                result[i][j] += mat1[i][k] * mat2[k][j];
            }
        }
    }

    printf("\nResultant Matrix:\n");
    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c2; j++) printf("%d\t", result[i][j]);
        printf("\n");
    }
    return 0;
}
