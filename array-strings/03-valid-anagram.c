#include <stdio.h>
#include <stdbool.h>

bool isAnagram(char s[], char t[]) {
    int count[26] = {0};

    for (int i = 0; s[i] != '\0'; i++) {
        count[s[i] - 'a']++;
    }

    for (int i = 0; t[i] != '\0'; i++) {
        count[t[i] - 'a']--;
    }

    for (int i = 0; i < 26; i++) {
        if (count[i] != 0) {
            return false;
        }
    }

    return true;
}

int main() {
    char s[] = "anagram";
    char t[] = "nagaram";

    if (isAnagram(s, t)) {
        printf("true\n");
    } else {
        printf("false\n");
    }

    return 0;
}