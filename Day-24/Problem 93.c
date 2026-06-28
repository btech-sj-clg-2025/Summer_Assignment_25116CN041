#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>

bool is_rotation(const char *s1, const char *s2) {
    int len1 = strlen(s1);
    int len2 = strlen(s2);

    if (len1 != len2) {
        return false;
    }

    char *temp = malloc(sizeof(char) * (len1 * 2 + 1));
    if (temp == NULL) {
        return false;
    }

    strcpy(temp, s1);
    strcat(temp, s1);

    bool result = (strstr(temp, s2) != NULL);

    free(temp);
    return result;
}

int main() {
    char str1[] = "ABCD";
    char str2[] = "CDAB";

    if (is_rotation(str1, str2)) {
        printf("Yes\n");
    } else {
        printf("No\n");
    }

    return 0;
}
