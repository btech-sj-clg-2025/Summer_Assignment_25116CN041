#include <stdio.h>

int binarySearch(int arr[], int size, int target) {
    int low = 0;
    int high = size - 1;

    while (low <= high) {
        int mid = low + (high - low) / 2;

        if (arr[mid] == target) {
            return mid; 
        }

        if (arr[mid] < target) {
            low = mid + 1;
        } 
        else {
            high = mid - 1;
        }
    }

    return -1;
}

int main() {
    int my_array[] = {2, 5, 8, 12, 16, 23, 38, 56, 72, 91};
    int size = sizeof(my_array) / sizeof(my_array[0]);
    int target = 23;

    int result = binarySearch(my_array, size, target);

    if (result != -1) {
        printf("Element %d found at index position: %d\n", target, result);
    } else {
        printf("Element %d is not present in the array.\n", target);
    }

    return 0;
}
