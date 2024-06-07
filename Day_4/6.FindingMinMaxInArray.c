#include <stdio.h>

int main() {
    int arr[] = {4, 7, 2, 9, 1, 5};
    int size = sizeof(arr) / sizeof(arr[0]);
    int min = arr[i];
    int max = arr[i];
    
    for (i = 0; i < size; i++) {
        
        for (int j = i + 1; j < size; j++) {
            if (arr[j] < min) {
                min = arr[j];
            }
            if (arr[j] > max) {
                max = arr[j];
            }
        }
        
        printf("For number %d: Minimum = %d, Maximum = %d\n", arr[i], min, max);
    }
    
    return 0;
}
