#include <stdio.h>

void findTriplets(int nums[], int numsSize) {
    for (int i = 0; i < numsSize - 2; i++) {
        for (int j = i + 1; j < numsSize - 1; j++) {
            for (int k = j + 1; k < numsSize; k++) {
                if (nums[i] + nums[j] + nums[k] == 0) {
                    printf("[%d, %d, %d]\n", nums[i], nums[j], nums[k]);
                }
            }
        }
    }
}

int main() {
    int nums[] = {-1, 0, 1, 2, -1, -4};
    int numsSize = sizeof(nums) / sizeof(nums[0]);
    
    findTriplets(nums, numsSize);
    
    return 0;
}
