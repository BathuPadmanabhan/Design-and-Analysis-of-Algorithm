#include <stdio.h>

int main() {
    int arr[] = {10, 20, 4, 45, 99};
    int n = sizeof(arr) / sizeof(arr[0]);
    int max = arr[0];

    for (int i = 1; i < n; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }

    printf("The largest number in the array is: %d", max);
    
    return 0;
}
