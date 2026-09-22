#include <stdio.h>
#include <string.h>

void longestCommonPrefix(char strs[][20], int n, char result[]) {
    strcpy(result, strs[0]);

    for (int i = 1; i < n; i++) {
        int j = 0;

        while (result[j] != '\0' &&
               strs[i][j] != '\0' &&
               result[j] == strs[i][j]) {
            j++;
        }

        result[j] = '\0';
    }
}

int main() {
    char strs[3][20] = {
        "flower",
        "flow",
        "flight"
    };

    char result[20];

    longestCommonPrefix(strs, 3, result);

    printf("%s\n", result);

    return 0;
}