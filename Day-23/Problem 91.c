#include <stdio.h>
#include <string.h>

int check_anagram(const char *str1, const char *str2) {
    if (strlen(str1) != strlen(str2)) {
        return 0;
    }
    
    int count[256] = {0};
    
    for (int i = 0; str1[i] != '\0'; i++) {
        count[(unsigned char)str1[i]]++;
        count[(unsigned char)str2[i]]--;
    }
    
    for (int i = 0; i < 256; i++) {
        if (count[i] != 0) {
            return 0;
        }
    }
    
    return 1;
}

int main() {
    char s1[100];
    char s2[100];
    
    printf("Enter first string: ");
    scanf("%99s", s1);
    
    printf("Enter second string: ");
    scanf("%99s", s2);
    
    if (check_anagram(s1, s2)) {
        printf("The strings are anagrams.\n");
    } else {
        printf("The strings are not anagrams.\n");
    }
    
    return 0;
}
