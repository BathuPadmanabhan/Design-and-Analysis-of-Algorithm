#include <stdio.h>

void factors(int n) {
     int i;
    printf("Factors of %d are: ", n);
    for (i = 1; i <= n; ++i) {
        if (n % i == 0) {
            printf("%d ", i);
        }
    }
}

int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    factors(n);
    return 0;
}
