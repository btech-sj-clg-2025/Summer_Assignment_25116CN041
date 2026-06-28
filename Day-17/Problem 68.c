#include <stdio.h>

int main() {
    int arr1[] = {4, 2, 9, 6, 2, 3, 8};
    int arr2[] = {2, 6, 11, 3, 2, 14};
    
    int size1 = sizeof(arr1) / sizeof(arr1[0]);
    int size2 = sizeof(arr2) / sizeof(arr2[0]);
    
    int visited[100];
    int k = 0;
    
    printf("Common elements are: ");
    
    for (int i = 0; i < size1; i++) {
        for (int j = 0; j < size2; j++) {
            if (arr1[i] == arr2[j]) {
                int alreadyPrinted = 0;
                
                for (int x = 0; x < k; x++) {
                    if (arr1[i] == visited[x]) {
                        alreadyPrinted = 1;
                        break;
                    }
                }
                
                if (!alreadyPrinted) {
                    printf("%d ", arr1[i]);
                    visited[k] = arr1[i];
                    k++;
                }
                break;
            }
        }
    }
    
    printf("\n");
    return 0;
}
