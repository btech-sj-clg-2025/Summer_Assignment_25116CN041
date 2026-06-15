#include <stdio.h>

void moveZeroesToEnd(int arr[], int n) {
    int count = 0; 

    for (int i = 0; i < n; i++) {
        if (arr[i] != 0) {
            int temp = arr[i];
            arr[i] = arr[count];
            arr[count] = temp;
            
            count++;
        }
    }
}

void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int arr[] = {1, 0, 2, 3, 0, 4, 0, 5};
    int n = sizeof(arr) / sizeof(arr[0]);

    printf("Original array: \n");
    printArray(arr, n);

    moveZeroesToEnd(arr, n);

    printf("Array after moving zeroes to the end: \n");
    printArray(arr, n);

    return 0;
}