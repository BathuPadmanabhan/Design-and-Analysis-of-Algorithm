#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *convert(char *s, int numRows) {
    if (numRows == 1) return s;

    int len = strlen(s);
    char *rows[numRows];
    for (int i = 0; i < numRows; i++) {
        rows[i] = (char *)malloc(len * sizeof(char));
        rows[i][0] = '\0';
    }

    int row = 0, step = 1;
    for (int i = 0; i < len; i++) {
        rows[row] = strcat(rows[row], &s[i]);
        if (row == 0) step = 1;
        if (row == numRows - 1) step = -1;
        row += step;
    }

    char *result = (char *)malloc((len + 1) * sizeof(char));
    result[0] = '\0';
    for (int i = 0; i < numRows; i++) {
        result = strcat(result, rows[i]);
    }

    return result;
}

int main() {
    char *input = "PAYPALISHIRING";
    int numRows = 3;
    char *output = convert(input, numRows);
    printf("%s", output);

    return 0;
}
