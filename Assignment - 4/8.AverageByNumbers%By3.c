#include <stdio.h>

int main() {
    int nums[] = {1, 3, 6, 10, 12, 15};
    int sum = 0, count = 0;

    for (int i = 0; i < sizeof(nums) / sizeof(nums[0]); i++) {
        if (nums[i] % 2 == 0 && nums[i] % 3 == 0) {
            sum += nums[i];
            count++;
        }
    }

    int average = sum / count;

    printf("Average Value: %d\n", average);

    return 0;
}
