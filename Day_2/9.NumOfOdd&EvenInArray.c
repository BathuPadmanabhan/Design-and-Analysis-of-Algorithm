#include <stdio.h>

void separateOddEven(int nums[], int size) {
    int left = 0, right = size - 1;

    while (left < right) {
        while (nums[left] % 2 == 0 && left < right)
            left++;

        while (nums[right] % 2 == 1 && left < right)
            right--;

        if (left < right) {
            int temp = nums[left];
            nums[left] = nums[right];
            nums[right] = temp;
            left++;
            right--;
        }
    }
}

int main() {
    int nums[] = {12, 34, 45, 9, 8, 90, 3};
    int size = sizeof(nums) / sizeof(nums[0]);

    separateOddEven(nums, size);

    printf("Array after separating odd and even numbers: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", nums[i]);
    }

    return 0;
}
