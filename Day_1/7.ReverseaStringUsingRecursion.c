#include <stdio.h>

void reverseString(char str[]) {
    if (str[0] == '\0') {
        return;
    }
    reverseString(&str[1]);
    printf("%c", str[0]);
}

int main() {
    char str[] = "Hello, World!";
    reverseString(str);
    return 0;
}
