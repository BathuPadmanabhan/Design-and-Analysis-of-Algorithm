#include <stdio.h>

int minOperationsToSort(int* nums, int numsSize) {
    int operations = 0;
    for (int i = 0; i < numsSize; i++) {
        if (nums[i] != 0 && nums[i] != i) {
            int temp = nums[i];
            nums[i] = 0;
            nums[0] = temp;
            operations++;
        }
    }
    return operations;
}

int main() {
    int nums[] = {4, 2, 0, 3, 1};
    int numsSize = sizeof(nums) / sizeof(nums[0]);
    int minOperations = minOperationsToSort(nums, numsSize);
    printf("Minimum number of operations needed to sort nums: %d\n", minOperations);
    return 0;
}
