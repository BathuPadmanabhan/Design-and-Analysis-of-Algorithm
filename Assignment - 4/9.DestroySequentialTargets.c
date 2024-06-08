#include <stdio.h>

int destroySequentialTargets(int nums[], int numsSize, int space) {
    int maxTargets = 0;
    int minSeed = nums[0];

    for (int i = 0; i < numsSize; i++) {
        int currentTargets = 1;
        int currentSeed = nums[i];

        for (int j = i + 1; j < numsSize; j++) {
            if ((nums[j] - currentSeed) % space == 0) {
                currentTargets++;
                currentSeed = nums[j];
            }
        }

        if (currentTargets > maxTargets || (currentTargets == maxTargets && nums[i] < minSeed)) {
            maxTargets = currentTargets;
            minSeed = nums[i];
        }
    }

    return minSeed;
}

int main() {
    int nums[] = {3, 7, 8, 1, 1, 5};
    int space = 2;
    int numsSize = sizeof(nums) / sizeof(nums[0]);

    int result = destroySequentialTargets(nums, numsSize, space);
    printf("Minimum value to destroy maximum targets: %d\n", result);

    return 0;
}
