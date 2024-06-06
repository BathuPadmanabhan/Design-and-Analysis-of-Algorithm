#include <stdio.h>
#include <string.h>

void StringShifts(char *s, int shift[][2], int shiftSize, char *result) {
    int totalShift = 0;
    int len = strlen(s);
    
    for (int i = 0; i < shiftSize; i++) {
        if (shift[i][0] == 0) {
            totalShift -= shift[i][1];
        } else {
            totalShift += shift[i][1];
        }
    }
    
    totalShift %= len;
    if (totalShift < 0) {
        totalShift += len;
    }
    
    strncpy(result, s + len - totalShift, totalShift);
    strncpy(result + totalShift, s, len - totalShift);
    result[len] = '\0';
}

int main() {
    char s[] = "abc";
    int shift[][2] = {{0, 1}, {1, 2}}; //(directioni,amount}
    char result[4]; //upto 100- string
    
    StringShifts(s, shift, 2, result);
    
    printf("Output: %s\n", result);
    
    return 0;
}
