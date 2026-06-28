#include <stdio.h>
#include <string.h>

#define MAX_CHARS 256

char getMaxOccurringChar(const char *str) {
    int freq[MAX_CHARS] = {0};
    int maxCount = 0;
    char maxChar = ' ';

    for (int i = 0; str[i] != '\0'; i++) {
        freq[(unsigned char)str[i]]++;
    }

    for (int i = 0; str[i] != '\0'; i++) {
        if (freq[(unsigned char)str[i]] > maxCount) {
            maxCount = freq[(unsigned char)str[i]];
            maxChar = str[i];
        }
    }

    return maxChar;
}

int main() {
    char str[100];

    printf("Enter a string: ");
    if (fgets(str, sizeof(str), stdin) != NULL) {
        str[strcspn(str, "\n")] = '\0';
        
        if (strlen(str) > 0) {
            char maxChar = getMaxOccurringChar(str);
            printf("Maximum occurring character: '%c'\n", maxChar);
        } else {
            printf("String is empty.\n");
        }
    }

    return 0;
}
