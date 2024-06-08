#include <stdio.h>

void nextGreaterElement(int* nums, int numsSize, int* answer) {
    for (int i = 0; i < numsSize; i++) {
        int secondGreater = -1;
        for (int j = i + 1; j < numsSize; j++) {
            if (nums[j] > nums[i]) {
                secondGreater = nums[j];
                break;
            }
        }
        answer[i] = secondGreater;
    }
}

int main() {
    int nums[] = {2, 4, 0, 9, 6};
    int numsSize = sizeof(nums) / sizeof(nums[0]);
    int answer[numsSize];

    nextGreaterElement(nums, numsSize, answer);

    printf("Output: [");
    for (int i = 0; i < numsSize; i++) {
        printf("%d", answer[i]);
        if (i < numsSize - 1) {
            printf(",");
        }
    }
    printf("]\n");

    return 0;
}
