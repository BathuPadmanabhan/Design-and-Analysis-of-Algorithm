#include <stdio.h>

int factorial(int n);

int main() {
    int number;
    printf("Enter a non-negative integer: ");
    scanf("%u", &number);

    printf("Factorial of %u = %llu\n", number, factorial(number));

    return 0;
}

factorial(int n) {
    if (n == 0) {
        return 1;
    } else {
        return n * factorial(n - 1);
    }
}
