#include <stdio.h>

int isPrime(int num, int i) {
    if (i == 1) {
        return 1;
    } else {
        if (num % i == 0) {
            return 0;
        } else {
            return isPrime(num, i - 1);
        }
    }
}

void generatePrimes(int n, int i) {
    if (i <= n) {
        if (isPrime(i, i / 2)) {
            printf("%d is a prime number.\n", i);
        }
        generatePrimes(n, i + 1);
    }
}

int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    printf("Prime numbers up to %d are:\n", n);
    generatePrimes(n, 2);
    return 0;
}
