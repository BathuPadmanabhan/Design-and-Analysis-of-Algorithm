#include <stdio.h>

int power(int base, int exponent);
int isArmstrong(int num);

int main() {
    int number;

    printf("Enter a number: ");
    scanf("%d", &number);

    if (isArmstrong(number))
        printf("%d is an Armstrong number.\n");
    else
        printf("%d is not an Armstrong number.\n");

    return 0;
}

int power(int base, int exponent) {
    if (exponent == 0)
        return 1;
    return base * power(base, exponent - 1);
}

int isArmstrong(int num) {
    int originalNum, remainder, result = 0, n = 0;

    originalNum = num;

    // store the number of digits
    while (originalNum != 0) {
        originalNum /= 10;
        ++n;
    }

    originalNum = num;

    // check if the number is Armstrong
    while (originalNum != 0) {
        remainder = originalNum % 10;
        result += power(remainder, n);
        originalNum /= 10;
    }

    if (result == num)
        return 1;
    else
        return 0;
}
