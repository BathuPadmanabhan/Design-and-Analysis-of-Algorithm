#include <stdio.h>

int masterTheorem(int a, int b, int k, int n) {
    if (n == 0) {
        return 1;
    } else {
        return a * masterTheorem(a, b, k, n / b) + k * n;
    }
}

int main() {
    int a = 2; // Coefficient of recursive calls
    int b = 2; // Factor by which the input size is reduced
    int k = 1; // Extra work done outside the recursive calls
    int n = 8; // Input size

    int result = masterTheorem(a, b, k, n);
    
    printf("Result: %d\n", result);

    return 0;
}
