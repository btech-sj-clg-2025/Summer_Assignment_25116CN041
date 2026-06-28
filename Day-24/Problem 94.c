#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* compressString(const char* src) {
    if (src == NULL || src[0] == '\0') {
        char* empty = malloc(1);
        if (empty) empty[0] = '\0';
        return empty;
    }

    int len = strlen(src);
    char* dest = malloc(len * 2 + 1);
    if (!dest) return NULL;

    int writeIdx = 0;
    int i = 0;

    while (i < len) {
        char current = src[i];
        int count = 0;

        while (i < len && src[i] == current) {
            count++;
            i++;
        }

        dest[writeIdx++] = current;
        writeIdx += sprintf(&dest[writeIdx], "%d", count);
    }

    dest[writeIdx] = '\0';
    return dest;
}

int main() {
    char input[] = "AAABBCDDDD";
    char* compressed = compressString(input);

    if (compressed) {
        printf("Original:   %s\n", input);
        printf("Compressed: %s\n", compressed);
        free(compressed);
    }

    return 0;
}
