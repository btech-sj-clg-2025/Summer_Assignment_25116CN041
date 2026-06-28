#include <stdio.h>

int isPresent(int element, int result[], int resultSize) {
    for (int i = 0; i < resultSize; i++) {
        if (result[i] == element) {
            return 1;
        }
    }
    return 0; 
}

int main() {
    int arr1[] = {1, 2, 3, 2, 1};
    int arr2[] = {3, 4, 5, 2, 4};
    
    int size1 = sizeof(arr1) / sizeof(arr1[0]);
    int size2 = sizeof(arr2) / sizeof(arr2[0]);
    
    int unionArr[size1 + size2];
    int unionSize = 0;

    for (int i = 0; i < size1; i++) {
        if (!isPresent(arr1[i], unionArr, unionSize)) {
            unionArr[unionSize] = arr1[i];
            unionSize++;
        }
    }

    for (int i = 0; i < size2; i++) {
        if (!isPresent(arr2[i], unionArr, unionSize)) {
            unionArr[unionSize] = arr2[i];
            unionSize++;
        }
    }

    printf("Union of the two arrays is: ");
    for (int i = 0; i < unionSize; i++) {
        printf("%d ", unionArr[i]);
    }
    printf("\n");

    return 0;
}
