#include <stdio.h>

void remove_duplicates(char *str) {
    int hash[256] = {0};
    int current_index = 0;
    int unique_index = 0;

    while (str[current_index] != '\0') {
        unsigned char temp = str[current_index];
        if (hash[temp] == 0) {
            hash[temp] = 1;
            str[unique_index] = str[current_index];
            unique_index++;
        }
        current_index++;
    }
    str[unique_index] = '\0';
}

int main() {
    char str[100];
    
    printf("Enter a string: ");
    if (fgets(str, sizeof(str), stdin)) {
        int i = 0;
        while (str[i] != '\0') {
            if (str[i] == '\n') {
                str[i] = '\0';
                break;
            }
            i++;
        }
        
        remove_duplicates(str);
        printf("Result: %s\n", str);
    }
    
    return 0;
}
