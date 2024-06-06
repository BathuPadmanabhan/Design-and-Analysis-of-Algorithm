#include <stdio.h>

int maxDiff(int num) {
    int a = 0, b = 0, pow = 1;
    int temp = num;

    for (int i = 0; temp > 0; i++) {
        int digit = temp % 10;
        temp /= 10;

        if (digit != 9 && (i > 0 || digit != 1)) {
            a = a * 10 + 9;
        } else {
            a = a * 10 + digit;
        }

        if (digit != 1) {
            b = b * 10 + 1;
        } else {
            b = b * 10 + digit;
        }
    }

    return a - b;
}

int main() {
    int num = 555;
    printf("Output: %d\n", maxDiff(num));
    return 0;
}
