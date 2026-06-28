#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char text[1000];
    char longest[1000] = "";
    char current[1000];
    int max_len = 0;
    int cur_len = 0;
    int i = 0;

    if (fgets(text, sizeof(text), stdin) == NULL) {
        return 1;
    }

    while (text[i] != '\0') {
        if (isalnum(text[i]) || text[i] == '-' || text[i] == '\'') {
            current[cur_len] = text[i];
            cur_len++;
        } else {
            if (cur_len > max_len) {
                max_len = cur_len;
                current[cur_len] = '\0';
                strcpy(longest, current);
            }
            cur_len = 0;
        }
        i++;
    }

    if (cur_len > max_len) {
        max_len = cur_len;
        current[cur_len] = '\0';
        strcpy(longest, current);
    }

    if (max_len > 0) {
        printf("Longest word: %s\n", longest);
        printf("Length: %d\n", max_len);
    } else {
        printf("No words found.\n");
    }

    return 0;
}
