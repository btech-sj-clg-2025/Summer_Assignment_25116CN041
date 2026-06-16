#include <stdio.h>

void findMaxFrequencyElement(int arr[], int size) {
    int maxElement = arr[0];
    int maxCount = 0;

    for (int i = 0; i < size; i++) {
        int count = 0;
        
        for (int j = 0; j < size; j++) {
            if (arr[i] == arr[j]) {
                count++;
            }
        }
        
        if (count > maxCount) {
            maxCount = count;
            maxElement = arr[i];
        }
    }

    printf("Element with maximum frequency: %d\n", maxElement);
    printf("Frequency: %d times\n", maxCount);
}

int main() {
    int arr[] = {1, 3, 2, 1, 4, 1, 3, 1, 5, 3};
    int size = sizeof(arr) / sizeof(arr[0]);

    findMaxFrequencyElement(arr, size);

    return 0;
}