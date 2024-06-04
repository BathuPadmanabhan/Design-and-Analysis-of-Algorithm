#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *convert(char *s, int numRows) {
    if (numRows == 1 || numRows >= strlen(s)) {
        return s;
    }

    int len = strlen(s);
    char *result = (char *)malloc(len + 1);
    int step = 2 * numRows - 2;
    int count = 0;

    for (int i = 0; i < numRows; i++) {
        for (int j = i; j < len; j += step) {
            result[count++] = s[j];
            if (i > 0 && i < numRows - 1 && j + step - 2 * i < len) {
                result[count++] = s[j + step - 2 * i];
            }
        }
    }

    result[len] = '\0';
    return result;
}

int main() {
    char *s = "PAYPALISHIRING";
    int numRows = 3;
    char *result = convert(s, numRows);
    printf("Output: %s\n", result);
    free(result);
    return 0;
}
