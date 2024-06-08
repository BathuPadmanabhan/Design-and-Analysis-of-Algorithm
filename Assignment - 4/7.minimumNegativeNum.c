#include <stdio.h>

int isBeautiful(int num, int target) {
    int sum = 0;
    while (num > 0) {
        sum += num % 10;
        num /= 10;
    }
    return sum <= target;
}

int findBeautifulNumber(int n, int target) {
    int x = 0;
    while (!isBeautiful(n + x, target)) {
        x++;
    }
    return x;
}

int main() {
    int n = 16;
    int target = 6;
    int result = findBeautifulNumber(n, target);
    printf("Output: %d\n", result);
    return 0;
}
