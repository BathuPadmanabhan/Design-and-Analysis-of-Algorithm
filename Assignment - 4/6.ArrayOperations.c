#include <stdio.h>

void applyOperations(int nums[], int n) {
    for (int i = 0; i < n - 1; i++) {
        if (nums[i] == nums[i + 1]) {
            nums[i] *= 2;
            nums[i + 1] = 0;
        }
    }

    int j = 0;
    for (int i = 0; i < n; i++) {
        if (nums[i] != 0) {
            nums[j++] = nums[i];
        }
    }

    while (j < n) {
        nums[j++] = 0;
    }
}

int main() {
    int nums[] = {1, 2, 2, 1, 1, 0};
    int n = sizeof(nums) / sizeof(nums[0]);

    applyOperations(nums, n);

    printf("Output: [");
    for (int i = 0; i < n; i++) {
        printf("%d", nums[i]);
        if (i < n - 1) {
            printf(",");
        }
    }
    printf("]\n");

    return 0;
}
