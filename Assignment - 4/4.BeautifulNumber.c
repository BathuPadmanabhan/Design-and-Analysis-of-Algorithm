#include <stdio.h>

int minAddToMakeBeautiful(int n, int target) {
    int sum = 0;
    while (1) {
        int temp = n;
        sum = 0;
        while (temp > 0) {
            sum += temp % 10;
            temp /= 10;
        }
        if (sum <= target) {
            break;
        }
        n++;
    }
    return n - n;
}

int main() {
    int n = 16;
    int target = 6;
    printf("Output: %d\n", minAddToMakeBeautiful(n, target));
    return 0;
}
