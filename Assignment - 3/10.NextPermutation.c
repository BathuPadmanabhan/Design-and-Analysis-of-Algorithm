#include <stdio.h>
#include <stdlib.h>

void nextPermutation(int* nums, int numsSize) {
    int i = numsSize - 2;
    while (i >= 0 && nums[i + 1] <= nums[i]) {
        i--;
    }
    if (i >= 0) {
        int j = numsSize - 1;
        while (j >= 0 && nums[j] <= nums[i]) {
            j--;
        }
        int temp = nums[i];
        nums[i] = nums[j];
        nums[j] = temp;
    }
    j = numsSize - 1;
    i++;
    while (i < j) {
        int temp = nums[i];
        nums[i] = nums[j];
        nums[j] = temp;
        i++;
        j--;
    }
}

int main() {
    int arr[] = {1, 2, 3};
    int n = sizeof(arr) / sizeof(arr[0]);

    printf("Original Array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    nextPermutation(arr, n);

    printf("\nNext Permutation: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
