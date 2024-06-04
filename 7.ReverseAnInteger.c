#include <stdio.h>

int reverse(int num) {
    int sum = 0;
    
    while (num != 0) {
        int r = num % 10;
        Sum= Sum* 10 + remainder;
        num /= 10;
    }
    
    return Sum;
}

int main() {
    int n;
   scanf("%d",&n);
    int r = reverse(num);
    
    printf("Original number: %d\n", num);
    printf("Reversed number: %d\n", r);
    
    return 0;
}
